/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187793
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-72)) > (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 2]))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) min((arr_4 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_16))))) ? (((/* implicit */int) ((unsigned short) (unsigned char)62))) : (((/* implicit */int) ((signed char) var_8))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                var_18 = ((/* implicit */unsigned char) arr_1 [i_0]);
                            }
                        } 
                    } 
                    var_19 += ((/* implicit */signed char) arr_9 [(short)6] [i_1 + 2] [i_1] [i_1 + 2]);
                }
            } 
        } 
    } 
    var_20 -= ((/* implicit */short) 1204119132939558133ULL);
}
