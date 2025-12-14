/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156836
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
    var_18 ^= ((/* implicit */signed char) max((((/* implicit */int) ((signed char) var_6))), ((~(((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (signed char)(-127 - 1))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0]))))) ? (((((/* implicit */int) arr_4 [i_0])) % (((/* implicit */int) (signed char)-113)))) : (((((/* implicit */_Bool) (signed char)121)) ? (((/* implicit */int) (signed char)62)) : (((/* implicit */int) (signed char)(-127 - 1))))))))));
                var_19 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) > (((/* implicit */int) ((signed char) var_3)))))), (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_3 [i_0])) : ((~(((/* implicit */int) (signed char)-81))))))));
                arr_6 [i_0] = min((min(((signed char)28), ((signed char)79))), ((signed char)-49));
                var_20 ^= var_13;
            }
        } 
    } 
    var_21 ^= var_5;
}
