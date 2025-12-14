/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145542
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 5U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))) | (((/* implicit */int) ((var_11) != (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))) : (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_10))), (((/* implicit */unsigned long long int) (short)28146))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) var_1);
                var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (541423521512711479ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26738))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0] [(unsigned short)11])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) arr_2 [i_2] [i_0])), (arr_10 [i_3] [(unsigned short)3] [i_0] [i_0] [i_0]))) - ((+(arr_10 [i_0] [i_1] [i_1] [i_2] [i_2])))));
                            arr_13 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_8 [i_2]))));
                            arr_14 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((0LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65472)))))), (var_10)));
                            var_14 = ((/* implicit */unsigned long long int) arr_8 [i_1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
