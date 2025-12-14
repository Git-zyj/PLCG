/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172079
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
    var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) * (min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) * (var_12)))))));
    var_20 = ((/* implicit */signed char) ((unsigned char) var_3));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) (+(((/* implicit */int) var_14)))))));
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((unsigned short) (short)32767)), (((/* implicit */unsigned short) min(((short)-32756), (((/* implicit */short) var_7)))))))) | (((/* implicit */int) (short)-32763))));
                var_22 = ((/* implicit */unsigned char) ((((arr_4 [i_0] [i_1]) ^ (arr_4 [i_1] [i_0]))) < (min((arr_4 [5LL] [i_1]), (var_12)))));
                var_23 ^= ((/* implicit */int) ((var_6) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) ((unsigned short) (short)-32766))) : (((((/* implicit */_Bool) (signed char)42)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_5 [i_0])))))))));
                arr_9 [i_1] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)92)) && (((/* implicit */_Bool) 312682154152236116ULL))))), (var_6));
            }
        } 
    } 
}
