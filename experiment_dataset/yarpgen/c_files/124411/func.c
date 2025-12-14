/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124411
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)0])))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) ((_Bool) var_9))))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)40801))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 12559805101096256895ULL)) ? (((/* implicit */long long int) arr_10 [i_4] [2U] [i_2] [i_2] [(_Bool)1] [i_0])) : (var_12)))) ? (((/* implicit */int) (unsigned short)54204)) : (((/* implicit */int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [9LL] [i_0] [i_0])) < (1025914319))))))));
                            }
                        } 
                    } 
                    var_18 -= ((/* implicit */unsigned short) ((unsigned long long int) (+(((unsigned long long int) var_2)))));
                }
            } 
        } 
    } 
    var_19 &= ((/* implicit */unsigned short) var_12);
    var_20 = ((((/* implicit */_Bool) max((((var_10) / (((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) < (15384385016970514027ULL))))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_3))));
    var_21 = var_12;
}
