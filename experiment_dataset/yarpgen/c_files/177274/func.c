/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177274
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
    var_11 = ((/* implicit */signed char) ((_Bool) var_3));
    var_12 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) arr_3 [i_2])), (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */short) (+(max((((/* implicit */unsigned int) (unsigned char)229)), (2395459990U)))));
                                arr_15 [i_4] [i_3] [i_1] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (signed char)0);
                                arr_16 [i_0] [i_1] [i_1] [i_0] [i_2] = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
