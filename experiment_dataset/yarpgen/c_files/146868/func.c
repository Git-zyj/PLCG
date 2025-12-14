/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146868
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
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_15 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)54202)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-13861))) : (9223372036854775807LL)))), ((~(8ULL)))));
                    var_16 ^= ((/* implicit */short) max((((/* implicit */int) (unsigned short)42538)), ((-(((/* implicit */int) (short)20544))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) min((max((((/* implicit */int) var_13)), ((~(((/* implicit */int) (short)-2396)))))), ((+((~(((/* implicit */int) (signed char)124))))))));
}
