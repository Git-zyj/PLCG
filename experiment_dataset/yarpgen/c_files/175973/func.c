/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175973
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_10 = ((/* implicit */unsigned long long int) ((signed char) max((var_7), (((/* implicit */unsigned char) var_3)))));
                        var_11 |= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3] [i_3] [i_3] [i_0] [i_3] [i_3]))) * (1U))));
                        arr_9 [i_0] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_3]))) != (arr_3 [i_0] [i_1] [i_2]))) && ((!(arr_6 [i_0] [i_0] [i_0] [i_0])))));
                        var_12 = ((/* implicit */unsigned char) (-(0U)));
                        var_13 = ((/* implicit */int) max((var_13), (min((((int) 1933356343U)), ((~(((/* implicit */int) (unsigned short)13462))))))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_14 = ((((/* implicit */_Bool) (short)4267)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4] [i_0]))) : (((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned int) var_1)))));
                        arr_12 [i_0] [i_1] [(unsigned short)5] [i_4] = ((/* implicit */unsigned long long int) var_3);
                    }
                    for (unsigned int i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        var_15 = ((/* implicit */unsigned short) max((12582912U), (((/* implicit */unsigned int) min((var_8), (((/* implicit */unsigned short) var_2)))))));
                        var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_5 - 1]))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        arr_17 [i_0] [i_0] [i_1] [i_2] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(4294967295U)))) ? (min((((/* implicit */unsigned int) var_7)), (arr_4 [i_1] [i_2] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_0]), ((unsigned char)216)))))))) ? (((/* implicit */int) arr_0 [i_0])) : ((((!(((/* implicit */_Bool) arr_11 [i_0] [i_0])))) ? (((/* implicit */int) arr_6 [(_Bool)1] [i_1] [i_2] [i_2])) : (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) (signed char)2))))))));
                        arr_18 [i_0] [i_0] [(unsigned char)10] [(signed char)3] [i_0] [i_0] &= ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6] [(unsigned short)12] [8] [2] [i_0]))) > (arr_16 [i_0] [8U] [i_2] [i_6] [i_6]));
                        var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) min((arr_3 [(_Bool)1] [i_2] [i_6]), (((/* implicit */unsigned long long int) var_3))))))));
                    }
                    var_18 = ((/* implicit */int) max((arr_5 [i_0] [i_1] [i_1]), (((_Bool) arr_13 [i_0] [i_1] [7LL] [i_2] [i_2] [i_2]))));
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_2])) ? (arr_3 [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_2])) ? (max((((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_1] [i_1] [(unsigned short)1])), (var_5))) : (((/* implicit */int) (!(var_9)))))) : (((/* implicit */int) var_6)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) max((var_6), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(var_1)))))))));
}
