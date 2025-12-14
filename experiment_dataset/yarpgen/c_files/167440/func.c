/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167440
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
    var_20 += ((/* implicit */long long int) var_2);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_21 &= ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_2] [i_0]))))), (((((/* implicit */_Bool) 1632444414U)) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_1])) ? (2488799115U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)50)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_22 |= min(((+(((/* implicit */int) (signed char)50)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1]))))));
                                var_23 = min((((/* implicit */unsigned long long int) var_8)), (min((((/* implicit */unsigned long long int) arr_11 [i_4 + 2] [i_2] [i_0])), (arr_4 [i_0] [i_4 + 1] [i_4 + 1]))));
                                arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */signed char) min(((+((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) : (3741986608U))))), (1208594122U)));
                                var_24 = ((/* implicit */short) ((((arr_6 [i_0 - 1] [i_3] [8] [i_3] [i_0] [i_4]) - (arr_6 [i_0 - 1] [i_4] [i_4 + 1] [i_4] [i_0] [i_4]))) & (arr_6 [i_0 - 1] [i_0 - 1] [i_3] [i_3] [i_0] [i_3])));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)102))) == ((~(2017017405U)))))))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned long long int) (~(((/* implicit */int) min(((_Bool)0), (var_1)))))))));
}
