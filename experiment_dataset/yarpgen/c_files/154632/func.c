/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154632
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
    var_18 = ((/* implicit */long long int) min((var_18), (var_1)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((max((((/* implicit */unsigned int) (unsigned short)27814)), (min((3103319001U), (((/* implicit */unsigned int) (unsigned short)12714)))))) - (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-99))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -157952825990836072LL)) ? (-157952825990836068LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
            /* LoopSeq 2 */
            for (unsigned int i_2 = 4; i_2 < 20; i_2 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (-(557393388U)))) ? (((-157952825990836083LL) | (arr_0 [11LL]))) : (((/* implicit */long long int) ((var_13) & (((/* implicit */int) (signed char)0))))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */int) ((arr_0 [i_0 - 1]) == (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_1 - 4] [i_0])))));
            }
            for (unsigned int i_3 = 4; i_3 < 20; i_3 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned long long int) (+(-2051099229)));
                arr_9 [i_0] [i_0] [i_1 - 3] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)198);
                arr_10 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) > (((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0]))));
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    var_23 ^= ((/* implicit */unsigned int) (-(arr_2 [(short)19] [i_3 - 2] [i_3 - 3])));
                    var_24 = ((/* implicit */unsigned long long int) ((((unsigned int) var_17)) << (((/* implicit */int) ((arr_11 [i_0] [i_0] [i_1] [i_3 - 3] [i_4]) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
                }
            }
            arr_15 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_0 + 4] [i_0 + 4] [i_0]))));
        }
        arr_16 [i_0] = ((/* implicit */signed char) max(((~(((/* implicit */int) (short)-21771)))), (1670928663)));
        var_25 = ((/* implicit */int) (-(max((((/* implicit */long long int) ((((/* implicit */int) var_14)) * (((/* implicit */int) arr_1 [i_0]))))), (var_7)))));
    }
}
