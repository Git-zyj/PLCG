/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182553
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_1] [i_2 - 2] [i_3] [(unsigned char)14] [i_2] = ((/* implicit */int) (short)0);
                        arr_13 [i_0] [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_4)))) % (var_3)));
                    }
                    for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-24704)) ? (9790544724868170093ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24690)))));
                        arr_16 [(unsigned char)10] [(_Bool)1] [(_Bool)1] [i_2] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0]))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        arr_20 [i_0] [(unsigned short)4] [(unsigned short)4] [i_2] [i_0] = ((/* implicit */int) (short)24713);
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)6)), ((short)-24710)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (short)-24713))))) : (2199023254528LL))))));
                            var_18 = ((/* implicit */long long int) (~((+(((/* implicit */int) ((unsigned char) (unsigned char)66)))))));
                            var_19 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_6]))) : (((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) var_6))))))));
                        }
                        for (signed char i_7 = 0; i_7 < 15; i_7 += 1) 
                        {
                            arr_27 [i_0] [i_1] [i_1] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_26 [i_0] [i_2 + 4] [(short)3] [i_5]))) ? (((/* implicit */int) ((arr_5 [i_2 + 3]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2 - 3])))))) : ((~(((/* implicit */int) arr_24 [i_0] [i_2 + 4] [i_2 - 2] [i_2] [i_2]))))));
                            var_20 *= ((/* implicit */unsigned int) ((unsigned long long int) (-(2199023254533LL))));
                            arr_28 [i_2] [i_2] [i_5] [i_5] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (signed char)99)))) >= (max((2199023254534LL), (((/* implicit */long long int) var_15))))))), ((unsigned short)3)));
                            arr_29 [i_2 + 3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-24741)) : (((/* implicit */int) var_1))))) ? ((+(((/* implicit */int) (short)24713)))) : ((~(((/* implicit */int) (short)24713))))))) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) var_12))));
                        }
                        var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_5])) ? (2199023254509LL) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5] [i_1] [i_0] [i_1] [i_0])))))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (4611686018427387904ULL) : (((/* implicit */unsigned long long int) arr_5 [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_2)))) : (((((((/* implicit */int) (short)13)) <= (((/* implicit */int) arr_10 [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_1])) >= (((/* implicit */int) var_14)))))) : (9790544724868170109ULL)))));
                    }
                    var_22 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 2093187102U)) ? (arr_8 [i_0] [i_1] [i_2] [i_2]) : (((/* implicit */unsigned long long int) 1709447954))));
                    var_23 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) (short)24704)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)173)))))));
                    arr_30 [i_0] [i_0] [i_2] [i_1] |= ((/* implicit */int) ((((/* implicit */int) (short)21854)) == ((~(-900287302)))));
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((615161805) != (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))), (var_2)));
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (signed char i_9 = 4; i_9 < 21; i_9 += 2) 
        {
            {
                var_25 = (unsigned short)3;
                arr_38 [20] [20] [i_8] = ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (signed char)85)) : (((/* implicit */int) (short)-32760)));
            }
        } 
    } 
    var_26 = max((((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_6)), (var_13)))) : (var_11))), (((/* implicit */unsigned long long int) ((signed char) ((var_13) >= (((/* implicit */long long int) 4294967292U)))))));
}
