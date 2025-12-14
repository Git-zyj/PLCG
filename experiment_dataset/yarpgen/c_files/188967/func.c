/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188967
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) 8388608))));
            /* LoopSeq 2 */
            for (int i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                var_11 = ((/* implicit */long long int) var_3);
                var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) arr_1 [(short)5]))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
            {
                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (unsigned char)0))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_3] [i_3] [i_1])) ? (arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252)))));
            }
            var_15 = (unsigned char)6;
        }
        var_16 = ((/* implicit */short) (unsigned char)6);
    }
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        for (long long int i_5 = 1; i_5 < 17; i_5 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) ((((-482180827) > ((~(((/* implicit */int) (short)24363)))))) ? (((/* implicit */int) ((_Bool) ((482180827) + (-482180827))))) : (arr_10 [i_4])));
                arr_14 [6LL] = var_3;
            }
        } 
    } 
}
