/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114425
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((((var_14) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42259))))) <= (((/* implicit */unsigned long long int) var_7))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) var_15)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (2030677182U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19946)))))))))));
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) var_11))));
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */long long int) var_5))))) : ((+(3396725044015992587ULL)))))) ? (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65024))) / (3396725044015992611ULL))), (((/* implicit */unsigned long long int) ((long long int) 143974450587500544ULL))))) : (((/* implicit */unsigned long long int) (-(var_7)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_9 [7U] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((long long int) (unsigned short)517)))) ? (max((((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_1])), (var_1))) : (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) var_10)) : (var_16))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_3 [i_1] [i_2])), (arr_2 [8U] [i_1]))))))));
                    var_21 = ((/* implicit */long long int) max((var_12), (((/* implicit */unsigned long long int) var_4))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (short i_4 = 3; i_4 < 24; i_4 += 2) 
                        {
                            arr_18 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_1)))) ? (((((/* implicit */unsigned long long int) var_2)) ^ (arr_13 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1] [i_1] [i_1])))))) ? (((unsigned int) arr_15 [i_0] [i_0] [19ULL] [i_0] [i_0])) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_2])))))));
                            arr_19 [4U] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */long long int) arr_1 [i_0] [i_0 + 1]);
                            var_22 += ((unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_1) : (3396725044015992599ULL)));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1] [21LL] [(short)21] [21LL])) : (((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [23]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_2]))))) : (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) 18302769623122051072ULL)) ? (-6046286389145695545LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_1 [i_4 + 1] [i_3])) ? (((/* implicit */long long int) 2030677182U)) : (var_9)))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_22 [i_3] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1]))));
                            var_24 = ((/* implicit */int) arr_0 [i_0 - 1]);
                        }
                        arr_23 [i_0] [i_1] [(_Bool)1] [i_1] [i_2] = ((/* implicit */int) min((max((2264290114U), (1549544537U))), (((/* implicit */unsigned int) ((int) var_7)))));
                    }
                    for (int i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        arr_28 [i_0 + 1] [i_2] [i_2] [i_6] = (~((+(min((((/* implicit */unsigned int) var_15)), (var_5))))));
                        var_25 += var_5;
                        var_26 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_26 [i_0 + 1] [i_2] [i_0 + 1] [i_1] [i_1])) ? (arr_26 [i_0 - 1] [i_2] [i_0 + 1] [i_0 + 1] [i_0]) : (arr_26 [i_0 - 1] [i_2] [i_0 + 1] [i_1] [i_2])))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 1; i_7 < 15; i_7 += 1) 
    {
        for (unsigned short i_8 = 3; i_8 < 14; i_8 += 3) 
        {
            {
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) max((((0U) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)255))))))), (((/* implicit */unsigned int) (_Bool)1)))))));
                var_28 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_25 [6ULL] [6ULL])) ? (arr_5 [i_8 - 2] [i_8 + 2] [i_8 - 3]) : (((/* implicit */unsigned long long int) 2030677182U))))));
            }
        } 
    } 
}
