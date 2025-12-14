/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124758
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
    var_20 = 1864896968;
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    var_21 += ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)5749))));
                    var_22 ^= ((/* implicit */long long int) ((unsigned long long int) var_13));
                }
            } 
        } 
        arr_6 [i_0] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))) - (-7441012501738594301LL))) >= (-9223372036854775805LL)));
    }
    var_23 -= ((/* implicit */unsigned short) var_15);
}
