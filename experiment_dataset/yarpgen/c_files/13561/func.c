/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13561
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_20 |= ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_0 [i_0])) >> (((/* implicit */int) arr_0 [i_0]))))));
        var_21 = ((/* implicit */unsigned int) ((((arr_1 [i_0]) > (arr_1 [i_0]))) ? (((/* implicit */int) min((arr_2 [i_0] [i_0]), ((_Bool)1)))) : (min((arr_1 [i_0]), (arr_1 [i_0])))));
    }
    for (unsigned int i_1 = 3; i_1 < 17; i_1 += 1) 
    {
        arr_6 [17LL] = ((/* implicit */_Bool) var_11);
        var_22 = ((/* implicit */long long int) (signed char)70);
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_1 - 3] [i_1 - 3])) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1])))) * (((/* implicit */int) max((arr_5 [i_1 + 1] [(short)17]), (arr_5 [i_1 - 2] [i_1 - 2]))))));
        var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((var_18) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned short)38818)))) : (-1643727532)))) ? (((/* implicit */int) (unsigned short)21224)) : (((/* implicit */int) (unsigned short)44294)))))));
    }
    /* vectorizable */
    for (long long int i_2 = 3; i_2 < 12; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 2) 
            {
                {
                    arr_18 [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_2 - 2])) ? (((/* implicit */int) arr_8 [i_2 - 3])) : (((/* implicit */int) arr_8 [i_2 - 2]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        arr_21 [i_5] [i_3] [12U] [i_5] &= ((/* implicit */_Bool) (+(var_5)));
                        var_24 = ((/* implicit */_Bool) ((signed char) arr_16 [14LL] [i_2] [(_Bool)1] [i_5]));
                        arr_22 [i_4] [i_4] [i_4] &= ((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_4 - 1] [i_2])) ^ (((/* implicit */int) arr_13 [i_4 + 3] [i_2 + 3]))));
                    }
                    for (unsigned long long int i_6 = 4; i_6 < 12; i_6 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) ((_Bool) ((var_19) > (((/* implicit */long long int) -1698232530))))))));
                            arr_29 [i_2] [i_6 - 3] [i_3] [i_3] [i_3] [i_2 + 1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-9)) ? (18014398509481976LL) : (((/* implicit */long long int) 186418347))));
                        }
                        for (int i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            arr_34 [i_3] [i_6 - 2] [i_4] [11LL] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)112))));
                            arr_35 [i_2 + 1] [i_2] [i_3] [i_3] [(unsigned short)12] [i_8] [i_2 + 1] = ((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_30 [i_2] [i_3] [i_4] [i_4] [0LL] [i_4] [i_8]))))) : (((((/* implicit */_Bool) var_17)) ? (arr_15 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_3]) ? (2221640034U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124)))))) ? (((/* implicit */int) arr_24 [i_2] [i_2] [i_2])) : (((/* implicit */int) var_12))));
                            arr_36 [i_2] [i_3] [i_3] [i_6 - 4] [i_8] = ((/* implicit */short) arr_32 [i_3]);
                            var_27 = ((/* implicit */_Bool) var_3);
                        }
                        for (int i_9 = 0; i_9 < 15; i_9 += 1) 
                        {
                            arr_40 [i_2] [i_3] [i_2] [i_6] [i_9] [i_2] [i_3] = ((/* implicit */_Bool) (signed char)42);
                            arr_41 [i_6] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_4 + 3] [i_2 - 1] [i_2] [i_2] [i_2])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65504)))));
                            arr_42 [i_4] &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_38 [(_Bool)1] [i_4 + 2] [(_Bool)1] [i_4] [i_4])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2] [i_3]))))) : (((/* implicit */int) var_16))));
                        }
                        arr_43 [i_2] [(unsigned short)5] [i_3] [i_6] = ((unsigned short) ((signed char) 776259801));
                    }
                    arr_44 [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) var_2);
                    var_28 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)21243)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21243))) : (929467480U)));
                }
            } 
        } 
        arr_45 [i_2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */unsigned long long int) arr_1 [i_2])) : (12629717025822338332ULL)))));
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_50 [12U] = ((/* implicit */signed char) ((long long int) 3747895541U));
        arr_51 [i_10] = ((/* implicit */int) max((max((var_3), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (unsigned short)55587))));
    }
    var_29 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) var_16)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_18))))) ? ((+(549755813887ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) var_10)))))));
    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_19), (((/* implicit */long long int) (_Bool)1))))) ? (min((((/* implicit */long long int) -1034813177)), (5971636243230926636LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_2)))))))) ? (((/* implicit */int) ((var_5) < (var_3)))) : ((+(((/* implicit */int) min((((/* implicit */unsigned short) (signed char)28)), ((unsigned short)17))))))));
}
