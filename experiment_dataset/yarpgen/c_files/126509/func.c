/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126509
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
    var_14 = max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) == (max((var_4), (((/* implicit */unsigned long long int) var_9))))))), (var_3));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_8 [(signed char)12] [i_1] [i_0] = ((/* implicit */unsigned int) ((long long int) (_Bool)0));
                /* LoopNest 2 */
                for (unsigned char i_2 = 3; i_2 < 12; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                            {
                                arr_17 [i_2] [0LL] [i_2] = ((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned short)65535))));
                                arr_18 [i_4] [i_2] [(unsigned short)1] [i_2] [i_1] [i_2] [7U] = ((/* implicit */int) ((unsigned long long int) min((((/* implicit */long long int) var_9)), (arr_3 [i_2 - 2]))));
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 0; i_5 < 13; i_5 += 3) 
                            {
                                var_15 = ((/* implicit */short) ((arr_3 [i_2 + 1]) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 - 3] [i_2] [i_2 - 1])))));
                                var_16 *= ((/* implicit */unsigned long long int) (~(arr_10 [i_2 - 2] [i_2 - 1] [i_2 - 3])));
                                arr_21 [i_1] [6ULL] [i_1] [i_3] [i_1] [4ULL] &= ((/* implicit */unsigned long long int) ((_Bool) arr_19 [i_0] [(unsigned char)5] [i_3]));
                                var_17 = ((/* implicit */short) ((long long int) arr_10 [i_2 - 1] [i_1] [i_2]));
                            }
                            arr_22 [i_2] [i_1] [i_2] [i_2 - 3] [8U] [i_3] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 - 1]))) / (arr_13 [i_2 - 2] [i_1]))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) ((long long int) arr_7 [i_0] [(_Bool)1] [i_1])))))))));
                var_19 += ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [(signed char)6]))))), (((unsigned int) ((((/* implicit */_Bool) -1156458487)) || (((/* implicit */_Bool) (unsigned short)16384)))))));
                arr_23 [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (1837767511)));
            }
        } 
    } 
}
