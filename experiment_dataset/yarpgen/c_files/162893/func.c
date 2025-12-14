/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162893
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) min(((+(var_8))), (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (min((995572226105431692ULL), (((/* implicit */unsigned long long int) (signed char)-88)))))))))));
        arr_3 [i_0] = ((/* implicit */short) ((unsigned char) min((((((/* implicit */_Bool) var_8)) ? (arr_2 [6U]) : (arr_1 [i_0]))), (((/* implicit */unsigned int) min((875384775), (((/* implicit */int) (signed char)127))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) (short)-31233)) ^ (((/* implicit */int) (signed char)-125))));
    }
    for (short i_1 = 3; i_1 < 23; i_1 += 1) 
    {
        var_16 ^= ((/* implicit */unsigned long long int) arr_7 [i_1] [(unsigned short)6]);
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_17 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) * (max((max((arr_8 [i_1] [8]), (((/* implicit */unsigned int) arr_9 [(unsigned short)12] [(signed char)18])))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_9 [i_1] [(unsigned char)10])), (var_11))))))));
            arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (var_8))), (((/* implicit */unsigned long long int) arr_7 [i_1 - 3] [i_1])))) < (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) arr_6 [i_2])), (arr_8 [i_1] [i_1]))), (((/* implicit */unsigned int) arr_7 [i_1] [i_1])))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_6 [i_1 - 2]))));
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            {
                                arr_20 [i_1] [i_3] [i_3] [19U] [i_1] = ((/* implicit */signed char) min((max((((((/* implicit */_Bool) arr_15 [i_1] [7] [21ULL] [(signed char)9])) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_5)))), (((/* implicit */int) var_6))));
                                arr_21 [i_3] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */signed char) ((((((/* implicit */int) max((var_5), (var_10)))) << (((((/* implicit */int) arr_12 [i_1] [i_1] [i_1 - 2])) - (42690))))) != (((/* implicit */int) arr_16 [(signed char)17] [i_4] [i_5 - 1] [i_6]))))) : (((/* implicit */signed char) ((((((/* implicit */int) max((var_5), (var_10)))) << (((((((/* implicit */int) arr_12 [i_1] [i_1] [i_1 - 2])) - (42690))) - (21360))))) != (((/* implicit */int) arr_16 [(signed char)17] [i_4] [i_5 - 1] [i_6])))));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((unsigned int) var_3)), (((/* implicit */unsigned int) ((signed char) arr_17 [i_1 - 2] [i_1 - 2] [(short)8] [i_1 - 2] [(signed char)18] [i_6] [i_6])))))) ? (((/* implicit */int) arr_12 [i_3] [i_1] [i_6])) : (((/* implicit */int) arr_19 [i_1 - 1] [i_3] [11U] [i_1] [i_6]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_20 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_1 - 3] [i_1] [i_1] [i_1 - 3])) ? (((int) (~(var_7)))) : (((/* implicit */int) ((signed char) ((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1] [12U] [i_1] [(unsigned short)20])))))))));
    }
    var_21 = ((/* implicit */unsigned int) var_1);
    var_22 = ((/* implicit */signed char) var_4);
}
