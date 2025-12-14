/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136365
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
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned char)3)) * (((/* implicit */int) var_11))))))), (((19U) << (((4503599627368448LL) - (4503599627368443LL)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2231592992U))));
        arr_4 [(unsigned char)6] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [10]))));
    }
    /* vectorizable */
    for (signed char i_1 = 4; i_1 < 19; i_1 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) << (((((((/* implicit */int) arr_0 [i_1])) | (((/* implicit */int) var_18)))) + (31)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_21 += ((/* implicit */int) ((arr_8 [i_1 + 1] [i_1 - 4]) / (arr_8 [i_1 + 1] [i_1 - 3])));
            /* LoopSeq 2 */
            for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                arr_14 [i_1] [i_2] = ((/* implicit */unsigned short) var_10);
                arr_15 [i_1] [i_1] [i_3] &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 4] [i_1]))) - ((~(-5429409833322243408LL)))));
            }
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                arr_18 [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_2)))) : ((-(var_3)))));
                var_22 = ((/* implicit */_Bool) (-(arr_5 [i_1 + 1])));
                var_23 -= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 2231593000U)) ? (((/* implicit */int) arr_13 [i_1])) : (((/* implicit */int) var_17))))));
                arr_19 [i_2] = ((/* implicit */unsigned int) var_3);
            }
            arr_20 [i_2] [i_2] [i_1 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) 2231592998U)) ? (576460752303423487LL) : (((/* implicit */long long int) ((/* implicit */int) (short)11174)))));
            arr_21 [i_2] [(unsigned char)6] [i_1 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) (short)-2374)) + (2147483647))) >> (((7950284450998630303LL) - (7950284450998630281LL)))))) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) arr_9 [i_1] [i_1 - 1] [i_1 - 1]))));
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1 - 1])) ? (((((/* implicit */_Bool) (signed char)7)) ? (2063374333U) : (var_4))) : (var_4)));
        }
    }
}
