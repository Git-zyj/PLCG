/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122736
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (arr_5 [(signed char)8] [(signed char)3])))) > ((~(((((/* implicit */_Bool) var_7)) ? (3064091562922379757LL) : (((/* implicit */long long int) arr_3 [i_0] [i_0] [(unsigned char)8]))))))));
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) 3064091562922379757LL))) && (((/* implicit */_Bool) -3064091562922379757LL))));
            }
        } 
    } 
    var_19 |= ((/* implicit */signed char) (+((-(var_4)))));
}
