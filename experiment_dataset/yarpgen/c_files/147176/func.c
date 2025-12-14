/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147176
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) var_7);
                    var_15 = ((/* implicit */int) var_9);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        arr_11 [(signed char)8] [(signed char)8] [(signed char)4] = ((/* implicit */short) ((((/* implicit */_Bool) 17785427945632989600ULL)) ? (((/* implicit */long long int) var_3)) : (6969026579963891283LL)));
                        var_16 = ((/* implicit */unsigned char) ((unsigned long long int) -6969026579963891284LL));
                    }
                    for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        arr_14 [(signed char)18] [(signed char)18] [(signed char)18] [i_4] [(unsigned short)8] = ((/* implicit */unsigned char) var_1);
                        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) arr_5 [i_4] [16U] [i_2]))));
                        arr_15 [i_0] [i_0] [i_4] [12] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)48287)), ((~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [(short)15] [(signed char)0] [i_4]))))))) || (((/* implicit */_Bool) ((int) min((6969026579963891293LL), (((/* implicit */long long int) (unsigned short)48676))))))));
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        var_18 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((6969026579963891298LL), (((/* implicit */long long int) -1350011805))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(signed char)0] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) (unsigned short)15892)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (17333308192410456746ULL)))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_18 [i_0] [i_0]) <= (min((((/* implicit */unsigned int) (unsigned char)86)), (var_3)))))))));
                        var_19 = ((/* implicit */unsigned char) ((short) min((((/* implicit */unsigned long long int) arr_16 [i_2] [i_2] [i_1 - 2] [i_1 - 2] [i_1])), (min((var_1), (((/* implicit */unsigned long long int) (_Bool)1)))))));
                    }
                    for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((arr_19 [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_6] [i_6]) | (((/* implicit */unsigned long long int) -4931868023633587612LL)))) ^ (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)180)) ? (((/* implicit */int) (signed char)124)) : (((/* implicit */int) (signed char)(-127 - 1))))))))))));
                        arr_23 [(signed char)19] [(short)6] [i_1] [8LL] = ((/* implicit */int) 6969026579963891304LL);
                    }
                    for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_0)), (arr_18 [i_1 - 1] [i_2])))) / (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)38201))))) ? (((/* implicit */unsigned long long int) (-(134217727U)))) : (arr_22 [i_2] [i_1 + 1])))));
                        var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_11), (((/* implicit */short) var_12))))) ? ((~(((/* implicit */int) min((var_11), (((/* implicit */short) arr_6 [i_0] [i_0] [10]))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_12)), ((unsigned short)27334)))) ? (((((/* implicit */_Bool) arr_17 [i_0] [(_Bool)1] [i_2] [i_0])) ? (var_7) : (((/* implicit */int) (unsigned char)253)))) : ((~(var_7)))))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (short)-19979))));
                    }
                }
            } 
        } 
    } 
    var_24 -= ((/* implicit */long long int) var_12);
    var_25 = ((/* implicit */short) ((signed char) (~(((int) (unsigned short)27323)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
    {
        arr_28 [(_Bool)1] [i_8] = (!(((/* implicit */_Bool) arr_26 [i_8])));
        arr_29 [i_8] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_26 [i_8]))));
        arr_30 [i_8] [i_8] = ((/* implicit */unsigned int) (_Bool)1);
        var_26 ^= ((/* implicit */long long int) ((unsigned short) arr_26 [i_8]));
    }
    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */int) (((_Bool)1) ? (498172708U) : (((/* implicit */unsigned int) -1725750155))));
        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3337)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned short)52089))));
    }
}
