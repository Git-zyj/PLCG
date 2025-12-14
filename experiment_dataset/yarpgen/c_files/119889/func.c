/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119889
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_16 &= ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_2 - 1] [i_2 - 1]);
                    var_17 = ((/* implicit */unsigned long long int) arr_6 [i_2 + 1]);
                    arr_9 [i_0] [i_0] [i_0] [(unsigned char)3] = ((/* implicit */short) arr_1 [i_0] [i_0]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 21; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            {
                var_18 -= ((/* implicit */unsigned int) ((-6074911994272032089LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)235)))));
                var_19 -= ((/* implicit */short) (-(1121686625U)));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */unsigned long long int) (~(1121686625U)))) : (arr_13 [20])));
                var_21 = ((/* implicit */unsigned char) 3173280688U);
                arr_15 [i_3] [19ULL] = (+((~(arr_10 [i_3 - 1]))));
            }
        } 
    } 
}
