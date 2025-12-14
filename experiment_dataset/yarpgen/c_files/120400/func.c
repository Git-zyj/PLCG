/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120400
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
    var_14 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned short i_3 = 1; i_3 < 8; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 2) 
                        {
                            {
                                arr_16 [i_3] = ((/* implicit */unsigned long long int) (unsigned char)0);
                                var_16 = ((/* implicit */_Bool) 16942188011597381511ULL);
                                arr_17 [i_2] [i_2] [(_Bool)1] [i_2] [i_3] = ((/* implicit */unsigned short) 10313705291756510174ULL);
                                arr_18 [i_0] [i_3] = ((/* implicit */short) 10313705291756510174ULL);
                                arr_19 [i_3] [8] [i_2] [i_3] = ((/* implicit */signed char) (_Bool)0);
                            }
                        } 
                    } 
                } 
                arr_20 [i_0] = ((/* implicit */_Bool) -1072651329474402707LL);
                arr_21 [i_0] = ((/* implicit */long long int) (_Bool)1);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            {
                var_17 &= ((/* implicit */signed char) -1456968161708016856LL);
                arr_26 [i_5] [i_5] [i_6] = ((/* implicit */unsigned char) 18446744073709551615ULL);
            }
        } 
    } 
}
