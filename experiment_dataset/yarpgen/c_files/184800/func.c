/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184800
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
        for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 += ((/* implicit */long long int) arr_0 [10]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (var_4) : (((((/* implicit */_Bool) -1947973129)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))));
                                var_14 = ((/* implicit */long long int) min((var_14), (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((((/* implicit */_Bool) max((6866663479368377831LL), (((/* implicit */long long int) 0))))) ? (((((/* implicit */_Bool) -284620162)) ? (2147483647) : (-784509296))) : (784509279))))))));
                                arr_11 [i_0] [(signed char)12] [0] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_0) : (((int) 3969668121U))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (signed char)0);
}
