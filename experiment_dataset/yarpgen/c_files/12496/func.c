/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12496
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
    var_13 = ((/* implicit */int) var_0);
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_8))) ? (((/* implicit */int) ((_Bool) var_6))) : ((+(((/* implicit */int) var_11))))))) : (((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_3)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */long long int) var_5)))))))))));
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (((~(((unsigned int) var_6)))) >> (((((unsigned int) (signed char)127)) - (115U))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_16 += ((/* implicit */unsigned int) ((((((/* implicit */int) arr_8 [i_0] [i_3])) <= (((((/* implicit */int) arr_2 [i_0] [i_0])) >> (((((/* implicit */int) arr_6 [i_2] [i_0])) - (145))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) var_11)) <= (arr_0 [i_0]))))))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_3]))) : (var_4)))));
                        var_17 = arr_2 [i_0] [i_3];
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            arr_12 [i_4] [(unsigned char)22] = ((/* implicit */long long int) var_10);
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) arr_4 [i_0] [i_3] [i_4])) - (((((/* implicit */_Bool) arr_7 [i_4] [i_3] [i_2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_4]), (arr_8 [19] [19]))))) : ((-(arr_10 [i_1] [i_2]))))))))));
                        }
                        var_19 = ((/* implicit */unsigned short) (-(((((arr_0 [i_2]) + (2147483647))) << (((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3])) - (24)))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        arr_17 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) ((var_1) >> ((((~(((/* implicit */int) arr_8 [i_0] [i_1])))) + (33896))))));
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((((/* implicit */_Bool) (-(arr_3 [i_0] [(_Bool)1])))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_5])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12))))))) != ((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2] [i_5])))))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
                    {
                        arr_21 [i_0] [i_1] [i_1] [i_6] [i_2] [i_2] = ((/* implicit */unsigned int) ((signed char) (+(((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0])))))));
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) : (((int) ((((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_6] [i_1] [i_2])) % (((/* implicit */int) var_7))))))))));
                            arr_25 [i_0] [i_1] [i_1] [i_0] [i_1] &= ((/* implicit */short) (~(((/* implicit */int) min((arr_24 [i_0] [i_1] [(short)10] [(short)8] [i_7]), (arr_24 [i_0] [i_1] [i_2] [i_6] [i_7]))))));
                            var_22 = ((/* implicit */unsigned int) var_8);
                        }
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) (-(((((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */long long int) var_5)))) << (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))) - (63627)))))));
}
