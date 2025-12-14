/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125687
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
    var_16 = ((/* implicit */signed char) var_6);
    var_17 -= ((/* implicit */unsigned long long int) ((max((var_9), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 9998111240569413456ULL)) ? (72501312) : (((/* implicit */int) var_10))))))) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-58)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_13 [i_3] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned char)36), (((/* implicit */unsigned char) arr_7 [i_0] [i_0 + 1] [i_0]))))) ? (max((((/* implicit */long long int) var_0)), (max((-8698236026065664872LL), (((/* implicit */long long int) arr_10 [i_1])))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 2] [i_1 + 1])))));
                            arr_14 [i_0 + 1] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_0] [(unsigned short)4] [(short)3])) : (((/* implicit */int) arr_0 [i_2]))))) || (((/* implicit */_Bool) (signed char)-18)))))));
                            var_18 += ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_1 - 3]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_0] [i_0] [i_3])) ? (max((arr_11 [i_3] [i_2] [4] [4]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_3])))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_13))))))))));
                        }
                    } 
                } 
                arr_15 [i_1] = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1] [i_0])) || (((/* implicit */_Bool) arr_4 [i_0] [i_1])))) ? (((/* implicit */int) arr_8 [i_1] [i_1 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) 72501312))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (arr_11 [(short)0] [i_0] [(signed char)2] [i_1])))))))));
                var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_1] [i_1 - 2] [i_0])), (arr_1 [i_0] [i_1]))))));
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) min((arr_6 [i_0] [i_1] [i_4] [i_5]), ((unsigned short)14149)))) / (((int) 13144646990217127903ULL)))) <= ((-(((((/* implicit */_Bool) 16749940270766476377ULL)) ? (((/* implicit */int) (unsigned short)57537)) : (((/* implicit */int) var_12))))))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_19 [i_0 + 1] [i_0 - 1] [i_1 - 2] [i_1 - 2])), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (arr_18 [i_1] [i_5] [i_1] [i_1])))))) > (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(short)4] [(short)4] [(short)4])) ? (arr_22 [i_6] [i_5] [i_4] [i_1] [i_0] [i_0 - 1]) : (((/* implicit */int) arr_7 [(unsigned short)7] [i_1] [i_4]))))), (min((((/* implicit */unsigned long long int) var_15)), (arr_11 [i_0] [i_5] [i_4] [i_5])))))));
                                arr_24 [i_5] [i_5] [i_1] [i_0] [i_0] = 3256396868153115437ULL;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
