/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111266
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
    var_11 = ((/* implicit */long long int) (_Bool)0);
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_2))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) ((var_5) ? (7084888719522674585LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                arr_6 [(signed char)13] [(unsigned char)6] = ((/* implicit */_Bool) min(((signed char)60), ((signed char)43)));
                var_14 += ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) arr_4 [(signed char)5] [i_0])))) : (((int) ((int) arr_3 [i_0] [i_1])))));
            }
        } 
    } 
    var_15 ^= (~(min((((long long int) var_8)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-54))) : (var_8))))));
}
