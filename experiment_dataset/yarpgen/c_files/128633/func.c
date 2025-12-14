/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128633
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
    var_20 = var_8;
    var_21 = ((/* implicit */long long int) max((var_21), (((((/* implicit */long long int) ((/* implicit */int) ((((long long int) -4355121583336028232LL)) > (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)151))) ^ (515165975226384847LL))))))) - (var_9)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                var_22 = ((((((arr_4 [(signed char)5] [i_1 + 2] [i_0]) + (9223372036854775807LL))) >> (((arr_4 [i_0] [i_1 - 2] [i_1]) + (7589666690177653959LL))))) + (((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_0])) ? (arr_4 [i_0] [i_1 + 2] [6LL]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-48))))));
                var_23 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) (unsigned char)8))))));
                var_24 = ((long long int) (+(((((/* implicit */int) (signed char)52)) / (((/* implicit */int) (unsigned short)14776))))));
                arr_5 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -5667988189500424630LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-40))) : (-5667988189500424628LL))))));
            }
        } 
    } 
}
