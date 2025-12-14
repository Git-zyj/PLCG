/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117176
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((((/* implicit */_Bool) 934116147)) ? ((-2147483647 - 1)) : (-1250297623));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) max((-511136553738938014LL), (arr_7 [i_4])))))));
                                var_20 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (~(max((arr_1 [i_0]), (((/* implicit */int) arr_3 [i_0] [i_4] [i_0]))))))), ((~(min((((/* implicit */unsigned int) arr_4 [i_0] [3] [i_0])), (arr_11 [i_3] [i_1] [i_1])))))));
                                var_21 = ((/* implicit */int) (-(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 *= max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_16)) : (1250297614)))) || (((/* implicit */_Bool) var_8))))), (var_17));
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_2))))), ((~(var_3)))))) ? (max((((/* implicit */unsigned long long int) var_12)), (var_10))) : (((/* implicit */unsigned long long int) min((((unsigned int) var_0)), (((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (3522012454U))))))));
}
