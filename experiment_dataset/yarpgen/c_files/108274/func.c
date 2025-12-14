/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108274
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
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (+(((((/* implicit */_Bool) (+(var_3)))) ? (((var_0) << (((((/* implicit */int) (signed char)-22)) + (23))))) : (((/* implicit */unsigned int) max((((/* implicit */int) (signed char)22)), (var_11)))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_12 [(signed char)6] [i_1] [i_1] [i_0] = (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))))));
                            var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_3])))))) ? (((/* implicit */unsigned int) arr_1 [i_3 - 1])) : (1234819987U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)-23)) == (((/* implicit */int) (signed char)-99))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_2)))) ? ((-(var_0))) : ((+(2413369579U)))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [(signed char)2] [i_1] [i_0] [i_0] [i_1])) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) arr_11 [14] [i_1] [i_1] [4U]))))) : (arr_5 [i_0] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) (signed char)-5)))) != (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (var_3) : (var_1)))))))));
                arr_13 [i_1] [i_1] = (~(((/* implicit */int) max(((signed char)0), ((signed char)-22)))));
            }
        } 
    } 
}
