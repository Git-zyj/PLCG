/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154700
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [(unsigned short)12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9794062163748621965ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)64182)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))) : (((((/* implicit */_Bool) ((long long int) 8652681909960929650ULL))) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) var_10)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (short)62);
    }
    var_17 = var_0;
    /* LoopSeq 1 */
    for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        var_18 ^= ((/* implicit */unsigned char) max((9794062163748621965ULL), (((/* implicit */unsigned long long int) max((var_6), (((/* implicit */int) max((var_7), (((/* implicit */unsigned char) (signed char)-37))))))))));
        var_19 ^= ((/* implicit */int) 8652681909960929651ULL);
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (17380076402985888441ULL) : (10722792982545802381ULL))))))) >> ((((+(4972759451172012591ULL))) - (4972759451172012577ULL)))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((var_2), (((/* implicit */unsigned long long int) arr_1 [(unsigned char)16] [(unsigned char)16]))))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) var_12)) ? (arr_1 [i_1 + 1] [4LL]) : (((/* implicit */int) var_4)))))))));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 16; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (((/* implicit */unsigned long long int) -9223372036854775785LL)) : (((((/* implicit */_Bool) (unsigned char)247)) ? (var_16) : (arr_9 [i_1] [i_1] [8LL]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2 + 3] [(signed char)6] [i_1 - 1])) ? (((/* implicit */int) arr_10 [i_2 + 2] [i_2 + 2] [i_1 - 1])) : (var_6)))))))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2])))), (((/* implicit */int) arr_5 [10LL] [(unsigned char)5]))))) ? (((/* implicit */int) (unsigned short)15702)) : ((-(((/* implicit */int) var_7))))));
                    }
                } 
            } 
        } 
    }
}
