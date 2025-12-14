/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147507
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                var_20 |= ((/* implicit */unsigned short) ((_Bool) ((int) -6592036968811360526LL)));
                var_21 = ((/* implicit */int) ((((/* implicit */long long int) ((((((/* implicit */long long int) (-2147483647 - 1))) >= (6592036968811360517LL))) ? (((/* implicit */int) (short)15229)) : (-515991424)))) < (max((((/* implicit */long long int) ((unsigned int) arr_0 [i_0]))), (((((/* implicit */_Bool) 6592036968811360540LL)) ? (-6592036968811360526LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((long long int) ((((/* implicit */_Bool) -6592036968811360519LL)) ? (6592036968811360519LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)45518)))))) >> (((((/* implicit */int) var_5)) + (15529))))))));
                                var_23 = ((/* implicit */_Bool) max((var_23), ((_Bool)1)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_14))));
}
