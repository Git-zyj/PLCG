/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150122
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
    var_17 = ((/* implicit */long long int) ((_Bool) min((((((/* implicit */int) (signed char)118)) + (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) (unsigned char)192)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) -9223372036854775805LL))) ? (((/* implicit */int) ((268427264) > (((/* implicit */int) (unsigned short)14))))) : (((/* implicit */int) (short)15))))) ? ((~(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) (signed char)-93))));
                    var_19 += ((/* implicit */signed char) ((short) min((((/* implicit */short) var_4)), ((short)-26657))));
                }
            } 
        } 
    } 
    var_20 ^= ((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((/* implicit */int) ((signed char) var_3))) : (((/* implicit */int) max(((short)-26682), (((/* implicit */short) var_4))))))));
}
