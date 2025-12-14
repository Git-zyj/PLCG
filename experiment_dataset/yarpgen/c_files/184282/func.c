/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184282
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
    var_16 = ((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((max(((unsigned short)128), ((unsigned short)56380))), (((/* implicit */unsigned short) var_2)))))) : ((~(max((var_10), (((/* implicit */unsigned long long int) var_0)))))));
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)56366)) << (((((/* implicit */int) (unsigned short)9155)) - (9142))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [i_3 + 1] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) ((var_8) - (var_13)))))));
                                arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = (-(((/* implicit */int) var_2)));
                                var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_3 + 2] [i_1]))))), (((((/* implicit */_Bool) arr_7 [i_3 - 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3 + 1] [i_1]))) : (14927877436089430521ULL)))));
                                var_19 = ((/* implicit */signed char) min(((~(((/* implicit */int) (unsigned short)9155)))), (min((((/* implicit */int) var_14)), ((~(((/* implicit */int) arr_2 [i_0] [i_1 + 1] [(unsigned short)6]))))))));
                                arr_14 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) 3518866637620121094ULL)) || (((/* implicit */_Bool) (-(-2287494901802216901LL))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_2] = ((/* implicit */signed char) var_5);
                }
            } 
        } 
    } 
}
