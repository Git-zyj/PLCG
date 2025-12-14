/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167765
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
    var_15 = ((/* implicit */unsigned short) var_3);
    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) -1))))) + ((~(((/* implicit */int) var_1))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) min((arr_12 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_1])) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))))));
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_12 [i_4] [i_3] [i_2] [i_2] [i_0] [i_0])), (((((/* implicit */int) arr_16 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) (signed char)-115))))))) ? (((((var_6) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2]))))) ? (((((/* implicit */_Bool) (signed char)108)) ? (arr_1 [i_2] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4] [i_1] [i_3] [i_2] [i_1] [i_0]))))) : (((/* implicit */unsigned long long int) 0)))) : (((/* implicit */unsigned long long int) 2682650053U))));
                                var_19 = ((/* implicit */long long int) (signed char)121);
                            }
                        } 
                    } 
                    var_20 = (+(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]));
                    var_21 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_2] [i_2])) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_0] [i_1] [i_2]))), (max((arr_14 [i_1] [i_1] [i_2] [i_2] [i_1]), (((/* implicit */int) (signed char)118))))));
                    arr_17 [i_0] [i_1] [i_2] [i_2] = ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)));
                }
            } 
        } 
    } 
    var_22 = ((var_8) & (var_0));
}
