/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115624
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
    var_11 = ((/* implicit */long long int) var_8);
    var_12 = ((/* implicit */int) max((var_5), (((/* implicit */short) min(((unsigned char)120), (((/* implicit */unsigned char) ((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */short) (unsigned char)76);
                            var_14 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 12230954626944788481ULL)) ? (((/* implicit */int) (unsigned short)65529)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)108))));
                            arr_8 [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) (unsigned short)33373))))) ? (((/* implicit */int) arr_2 [i_3])) : (((((((/* implicit */int) var_1)) / (((/* implicit */int) arr_3 [i_2] [i_2])))) >> (((var_1) ? (1569626199) : (((/* implicit */int) (_Bool)1))))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned short) (+((~(9223372036854775807LL)))));
                arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) ((-1569626199) ^ (((/* implicit */int) (!(((/* implicit */_Bool) -1569626199)))))));
            }
        } 
    } 
}
