/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104234
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_5 [i_0]))) ? (arr_5 [i_3]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) arr_5 [i_1])))))));
                            /* LoopSeq 1 */
                            for (int i_4 = 1; i_4 < 21; i_4 += 4) 
                            {
                                var_11 += ((/* implicit */short) arr_12 [i_0] [i_0] [i_0] [(signed char)16] [i_0]);
                                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (-2147483647 - 1)))));
                                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (~((((+(arr_13 [i_4] [i_3] [i_3] [(unsigned short)7] [i_1] [(_Bool)1]))) << (((((/* implicit */int) var_8)) - (39499))))))))));
                            }
                            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((min((((/* implicit */int) min((arr_4 [i_3] [i_2]), (((/* implicit */signed char) var_1))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])))))) - (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_0])))))));
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) ((unsigned short) arr_8 [i_1])))))))));
                            var_16 = (i_2 % 2 == zero) ? (((/* implicit */signed char) ((((arr_6 [i_2] [i_2] [i_0]) + (9223372036854775807LL))) << (((((min((min((var_3), (((/* implicit */long long int) arr_8 [i_2])))), (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_2])) < (arr_5 [i_0])))))) + (125LL))) - (17LL)))))) : (((/* implicit */signed char) ((((arr_6 [i_2] [i_2] [i_0]) + (9223372036854775807LL))) << (((((((min((min((var_3), (((/* implicit */long long int) arr_8 [i_2])))), (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_2])) < (arr_5 [i_0])))))) + (125LL))) - (17LL))) - (44LL))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_2 [i_0])), (min((((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_1]))))), (max((arr_3 [i_1]), (((/* implicit */long long int) arr_9 [(signed char)16] [i_1]))))))));
                var_18 = ((/* implicit */signed char) max((min((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0] [i_1])) > (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_1] [i_1] [(_Bool)1] [i_1]))))), (arr_3 [i_1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)166)))))) || (((/* implicit */_Bool) max((arr_13 [i_1] [(signed char)16] [(short)11] [i_0] [(short)11] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)34344))))))))));
                arr_14 [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */short) min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_5])) * (((/* implicit */int) arr_19 [8LL])))) : ((~(((/* implicit */int) (short)-21003)))))), (((/* implicit */int) max((((/* implicit */short) ((arr_18 [i_5] [i_7]) != (var_0)))), (arr_11 [i_6] [i_6] [i_6] [i_6] [4LL] [i_5] [i_5]))))));
                    arr_22 [i_6] [i_7] = ((/* implicit */unsigned char) arr_9 [i_6] [i_7]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) max((min((((/* implicit */long long int) ((_Bool) var_4))), (max((((/* implicit */long long int) var_1)), (var_3))))), (((/* implicit */long long int) ((var_9) ^ (((/* implicit */int) min((var_4), (var_4))))))))))));
}
