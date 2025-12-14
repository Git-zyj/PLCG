/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160789
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */int) min((var_19), (arr_7 [i_3] [i_3] [i_3 + 3] [i_3 + 2])))) & (((/* implicit */int) ((unsigned short) -163305612)))));
                        /* LoopSeq 2 */
                        for (short i_4 = 4; i_4 < 16; i_4 += 2) /* same iter space */
                        {
                            var_21 -= (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 262143)), (var_13)))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)6)), (-4917620197349009114LL)));
                        }
                        for (short i_5 = 4; i_5 < 16; i_5 += 2) /* same iter space */
                        {
                            var_22 -= ((/* implicit */long long int) min((((int) arr_13 [i_0] [i_1] [i_5] [i_3 + 1] [i_5 - 3] [i_0])), (((((/* implicit */int) arr_13 [i_0] [i_1] [i_5] [i_3 + 4] [i_5] [i_1])) / (((/* implicit */int) arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0]))))));
                            arr_17 [i_2] [i_1] [i_2] [i_3] [i_5 - 2] = ((/* implicit */int) (unsigned short)30970);
                            var_23 = ((/* implicit */long long int) (short)-15886);
                            var_24 = ((/* implicit */unsigned short) var_18);
                        }
                        arr_18 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */int) ((var_12) > (arr_16 [i_3])))) : (((/* implicit */int) arr_3 [i_1] [i_3])))) & (((((/* implicit */_Bool) ((signed char) arr_15 [i_0 - 1] [i_3]))) ? (((/* implicit */int) ((unsigned short) (signed char)-90))) : ((+(((/* implicit */int) (short)-3460))))))));
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((_Bool) (unsigned short)42065)))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        var_26 = ((/* implicit */signed char) var_3);
                        var_27 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_2]) : (arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0])));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned char) (-(14782729123390701766ULL)));
                        var_29 += ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (signed char)8))))));
                    }
                    /* vectorizable */
                    for (signed char i_8 = 2; i_8 < 17; i_8 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_9 = 0; i_9 < 18; i_9 += 1) /* same iter space */
                        {
                            var_30 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_8] [i_8] [i_8 - 1] [i_9])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_18))))) : (arr_10 [i_1] [i_1] [i_2])));
                            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_9 [i_0 - 1]))));
                        }
                        for (long long int i_10 = 0; i_10 < 18; i_10 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned long long int) arr_19 [i_0 - 1] [i_1] [(signed char)7] [(signed char)7]);
                            var_33 -= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                            var_34 += ((/* implicit */unsigned long long int) (((((~(((/* implicit */int) var_11)))) + (2147483647))) << (((arr_29 [i_0 - 1] [i_2] [i_8 - 2] [i_8 - 2] [i_10]) - (1702100398366759786ULL)))));
                        }
                        for (long long int i_11 = 0; i_11 < 18; i_11 += 1) /* same iter space */
                        {
                            var_35 = ((/* implicit */unsigned char) arr_30 [i_0] [i_1] [i_2] [i_11]);
                            arr_37 [i_0] [i_0] [i_1] [i_1] [i_8] [i_11] = (-(11701587110155980561ULL));
                        }
                        var_36 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-39)) ? (((/* implicit */int) arr_25 [i_0 - 1] [i_2] [i_8])) : (((/* implicit */int) var_15))));
                        arr_38 [i_0 - 1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) arr_22 [i_1] [i_1] [i_2] [i_8])))));
                    }
                    var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((((/* implicit */_Bool) (short)7)) || (((/* implicit */_Bool) var_12))))))))))));
                }
            } 
        } 
    } 
    var_38 = (+((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))))));
}
