/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165513
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
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) max((((/* implicit */long long int) -372302607)), (arr_8 [i_3 - 1] [i_3 + 1] [i_3] [i_1 - 1] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)247))))) : (((/* implicit */int) (signed char)6)));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_7 [i_4]))));
                                var_22 = var_8;
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)3)), (((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) arr_9 [i_1 - 2] [8LL] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) var_11))))));
                    arr_12 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned int) (unsigned char)9);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)8)) ? (-2052407868) : (((/* implicit */int) (unsigned char)222))))));
}
