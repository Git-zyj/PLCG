/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15994
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
    var_14 = ((/* implicit */long long int) var_5);
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) var_4))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (short i_2 = 2; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_8 [(unsigned short)2] [(unsigned short)2] = ((/* implicit */long long int) (+((-((+(((/* implicit */int) (signed char)(-127 - 1)))))))));
                    var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) 16634743502097526777ULL))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 2])) ? (18446744073709551611ULL) : (arr_0 [i_0 + 1] [(unsigned char)1]))) : (16634743502097526777ULL)));
                    var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) * (1812000571612024839ULL)));
                }
            } 
        } 
    } 
}
