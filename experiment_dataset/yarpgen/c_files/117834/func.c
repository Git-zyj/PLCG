/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117834
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    var_10 *= (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0)));
                    var_11 = ((/* implicit */signed char) ((-1036448394843798668LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    var_12 = ((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)(-127 - 1))));
                    var_13 = ((/* implicit */long long int) var_4);
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((short) ((signed char) (unsigned short)48804))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((((/* implicit */long long int) min((var_2), (((/* implicit */unsigned short) var_7))))), (min((((/* implicit */long long int) var_3)), (((((/* implicit */_Bool) (signed char)18)) ? (-2413994056323939471LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_16 += ((/* implicit */short) (+(((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 1) 
        {
            {
                var_17 = var_4;
                var_18 = ((/* implicit */unsigned char) var_8);
            }
        } 
    } 
}
