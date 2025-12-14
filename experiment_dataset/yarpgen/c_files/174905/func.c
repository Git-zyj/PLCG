/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174905
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
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    arr_11 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)210))) < (1516682330888775672LL)));
                    var_12 += ((/* implicit */unsigned char) arr_4 [i_0]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            {
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_4))));
                var_14 *= ((/* implicit */unsigned char) ((var_10) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (min((((/* implicit */long long int) ((13977845927054072996ULL) < (((/* implicit */unsigned long long int) 1516682330888775672LL))))), (1516682330888775671LL)))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) -1516682330888775672LL);
}
