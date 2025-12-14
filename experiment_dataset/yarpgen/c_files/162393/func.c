/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162393
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
    for (unsigned char i_0 = 1; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (!((_Bool)1)));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 4) /* same iter space */
        {
            arr_5 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))));
            arr_6 [i_0] = (_Bool)1;
            arr_7 [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_1])) ? (arr_3 [i_0 - 1]) : (((/* implicit */int) arr_4 [i_0 - 1] [i_1] [i_1 + 1]))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 4) /* same iter space */
        {
            arr_10 [i_0] = (_Bool)1;
            arr_11 [i_0] [i_0] = (!(((/* implicit */_Bool) var_13)));
            arr_12 [i_2] [4ULL] = ((/* implicit */unsigned long long int) var_6);
            arr_13 [i_0] [i_0] = 1370292106;
        }
        for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 4; i_4 < 19; i_4 += 4) 
            {
                arr_19 [i_4] [(unsigned short)14] [i_0] [i_4] = ((/* implicit */_Bool) var_13);
                arr_20 [i_0] [i_3 + 4] [i_0] [i_4] = ((/* implicit */signed char) ((3288847862970465057ULL) << (((1983441479293077128LL) - (1983441479293077071LL)))));
            }
            arr_21 [i_0 + 2] [i_0] [i_3] = ((int) 1983441479293077128LL);
        }
        arr_22 [8ULL] = ((/* implicit */int) (-(5516741840379193869ULL)));
        arr_23 [i_0] [20ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) >= (((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 2] [i_0 - 1]))));
    }
    for (unsigned char i_5 = 1; i_5 < 21; i_5 += 4) /* same iter space */
    {
        arr_27 [i_5] [i_5 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (min((((/* implicit */long long int) (unsigned char)190)), (1983441479293077128LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_5 + 2] [i_5 + 1])))))));
        arr_28 [i_5 - 1] = ((/* implicit */int) arr_4 [i_5] [i_5] [(unsigned char)15]);
    }
    var_14 = ((/* implicit */unsigned short) ((unsigned long long int) max((var_7), (max((((/* implicit */unsigned long long int) 4253413816U)), (5516741840379193869ULL))))));
    var_15 = ((/* implicit */unsigned int) var_4);
    var_16 = ((/* implicit */signed char) (((_Bool)1) || (((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) var_5)), (var_7))), (((unsigned long long int) var_11)))))));
}
