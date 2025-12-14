/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171224
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
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */short) (+(((arr_4 [i_0 + 2] [i_0 - 1] [i_0 + 2]) << (((arr_5 [i_0 + 2] [i_0 + 1] [i_0 + 2] [i_2]) - (7122647979741304039LL)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 3; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (~(((/* implicit */int) var_0)))))));
                                arr_11 [i_0] [12U] [i_2] [i_0] [i_2] [(signed char)6] [i_1] = ((/* implicit */signed char) ((7123923329173321880ULL) + (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)110)) - (((/* implicit */int) arr_1 [i_0])))) - (((arr_10 [i_0] [i_1] [8] [i_2] [i_4]) + (0))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) var_1);
}
