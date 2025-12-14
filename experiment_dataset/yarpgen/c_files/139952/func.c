/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139952
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] = min((((/* implicit */unsigned long long int) min(((unsigned short)0), ((unsigned short)7)))), (min((((/* implicit */unsigned long long int) var_0)), (3692359834621763117ULL))));
                    var_14 &= ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (var_11)))), (((arr_5 [i_0] [i_1] [i_2]) ? (14754384239087788498ULL) : (var_9))))));
                }
            } 
        } 
    } 
    var_15 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((var_2), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) var_5))))) ? (var_11) : (((((/* implicit */_Bool) 3692359834621763117ULL)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_5))))));
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        for (long long int i_7 = 3; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_16 = (signed char)73;
                                arr_20 [i_3] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */long long int) arr_4 [i_3]);
                                arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_5] [i_3] = ((/* implicit */unsigned long long int) (unsigned short)0);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) 3496619451U);
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)60)))))));
}
