/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162948
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
    for (short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_11 [i_0] [i_1 - 1] [i_3 + 2] = ((((/* implicit */_Bool) min((arr_3 [i_2 - 1] [i_2 - 1] [i_2 + 1]), (arr_3 [i_2 - 1] [i_2 - 1] [i_2 + 1])))) ? (max((arr_3 [i_2 - 1] [i_2 - 1] [i_2 + 1]), (arr_3 [i_2 - 1] [i_2 - 1] [i_2 + 1]))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)38931))))));
                            arr_12 [i_1 + 1] = ((/* implicit */short) (~((-(arr_6 [i_3 + 2])))));
                            var_14 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)-27228)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2 + 3])) && (((/* implicit */_Bool) arr_0 [i_2 + 2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2 + 1])))))));
                            arr_13 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)126)) | (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((arr_10 [i_3] [i_2 + 1] [i_1] [i_0] [i_0]) / (((/* implicit */long long int) arr_6 [i_2]))))))) ? (min((-5290392167646255709LL), (((/* implicit */long long int) (~(arr_9 [i_0] [i_1 - 1] [i_2 + 2] [i_3] [i_0] [i_2 + 2])))))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) 2072300862U)) ? (((/* implicit */int) var_5)) : (var_1))))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-27249)) & (((/* implicit */int) arr_5 [i_1 + 1] [i_1] [i_1 + 1] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)178))) <= (arr_9 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (short)32767)))))))) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 1254601129432781795LL)) >= (0ULL)))) < ((~(arr_2 [i_0] [i_0] [7]))))))));
                /* LoopNest 2 */
                for (signed char i_4 = 2; i_4 < 12; i_4 += 3) 
                {
                    for (short i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        {
                            arr_21 [4U] [i_4] [i_1] [i_4 - 2] [i_5] = var_1;
                            arr_22 [i_4] [i_5] = ((/* implicit */short) arr_19 [i_1] [i_4] [i_1] [i_5] [4LL]);
                            var_16 ^= ((/* implicit */long long int) ((int) ((signed char) arr_3 [i_5] [i_4] [i_0])));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (unsigned char)126))) ? (((/* implicit */int) (unsigned char)196)) : (((1240794617) / (((/* implicit */int) (unsigned char)126))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) (~((~(((/* implicit */int) var_0))))));
    var_19 ^= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) var_3)))))));
}
