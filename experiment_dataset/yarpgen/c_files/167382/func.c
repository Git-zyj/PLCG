/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167382
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
    var_14 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)4700))) / (var_9))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [(unsigned short)16] [i_0] = ((/* implicit */unsigned char) var_9);
                arr_7 [1LL] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) var_10)))) * (min((((((/* implicit */_Bool) arr_0 [i_1 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [7] [i_0])))), ((-(((/* implicit */int) arr_0 [i_0]))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 18; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_0] [(signed char)5] [i_3] [i_2] = ((/* implicit */unsigned char) (unsigned short)60836);
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_1] [i_2] [i_1 + 1] [i_2]))) / (var_9))))) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1])))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_0])) * ((~(((/* implicit */int) ((unsigned char) arr_2 [(unsigned char)19] [i_2] [i_4])))))));
                                arr_19 [(unsigned char)11] [(unsigned char)11] [19LL] [(unsigned char)11] [i_2] [i_1] [i_3 + 1] = ((/* implicit */unsigned short) arr_12 [i_0] [(unsigned char)14] [i_4]);
                            }
                        } 
                    } 
                    arr_20 [3LL] [i_2] = ((/* implicit */unsigned int) (+(arr_11 [i_2] [i_2] [0LL])));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) (unsigned short)4682))))))));
                                arr_28 [i_0] [i_1] [1ULL] [i_5] [i_2] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_2])) ? (((/* implicit */unsigned long long int) ((((arr_16 [i_0] [i_1] [i_5] [i_5] [i_5]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_5] [(short)0]))))) * (((/* implicit */unsigned int) arr_25 [i_2] [i_2 - 1]))))) : (min((var_1), (((/* implicit */unsigned long long int) var_3))))));
                                var_18 = ((/* implicit */unsigned short) (~((+(var_3)))));
                            }
                        } 
                    } 
                    arr_29 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) * (((/* implicit */int) var_6)))) * (((/* implicit */int) arr_15 [(_Bool)1] [i_1] [14U] [i_1] [i_2]))))) * (min((((unsigned int) arr_9 [(_Bool)1] [(_Bool)1] [i_1 - 1] [i_2])), (((/* implicit */unsigned int) (unsigned char)200))))));
                    arr_30 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((-4504050096956018503LL) / (-4915138039951780530LL)));
                }
                arr_31 [i_0] = ((/* implicit */unsigned int) ((((unsigned long long int) min((var_1), (((/* implicit */unsigned long long int) arr_26 [i_0] [14LL]))))) * (((/* implicit */unsigned long long int) ((long long int) arr_14 [(unsigned char)1] [i_1 + 1] [i_1] [i_0] [i_1 + 1])))));
            }
        } 
    } 
}
