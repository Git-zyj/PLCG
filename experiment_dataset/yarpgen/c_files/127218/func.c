/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127218
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
    var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
    var_12 ^= ((/* implicit */long long int) var_1);
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 8494999639777209916LL)) ? (((/* implicit */int) (short)-28901)) : (7680)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-15610))))) ? (((((/* implicit */_Bool) (short)-28901)) ? (-7680) : (((/* implicit */int) (short)-28901)))) : ((~(-7680))))) : (((/* implicit */int) (short)5120))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_0] [8] [(_Bool)1] [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [(short)6])) ? (((/* implicit */int) arr_11 [7LL] [i_1])) : (((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (var_5)));
                                var_14 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(-7687)))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [5] [i_1] [i_2] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3]))) : (arr_0 [i_0 + 1] [(signed char)5])))) ? (min((((/* implicit */long long int) arr_6 [i_1] [4U] [3U])), (var_10))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-28901)) ? (7707) : (((/* implicit */int) (short)508)))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) 99900863U)) : (-30LL))))));
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-508)) ? (((((/* implicit */_Bool) (unsigned char)34)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)9135)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-28901)))))) : (7694771178881553007ULL)));
    }
    var_15 += ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
}
