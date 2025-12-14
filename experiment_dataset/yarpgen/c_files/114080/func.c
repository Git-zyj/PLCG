/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114080
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
    var_20 = ((/* implicit */unsigned int) var_19);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-83)) || (((/* implicit */_Bool) (short)30713))))), (((491384612313535091LL) & (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                var_22 = ((/* implicit */unsigned char) ((unsigned int) min((((int) var_10)), ((-(((/* implicit */int) (unsigned char)27)))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_3] [i_1]))));
                            var_24 = ((/* implicit */int) ((unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)103))) | (5582320312200069580LL))) <= (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))));
                            arr_9 [i_0] [i_2] [i_0] [i_3] = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) arr_2 [i_1 - 1])))));
                            var_25 = ((/* implicit */signed char) ((long long int) max((((/* implicit */unsigned short) (signed char)-103)), ((unsigned short)23916))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) ((5U) << (((7865898760818167011ULL) - (7865898760818167005ULL)))));
    var_27 = ((/* implicit */_Bool) -491384612313535067LL);
}
