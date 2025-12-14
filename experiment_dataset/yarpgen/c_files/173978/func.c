/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173978
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
    for (int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_11 ^= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) | (9ULL)))) ? (4593528277038904296ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [20ULL] [i_0 - 2] [i_1 + 1])) * (((((/* implicit */_Bool) (short)-17486)) ? (((/* implicit */int) var_10)) : (-11728397)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [i_0] [i_0 - 2] = ((/* implicit */unsigned short) -206301725);
                                var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) 0LL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) var_6);
}
