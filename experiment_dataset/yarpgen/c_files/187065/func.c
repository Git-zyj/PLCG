/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187065
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
    for (signed char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_4 [(unsigned short)6] |= ((/* implicit */unsigned short) min((((0ULL) / (18446744073709551611ULL))), (((/* implicit */unsigned long long int) ((unsigned int) arr_2 [0LL])))));
                var_12 *= ((/* implicit */_Bool) ((unsigned short) ((arr_2 [(unsigned char)0]) ? (arr_3 [(unsigned char)12] [(unsigned char)12]) : (((/* implicit */unsigned int) arr_0 [i_0 + 1] [i_0 + 1])))));
                var_13 |= ((/* implicit */int) ((unsigned long long int) arr_3 [12] [i_1]));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */long long int) (+(var_2)));
                            var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 + 2])))) - (((/* implicit */int) ((short) arr_0 [(short)12] [i_3])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            {
                arr_16 [i_4] [i_5] = ((/* implicit */unsigned char) ((unsigned long long int) (~(12751216408939880721ULL))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    for (int i_7 = 4; i_7 < 18; i_7 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_14 [i_4] [(signed char)16]))));
                            arr_21 [i_4] [i_4] [i_6] [i_6] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_15 [i_4]))) ^ (min((arr_15 [i_4]), (arr_15 [i_4])))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_18 [i_4] [i_4] [i_5] [i_4]))) ? (((long long int) arr_18 [i_4] [i_4] [i_5] [i_5])) : (max((((/* implicit */long long int) ((_Bool) arr_15 [i_4]))), (((long long int) (_Bool)1))))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) ((short) ((short) arr_13 [i_4])))) : (((((/* implicit */_Bool) arr_20 [i_4] [i_8 - 2] [i_8] [i_4])) ? (((/* implicit */int) arr_20 [i_9] [i_8 + 1] [i_9] [i_4])) : (((/* implicit */int) arr_20 [i_4] [i_8 + 3] [i_8 + 1] [i_4]))))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_4] [(short)13] [i_8 - 1] [i_9])) ? ((-(((/* implicit */int) arr_24 [i_4] [i_8 + 3] [i_4] [i_4])))) : (((/* implicit */int) ((short) (unsigned char)2)))));
                            var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_26 [i_9] [i_8 + 1] [3] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4] [i_5] [i_4] [(unsigned char)16]))) : (arr_14 [(short)8] [(short)8]))), (((/* implicit */unsigned long long int) var_11))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [(_Bool)0] [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_25 [2LL] [2LL] [2LL] [i_4])) : (((/* implicit */int) var_7))))) * ((-(arr_14 [i_5] [0ULL]))))) : (arr_22 [10ULL] [10ULL])));
                            arr_27 [i_4] [i_4] [i_4] [i_9] = ((/* implicit */short) arr_22 [i_4] [i_8 - 2]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_4);
}
