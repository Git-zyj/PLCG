/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103051
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
    var_14 = ((/* implicit */unsigned long long int) var_9);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_15 = ((/* implicit */unsigned char) ((arr_5 [i_0 + 4] [i_0 + 3]) | (arr_5 [i_0 - 3] [i_0 - 3])));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775802LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (short)-29473))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) var_13))))));
                }
                /* vectorizable */
                for (int i_3 = 3; i_3 < 10; i_3 += 3) 
                {
                    arr_13 [i_1] [i_0] = ((/* implicit */signed char) var_10);
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_18 [i_0] [i_1] &= ((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_0]);
                        arr_19 [i_4] [i_4] [i_1] [i_0] [i_4] [i_4] = ((/* implicit */int) arr_6 [i_0] [i_0] [i_3 - 3]);
                    }
                }
                arr_20 [i_0] = ((/* implicit */int) 152227964U);
            }
        } 
    } 
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) << (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) 2815933283U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)234))))))) || (((/* implicit */_Bool) var_6)))))));
}
