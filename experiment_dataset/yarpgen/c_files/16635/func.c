/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16635
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
    var_14 &= ((short) ((short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_7)) : (var_11))));
    var_15 = ((/* implicit */short) ((unsigned char) ((signed char) (-(((/* implicit */int) (signed char)-79))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((short) ((unsigned int) ((short) var_10)));
                /* LoopSeq 1 */
                for (signed char i_2 = 2; i_2 < 15; i_2 += 4) 
                {
                    var_16 -= ((/* implicit */short) (+(((((/* implicit */_Bool) (~(299758524U)))) ? ((~(((/* implicit */int) (short)-1)))) : ((~(((/* implicit */int) var_5))))))));
                    var_17 ^= (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_3 [3LL] [11] [i_2])) ? (((/* implicit */int) arr_5 [i_0] [i_0])) : (((/* implicit */int) (short)-14087)))))));
                }
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((short) var_0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)14))))) : (((int) var_9)))));
    var_19 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) ((long long int) var_11))))));
}
