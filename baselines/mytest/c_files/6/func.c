/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6
Invocation: ../scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6 -o /data/zyj/loop_generator/baselines/yarpgen/mytest/c_files/6
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
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        var_16 |= ((/* implicit */unsigned int) max(((+(max((var_10), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_0 [i_0 + 1])), (arr_1 [i_0 - 1] [i_0 - 3]))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) var_0);
        var_17 = ((/* implicit */unsigned long long int) max((((unsigned int) arr_2 [i_0 - 2])), (((/* implicit */unsigned int) min((arr_0 [i_0 - 1]), (arr_0 [i_0 - 3]))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (unsigned int i_3 = 4; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) var_0)))), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) var_14)) : (arr_8 [i_0] [i_1])))))));
                        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) <= (max((arr_9 [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_4 [(unsigned short)19] [i_1]))))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            for (int i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    var_20 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_6 [i_0 + 1]))) ? (min((arr_6 [i_0 - 1]), (arr_6 [i_0 + 1]))) : ((-(arr_6 [i_0 - 1])))));
                    var_21 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_0 [i_0 + 1]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 22; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0 - 1] [i_6 + 1] [10]))));
                                var_23 *= ((/* implicit */unsigned short) (+(((unsigned int) ((((/* implicit */unsigned long long int) arr_4 [i_7] [i_5])) + (var_10))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) ((_Bool) -839385941)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_11))))) : (((/* implicit */int) min((var_11), (((/* implicit */unsigned short) var_12)))))))));
    var_25 = ((/* implicit */unsigned long long int) max((var_25), ((+(var_1)))));
    var_26 = ((/* implicit */unsigned int) max((var_26), ((~(var_14)))));
    var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) var_2))));
}
