/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133352
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_20 = ((/* implicit */signed char) (-(((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) (+(((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))));
            var_22 -= ((((/* implicit */_Bool) arr_4 [i_0] [(short)1] [i_1])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 524032)) ? (((/* implicit */int) (short)31476)) : (683927941)))));
        }
        for (long long int i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned int) var_5);
            arr_8 [i_0] = ((/* implicit */unsigned short) -359594142);
            arr_9 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_0] [i_0] [(_Bool)1])) >= (((/* implicit */int) arr_4 [(unsigned short)1] [i_0] [i_2]))));
        }
        for (long long int i_3 = 0; i_3 < 16; i_3 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */short) arr_1 [i_0]);
            arr_12 [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_10)))) ? (((((/* implicit */int) var_10)) ^ (((/* implicit */int) arr_0 [i_3])))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_3]))));
        }
    }
    for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
    {
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_4]))))) ? ((~(arr_6 [i_4] [i_4] [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4]))) >= (arr_6 [i_4] [i_4] [6])))))));
        arr_16 [i_4] = ((/* implicit */long long int) arr_13 [i_4] [i_4]);
        var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */int) arr_5 [(signed char)2])) : (var_0)))))))) : (arr_6 [i_4] [i_4] [i_4])));
        var_27 = ((/* implicit */unsigned short) max((var_27), ((unsigned short)65535)));
    }
    var_28 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        for (int i_6 = 3; i_6 < 15; i_6 += 2) 
        {
            {
                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_6 - 1])) ? (arr_20 [i_6 - 3]) : (arr_20 [i_6 + 2])))) ? (((((/* implicit */_Bool) arr_18 [(_Bool)0] [i_6 + 1])) ? (arr_18 [i_6] [i_6 - 3]) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)16379))))))) : (((/* implicit */unsigned long long int) (-(arr_22 [i_6 - 2] [i_6 + 1] [i_6 - 3])))))))));
                arr_23 [(signed char)10] [(signed char)10] [i_6] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_21 [i_6 + 1] [i_6 - 2]), (arr_21 [i_6 + 1] [i_6 - 2]))))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned int) var_16);
    var_31 = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))));
}
