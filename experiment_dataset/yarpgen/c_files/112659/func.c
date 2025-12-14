/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112659
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
    var_15 = min((((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((unsigned int) var_1))) : (var_10))), (((/* implicit */long long int) (+(((/* implicit */int) var_13))))));
    var_16 |= ((/* implicit */signed char) max((((((/* implicit */int) var_11)) >> (((/* implicit */int) var_11)))), (var_5)));
    var_17 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_12)) : ((~(var_10)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (+(arr_8 [(signed char)15] [i_1] [i_1] [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_6 [i_0] [(unsigned char)15] [i_4])) ? (((/* implicit */int) arr_9 [i_3] [i_1] [(signed char)10] [i_3] [i_4])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) arr_2 [i_0]))))));
                                var_18 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3] [i_0])))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_4])) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4)))))))));
                                var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_4] [i_2] [i_2])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_8 [i_4] [i_3] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) >= (arr_7 [i_0] [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */int) arr_2 [i_1]);
                }
            } 
        } 
    } 
}
