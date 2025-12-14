/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132037
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132037 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132037
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
    var_14 = ((/* implicit */int) max((((/* implicit */short) var_4)), (var_8)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */unsigned int) var_10);
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    for (int i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)38)) : (((/* implicit */int) min((var_5), (arr_0 [i_0]))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_4 = 4; i_4 < 18; i_4 += 3) 
                            {
                                arr_12 [i_0] [(signed char)13] [3U] [i_0] [i_0] = ((/* implicit */long long int) (+(15858262401600473824ULL)));
                                var_17 -= ((((/* implicit */_Bool) arr_1 [i_2 + 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_3]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (var_6))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_4);
    var_19 = ((/* implicit */unsigned int) (unsigned short)19689);
}
