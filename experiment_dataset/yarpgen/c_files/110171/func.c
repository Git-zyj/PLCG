/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110171
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110171 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110171
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
    var_19 = ((/* implicit */unsigned long long int) min((min((((/* implicit */int) var_18)), (max((((/* implicit */int) (unsigned short)50232)), (var_14))))), (((/* implicit */int) ((8378174864183920783ULL) != (8378174864183920783ULL))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_20 *= ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) -2128037311639460045LL)) : (8378174864183920795ULL)))) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [12U] [i_4 - 1]))))), (arr_1 [i_4 + 1] [i_1 + 1])));
                                var_21 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 + 1] [i_2] [i_3])) ? (arr_7 [i_1 - 3] [i_1 - 3] [i_2] [i_3]) : (arr_12 [i_1 - 2]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_1 + 2])))))));
                                var_22 *= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1] [i_4 - 1] [i_3])) ? (72057456598974464ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_16), (var_7))))))), (((/* implicit */unsigned long long int) -1407891328055593763LL))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-72)));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (int i_6 = 1; i_6 < 13; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_5] [i_2] [10U] [i_6 + 1] |= min((((/* implicit */unsigned long long int) -3652704314825580102LL)), (((((/* implicit */unsigned long long int) var_1)) | (8378174864183920795ULL))));
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_15))));
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) min((((/* implicit */unsigned long long int) (-(arr_17 [4ULL] [i_1 - 3] [i_1 + 1] [i_6 + 1] [i_6 + 1] [i_6])))), ((+(((((/* implicit */_Bool) var_17)) ? (arr_7 [i_0] [i_0] [i_0] [12U]) : (var_8))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
