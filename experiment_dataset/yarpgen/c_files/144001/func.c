/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144001
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
    var_10 = ((/* implicit */short) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) var_4)))))))), (((unsigned char) (short)-25554))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (((((+(arr_4 [i_0] [i_1]))) <= (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))))) ? (min((((/* implicit */long long int) max((((/* implicit */unsigned char) var_2)), (var_9)))), (max((((/* implicit */long long int) var_5)), (arr_3 [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? (arr_3 [i_0 - 1] [i_0 - 1]) : (arr_3 [i_0 - 1] [i_0 - 1])))));
                var_11 ^= ((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */short) ((((/* implicit */int) arr_1 [i_1])) >= (((/* implicit */int) (signed char)91))))), (arr_0 [i_1] [i_1])))), (min((((long long int) var_1)), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1])))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (short i_3 = 3; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [(unsigned char)2] [i_0] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_3 [i_2] [i_0]))));
                            var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (~(((/* implicit */int) min((arr_2 [i_2] [i_3]), (arr_1 [i_0 - 1])))))))));
                            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) max(((-(arr_4 [i_2] [i_2]))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_7 [i_0] [i_3 - 3] [i_1])), ((((_Bool)1) ? (((/* implicit */int) arr_1 [15LL])) : (((/* implicit */int) (signed char)-32))))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_4 = 4; i_4 < 24; i_4 += 2) 
    {
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_18 [i_5] [(signed char)11] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_15 [i_4] [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_12 [i_5]))))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_4] [i_5] [i_4])))))));
                    arr_19 [i_4] [i_5] [i_6] [i_5] = ((/* implicit */signed char) max((min((arr_16 [3LL] [i_4 - 1] [3LL]), (arr_16 [i_4] [i_4 - 4] [(unsigned short)16]))), (((/* implicit */long long int) max((arr_12 [i_4 - 3]), (((/* implicit */unsigned char) (_Bool)1)))))));
                }
            } 
        } 
    } 
}
