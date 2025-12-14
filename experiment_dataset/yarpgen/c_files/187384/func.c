/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187384
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (min((((/* implicit */int) ((var_4) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7)))))), (var_10))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)32754)), ((unsigned short)41544))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_13 = max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_2]))))), ((~(arr_5 [i_0 + 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */int) (unsigned char)90)) : ((-(((/* implicit */int) arr_10 [19LL] [i_0 + 1] [i_4] [i_3 - 1] [i_1] [i_2]))))));
                                var_14 = ((/* implicit */int) ((max((arr_5 [i_0 + 1]), (((/* implicit */unsigned int) var_7)))) / (((((/* implicit */_Bool) arr_5 [i_0 + 1])) ? (arr_5 [i_0 + 1]) : (arr_5 [i_0 + 1])))));
                                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_5))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */long long int) (unsigned char)90);
                }
                /* LoopSeq 1 */
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    var_16 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (unsigned char)165)))) < (((((/* implicit */_Bool) ((int) (unsigned char)94))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) arr_2 [i_0] [i_1] [i_5]))))));
                    var_17 = ((/* implicit */unsigned char) var_10);
                }
                var_18 &= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((var_11) + (307825854)))))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1]))) : (((var_9) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-43)))))))));
            }
        } 
    } 
    var_19 = var_1;
    var_20 += ((/* implicit */unsigned int) (-(var_1)));
}
