/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126634
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))));
        arr_2 [(unsigned short)2] [(unsigned short)2] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0 - 2]))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [(unsigned short)8])))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_4 [i_1])))) + ((-(((/* implicit */int) arr_0 [i_1]))))));
        var_22 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1])))))));
        var_23 = ((/* implicit */int) min((var_23), (((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1])))))))) | (min((((/* implicit */int) max((arr_0 [i_1]), (((/* implicit */signed char) arr_3 [i_1]))))), (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) min((((arr_3 [i_2]) ? (((/* implicit */int) arr_3 [3U])) : (((((/* implicit */int) arr_5 [i_2])) << (((((/* implicit */int) arr_0 [i_2])) - (117))))))), (min(((~(arr_7 [i_2]))), ((+(((/* implicit */int) arr_3 [i_2]))))))));
        var_25 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) max((arr_1 [i_2]), (((/* implicit */short) arr_3 [i_2]))))))))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            arr_13 [i_2] [(unsigned short)15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_4 [i_2]), (arr_4 [i_2])))) ? (((/* implicit */int) (!(arr_3 [i_2])))) : ((-(((/* implicit */int) arr_0 [13U]))))));
            var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_7 [i_2]) & (((/* implicit */int) arr_11 [(unsigned char)12] [i_3]))))) ? ((~(((/* implicit */int) arr_11 [i_2] [i_2])))) : (((/* implicit */int) arr_12 [i_3] [i_2] [i_2]))));
            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_2]))))), (arr_12 [i_2] [i_3] [(signed char)17]))))));
        }
        var_28 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_0 [i_2])))) & (((/* implicit */int) arr_0 [i_2]))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
    {
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_4])), (arr_10 [i_4] [i_4] [i_4])))) ? (((/* implicit */int) arr_0 [i_4])) : (((/* implicit */int) arr_16 [i_4] [i_4]))));
        var_29 ^= ((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_3 [i_4])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_4] [i_4])) && ((!(((/* implicit */_Bool) arr_15 [i_4] [i_4])))))))));
    }
    var_30 |= ((/* implicit */_Bool) var_8);
    var_31 = ((/* implicit */signed char) (~((~((-(((/* implicit */int) var_0))))))));
}
