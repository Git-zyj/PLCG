/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163693
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
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) max((((long long int) (~(((/* implicit */int) (signed char)109))))), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)76))))) % (((/* implicit */int) var_4))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    var_13 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_14 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 8335027463376797687LL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))))))))));
                                var_15 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) (signed char)-45)) ? (4294967295U) : (((/* implicit */unsigned int) 1210503525))))));
                            }
                        } 
                    } 
                }
                var_16 ^= ((/* implicit */signed char) var_0);
            }
        } 
    } 
}
