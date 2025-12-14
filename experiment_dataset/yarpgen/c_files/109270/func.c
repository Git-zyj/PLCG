/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109270
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
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [8] |= ((/* implicit */unsigned char) 35184355311616ULL);
                var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)25)) ? (18446708889354239999ULL) : (35184355311616ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_1 [i_1 + 1] [i_0]))))));
                var_16 = ((/* implicit */unsigned long long int) var_6);
                var_17 = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((long long int) ((((((/* implicit */_Bool) var_12)) ? (var_1) : (var_10))) << (((((((/* implicit */_Bool) 8795556151296LL)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (var_14))) + (16))))))) : (((/* implicit */signed char) ((long long int) ((((((/* implicit */_Bool) var_12)) ? (var_1) : (var_10))) << (((((((((/* implicit */_Bool) 8795556151296LL)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (var_14))) + (16))) - (120)))))));
                var_18 &= ((/* implicit */unsigned short) ((36028797018963967ULL) ^ (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_12))));
    var_20 = ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (+(2058312451366462762LL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) % (var_3))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_1)) : (5817367157266252078LL)))))) : (((/* implicit */unsigned long long int) var_8)));
    var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_0))));
    var_22 = ((/* implicit */unsigned char) var_8);
}
