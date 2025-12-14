/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103719
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
    for (short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) 9223372036854775807LL);
                                var_19 = ((/* implicit */short) min((((/* implicit */int) arr_12 [i_1] [i_2] [i_2] [i_2 + 1] [i_4] [i_4] [i_4])), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [i_0] [i_2] [i_2] [i_2 + 1] [i_2] [i_2] [(unsigned short)3])) : (((/* implicit */int) arr_9 [i_1] [3U] [i_2] [i_2 + 1] [i_2]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 2; i_5 < 10; i_5 += 3) 
                    {
                        for (short i_6 = 1; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_20 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                                var_21 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((985162418487296LL) > (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) var_9)) ? (arr_1 [i_2 + 1]) : (-4828909805217216579LL)))));
                                arr_18 [i_6] = ((unsigned int) (!(((/* implicit */_Bool) max((arr_4 [i_5]), ((short)12808))))));
                                var_22 = ((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_2] [i_2 - 1] [i_2] [i_2] [i_2 - 1] [i_5 + 2] [i_6 - 1])), ((unsigned short)0))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) var_16))));
    var_24 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_5)) | (((/* implicit */int) (short)-3042))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-20289)) ^ (((/* implicit */int) var_11))))) : (min((9223372036854775807LL), (((/* implicit */long long int) var_11))))))));
    var_25 = ((/* implicit */unsigned short) var_0);
}
