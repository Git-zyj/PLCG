/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17432
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
    var_16 = ((/* implicit */unsigned int) var_9);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (int i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_2] [i_0 + 3])) ? (arr_6 [i_4] [i_4 - 1] [i_1] [i_0 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_2 [i_2] [i_3])))))) >= ((-(arr_6 [(signed char)3] [i_1] [i_2] [i_2])))));
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) arr_5 [i_4 - 2] [i_0]))), ((~(((/* implicit */int) arr_5 [i_0 - 1] [i_0])))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) max(((~(((/* implicit */int) arr_12 [i_0 + 3] [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1])))), (((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_1]))))) ? (max((arr_8 [i_1]), (((/* implicit */int) arr_5 [i_1] [i_0])))) : (((/* implicit */int) arr_0 [i_0 + 4] [i_0 + 2])))))))));
                /* LoopNest 3 */
                for (signed char i_5 = 2; i_5 < 13; i_5 += 3) 
                {
                    for (unsigned char i_6 = 1; i_6 < 14; i_6 += 2) 
                    {
                        for (int i_7 = 2; i_7 < 12; i_7 += 3) 
                        {
                            {
                                arr_23 [(unsigned char)11] [i_7] [11ULL] [i_5] [i_6 - 1] [i_7 + 2] = ((/* implicit */unsigned long long int) (+((+((-(((/* implicit */int) arr_14 [i_7] [i_6] [i_5 + 2] [i_1] [(unsigned char)12]))))))));
                                var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) (unsigned char)255))) > ((-(((/* implicit */int) (unsigned char)8))))));
                                var_21 = ((/* implicit */unsigned char) (+((-(((((/* implicit */_Bool) arr_15 [i_7 - 2] [i_6 + 1] [i_5 - 1] [i_0])) ? (arr_20 [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_7])))))))));
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (-((((+(((/* implicit */int) arr_22 [(unsigned char)2])))) + (((/* implicit */int) arr_11 [i_5 + 2] [i_6 + 1] [i_6 - 1])))))))));
                                arr_24 [i_7] = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) arr_16 [i_1] [i_5 + 2] [i_6 + 1])), (max((arr_6 [i_7] [i_6 + 1] [(unsigned char)4] [11]), (((/* implicit */unsigned long long int) arr_3 [i_0 + 4]))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_8 = 4; i_8 < 12; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        {
                            var_23 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_5 [i_8] [i_0]) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_1] [(unsigned char)0])) : (((/* implicit */int) arr_25 [i_1])))) ^ ((~(((/* implicit */int) arr_15 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_9]))))))) ? (((/* implicit */unsigned int) (-(arr_17 [i_0 + 2] [i_8 - 4] [i_8 + 2])))) : (((unsigned int) ((int) arr_21 [i_0] [i_9])))));
                            var_24 = ((/* implicit */_Bool) arr_3 [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
