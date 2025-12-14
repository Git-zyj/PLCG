/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166704
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
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((long long int) ((int) var_3))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_18 |= ((/* implicit */unsigned int) 12637643371684244999ULL);
                                var_19 &= var_11;
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_15))));
                }
            } 
        } 
    } 
}
