/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116030
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
    var_15 &= ((/* implicit */unsigned long long int) -3LL);
    var_16 = ((/* implicit */unsigned short) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */long long int) (_Bool)1);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_18 = var_12;
                                var_19 = 16047830797487414313ULL;
                                var_20 = ((/* implicit */unsigned long long int) (unsigned short)57344);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
