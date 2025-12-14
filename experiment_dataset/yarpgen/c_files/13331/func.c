/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13331
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
    var_11 |= ((/* implicit */unsigned char) (((_Bool)1) || (((/* implicit */_Bool) max((((((/* implicit */int) (short)24220)) << (((((/* implicit */int) var_5)) - (85))))), ((((_Bool)1) ? (((/* implicit */int) (signed char)-43)) : (((/* implicit */int) (unsigned char)15)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */unsigned short) ((unsigned char) arr_1 [i_1] [i_1]))), (var_7))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) (~(min((((/* implicit */long long int) (_Bool)1)), (-418610750554512088LL)))));
                            arr_9 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-40))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)39))) : (((unsigned long long int) (unsigned char)255)))), (((/* implicit */unsigned long long int) ((var_10) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3] [i_1] [i_3]))))))));
                            arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51860))) : (5LL))) / (((/* implicit */long long int) ((unsigned int) (signed char)43)))))), (((((/* implicit */_Bool) -418610750554512095LL)) ? (((/* implicit */unsigned long long int) (+(arr_1 [i_0] [i_0])))) : (10734073767001115341ULL)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
