/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103411
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_3))));
    var_19 = ((/* implicit */unsigned char) ((((((var_12) + (var_2))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_2)))))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((var_12) >= (((/* implicit */unsigned long long int) var_7))))))))));
    var_20 = ((/* implicit */_Bool) var_8);
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    var_21 += ((/* implicit */unsigned long long int) max((max((((/* implicit */int) arr_1 [i_0])), ((-(((/* implicit */int) (unsigned short)65535)))))), (((((/* implicit */int) (unsigned short)65521)) << (((((/* implicit */int) (short)25767)) - (25755)))))));
                    var_22 = ((/* implicit */short) ((unsigned long long int) arr_4 [i_0] [i_1] [i_2]));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 3) /* same iter space */
                    {
                        var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned int) arr_6 [i_3 - 1] [(_Bool)1] [i_0 + 2]))))) ? (((/* implicit */int) arr_1 [i_3 - 1])) : (((/* implicit */int) min(((unsigned short)5), ((unsigned short)65525))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            var_24 = min((((min((((/* implicit */unsigned long long int) var_1)), (var_11))) * (min((var_6), (((/* implicit */unsigned long long int) var_5)))))), (max((arr_3 [i_3 - 2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */int) (unsigned short)14)) : (((/* implicit */int) (unsigned short)65530))))))));
                            var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) var_15)) * (((/* implicit */int) ((arr_3 [i_4]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))) <= (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0 - 2] [i_0 - 2] [i_2] [i_4] [i_4] [i_4]))) + (((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_13))))))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 21; i_5 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) (+(var_7)))) : (var_2)));
                            var_27 = ((((/* implicit */_Bool) ((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0 - 4] [i_0] [i_0 + 1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? (arr_2 [i_3 - 2] [i_3 + 1]) : (arr_15 [i_2 + 1] [i_2 + 1] [i_1] [i_2 + 1]));
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_1] [i_2])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 - 1] [i_1] [i_0])))));
                        }
                        var_29 -= ((/* implicit */short) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) var_16)), (var_3))) >> (((((/* implicit */int) ((unsigned short) (short)-29339))) - (36194)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) arr_10 [i_0 - 2])))))) : (min((arr_16 [i_0 - 2] [i_2 - 1] [i_0 - 1] [i_2 + 1] [i_1] [i_2] [i_3 - 1]), (((/* implicit */unsigned int) var_5))))));
                    }
                    /* vectorizable */
                    for (signed char i_6 = 3; i_6 < 19; i_6 += 3) /* same iter space */
                    {
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0] [i_2])) >> (((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 - 1]))) : (var_3))) - (25987LL)))));
                        var_31 *= ((arr_5 [i_0 - 4] [i_2 + 1] [i_6 - 3]) & (arr_5 [i_0 - 2] [i_2 - 1] [i_6 - 2]));
                    }
                }
            } 
        } 
    } 
}
