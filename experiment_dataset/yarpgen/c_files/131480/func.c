/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131480
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
    var_18 = ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                            {
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [(short)2] [(unsigned short)0] [(signed char)7]))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (916791465)))))))) ? (((((/* implicit */_Bool) (+((-2147483647 - 1))))) ? (arr_6 [i_1] [7U] [7U]) : (((/* implicit */unsigned long long int) arr_2 [i_0])))) : (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))) <= (var_9)))))));
                                var_20 = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [(unsigned short)9] [3])) : (((/* implicit */int) arr_8 [9] [i_4] [(short)0] [i_4] [i_4] [i_4]))))) / ((+(288230376149614592ULL)))))));
                            }
                            var_21 = ((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) (((~(((/* implicit */int) var_7)))) == (((/* implicit */int) var_6)))))));
                            var_22 = max((((((/* implicit */_Bool) arr_6 [i_1] [i_1] [3])) ? (max((var_5), (((/* implicit */long long int) (short)-1885)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_0])))))), (((/* implicit */long long int) var_1)));
                            var_23 = ((/* implicit */unsigned char) min(((~(arr_11 [i_0] [i_1] [i_2] [i_1] [i_0]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_12 [(short)1] [i_1] [i_0])) || (((/* implicit */_Bool) arr_3 [i_0]))))))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (((~(((/* implicit */int) (signed char)47)))) * (((/* implicit */int) (((-2147483647 - 1)) >= (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1] [3U] [i_1])))))))), (((min((arr_11 [i_0] [i_0] [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])))) << (((((/* implicit */int) (signed char)-47)) / (((/* implicit */int) arr_3 [i_0])))))))))));
            }
        } 
    } 
    var_25 *= ((/* implicit */unsigned long long int) var_14);
}
