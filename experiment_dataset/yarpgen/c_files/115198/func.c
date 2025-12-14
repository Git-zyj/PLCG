/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115198
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
    var_17 = ((/* implicit */unsigned short) var_4);
    var_18 = ((/* implicit */long long int) var_4);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 4; i_4 < 16; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_3] [i_4 + 1] [i_1] [i_4] = ((/* implicit */int) ((_Bool) -3982403008569877725LL));
                                arr_17 [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248))) : (0ULL))) + (((/* implicit */unsigned long long int) max((-3982403008569877725LL), (((/* implicit */long long int) var_10))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_0] |= ((/* implicit */signed char) (short)9678);
                    arr_19 [i_0] [i_0] [i_2] [i_2] = ((/* implicit */signed char) arr_1 [i_0]);
                    arr_20 [i_0] [i_1] [i_0] = var_0;
                    arr_21 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (signed char)-109)), (((arr_5 [i_0]) % (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    } 
}
