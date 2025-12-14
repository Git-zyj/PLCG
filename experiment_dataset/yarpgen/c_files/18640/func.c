/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18640
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
    var_17 -= ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)98)) & (((/* implicit */int) (signed char)-1))))) ? (var_12) : (((/* implicit */long long int) min((((((/* implicit */int) (unsigned char)255)) / (((/* implicit */int) (signed char)27)))), ((~(((/* implicit */int) var_8))))))))))));
                var_19 ^= ((/* implicit */signed char) var_7);
            }
        } 
    } 
}
