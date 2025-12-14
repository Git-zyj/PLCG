/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163517
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
    var_13 = min((((((((/* implicit */unsigned long long int) 454644019U)) < (18441082234777063124ULL))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 454644035U)))))) : (((((/* implicit */long long int) ((/* implicit */int) var_9))) + (5386415127266549937LL))))), (((/* implicit */long long int) ((int) (unsigned short)3891))));
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((unsigned short) var_2)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_9 [i_0 - 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(454644034U)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned long long int) ((_Bool) ((32767U) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1 + 1] [i_2]))))));
                                var_16 = ((/* implicit */long long int) (short)-27640);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_0 - 1])) && (((/* implicit */_Bool) 32767U))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)30720))) / (((((/* implicit */long long int) var_4)) | (194621786920097440LL))))));
}
