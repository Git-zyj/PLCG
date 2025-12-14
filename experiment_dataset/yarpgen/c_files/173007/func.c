/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173007
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_10 = min((var_0), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_0]))))));
        var_11 = ((/* implicit */int) ((unsigned long long int) ((min((var_5), (((/* implicit */unsigned long long int) arr_2 [i_0])))) != (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_3 [i_0])), (arr_0 [i_0] [i_0])))))));
        arr_4 [i_0] [2] |= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)448)) ? (2147483647) : (2147483647)))));
        var_12 = ((/* implicit */int) min((var_12), (arr_0 [20] [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        arr_9 [i_1] &= ((/* implicit */int) ((unsigned short) 1134907106097364992ULL));
        var_13 ^= ((((/* implicit */_Bool) min((((/* implicit */int) arr_7 [i_1] [i_1])), (2147483647)))) ? (max((2147483619), (((/* implicit */int) arr_6 [i_1] [i_1])))) : (((/* implicit */int) min((arr_7 [i_1] [i_1]), (arr_7 [i_1] [i_1])))));
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 14; i_2 += 4) 
    {
        for (int i_3 = 1; i_3 < 16; i_3 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (short i_4 = 3; i_4 < 16; i_4 += 4) 
                {
                    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) 2147483647)) ? (-2147483647) : (((/* implicit */int) (unsigned short)64318)))), ((+(-2147483647))))))));
                    arr_18 [i_3] [i_3 - 1] [i_2] [i_3] = var_5;
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    arr_21 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_3] [i_3] [i_5] [i_5])) ? (((((-2147483647) + (2147483647))) << (((var_0) - (2480171406933770644ULL))))) : (arr_11 [i_3 + 1])));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-27398)) ? ((+(-268435456))) : (((((/* implicit */_Bool) arr_19 [1ULL] [i_3 - 1] [i_5])) ? (0) : (var_8)))));
                        var_16 = ((/* implicit */int) (~(var_1)));
                    }
                    for (short i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        arr_27 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (2147483647) : (14)));
                        arr_28 [i_3] = ((/* implicit */short) var_3);
                        arr_29 [i_7] [i_3] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (var_4) : (-2147483647)));
                        var_17 = ((/* implicit */int) max((var_17), ((-(((/* implicit */int) arr_14 [i_7]))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        arr_33 [i_2] [i_3] = ((/* implicit */int) (+(((((/* implicit */_Bool) -8)) ? (((/* implicit */unsigned long long int) 33292288)) : (15883339811775468036ULL)))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 24ULL)) ? (((/* implicit */int) (short)2)) : (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_22 [i_2] [i_2])) : (((/* implicit */int) var_9))))));
                        arr_34 [i_2] [16ULL] [i_3] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((0ULL) + (((/* implicit */unsigned long long int) 0))))) ? (2147483627) : (arr_11 [i_2 - 2])));
                        arr_35 [i_2 + 3] [i_3 - 1] [i_5] [i_5] [i_8] [i_3] = (+(((((/* implicit */_Bool) (short)1984)) ? (-2147483647) : (2071461984))));
                        arr_36 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)12466)) == (arr_24 [i_2] [i_2] [i_3] [i_3] [i_5] [i_8])));
                    }
                }
                arr_37 [i_3] [i_3] [i_2] = ((/* implicit */int) arr_32 [i_2] [15ULL]);
            }
        } 
    } 
}
