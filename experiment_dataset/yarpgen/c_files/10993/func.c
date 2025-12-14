/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10993
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
    var_17 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */_Bool) max((max(((+(67108864))), (((/* implicit */int) var_13)))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) arr_2 [(signed char)19] [i_1]);
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (18014364149743616LL)));
    /* LoopSeq 2 */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_19 -= ((/* implicit */long long int) ((_Bool) (-(1853712747))));
        var_20 = ((/* implicit */int) (!((!(((_Bool) (_Bool)1))))));
    }
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 22; i_3 += 1) 
    {
        arr_15 [10LL] = ((/* implicit */int) (+((-(3039198543U)))));
        var_21 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_5 [22LL])) ? (-18014364149743617LL) : (((/* implicit */long long int) var_3))))));
        arr_16 [i_3] [0U] = ((/* implicit */int) 2837997430983520699LL);
        var_22 = ((/* implicit */unsigned int) -1262276451);
    }
}
