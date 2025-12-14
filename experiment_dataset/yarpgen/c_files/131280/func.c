/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131280
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
    var_16 = ((/* implicit */unsigned long long int) var_5);
    var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((10172673650916698058ULL) != (((/* implicit */unsigned long long int) -2038120754))))), (15203828692288378088ULL)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_15 [i_2] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)76));
                                arr_16 [i_3] [i_3] [(unsigned short)1] [i_1] [i_3] = ((/* implicit */short) 2038120754);
                            }
                        } 
                    } 
                    arr_17 [i_1] = ((/* implicit */short) 8274070422792853563ULL);
                    arr_18 [i_1] [i_2] = ((/* implicit */signed char) arr_2 [i_0]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (((_Bool)1) && (((/* implicit */_Bool) 15203828692288378088ULL))));
}
