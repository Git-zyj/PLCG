/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13936
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (min((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)25)) : (((/* implicit */int) var_2)))), ((+(((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) var_5);
                            arr_12 [i_0] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_7 [i_0 + 2] [i_0 + 2] [i_0])), ((+(((/* implicit */int) (unsigned char)0))))));
                            arr_13 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_4 [i_0] [i_1] [i_0]) ? (min((((/* implicit */long long int) arr_8 [i_0])), (arr_9 [i_0] [i_1] [i_2] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-25)) - (((/* implicit */int) arr_6 [i_0 - 2] [i_1] [i_2])))))))))));
                            arr_14 [i_0] [i_1] = ((/* implicit */signed char) var_11);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (short i_4 = 2; i_4 < 16; i_4 += 4) 
                {
                    var_15 *= ((/* implicit */unsigned short) arr_2 [i_1]);
                    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(arr_15 [i_0 - 1] [i_0 + 2] [i_0 + 2])))), (max((((/* implicit */unsigned long long int) arr_15 [i_4 + 1] [i_1] [i_0 - 1])), (min((((/* implicit */unsigned long long int) (short)-13035)), (arr_16 [i_0] [i_0] [i_1] [i_4]))))))))));
                }
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 13; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            {
                                arr_25 [i_0 - 2] [i_0] [i_0] [i_0 - 2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) + (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))), (((arr_20 [i_0] [i_0] [i_0 - 2] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) arr_21 [i_1] [i_1] [i_7])) : (3266752809318765587ULL)))))));
                                var_17 &= ((/* implicit */short) (-(min((((/* implicit */long long int) arr_19 [i_0 + 1])), (arr_18 [i_0] [i_1] [i_6 + 2])))));
                                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_15 [i_6 + 2] [i_0 + 1] [i_0 - 1]) >> (((3109427312973165426ULL) - (3109427312973165414ULL))))))));
                                arr_26 [i_7] [i_0] [i_6] [i_5] [i_0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(arr_18 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_1] [i_5] [i_6] [i_7]))))) : (min((3109427312973165426ULL), (((/* implicit */unsigned long long int) arr_15 [i_6] [i_5] [i_0])))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -222469959)))))));
                            }
                        } 
                    } 
                    arr_27 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (((~(arr_10 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0] [i_1]))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_21 [i_0] [i_1] [i_5]))) ? (max((((/* implicit */unsigned int) var_9)), (arr_15 [i_0] [i_1] [i_5]))) : (((/* implicit */unsigned int) min((arr_11 [i_0 - 1] [i_1] [i_1] [i_5]), (((/* implicit */int) var_7))))))))));
                    arr_28 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0 + 1] [i_0] [i_1] [i_5])) ? (((((/* implicit */int) arr_17 [i_5] [i_1] [i_0] [i_0])) / (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])))) : ((+(((/* implicit */int) arr_17 [i_0] [i_0] [i_5] [i_5]))))));
                }
            }
        } 
    } 
}
