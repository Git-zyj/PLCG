/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145512
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
    var_19 = (+(((((/* implicit */_Bool) ((unsigned long long int) -7059682309091015612LL))) ? (min((((/* implicit */unsigned int) (short)32767)), (4294967278U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -2911005814049514768LL)))))))));
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((unsigned int) 14351602529077638713ULL)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))) ? (((((/* implicit */_Bool) (unsigned short)20142)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))))) : ((-(4294967287U)))));
                var_22 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))) : (19U))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_23 = ((((/* implicit */_Bool) max(((unsigned short)20142), (((/* implicit */unsigned short) var_13))))) ? (max((var_18), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_10) : (((/* implicit */long long int) arr_12 [i_0] [i_3 + 1] [i_0] [i_3 + 1] [i_3 + 1] [i_3]))))));
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((_Bool) (-(((var_2) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))))));
                            var_25 = ((/* implicit */_Bool) (~(((unsigned long long int) (_Bool)1))));
                            arr_13 [i_3] [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 704588680)) ? (14846195465939126467ULL) : (((/* implicit */unsigned long long int) 1576767298U))));
                            var_26 = ((/* implicit */long long int) (~(((unsigned long long int) (+(1168366617))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
