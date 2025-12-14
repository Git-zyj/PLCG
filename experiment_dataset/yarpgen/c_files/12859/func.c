/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12859
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
    var_13 *= ((/* implicit */unsigned int) var_12);
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((short) (~(((unsigned long long int) arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) min(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) / (var_10))))), (((/* implicit */unsigned long long int) (unsigned char)238))));
    }
    for (unsigned char i_1 = 3; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_5 [i_1 - 1] [i_1 - 2])), (min((((/* implicit */long long int) (unsigned char)250)), (var_8)))))) ? (1894431703U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [(signed char)17]))))))));
        var_15 += ((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) var_12)))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 3])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_3))))) : (arr_6 [i_1])))) ? ((+(((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_2)))))))));
        arr_8 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1] [(_Bool)1]))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 3; i_2 < 20; i_2 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (+(((/* implicit */int) var_11)))))));
        var_18 = ((/* implicit */unsigned int) ((int) arr_7 [i_2 + 1] [i_2]));
    }
    /* vectorizable */
    for (unsigned char i_3 = 3; i_3 < 20; i_3 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_3 - 2] [i_3 - 3])) < ((~(((/* implicit */int) arr_4 [20ULL])))))))));
        var_20 = ((/* implicit */signed char) arr_5 [i_3 - 1] [i_3 - 3]);
        var_21 = ((/* implicit */short) var_4);
        /* LoopSeq 3 */
        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            arr_17 [i_3 - 1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50555)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_11 [i_3 - 1])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_12))));
            arr_18 [i_3] [i_3] [i_4] |= ((/* implicit */short) ((((/* implicit */unsigned int) (~(1989230469)))) >= (var_7)));
        }
        for (long long int i_5 = 3; i_5 < 20; i_5 += 2) 
        {
            var_22 ^= ((/* implicit */unsigned short) arr_7 [i_3] [i_5 - 3]);
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_23 *= ((/* implicit */signed char) arr_9 [i_3 + 1]);
                    var_24 = ((/* implicit */short) (!(arr_26 [i_3 - 1] [i_5 + 1] [(unsigned char)6] [i_7])));
                }
                arr_27 [i_3 - 3] [i_3 - 3] [i_6] &= ((/* implicit */unsigned char) ((arr_14 [i_3 - 2] [i_5 - 3]) ? (1989230469) : (((/* implicit */int) arr_14 [i_3 - 2] [i_5 - 3]))));
                var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_3 - 1])) ? (var_8) : (-8896127145213777939LL)));
            }
        }
        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            var_26 = ((/* implicit */unsigned char) (~(arr_19 [i_3 - 1] [i_3])));
            var_27 *= ((/* implicit */_Bool) ((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)18)))));
        }
        var_28 += ((/* implicit */short) var_9);
    }
    var_29 = ((/* implicit */unsigned long long int) var_4);
}
