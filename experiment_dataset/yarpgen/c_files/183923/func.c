/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183923
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
    var_10 = ((/* implicit */signed char) min((var_10), ((signed char)(-127 - 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) << (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-122))))))))));
                arr_6 [i_0] = ((/* implicit */int) (short)-5291);
            }
        } 
    } 
    var_12 *= ((/* implicit */long long int) (-(((/* implicit */int) ((((0ULL) / (8375897180468434381ULL))) < (((((/* implicit */_Bool) 631765084U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 3663202211U)))))))));
    var_13 = ((/* implicit */unsigned int) min((var_13), (2055777084U)));
    var_14 = ((/* implicit */signed char) (~(((/* implicit */int) var_1))));
}
