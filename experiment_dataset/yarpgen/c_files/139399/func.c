/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139399
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned int) var_17);
                                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1114164045U))));
                                arr_14 [i_1] [i_1] [i_2 - 1] [i_2 - 1] [(short)17] [i_1] [8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1848604874)) || (((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1])))) ? (((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1] [i_1])) ? (arr_5 [i_1 - 1] [(short)23] [i_1]) : (((/* implicit */int) (unsigned short)56902)))) : (((((/* implicit */_Bool) 3180803256U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_16))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) -1848604871)) : (1422817897U)))) && (((/* implicit */_Bool) max((-1848604866), (-1848604851)))))))));
                    arr_15 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((1407476316U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
                }
            } 
        } 
    } 
    var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((var_10) ? (var_12) : (((/* implicit */long long int) var_7))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (var_3))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (3180803250U))))));
    var_21 &= ((/* implicit */unsigned int) var_6);
}
