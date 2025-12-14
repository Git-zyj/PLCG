/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139847
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */short) ((-572674890956305687LL) ^ (572674890956305686LL)));
                            var_17 = ((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)28))))));
                            /* LoopSeq 1 */
                            for (signed char i_4 = 4; i_4 < 21; i_4 += 1) 
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */int) var_1);
                                arr_17 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_12 [i_4 + 1] [i_4] [i_4 - 1] [i_0 + 3]), (arr_12 [i_4 + 1] [i_0 + 1] [i_4 - 1] [i_0 + 1])))) ? (((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_4 + 1] [i_4 - 2] [i_0 + 1])) ? (2301104313U) : (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) min((arr_12 [i_4 + 1] [i_4] [i_4 - 3] [i_0 - 1]), (arr_12 [i_4 + 2] [i_4] [i_4 - 2] [i_0 + 2]))))));
                                var_18 = ((short) ((int) (_Bool)1));
                            }
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) (-(var_6)));
                /* LoopSeq 3 */
                for (unsigned long long int i_5 = 1; i_5 < 23; i_5 += 3) 
                {
                    var_20 = ((/* implicit */short) ((int) (short)-25171));
                    var_21 = ((/* implicit */unsigned int) min((var_7), (((/* implicit */int) arr_19 [i_1] [i_1] [i_5] [i_1]))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)17))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 1) /* same iter space */
                    {
                        var_23 *= ((((/* implicit */int) arr_19 [(unsigned short)14] [(unsigned short)14] [(unsigned short)14] [(unsigned short)14])) == (((/* implicit */int) arr_19 [16] [i_1] [i_6] [i_1])));
                        var_24 = ((/* implicit */short) arr_6 [i_1] [i_1]);
                        var_25 |= ((/* implicit */_Bool) (+(((var_6) >> (((var_4) - (10502909661504908038ULL)))))));
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_7 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_12 [i_0] [i_1] [i_0] [i_7])))) : (((unsigned long long int) var_11))));
                        var_27 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))));
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 1) /* same iter space */
                    {
                        arr_28 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_1] [i_1] [i_6] [i_8 + 2])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_6 [i_1] [i_1]))))) : (var_14)));
                        var_28 = arr_23 [i_1] [i_1];
                    }
                    for (unsigned long long int i_9 = 1; i_9 < 22; i_9 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_31 [i_9] [i_9 + 2] [i_9] [i_0 - 2]))));
                        var_30 = ((/* implicit */short) ((arr_12 [i_0] [i_1] [i_6] [i_9]) ^ (arr_12 [i_0] [i_0 + 2] [i_0] [i_0 + 1])));
                    }
                    for (unsigned long long int i_10 = 1; i_10 < 22; i_10 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_1] [i_1] [i_10] = ((/* implicit */int) 572674890956305711LL);
                        /* LoopSeq 1 */
                        for (short i_11 = 1; i_11 < 23; i_11 += 1) 
                        {
                            var_31 = ((/* implicit */signed char) ((arr_15 [i_1] [i_10 - 1] [i_11 + 1]) - (((/* implicit */unsigned long long int) var_6))));
                            var_32 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                            var_33 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0 - 1] [i_1] [i_11 + 1] [i_0 - 1]))) == (var_6)));
                            var_34 = ((/* implicit */int) var_3);
                        }
                    }
                }
                /* vectorizable */
                for (unsigned int i_12 = 3; i_12 < 23; i_12 += 1) 
                {
                    arr_39 [i_1] = ((/* implicit */unsigned int) var_0);
                    var_35 = ((/* implicit */signed char) ((unsigned char) var_10));
                }
            }
        } 
    } 
    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(1993862983U)))) ? (min((((((/* implicit */_Bool) var_1)) ? (var_9) : (var_5))), (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) -572674890956305711LL)) ? (((/* implicit */int) (unsigned char)153)) : (-1404969382)))));
    var_37 = ((/* implicit */int) min((((unsigned int) 9550290053456027198ULL)), (2301104306U)));
}
