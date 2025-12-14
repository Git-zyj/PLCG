/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161376
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
    for (signed char i_0 = 2; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [4U]);
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 597470493U)) && (((/* implicit */_Bool) arr_2 [i_0 - 1])))))) | (1148623985U)));
        arr_6 [(unsigned char)12] [i_0 - 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0 + 2]))))) : ((~(arr_1 [i_0])))));
    }
    for (signed char i_1 = 2; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) max((var_19), (arr_1 [i_1 + 3])));
        var_20 = ((/* implicit */long long int) arr_7 [1ULL] [i_1 + 3]);
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((int) var_5)) - (((/* implicit */int) arr_7 [i_1] [i_1 + 3]))))))))));
        arr_9 [3U] [i_1 + 1] = ((/* implicit */unsigned short) 8038093485431555096LL);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_12 [(short)4] = ((/* implicit */signed char) ((arr_8 [i_2]) & (((((/* implicit */_Bool) 10804131066081134938ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60061))) : (arr_8 [i_2])))));
        arr_13 [(unsigned char)1] = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_8 [i_2])) ? (((((/* implicit */_Bool) (short)-19226)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)122))))) : (((/* implicit */long long int) ((unsigned int) var_5)))))));
    }
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        arr_16 [i_3] = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 5858048132097189825ULL)) ? (((/* implicit */int) min(((unsigned char)43), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))) : (((((/* implicit */_Bool) (short)3512)) ? (((/* implicit */int) (unsigned char)199)) : ((-2147483647 - 1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)30))) : (789802254U))))))));
        arr_17 [7LL] [(_Bool)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 15025751533324296987ULL))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            for (short i_5 = 4; i_5 < 10; i_5 += 4) 
            {
                {
                    arr_23 [i_3] [(signed char)3] [i_5] = ((/* implicit */int) var_14);
                    arr_24 [i_5] = ((/* implicit */short) ((var_9) / ((-(arr_18 [i_5 - 3] [i_5 - 3])))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (+(1151795604700004352LL))))));
                }
            } 
        } 
    }
    var_23 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_16) + (((/* implicit */int) var_8))))) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) (((+(var_9))) > (((/* implicit */long long int) (+(var_18))))))))));
}
