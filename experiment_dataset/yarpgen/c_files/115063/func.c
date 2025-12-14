/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115063
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) max((((/* implicit */int) var_1)), (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_3])) ? (((int) arr_4 [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_1]))))));
                        var_19 &= ((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned short) (short)6161)), (arr_6 [i_0] [i_2] [(unsigned short)4]))))));
                        var_20 = ((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))));
                        var_21 |= ((/* implicit */unsigned short) ((unsigned int) arr_0 [i_3]));
                    }
                    var_22 = ((/* implicit */unsigned long long int) (~(max((max((arr_8 [i_0] [i_1] [i_1] [i_1]), (var_3))), (((/* implicit */unsigned int) max((arr_4 [(unsigned short)13] [(unsigned short)13] [i_1]), (((/* implicit */unsigned short) (short)6161)))))))));
                    arr_13 [i_1] [i_1] [i_2] = ((/* implicit */long long int) var_16);
                }
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(arr_2 [6U]))) / (arr_2 [20U])))) ? (min((((/* implicit */unsigned long long int) (!(arr_5 [(unsigned short)14] [(unsigned short)14])))), (((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (((/* implicit */unsigned long long int) var_6)) : (arr_2 [(_Bool)1]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0])))))));
    }
    var_23 += ((/* implicit */short) var_12);
    var_24 = ((/* implicit */short) max((((max((var_2), (((/* implicit */long long int) (unsigned short)26502)))) >> (((((/* implicit */int) min(((unsigned short)17738), (var_4)))) - (17685))))), (((long long int) (unsigned short)26855))));
    var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)26855))))) ? (48275112411278370ULL) : (0ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    var_26 += ((/* implicit */_Bool) (+(min((((unsigned long long int) (unsigned short)49318)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)17466)))))))));
}
