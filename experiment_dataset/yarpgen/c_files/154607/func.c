/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154607
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
    var_14 = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) var_6)), (var_2))), (((/* implicit */long long int) var_6))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_15 = ((/* implicit */signed char) ((unsigned char) (short)0));
        arr_2 [i_0] = ((/* implicit */signed char) max((((unsigned long long int) arr_1 [i_0] [(signed char)0])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */int) arr_1 [i_0] [5LL])) : (((((/* implicit */_Bool) 21ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (var_10))))))));
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        var_17 = (i_1 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) << (((((/* implicit */int) arr_4 [i_1])) + (97)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)6)))) ? ((-(3084894193U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_1]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)0))))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) << (((((((/* implicit */int) arr_4 [i_1])) + (97))) - (199)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)6)))) ? ((-(3084894193U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_1]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (short)0)))))));
        var_18 = min((((/* implicit */short) var_8)), (arr_3 [i_1]));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) (+(((((/* implicit */unsigned int) ((/* implicit */int) min((arr_3 [i_1]), ((short)0))))) & (var_7)))));
                                var_20 = ((/* implicit */unsigned int) max((arr_12 [i_1]), (((/* implicit */unsigned long long int) ((arr_8 [i_1] [i_4] [i_1] [i_1]) != (arr_8 [i_1] [i_1] [11U] [i_1]))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((var_8) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (short)9))))) : (((var_8) ? (((/* implicit */unsigned int) var_10)) : (var_5))))))));
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [8ULL] [i_1] [i_3])) ? (arr_11 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) 3120375331827554027LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_3]))) : (arr_8 [i_1] [i_2] [i_2] [i_3])))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */signed char) var_12);
}
