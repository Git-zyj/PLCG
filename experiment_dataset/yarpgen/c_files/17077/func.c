/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17077
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) var_7);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_0])) ^ (arr_4 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (2147483647) : (((/* implicit */int) arr_2 [i_0] [i_1])))) : (((/* implicit */int) arr_1 [i_0]))));
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)0);
            /* LoopSeq 3 */
            for (long long int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                var_21 = ((/* implicit */long long int) ((arr_6 [i_2] [i_2 - 1] [i_2 - 1]) ? (arr_7 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) arr_0 [i_0]))));
                var_22 *= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_10)))));
                var_23 = ((/* implicit */long long int) ((unsigned long long int) arr_6 [(signed char)16] [i_2] [i_2 + 1]));
                arr_8 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_7 [i_0] [(_Bool)1] [i_2]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))))))));
                arr_9 [i_0] [3LL] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_4 [i_0] [i_0] [8])))) ? (((/* implicit */unsigned int) -873563479)) : (arr_7 [i_0] [(short)11] [(short)11])));
            }
            for (short i_3 = 2; i_3 < 15; i_3 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    for (short i_5 = 3; i_5 < 16; i_5 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) (+(3971301456803485278LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -7385092837063796097LL)))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (var_5)))));
                            arr_18 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (signed char)89);
                        }
                    } 
                } 
                var_25 = ((/* implicit */signed char) (~(((((/* implicit */long long int) var_4)) / (var_5)))));
            }
            for (short i_6 = 2; i_6 < 15; i_6 += 2) /* same iter space */
            {
                arr_21 [i_6] [i_6] [i_6] |= ((/* implicit */unsigned short) ((7896861328107145510LL) != (((((/* implicit */_Bool) 114290459)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) (-2147483647 - 1)))))));
                arr_22 [i_0] [i_0] [i_0] [7U] = ((/* implicit */short) ((unsigned long long int) (unsigned short)9244));
                var_26 = ((/* implicit */short) (~(((/* implicit */int) arr_15 [i_6] [i_6] [i_6] [i_6 - 2] [i_6] [i_6] [i_6]))));
            }
            arr_23 [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) var_18)) == (arr_7 [i_0] [i_0] [i_0])));
        }
    }
    var_27 = ((/* implicit */unsigned char) var_6);
}
