/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185830
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
    var_10 = ((/* implicit */short) (!(var_8)));
    var_11 = ((/* implicit */short) ((((/* implicit */int) ((short) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_9)))))) > (((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_13 = ((/* implicit */signed char) (+(((/* implicit */int) var_8))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_4 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_1]))));
            var_14 = ((/* implicit */unsigned long long int) ((long long int) arr_3 [i_0] [i_1] [i_1]));
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                var_15 = ((/* implicit */short) arr_5 [i_2 + 1] [i_1] [i_2 + 1]);
                var_16 = ((/* implicit */short) var_3);
                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    var_18 ^= ((/* implicit */_Bool) ((arr_9 [i_4] [i_4] [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1]) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    var_19 = ((((/* implicit */_Bool) ((short) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((~(arr_2 [i_0] [i_0] [i_0]))));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_4 - 1])) : (((/* implicit */int) arr_0 [i_4 - 1])))))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_6 [i_3] [i_1] [i_0]))));
                }
                for (short i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */int) ((signed char) (short)-3220))) != (((/* implicit */int) var_2))));
                    var_23 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_1]))));
                }
                arr_14 [i_3] [i_3] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) <= (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_6)))));
            }
            var_24 = ((/* implicit */signed char) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))));
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_25 = ((/* implicit */signed char) var_1);
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))));
            var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_0)))))));
            /* LoopSeq 1 */
            for (signed char i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                var_28 += ((/* implicit */signed char) (~(((/* implicit */int) arr_17 [i_0] [i_7]))));
                var_29 = ((/* implicit */signed char) (short)3241);
                var_30 += arr_18 [i_6] [(short)8];
                var_31 = ((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_6] [i_7]) ? (((/* implicit */int) arr_8 [i_7] [i_6] [i_0])) : (((/* implicit */int) var_3))));
            }
        }
    }
    for (short i_8 = 1; i_8 < 24; i_8 += 2) 
    {
        var_32 = ((/* implicit */short) max((((/* implicit */signed char) (!(var_1)))), (arr_20 [i_8])));
        var_33 = ((/* implicit */unsigned int) (short)510);
    }
}
