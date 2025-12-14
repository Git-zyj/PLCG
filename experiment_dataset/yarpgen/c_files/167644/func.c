/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167644
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
    var_19 -= ((/* implicit */unsigned short) var_15);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) (short)-3346);
                            var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_5 [i_1] [i_1]))))) + (max((((/* implicit */unsigned long long int) 6362565522700074662LL)), (18181795902057256629ULL)))));
                        }
                    } 
                } 
                var_22 += ((/* implicit */unsigned short) 9976768137364535672ULL);
            }
        } 
    } 
}
