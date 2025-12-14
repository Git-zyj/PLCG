/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133863
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
    for (short i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                var_20 ^= ((/* implicit */_Bool) ((unsigned char) arr_7 [i_0]));
                var_21 *= ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_2 [i_0] [i_0]))) - (((/* implicit */int) arr_2 [i_0 + 4] [i_0 + 2]))));
                var_22 ^= ((/* implicit */short) arr_4 [i_1]);
                arr_9 [i_0] [10LL] [i_0] [i_0] = ((/* implicit */_Bool) (+(arr_8 [i_1 + 2] [i_1 + 1])));
            }
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 + 4])))))));
        }
        var_24 = ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]);
        var_25 ^= ((/* implicit */unsigned long long int) arr_7 [i_0]);
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_12 [i_3] = ((((/* implicit */int) arr_11 [i_3])) == ((~(((/* implicit */int) arr_10 [i_3] [i_3])))));
        var_26 = arr_10 [i_3] [i_3];
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                {
                    var_27 -= ((/* implicit */unsigned short) arr_18 [i_4] [i_4]);
                    var_28 -= ((/* implicit */_Bool) ((((long long int) arr_18 [i_3] [7ULL])) + (((/* implicit */long long int) ((/* implicit */int) arr_16 [11] [i_4])))));
                }
            } 
        } 
        arr_20 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_13 [i_3] [i_3]);
    }
    for (short i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        var_29 = ((/* implicit */unsigned short) ((max((((/* implicit */int) min((arr_11 [4]), (((/* implicit */signed char) arr_15 [i_6] [9LL] [i_6]))))), ((-(((/* implicit */int) arr_16 [i_6] [i_6])))))) / (max((arr_13 [i_6] [i_6]), (arr_13 [i_6] [i_6])))));
        arr_24 [i_6] = ((/* implicit */unsigned short) arr_15 [i_6] [i_6] [i_6]);
    }
    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (!(((/* implicit */_Bool) max(((~(((/* implicit */int) var_19)))), (((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_13)))))))))))));
}
