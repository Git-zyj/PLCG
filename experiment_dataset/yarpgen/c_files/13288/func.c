/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13288
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
    for (unsigned short i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) max(((~(arr_1 [i_0 + 1] [i_0 - 1]))), (((/* implicit */long long int) ((unsigned char) arr_1 [i_0 - 2] [i_0 + 1]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 13; i_1 += 3) /* same iter space */
        {
            var_17 += ((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((((/* implicit */int) arr_4 [(unsigned char)2] [i_0 + 1])) + (14719))) - (2)))));
            var_18 = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]);
            var_19 = arr_1 [i_1] [i_1];
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (+(arr_1 [i_1 + 1] [i_1 + 1]))))));
                arr_8 [i_0 + 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_6) : (((18446744073709551615ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
            }
            var_21 = ((/* implicit */_Bool) ((unsigned long long int) (short)22841));
        }
        for (short i_3 = 1; i_3 < 13; i_3 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */short) arr_6 [8ULL] [8ULL] [8ULL] [i_0]);
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    {
                        arr_17 [i_5] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1065843702)) && (((/* implicit */_Bool) ((short) ((arr_16 [i_0 - 2] [i_3] [i_4] [i_5]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_3]))) : (12820325479941228351ULL)))))));
                        var_23 = ((/* implicit */signed char) min((max((var_9), (((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0] [(signed char)0]))))))), (((/* implicit */short) arr_5 [(short)6] [(short)6]))));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_1))));
                    }
                } 
            } 
            arr_18 [i_0] [i_3] = ((/* implicit */unsigned char) max((((unsigned long long int) arr_13 [i_3] [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17621955933725990620ULL)) ? (((/* implicit */int) arr_10 [i_0] [i_3])) : (((/* implicit */int) max(((signed char)0), ((signed char)-9)))))))));
        }
        var_25 -= ((/* implicit */_Bool) max((((/* implicit */int) arr_4 [8ULL] [8ULL])), (((int) arr_14 [i_0 - 1] [i_0] [i_0 - 2] [i_0 - 1]))));
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_26 = ((/* implicit */unsigned char) arr_20 [3]);
        arr_21 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_6])) ? (arr_20 [i_6]) : (arr_20 [i_6])));
    }
    var_27 ^= var_3;
}
