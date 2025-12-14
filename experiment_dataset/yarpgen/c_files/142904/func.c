/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142904
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
    var_13 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) var_0)) : (min((((/* implicit */unsigned int) var_2)), (var_11))))))));
    var_14 = ((/* implicit */short) min((var_12), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) var_10))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 7; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_12 [i_3] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))), (var_0)))) ? (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_8))))))) : (((unsigned long long int) var_6))));
                                var_15 -= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_3 - 4] [i_3] [i_2 - 2])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3 - 3] [i_2 + 1] [i_2 + 1]))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_12))))) != (min((((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_4])), (var_10)))))))));
                                var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2131650164)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_13 [(signed char)9] [(signed char)9] [(signed char)9] = ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0]);
                    arr_14 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (var_5) : (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [(unsigned short)8] [i_1] [i_1])))))), (((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (var_4)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 - 1] [i_1 - 2] [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_9)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_0);
}
