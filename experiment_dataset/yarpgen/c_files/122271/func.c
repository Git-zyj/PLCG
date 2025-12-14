/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122271
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
    var_10 += ((/* implicit */_Bool) var_9);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned char)3)))), (((/* implicit */int) min(((unsigned char)12), (var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((long long int) var_0))))) : (((((/* implicit */_Bool) 1023ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3] [(signed char)13] [(signed char)13] [i_3] [i_3] [i_3 - 2]))) : (16487476910951197795ULL)))));
                            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (-(((/* implicit */int) (signed char)19)))))));
                        }
                    } 
                } 
                var_13 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)244)) - (((/* implicit */int) (unsigned short)62839))));
            }
        } 
    } 
}
