/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114473
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
    var_19 = ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)65535)))) ^ (((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) max(((unsigned short)8), (var_10)))) <= ((-(((/* implicit */int) var_4)))))))) : (var_8));
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    var_20 = ((/* implicit */unsigned int) ((min((((/* implicit */int) var_9)), (((((/* implicit */int) (unsigned short)6)) << (((((/* implicit */int) var_3)) + (27524))))))) | (((/* implicit */int) ((((/* implicit */_Bool) 14006607529490579872ULL)) || (((/* implicit */_Bool) arr_2 [i_0 - 3] [i_0 - 4])))))));
                    arr_8 [i_0 - 2] [i_1] [i_2] [i_0 - 2] = ((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned short)8)) - (2143289344)))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_21 = ((/* implicit */unsigned int) 0ULL);
                    arr_13 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned char) var_6));
                    arr_14 [i_0] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0 + 2] [(short)7])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_6 [i_1] [i_0 + 2] [i_3])));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) (signed char)-121);
                                arr_21 [i_3] [(unsigned char)10] [(signed char)11] [(signed char)11] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)8)) != (((/* implicit */int) var_5))))) : (((/* implicit */int) var_11))));
                                arr_22 [i_0 - 3] [i_1] [i_1] [i_4] [i_4] [i_5] = ((/* implicit */unsigned int) ((arr_6 [i_0 - 2] [i_0 - 3] [i_5 - 1]) > (arr_6 [i_0 - 3] [i_0 - 3] [i_5 + 2])));
                                var_23 = ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_16 [i_0] [i_3] [i_0] [i_5 + 2]))))));
                            }
                        } 
                    } 
                }
                arr_23 [i_0 - 1] = ((/* implicit */short) -3349155688884046259LL);
                arr_24 [i_0] [i_1] = ((/* implicit */signed char) var_8);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((unsigned long long int) var_9));
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(var_8))))))) - (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) min(((unsigned short)20065), (((/* implicit */unsigned short) var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))))));
    var_26 = ((/* implicit */signed char) var_14);
}
