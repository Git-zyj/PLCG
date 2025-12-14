/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188002
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_16 = (~(4060206298U));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_7 [(unsigned short)20] [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) arr_3 [(unsigned short)22] [i_2] [i_3])))))))));
                            arr_12 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) != (var_12))))) ^ (min((((/* implicit */unsigned int) var_10)), (var_12)))))), ((-(((long long int) arr_2 [9]))))));
                            var_18 = ((/* implicit */short) arr_4 [i_2]);
                            var_19 = ((/* implicit */int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)22]))))), (arr_5 [i_0])))), (((long long int) (-(arr_2 [i_3]))))));
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((1775937203U), (((/* implicit */unsigned int) (unsigned char)246)))), (((/* implicit */unsigned int) arr_0 [i_2 + 1]))))) ? (((/* implicit */int) ((_Bool) arr_3 [i_0] [i_0] [i_0]))) : ((+(((/* implicit */int) min(((short)960), (((/* implicit */short) var_4)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_4 = 1; i_4 < 22; i_4 += 1) 
                {
                    for (int i_5 = 1; i_5 < 22; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 23; i_6 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) arr_18 [i_0] [i_1] [i_4] [i_5] [(_Bool)1]))));
                                var_22 *= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [1] [i_0] [i_0])) ? (arr_19 [i_0] [i_0] [i_0] [(unsigned short)4]) : (((/* implicit */int) (unsigned char)245))))))))));
                                var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned char) (signed char)-98)), ((unsigned char)36)));
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) min((((/* implicit */unsigned int) arr_4 [i_0])), (((arr_21 [i_0] [i_1] [i_4] [i_5] [i_6 - 2] [i_1] [i_6 - 2]) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_1] [i_4 + 2] [i_5 - 1] [i_5 - 1] [i_6 - 1] [i_6]))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */long long int) min(((-(((var_9) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3)))))), ((~((+(((/* implicit */int) var_4))))))));
}
