/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131188
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)127)), (max((arr_0 [i_0]), (arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */short) var_1);
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((+(((/* implicit */int) arr_0 [(unsigned short)4]))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((108174686277533039LL) << (((((/* implicit */int) arr_0 [(signed char)8])) - (21212))))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) 1428517702U))));
            var_17 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_4 [(unsigned short)2]))));
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))));
            arr_7 [4LL] &= ((/* implicit */unsigned short) (~(((0LL) * (((/* implicit */long long int) ((/* implicit */int) (signed char)-113)))))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) /* same iter space */
        {
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_10 [i_0] [i_0] [i_2]);
            var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0])) <= (var_0)));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
        {
            arr_17 [i_0] [i_0] = ((/* implicit */signed char) (unsigned char)255);
            /* LoopSeq 2 */
            for (signed char i_4 = 3; i_4 < 11; i_4 += 4) 
            {
                arr_21 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (+((+(((/* implicit */int) (signed char)0))))));
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (+(arr_16 [i_0] [i_0]))))));
            }
            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(arr_13 [(unsigned short)6]))))));
                arr_24 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_23 [i_5] [i_0])) / (((/* implicit */int) arr_23 [i_0] [(short)12]))));
            }
        }
        arr_25 [6LL] |= ((/* implicit */unsigned short) (~(((/* implicit */int) var_5))));
    }
    var_22 = ((/* implicit */short) var_5);
}
