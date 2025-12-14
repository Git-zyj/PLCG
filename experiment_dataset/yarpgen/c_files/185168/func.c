/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185168
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
    var_17 = ((unsigned int) var_12);
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))), (var_1)));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_15) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -389151324)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) -389151330)) : (7U)))))) && ((((-(((/* implicit */int) var_5)))) < (((/* implicit */int) (signed char)10))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_20 ^= ((/* implicit */unsigned int) (~(-389151330)));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((unsigned int) 2899297576534337905LL)))));
                            arr_14 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */long long int) min((((/* implicit */int) (signed char)-7)), ((~(((/* implicit */int) arr_10 [i_0] [i_2] [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_0]))))));
                            arr_15 [i_0] [i_0] [i_2 - 1] [i_0] = ((/* implicit */int) max((((arr_9 [i_0] [i_0] [i_0] [i_0]) % (arr_9 [i_0] [i_0] [i_2 + 3] [i_3]))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (signed char)88)), ((unsigned short)6416))))));
                            var_22 = ((signed char) var_5);
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                            {
                                var_23 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_2 - 2] [i_2 + 1])), (((((/* implicit */_Bool) arr_12 [i_0] [(unsigned short)1] [i_2] [i_3] [i_4])) ? (arr_17 [i_1] [i_0] [i_3] [(signed char)11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_0] [i_0]))))))) | (((/* implicit */unsigned long long int) (~(var_15))))));
                                var_24 = ((/* implicit */unsigned short) var_4);
                                arr_18 [i_3] [i_0] [i_3] [(_Bool)0] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) arr_9 [i_0] [i_0] [i_2] [i_3])) % (arr_4 [i_2] [i_2] [i_0])))))) ? (max((arr_17 [i_4] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [(signed char)12] [i_3]))) < (arr_6 [i_2] [i_2] [i_1])))), (arr_9 [i_0] [i_0] [10] [(short)8]))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
