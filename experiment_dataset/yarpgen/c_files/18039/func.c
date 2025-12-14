/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18039
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
    var_15 = var_1;
    var_16 ^= ((/* implicit */unsigned char) var_7);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)1))));
                                arr_15 [i_0] [i_1] [i_1] [i_0] [i_3] [i_3] = (~(arr_11 [i_0] [4U]));
                                var_18 = ((/* implicit */long long int) ((unsigned char) -9174879147639710426LL));
                                var_19 *= ((/* implicit */unsigned char) min((arr_3 [i_0] [i_2] [i_0]), (((unsigned int) (-(0U))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)1)))))));
                    arr_16 [i_0] [i_1] = ((/* implicit */unsigned int) arr_2 [(unsigned char)6] [i_1] [i_0]);
                }
            } 
        } 
    } 
    var_21 *= ((/* implicit */unsigned char) (+((+(0LL)))));
}
