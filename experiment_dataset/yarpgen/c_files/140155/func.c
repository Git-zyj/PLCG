/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140155
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])) ? (((/* implicit */int) (unsigned short)61030)) : (1449620185)))), (arr_5 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)10428)) ? (max((((/* implicit */long long int) arr_7 [i_2])), (arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -2365909820769122702LL)) ? (((/* implicit */int) (unsigned char)88)) : (-717814442))))))) : (min((((/* implicit */unsigned long long int) (unsigned char)168)), (15644274472727356509ULL)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 20; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_2 [i_4]) == (((/* implicit */unsigned long long int) 350032498U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2] [i_4]))) == (arr_0 [i_2] [i_1]))))) : (arr_2 [i_4])))) ? (arr_1 [i_4]) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)131)) ? (arr_4 [i_1] [i_4] [i_4]) : (((/* implicit */int) arr_6 [9ULL] [9ULL] [i_2] [i_2]))))), (arr_5 [i_4]))))));
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)168)) | (-1529319556)))) & (min((arr_0 [i_3 + 1] [i_1]), (((/* implicit */long long int) (unsigned char)15))))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) 1529319555)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (short)-4058)))), (((/* implicit */int) (short)698)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (-7212408271047577056LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_16), (((/* implicit */long long int) var_1))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (unsigned char)29)))) : (((/* implicit */int) (unsigned char)147))))))))));
}
