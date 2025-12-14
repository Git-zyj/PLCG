/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160673
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            arr_15 [i_3] [i_1] [(signed char)6] [i_3] [i_4] = ((/* implicit */int) arr_12 [i_4] [i_3] [11U] [i_1] [i_0]);
                            var_10 = ((/* implicit */unsigned char) var_4);
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */long long int) arr_9 [14ULL] [i_3] [2]);
                        }
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            arr_20 [i_3] [i_3] [i_3] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */_Bool) var_1);
                            arr_21 [i_0] [i_1] [i_1] [i_2] [i_1] [i_3] = (((+(((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))))) + (((/* implicit */int) arr_6 [(signed char)6] [i_3] [i_2])));
                            var_11 = ((/* implicit */unsigned short) arr_18 [i_3]);
                        }
                        for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            arr_24 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1006632960U)) ? (1022813917) : (((/* implicit */int) (_Bool)0))));
                            arr_25 [i_0] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */short) ((long long int) ((((/* implicit */int) var_6)) >> (((var_1) - (579385148U))))));
                            arr_26 [i_0] [i_3] [(unsigned char)20] [i_3] [i_1] = ((/* implicit */long long int) ((short) var_6));
                            var_12 = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_2] [16] [i_6]))))));
                        }
                        for (int i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            var_13 &= ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [i_0])) : (var_8)))))));
                            var_14 = ((/* implicit */unsigned short) ((signed char) ((int) (~(((/* implicit */int) arr_7 [i_3]))))));
                        }
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2]))))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_6 [i_1] [i_2] [13ULL]))));
                    }
                    for (int i_8 = 1; i_8 < 18; i_8 += 2) 
                    {
                        var_16 &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((arr_9 [i_8] [i_2] [i_1]), (((/* implicit */unsigned int) arr_3 [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (arr_22 [i_8] [i_1] [10U] [6])))));
                        arr_33 [i_0] [i_0] [i_0] [i_8] [i_0] = ((/* implicit */int) arr_22 [i_0] [i_8] [i_0] [i_8]);
                        arr_34 [i_0] [i_8] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_19 [i_1] [i_1] [i_2] [i_8 + 4] [i_8] [5U] [i_8])) - (((/* implicit */int) ((_Bool) var_0)))))));
                    }
                    var_17 = ((/* implicit */signed char) var_8);
                    var_18 = ((/* implicit */unsigned char) var_8);
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        var_19 *= ((/* implicit */_Bool) arr_35 [i_0] [i_1] [i_1] [i_2] [i_0] [i_2]);
                        var_20 = ((/* implicit */_Bool) (+(((unsigned long long int) var_0))));
                    }
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((unsigned int) max((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))))))));
}
