/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144505
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
    var_19 = ((/* implicit */int) var_6);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) max((max((((/* implicit */long long int) var_1)), (arr_0 [i_0]))), (((-1069732374273878369LL) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-13803)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13786))) : (468531405U))))))));
        arr_3 [i_0] = ((/* implicit */long long int) (unsigned short)0);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_10)), ((((+(((/* implicit */int) (unsigned short)65535)))) / (((/* implicit */int) var_6))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-13774)), (var_14)))) ? (max((((((/* implicit */_Bool) 1993583364)) ? (var_12) : (var_14))), (((/* implicit */unsigned int) ((var_17) / (((/* implicit */int) var_18))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)65323)), (var_13)))) ? (min((-1060026656), (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            {
                arr_11 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (short)13796)) : (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) (short)13331)) ? (((/* implicit */long long int) var_1)) : (5623870362963089300LL)))));
                arr_12 [i_1] [i_2] [i_2] = ((/* implicit */_Bool) (unsigned short)65535);
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        {
                            arr_18 [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((((/* implicit */int) (short)32767)) - (32749)))))) ? (var_17) : ((+(((/* implicit */int) var_6))))))) / (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)34))) ^ (1966837701U)))));
                            arr_19 [i_4] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((((/* implicit */long long int) arr_8 [i_3])) == (var_13))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) ((-5623870362963089280LL) != (((/* implicit */long long int) 1895614539))))))))) * (min((((/* implicit */long long int) var_8)), (((7754134870212707784LL) / (((/* implicit */long long int) var_1))))))));
                            arr_20 [i_1] [i_2] [i_1] [i_3] [i_2] [i_3] = ((/* implicit */int) max((((min((var_12), (((/* implicit */unsigned int) -1993583368)))) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))))), (max((((/* implicit */unsigned int) ((144215094U) != (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), ((~(arr_8 [i_1])))))));
                            arr_21 [i_1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-57)) / (((/* implicit */int) (short)-16213))))) != (var_11)));
                        }
                    } 
                } 
                arr_22 [i_2] [i_2] [(_Bool)1] = ((/* implicit */short) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60334))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (-(1060026655)))) : (arr_15 [i_1] [i_1] [i_1] [i_2])))));
                arr_23 [(short)16] [13LL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_7 [i_1])) : (arr_16 [i_2] [i_1] [i_2] [i_1] [i_1] [i_1]))))));
            }
        } 
    } 
}
