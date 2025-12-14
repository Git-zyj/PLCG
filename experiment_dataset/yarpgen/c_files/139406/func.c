/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139406
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
    var_13 = ((/* implicit */unsigned long long int) var_7);
    var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */short) var_7);
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_2 [i_0]))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */int) ((((_Bool) (((_Bool)0) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_2]))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3 + 2] [i_3 + 2] [i_2] [i_3]))) : (min((((/* implicit */unsigned long long int) var_7)), (var_9)))))));
                                arr_17 [(signed char)9] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_10 [i_3] [6ULL] [i_3] [i_3 + 2]), (var_2))))) - (((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (9223372036854775807LL) : (var_0))))));
                                var_17 = ((/* implicit */long long int) min((var_17), (9223372036854775807LL)));
                                var_18 = ((/* implicit */_Bool) ((signed char) arr_10 [i_3] [i_3] [i_3] [i_3]));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) 72057594037927936ULL))));
                }
            } 
        } 
    } 
    var_20 *= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) <= (1279024291765188636ULL))))))));
}
