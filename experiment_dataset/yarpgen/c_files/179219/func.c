/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179219
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
    for (long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_3] [i_2] = ((/* implicit */short) (~(((/* implicit */int) ((signed char) arr_2 [i_0] [i_0 - 2])))));
                            arr_11 [i_0] [i_1] [i_0] [i_3] [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) min((arr_3 [i_1] [i_1]), (((/* implicit */unsigned char) (signed char)103))))) << (((var_8) - (4642645318089112501ULL))))), (((/* implicit */int) arr_3 [i_2] [i_0]))));
                            var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(short)8] [i_1])) && (((/* implicit */_Bool) (signed char)117)))))) : (var_4)))) : ((~(arr_8 [(short)3] [(signed char)8] [i_1] [(short)3] [i_3] [i_3])))));
                            var_12 = ((/* implicit */_Bool) var_5);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    var_13 ^= ((((/* implicit */long long int) ((((/* implicit */_Bool) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) (signed char)103)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)28151))))) * (min((((arr_9 [i_0] [i_0 - 1] [i_0] [i_0] [i_0]) ? (arr_8 [i_4] [i_4] [i_1] [i_1] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)28139))))), (((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_8 [i_0] [i_4] [i_1] [i_0] [i_0] [i_0]))))));
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1])) : (arr_4 [i_0 - 1]))) / (((((/* implicit */int) arr_0 [i_0 + 1])) ^ (-1479825785))))))));
                    var_15 ^= ((/* implicit */_Bool) var_5);
                }
                for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    var_16 &= (signed char)117;
                    arr_17 [i_0] = arr_1 [i_0 - 2];
                    arr_18 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) (signed char)123)))))) - (arr_16 [i_0] [(unsigned char)8] [i_1] [i_5])));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0])) && (((/* implicit */_Bool) min((var_6), (arr_15 [i_5] [i_1] [i_0 + 1]))))));
                }
                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37375)))))) ? (((/* implicit */int) (!(arr_9 [i_0] [i_0] [i_0 - 2] [i_0] [i_0 - 1])))) : ((-(((/* implicit */int) ((arr_9 [i_0 + 1] [i_1] [i_0] [i_0 + 1] [i_1]) && (((/* implicit */_Bool) var_5))))))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_2);
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(var_0)))), (((unsigned long long int) var_8))))) ? ((~(((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_0))))))) : ((~(((/* implicit */int) var_5))))));
    /* LoopNest 2 */
    for (short i_6 = 4; i_6 < 23; i_6 += 3) 
    {
        for (short i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            {
                arr_25 [i_7] = ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) (signed char)-114)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_6]))) : (var_2))))))));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((short) (-(((/* implicit */int) arr_21 [i_7])))))), (max((max((((/* implicit */long long int) 1479825785)), (var_7))), (((/* implicit */long long int) (-(arr_22 [i_6] [i_7] [i_7])))))))))));
            }
        } 
    } 
}
