/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166243
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_18 &= ((/* implicit */long long int) ((unsigned char) ((long long int) -3098369546937199826LL)));
        var_19 = ((/* implicit */unsigned char) (+(((arr_0 [i_0]) / (((((/* implicit */_Bool) arr_0 [i_0])) ? (3098369546937199825LL) : (arr_1 [i_0])))))));
        var_20 &= (((!(((/* implicit */_Bool) 3027074416875796943LL)))) ? (arr_1 [i_0]) : (arr_0 [i_0]));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 24; i_1 += 1) 
    {
        var_21 ^= (-(var_14));
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 24; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) arr_3 [i_1 - 1]))));
            var_23 = ((/* implicit */long long int) min((var_23), (var_10)));
            arr_8 [(unsigned char)8] [i_2] [i_2 + 1] &= ((/* implicit */unsigned char) arr_2 [2LL]);
        }
        arr_9 [(unsigned char)8] [(unsigned char)8] |= arr_7 [18LL];
        arr_10 [i_1 - 2] [i_1] = (~(3098369546937199826LL));
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        arr_13 [i_3] = (((!(((/* implicit */_Bool) arr_4 [i_3] [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_12 [i_3] [i_3]) == (var_2))))) : (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)137))) : (arr_4 [i_3] [i_3]))));
        arr_14 [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)28))));
    }
    var_24 = ((/* implicit */unsigned char) (-(max((((((/* implicit */_Bool) 9087651317587090552LL)) ? (-5607003167391040064LL) : (-5697628166912685684LL))), (var_3)))));
}
