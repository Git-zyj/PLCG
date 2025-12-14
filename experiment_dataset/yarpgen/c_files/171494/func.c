/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171494
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
    var_13 = min((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) > (var_5))))))), (18302628885633695744ULL));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_14 |= ((/* implicit */short) (+(18302628885633695744ULL)));
                    arr_7 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) 144115188075855894ULL);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_3] [i_1] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (signed char)115))))));
                        arr_11 [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] = ((/* implicit */short) 144115188075855894ULL);
                        var_15 = ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-17))))) ? (18302628885633695729ULL) : (((/* implicit */unsigned long long int) arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])));
                        var_16 = ((/* implicit */signed char) var_11);
                        arr_12 [i_0] [i_3] [3U] [i_3] = ((/* implicit */long long int) var_2);
                    }
                    for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        arr_16 [i_0] [i_0] [i_0] [(short)5] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4] [i_1] [(unsigned short)2]))) == (67108863LL)))) - (((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_1 [i_0]) : (((/* implicit */int) arr_6 [i_0] [(unsigned char)9] [i_0] [(unsigned short)1]))))))));
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            var_17 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (((/* implicit */long long int) ((((arr_14 [i_5] [i_4] [i_2] [i_1 - 1] [i_0] [i_0]) + (2147483647))) << (((((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_1])) - (13212)))))) : (((var_0) | (((/* implicit */long long int) ((/* implicit */int) var_2)))))))), ((((~(var_5))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
                            arr_20 [i_0] [i_1 - 1] [i_2] [i_4] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) arr_2 [i_2])))) / (((/* implicit */int) (signed char)95))))) ? (18302628885633695744ULL) : (((/* implicit */unsigned long long int) arr_18 [i_1] [i_1] [i_5]))));
                        }
                        var_18 = ((/* implicit */_Bool) ((((long long int) (-(((/* implicit */int) (unsigned char)9))))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_1 - 1])) <= (((/* implicit */int) ((unsigned char) arr_4 [i_1])))))))));
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((arr_19 [i_0] [9LL] [i_1] [i_2] [i_2] [i_2]), (((/* implicit */unsigned char) arr_6 [i_0] [1ULL] [i_2] [(short)5])))))))) ? (max((min((18302628885633695744ULL), (((/* implicit */unsigned long long int) arr_1 [i_1])))), (((/* implicit */unsigned long long int) (unsigned char)246)))) : (((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [4ULL] [i_1] [i_4])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)160))) : (18302628885633695744ULL))) : (144115188075855894ULL))))))));
                    }
                }
            } 
        } 
    } 
}
