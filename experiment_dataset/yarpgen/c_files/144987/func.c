/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144987
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
    var_16 = (~(((/* implicit */int) ((unsigned short) min((((/* implicit */long long int) var_6)), (var_5))))));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5001))) : ((~(min((5311532535214854215ULL), (((/* implicit */unsigned long long int) var_3))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            var_18 *= ((/* implicit */long long int) ((((/* implicit */int) ((short) arr_1 [i_0]))) < (((/* implicit */int) ((arr_3 [(unsigned short)0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)147);
            var_19 = ((/* implicit */unsigned short) var_5);
            arr_5 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)27682))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 3; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 1; i_3 < 12; i_3 += 1) 
            {
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_0 + 2])))))));
                arr_11 [i_0] [i_2] |= ((/* implicit */short) arr_1 [i_0 - 1]);
                arr_12 [i_3 + 1] [i_3 + 1] [i_3 + 2] = ((unsigned long long int) (-(((/* implicit */int) arr_1 [i_2]))));
                arr_13 [i_0 + 1] = ((/* implicit */signed char) ((arr_10 [i_2 - 3] [i_3 + 2] [i_3 + 2] [i_3]) * (arr_10 [i_2 - 3] [i_3 + 1] [i_3 + 1] [i_3 + 1])));
            }
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                var_21 = ((/* implicit */unsigned short) (+(arr_3 [i_0 + 2])));
                arr_16 [i_0] [i_2] [i_0] [(signed char)11] = ((/* implicit */unsigned short) var_0);
                var_22 = ((/* implicit */long long int) (~(arr_10 [i_0 + 2] [i_2] [i_0 + 2] [i_4 - 1])));
            }
            arr_17 [i_0] [i_2] = ((/* implicit */short) (-(arr_0 [i_2 + 1])));
        }
        arr_18 [i_0] = ((/* implicit */unsigned long long int) (+(arr_7 [i_0 + 2])));
    }
}
