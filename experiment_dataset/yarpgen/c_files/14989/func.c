/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14989
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) 3123837744292968855LL);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) -1909630823776439927LL))));
            var_18 += ((/* implicit */unsigned int) 4398046511103LL);
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) 3123837744292968855LL))));
        }
        var_20 += ((/* implicit */unsigned char) 2822001775U);
        arr_4 [i_0] = 2147483633;
        var_21 -= ((/* implicit */long long int) (unsigned char)7);
    }
    var_22 = ((/* implicit */long long int) (unsigned short)0);
}
