/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125951
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 8548155968541743337LL)) ? (((/* implicit */int) ((unsigned short) (-9223372036854775807LL - 1LL)))) : (((/* implicit */int) (short)10527))));
                    arr_8 [i_2] [i_1] [(signed char)8] [i_0] = (unsigned char)224;
                    var_21 = ((/* implicit */unsigned short) ((short) 2841411071U));
                    var_22 = ((/* implicit */unsigned int) max((var_22), (4U)));
                    var_23 ^= ((/* implicit */short) ((((/* implicit */long long int) arr_4 [i_2])) / ((-9223372036854775807LL - 1LL))));
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (signed char)5)))) - (arr_12 [i_3] [i_1] [i_3] [i_3])));
                    /* LoopNest 2 */
                    for (long long int i_4 = 4; i_4 < 13; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_18 [i_3] [i_3] [(unsigned short)6] [i_4 - 1] [i_5] [i_3] = ((/* implicit */unsigned long long int) var_5);
                                var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)3840))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_10)))) | (var_1)));
                }
                /* vectorizable */
                for (short i_6 = 2; i_6 < 13; i_6 += 2) 
                {
                    var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) arr_10 [i_0] [i_0] [8ULL] [i_6]))));
                    var_28 = ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1]))) | (var_0));
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) -5847332153444766147LL))));
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [(unsigned char)6] [i_6]))) == (0U)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                }
                arr_22 [i_1] [(unsigned char)12] [i_0] = arr_21 [i_1];
                var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))) && (((/* implicit */_Bool) (~(1ULL))))));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) var_3))));
    var_33 = ((/* implicit */_Bool) ((unsigned int) var_17));
    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_18))))))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
}
