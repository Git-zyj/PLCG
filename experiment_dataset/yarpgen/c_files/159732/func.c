/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159732
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_0 [i_0] [i_1]))));
            var_21 = arr_0 [i_0] [i_1];
        }
        for (int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            arr_6 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) var_9);
            arr_7 [i_0] [i_2] &= ((/* implicit */short) ((((/* implicit */long long int) 723116835U)) <= (var_0)));
            var_22 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0] [i_0])) / (((/* implicit */int) arr_2 [i_2] [i_2]))));
        }
        var_23 *= ((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_0]));
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_3 [(signed char)8]))))) ? (3571850484U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))));
        var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))) ? (((((/* implicit */int) var_2)) % (((/* implicit */int) (short)-21440)))) : (((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0] [(_Bool)0]) : (var_10))));
        var_26 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) (short)-6794)))) ? (2147483621) : (((/* implicit */int) var_14))));
    }
    /* vectorizable */
    for (long long int i_3 = 1; i_3 < 18; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                {
                    arr_17 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) var_5);
                    arr_18 [16] [i_4] [i_4] |= ((/* implicit */unsigned char) arr_4 [i_5 + 1] [i_4] [i_3]);
                }
            } 
        } 
        arr_19 [i_3] = arr_8 [i_3];
        var_27 |= ((/* implicit */unsigned char) (signed char)7);
    }
    var_28 = var_14;
    var_29 = ((/* implicit */unsigned char) var_16);
    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_15), (((/* implicit */short) var_4))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    var_31 &= ((/* implicit */long long int) ((unsigned short) var_3));
}
