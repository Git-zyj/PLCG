/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151459
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
    var_16 = ((/* implicit */unsigned short) ((long long int) var_2));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_17 = (+(((/* implicit */int) arr_2 [i_0])));
        var_18 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)14468)) : (((/* implicit */int) (unsigned short)22142))));
    }
    for (short i_1 = 1; i_1 < 24; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_19 ^= ((/* implicit */short) (unsigned char)153);
            var_20 = ((/* implicit */signed char) (+(min((((((/* implicit */_Bool) arr_6 [i_1 + 1])) ? (var_15) : (((/* implicit */unsigned long long int) 140285208)))), (((/* implicit */unsigned long long int) max((((/* implicit */short) var_6)), (var_0))))))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_13 [i_3] [i_3] = ((int) arr_7 [i_1 + 1] [i_1] [i_1 + 1]);
            var_21 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1 + 1])) ? (((/* implicit */int) (short)-28382)) : (((/* implicit */int) arr_8 [i_1] [(short)18] [i_3]))));
            var_22 = ((/* implicit */short) -3771192647483940259LL);
        }
        var_23 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((arr_12 [i_1 - 1] [(short)18]) == (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 1] [i_1])))))), (min((((/* implicit */long long int) var_6)), (arr_12 [i_1 - 1] [(unsigned short)0])))));
        var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        var_25 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_4])) ? (arr_4 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)86)))));
        arr_17 [1U] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_4])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_12 [i_4] [i_4])) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4])))));
    }
}
