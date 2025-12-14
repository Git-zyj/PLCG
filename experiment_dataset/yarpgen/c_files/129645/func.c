/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129645
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_16 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_1 [i_0])) - (32)))))) ? (var_10) : (((/* implicit */unsigned long long int) min(((~(arr_2 [(unsigned char)6] [(unsigned char)6]))), (min((((/* implicit */int) arr_1 [i_0])), (arr_2 [i_0] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
    }
    for (long long int i_1 = 3; i_1 < 21; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((((/* implicit */int) arr_6 [(_Bool)1] [(_Bool)1])), ((-(var_0)))))), (var_12)));
        var_17 = ((/* implicit */int) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (var_10) : (((/* implicit */unsigned long long int) min((arr_4 [i_1] [(unsigned short)22]), (((/* implicit */long long int) arr_6 [i_1 - 1] [i_1 + 3])))))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 21; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                var_18 ^= var_10;
                arr_15 [i_2] = (~(arr_12 [2LL] [i_2] [i_2]));
            }
            for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(var_11)))) & ((~(var_10)))));
                var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2])))))));
            }
            for (int i_6 = 1; i_6 < 19; i_6 += 4) 
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : (arr_4 [i_3] [i_6])));
                var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_14 [i_2] [i_3] [(short)2] [i_2]) : (((/* implicit */int) var_13)))))));
                var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */long long int) var_9)) : (var_12))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
                arr_23 [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) var_7))))) ^ (arr_11 [(short)1] [i_2] [i_6])));
            }
            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (~(((((/* implicit */int) arr_6 [i_2] [i_2])) << (((arr_4 [i_2] [i_2]) + (7004336609211263921LL))))))))));
            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_4 [14] [i_2 - 2])))) ? (var_1) : ((-(var_8)))));
            /* LoopSeq 2 */
            for (int i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                var_26 = ((/* implicit */_Bool) ((((/* implicit */long long int) (-(var_9)))) & ((-(arr_16 [(_Bool)0] [i_3] [i_7] [i_7])))));
                arr_26 [i_2] [i_2] [i_7] = ((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 1]))));
            }
            for (unsigned int i_8 = 2; i_8 < 21; i_8 += 1) 
            {
                arr_30 [i_2 - 2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_12) ^ (var_2)))) ? (((/* implicit */long long int) var_6)) : ((+(arr_11 [i_2] [i_2] [(unsigned char)7])))));
                var_27 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((((/* implicit */_Bool) arr_28 [i_2] [(_Bool)1])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [18])))))));
            }
            arr_31 [i_2] [i_3] = ((/* implicit */int) (((+(arr_9 [i_2] [i_2]))) ^ (((/* implicit */unsigned long long int) (+(var_0))))));
        }
        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) 
        {
            var_28 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) + (arr_4 [i_9] [i_9])));
            arr_34 [i_2] [i_2] = ((/* implicit */int) var_14);
        }
        arr_35 [i_2] = ((/* implicit */short) arr_8 [i_2 + 1] [i_2 - 1]);
        var_29 = ((/* implicit */int) min((var_29), (((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_33 [i_2] [i_2 - 2]))))));
    }
    var_30 ^= ((max((max((((/* implicit */long long int) var_0)), (var_12))), (((/* implicit */long long int) var_14)))) ^ (((/* implicit */long long int) var_5)));
}
