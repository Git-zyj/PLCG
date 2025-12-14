/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163272
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
    var_17 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_0)))) ? (min((((/* implicit */unsigned long long int) -1169408309)), (var_0))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)(-32767 - 1)))))))), (18446744073709551615ULL)));
    var_18 = ((/* implicit */short) -1);
    var_19 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) < (-5)))) : (var_6)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) (_Bool)1);
                arr_6 [i_1] = ((/* implicit */short) arr_3 [i_0]);
                arr_7 [i_0] [i_0] = ((/* implicit */int) arr_3 [i_0 + 2]);
            }
        } 
    } 
}
