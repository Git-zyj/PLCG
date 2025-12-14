/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124279
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned char) arr_0 [i_0]);
                var_14 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_1 [i_0]))))));
                arr_6 [i_0] [i_0] = max((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) min((((/* implicit */short) arr_4 [i_0])), (arr_1 [i_0]))))))), ((~(arr_2 [(_Bool)1] [i_0] [i_0]))));
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_3 [i_1] [i_1]))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 24; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] = ((/* implicit */_Bool) (-((-(((/* implicit */int) arr_9 [i_0]))))));
                                arr_16 [i_0] [i_1] [i_1] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_4 + 1] [i_4 + 1] [i_4 - 1])) >> ((((+(arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) - (1960203769U)))))), (((((arr_5 [i_0] [i_0] [(_Bool)1]) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_0]))))) * (((/* implicit */long long int) (-(((/* implicit */int) arr_11 [20U] [(unsigned short)5] [i_2])))))))))) : (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_4 + 1] [i_4 + 1] [i_4 - 1])) >> ((((((+(arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) - (1960203769U))) - (809721522U)))))), (((((arr_5 [i_0] [i_0] [(_Bool)1]) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_0]))))) * (((/* implicit */long long int) (-(((/* implicit */int) arr_11 [20U] [(unsigned short)5] [i_2]))))))))));
                                var_16 *= ((/* implicit */unsigned long long int) max((max((arr_2 [i_0] [i_1] [i_2]), (arr_2 [i_0] [i_3] [i_2]))), ((~(((/* implicit */int) ((((/* implicit */int) arr_3 [i_3] [i_3])) == (((/* implicit */int) arr_7 [i_0] [i_3] [i_3])))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_29 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */signed char) max((arr_24 [i_6] [i_6] [(unsigned short)0]), ((~(arr_10 [i_5 + 1] [i_7 - 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])))));
                            var_17 += ((/* implicit */signed char) arr_17 [i_8] [i_7 - 2]);
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_28 [i_5] [i_5 + 1] [i_5 + 1] [(signed char)7]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(((/* implicit */int) ((var_4) < (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_11)), (var_9))))))))))));
    /* LoopNest 2 */
    for (signed char i_9 = 2; i_9 < 17; i_9 += 2) 
    {
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
        {
            {
                arr_35 [13ULL] = ((/* implicit */unsigned short) max((((arr_5 [i_10] [i_10 + 1] [i_10 + 1]) == (arr_5 [i_10] [i_10] [i_10 + 1]))), (((((/* implicit */int) arr_33 [i_9 + 2] [i_9 + 2])) == (((/* implicit */int) arr_7 [i_10 + 1] [i_9 - 2] [i_9 - 2]))))));
                var_20 = arr_34 [i_9 - 1] [i_9 - 1];
            }
        } 
    } 
}
