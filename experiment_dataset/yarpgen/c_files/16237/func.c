/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16237
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
    var_10 = ((/* implicit */unsigned char) var_1);
    var_11 = ((((((/* implicit */long long int) (-(((/* implicit */int) var_5))))) * (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_9)) : (var_6))))) / (var_6));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))) < (((arr_1 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)81)))))))) / ((-(min((507904), (((/* implicit */int) (unsigned char)171))))))));
                var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_4))))))));
            }
        } 
    } 
    var_14 -= ((/* implicit */unsigned char) min((((/* implicit */long long int) (unsigned char)174)), (var_6)));
}
