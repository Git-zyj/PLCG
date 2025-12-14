/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161760
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9))))) ? ((~(((/* implicit */int) (!(var_13)))))) : (((/* implicit */int) min(((unsigned short)65535), ((unsigned short)0))))));
    var_18 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */int) (short)31474)) : (((/* implicit */int) (unsigned char)172))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), ((unsigned short)65535)))) : (((((/* implicit */_Bool) 8262460132290010978LL)) ? (((/* implicit */int) (unsigned short)65528)) : (((/* implicit */int) (unsigned char)59))))))), (4204080304U)));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    arr_9 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_8)))));
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_0))));
                    arr_10 [i_2] = ((/* implicit */unsigned int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_1]))))), (min((arr_7 [i_0] [i_0] [i_1] [i_2]), (((/* implicit */signed char) var_11))))));
                }
                for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_4] = ((unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) == (var_8))))));
                        arr_16 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 4445730799314478964LL)))))));
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-18962)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 - 1]))))) == (8491140942642034345LL))))));
                        arr_20 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((arr_5 [i_0 - 1] [i_5]) << ((((~(33538048U))) - (4261429233U)))));
                        var_21 = ((/* implicit */long long int) ((unsigned long long int) arr_3 [i_0 - 1]));
                    }
                    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) ((int) arr_13 [i_6] [i_1]))), (max((((/* implicit */long long int) (unsigned short)0)), (arr_22 [i_0] [i_0] [i_1] [i_3] [i_1] [i_6]))))) == (arr_6 [i_6] [i_0] [i_0])));
                        arr_24 [i_0] [i_1] [i_1] [i_0] = min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_1] [i_0] [i_3] [i_0]))) > (((unsigned int) arr_18 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))), (((((3447396811U) >> (((/* implicit */int) (unsigned short)0)))) >> (((/* implicit */int) (unsigned short)3)))));
                    }
                    arr_25 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) 4445730799314478964LL)) && (((/* implicit */_Bool) (unsigned short)7)))));
                }
                for (unsigned short i_7 = 1; i_7 < 18; i_7 += 3) 
                {
                    arr_28 [i_1] [i_1] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_2 [i_7 - 1])) ? (((/* implicit */int) arr_2 [i_7 - 1])) : (((/* implicit */int) arr_2 [i_7 + 1])))) : (((((/* implicit */int) arr_2 [i_7 + 1])) / (((/* implicit */int) (unsigned short)8))))));
                    var_23 += ((/* implicit */unsigned char) arr_8 [i_1]);
                }
                arr_29 [i_0] [i_0] = ((_Bool) (_Bool)1);
            }
        } 
    } 
    var_24 &= ((/* implicit */short) (!(((/* implicit */_Bool) var_7))));
}
