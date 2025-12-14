/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108822
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
    var_19 = ((/* implicit */signed char) max(((!(((var_0) == (var_5))))), (((((int) (_Bool)0)) > (var_10)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            var_20 ^= ((/* implicit */short) ((int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_18))) + (var_13)))))));
            var_21 = ((/* implicit */unsigned char) (signed char)123);
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                arr_7 [i_0] [i_1 - 3] [i_2] |= ((/* implicit */int) var_16);
                var_22 -= ((/* implicit */unsigned short) ((_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (arr_6 [i_2] [i_2] [i_1] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
            {
                var_23 -= ((/* implicit */unsigned int) max((-1LL), (((/* implicit */long long int) (unsigned short)3968))));
                var_24 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_9 [i_1 - 3] [i_1])) : (((/* implicit */int) arr_9 [i_1] [i_1 - 1]))))), (((((/* implicit */_Bool) arr_6 [i_3] [i_1 + 3] [i_3] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_0))));
            }
        }
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)145))) : (arr_4 [i_0] [i_0] [i_0]))))))));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        var_26 = ((/* implicit */short) ((((/* implicit */int) var_6)) < (((/* implicit */int) arr_12 [12U]))));
        arr_13 [i_4] = ((signed char) (unsigned short)61567);
        var_27 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (arr_3 [i_4]))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61567)))));
        arr_14 [i_4] = ((/* implicit */short) ((_Bool) arr_2 [i_4] [i_4] [i_4]));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned int) (+(arr_18 [i_5])));
        var_28 *= ((/* implicit */unsigned int) ((3455058894613785803LL) == (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5] [i_5])))));
        var_29 -= ((/* implicit */unsigned char) ((((long long int) var_13)) - (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_8))))));
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            var_30 -= ((/* implicit */unsigned short) arr_17 [i_6]);
            var_31 = (+(((/* implicit */int) arr_21 [i_6])));
            var_32 = ((/* implicit */unsigned short) (-(var_10)));
            arr_22 [i_5] &= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_0 [i_6])))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)121)))))));
            arr_26 [2U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_5])) ? (arr_0 [i_5]) : (arr_0 [i_5])));
            var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)17405)) ? (var_3) : (((/* implicit */int) (_Bool)1)))))));
        }
    }
}
