/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121158
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 8; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(841420842138929444LL)))) ? (841420842138929450LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) var_6))))))))) ? (((/* implicit */int) max((((short) arr_4 [i_0])), (min((((/* implicit */short) (signed char)64)), (arr_1 [(short)4])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 - 3] [i_1 + 1])) && ((!(((/* implicit */_Bool) var_17)))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 7; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))), (((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) arr_4 [i_1 - 2])) : (((/* implicit */int) arr_2 [i_0]))))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_3 [(unsigned char)6])) | (((/* implicit */int) arr_1 [i_3])))) & ((~(((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_3])) ? (arr_5 [i_0] [i_2 + 1] [i_2 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 1] [i_2 + 3])))))));
                            arr_13 [i_0] [i_0] = ((/* implicit */unsigned char) arr_12 [i_2]);
                            var_19 = ((/* implicit */int) (~(min((var_3), (((/* implicit */unsigned long long int) arr_11 [i_1 - 1] [i_2 + 2] [i_2 - 1] [i_2 + 3] [i_1 - 1] [i_3]))))));
                            arr_14 [i_0] = ((/* implicit */_Bool) ((short) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0]))))), (max((((/* implicit */unsigned int) arr_9 [8LL] [i_2 + 1] [i_3])), (var_8))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_4 = 3; i_4 < 17; i_4 += 2) 
    {
        for (int i_5 = 1; i_5 < 17; i_5 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_19 [i_4] [i_4])), (min((((/* implicit */long long int) arr_20 [i_5 - 1] [i_5 - 1] [i_5 + 1])), (arr_18 [i_4 + 1])))));
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_3))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 18; i_10 += 2) 
                        {
                            {
                                arr_35 [i_4] [i_5 + 1] [i_5 + 1] [0LL] [i_9] [i_10] = ((/* implicit */_Bool) (-(((/* implicit */int) var_14))));
                                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_4] [i_5] [i_8] [(_Bool)0] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-841420842138929444LL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (short)-17212))))) : (min((((/* implicit */long long int) arr_21 [i_9] [i_8])), (841420842138929450LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_9))))));
                                arr_36 [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_4]))) & (arr_30 [i_10] [i_4] [i_4] [i_4 - 2])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
