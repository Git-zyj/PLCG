/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185066
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) var_7);
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_16))));
                var_21 = var_11;
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 3; i_3 < 9; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    {
                        var_22 ^= ((/* implicit */_Bool) 18446744073709551607ULL);
                        var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) ((short) arr_12 [i_5] [i_4] [i_3] [i_3 + 3] [i_2]))))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_2])))) & (((((/* implicit */_Bool) var_6)) ? (arr_7 [i_3] [(_Bool)1] [i_2]) : (arr_7 [(short)12] [(short)12] [i_2])))))));
            var_25 = ((/* implicit */short) arr_6 [i_3] [i_3 - 3] [i_3 + 3]);
        }
        var_26 = ((/* implicit */unsigned long long int) var_1);
    }
    /* vectorizable */
    for (unsigned short i_6 = 4; i_6 < 19; i_6 += 3) 
    {
        var_27 |= ((int) var_13);
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) (!(((/* implicit */_Bool) 13389386022197295264ULL)))))));
        var_29 = ((/* implicit */_Bool) var_17);
    }
}
