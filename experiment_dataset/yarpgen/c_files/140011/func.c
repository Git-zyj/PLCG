/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140011
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) var_2);
        var_11 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (arr_1 [i_0]))))))) ? (((/* implicit */unsigned int) var_2)) : (((((/* implicit */_Bool) min((3343709040438993343LL), (((/* implicit */long long int) arr_1 [i_0]))))) ? (arr_0 [i_0 + 1]) : (max((arr_0 [i_0]), (((/* implicit */unsigned int) var_2))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    var_12 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) (signed char)-48))));
                    arr_10 [i_2] [(unsigned short)11] [i_2] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((((~(((/* implicit */int) arr_6 [i_0 + 1] [(_Bool)1])))) + (2147483647))) >> (((((int) (short)-14939)) + (14954))))))));
                    arr_11 [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 1] [(signed char)10] [i_2 - 1]))) < (max((((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)161))))), (((/* implicit */unsigned int) arr_6 [i_0 - 1] [i_2 + 4]))))));
                }
            } 
        } 
        var_13 *= ((/* implicit */signed char) var_1);
    }
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned short) var_5);
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 2) 
                    {
                        var_15 *= ((/* implicit */unsigned int) arr_15 [i_4 + 1] [i_4] [i_5]);
                        var_16 *= ((/* implicit */short) var_3);
                        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(((/* implicit */int) var_3)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            var_18 *= ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) (unsigned short)7)))));
                            var_19 = ((/* implicit */long long int) arr_19 [i_3] [i_3]);
                        }
                        var_20 = ((/* implicit */unsigned short) ((var_10) / (var_10)));
                    }
                    var_21 *= ((/* implicit */unsigned int) (unsigned char)69);
                }
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3] [i_4 + 1]))))) * (((/* implicit */int) ((((/* implicit */long long int) ((int) var_8))) >= (-818209147621057304LL)))))))));
                var_23 *= ((/* implicit */unsigned int) arr_13 [i_3] [i_4]);
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_3] [i_4 + 1] [i_3] [i_4])) ? (((((/* implicit */_Bool) arr_17 [i_3])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */int) (unsigned char)161))))) : (arr_13 [i_4 + 1] [i_4 + 1]))) : (((/* implicit */long long int) arr_16 [i_4 + 1] [i_4 + 1] [i_4 + 1])))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) var_10);
}
