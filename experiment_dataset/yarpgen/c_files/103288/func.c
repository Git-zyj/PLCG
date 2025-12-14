/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103288
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) (-((~(3841157048U))))))));
        var_15 = ((/* implicit */unsigned short) (((-(((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) >= (((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) var_11))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_4 [i_1] [i_1] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_2 [i_1]))));
        var_16 = ((/* implicit */unsigned char) var_8);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_17 = ((/* implicit */short) ((var_8) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2]))) * (var_12))))))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)(-127 - 1)))));
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) var_9))));
                                var_20 &= ((/* implicit */unsigned long long int) (((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (var_8))))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)(-127 - 1))))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((((arr_16 [i_3]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))))))));
                }
            } 
        } 
        arr_18 [i_2] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((arr_6 [i_2]), (arr_6 [i_2])))), (((var_4) << (((arr_12 [i_2] [i_2] [i_2] [i_2] [i_2]) + (2013325370446974353LL)))))));
        var_22 = ((/* implicit */unsigned int) var_2);
    }
    var_23 = ((/* implicit */_Bool) var_2);
}
