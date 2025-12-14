/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1076
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
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_11)) > (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
    var_20 = ((/* implicit */short) var_3);
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 12; i_1 += 2) /* same iter space */
        {
            arr_5 [8LL] [i_1 - 1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)11] [i_1]))) | (((arr_2 [i_1]) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_4 [0] [i_0]))))))))));
            var_21 += ((/* implicit */unsigned short) var_9);
        }
        for (unsigned char i_2 = 2; i_2 < 12; i_2 += 2) /* same iter space */
        {
            arr_9 [i_0] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((arr_8 [i_0 - 1] [i_0 - 1] [i_0]) + (((/* implicit */int) arr_3 [i_0] [i_2])))) & (((((/* implicit */int) (short)-976)) & (((/* implicit */int) (short)976))))))) ? (var_4) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_7 [(short)0] [(short)0] [i_2 - 1])), (((((/* implicit */_Bool) arr_3 [i_2] [i_0])) ? (((/* implicit */int) (short)-976)) : (((/* implicit */int) var_9)))))))));
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                var_22 += ((/* implicit */signed char) min((var_5), (((/* implicit */short) (signed char)-30))));
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_2 - 1] [i_3]))))) ^ (var_3))) > (((/* implicit */unsigned int) arr_8 [i_0] [i_2] [i_3])))))));
            }
            for (short i_4 = 2; i_4 < 11; i_4 += 2) 
            {
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) arr_4 [i_0] [i_2]))));
                arr_14 [i_0] [i_0] [12LL] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_4 [i_4 - 1] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_4 [i_4 + 2] [i_2 - 2])))));
                arr_15 [i_0] [i_2] [(signed char)12] [i_4] &= ((/* implicit */_Bool) (~(arr_0 [(_Bool)1])));
                arr_16 [i_0 - 3] [i_2] [i_4] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) var_10)) | (((/* implicit */int) max((((/* implicit */unsigned char) var_12)), ((unsigned char)18))))));
            }
            var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_11 [i_2 - 1] [i_0 + 1])))) | (min((((/* implicit */unsigned int) var_8)), (arr_4 [i_2 - 1] [i_0 - 2])))));
        }
        var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 - 2])) ? (((/* implicit */unsigned int) 2147483647)) : (var_3)))) ? (-7769455005570996877LL) : (((/* implicit */long long int) var_3))));
    }
    for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
    {
        var_27 = ((/* implicit */short) ((((/* implicit */int) (short)975)) | (((/* implicit */int) (short)-977))));
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) ((((/* implicit */int) ((arr_18 [i_5] [(signed char)2]) != (max((((/* implicit */int) (unsigned char)68)), (arr_17 [(_Bool)1] [i_5])))))) | (max((arr_17 [i_5] [i_5]), (arr_17 [i_5] [i_5]))))))));
    }
}
