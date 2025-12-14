/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107991
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
    var_17 = ((/* implicit */unsigned short) var_0);
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_12 [i_3] [i_2] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (((((((_Bool)1) || (((/* implicit */_Bool) arr_11 [i_2] [i_1] [i_2] [i_3])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_1] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_2] [i_1])) - (((/* implicit */int) arr_0 [i_2] [i_1]))))) : (((var_6) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_2])) : (((((/* implicit */_Bool) var_11)) ? (arr_5 [i_0]) : (((/* implicit */unsigned long long int) var_8))))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
                            arr_14 [i_0] [i_2] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)48))) < (6925937419908662227ULL)));
                            var_19 = ((/* implicit */unsigned long long int) min(((+(arr_1 [i_2]))), (((((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_1 [i_0])))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_2 [i_3]) * (((/* implicit */int) var_9))))))))) <= (var_3))))));
                        }
                    } 
                } 
                arr_15 [i_1] [(_Bool)1] = ((((/* implicit */int) var_11)) | (((/* implicit */int) var_7)));
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    var_21 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4] [i_1] [i_1])) ? (arr_6 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (min((((/* implicit */long long int) var_6)), (min((-6572226216288994102LL), (((/* implicit */long long int) (short)-24017)))))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_1] [i_0] [i_4]))));
                }
            }
        } 
    } 
}
