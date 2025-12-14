/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141923
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
    var_11 = ((/* implicit */unsigned char) var_0);
    var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) var_10))));
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1099394496))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((long long int) var_3))) : ((~(arr_4 [i_0]))))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_3 [(unsigned char)1])), (max((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), (arr_1 [i_3]))))))));
                            arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(max((1099394496), (((/* implicit */int) arr_1 [5])))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))), (((long long int) arr_2 [i_0] [i_0]))));
                var_17 = ((/* implicit */long long int) (short)(-32767 - 1));
            }
        } 
    } 
}
