/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114400
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
    var_12 = ((/* implicit */_Bool) var_8);
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) * (-7425166965106485889LL)));
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 2] = ((/* implicit */_Bool) (-((+(-4321926886587163836LL)))));
                var_14 ^= ((/* implicit */signed char) min((var_3), (((/* implicit */long long int) max((var_2), (var_2))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) min((var_15), (var_8)));
    /* LoopNest 3 */
    for (short i_2 = 2; i_2 < 17; i_2 += 4) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 3; i_4 < 17; i_4 += 4) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-9244)) ? (((((/* implicit */_Bool) (unsigned short)40968)) ? (-3036505969570921616LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)51)))));
                    arr_15 [i_3] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_5))))));
                }
            } 
        } 
    } 
}
