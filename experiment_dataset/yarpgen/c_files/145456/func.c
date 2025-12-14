/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145456
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            {
                                var_18 -= (unsigned short)44156;
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((((/* implicit */_Bool) ((arr_9 [i_0] [i_2] [i_3] [i_4]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [(_Bool)0])))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [(signed char)0])) ? (arr_9 [(_Bool)0] [(signed char)13] [(unsigned short)8] [(signed char)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4371))))) : (((unsigned long long int) arr_3 [(short)10])))) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) 3764786446303207063LL)))))))))));
                                var_20 = ((/* implicit */unsigned int) var_9);
                                var_21 -= ((/* implicit */_Bool) (~(min((((/* implicit */unsigned int) (_Bool)1)), (4294967295U)))));
                            }
                        } 
                    } 
                    arr_13 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_17))))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) (-(((((((/* implicit */int) var_9)) > (((/* implicit */int) var_11)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)45488)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((signed char) var_9)))))));
}
