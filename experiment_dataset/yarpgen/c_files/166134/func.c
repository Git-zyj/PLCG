/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166134
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_3 [i_0 + 1]))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) && (((/* implicit */_Bool) arr_3 [i_0 - 1])))))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max((max(((((_Bool)1) ? (2305843009213693951LL) : (4532260198112344089LL))), (((/* implicit */long long int) (-(var_8)))))), (((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (-9223372036854775807LL - 1LL))))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 3; i_2 < 11; i_2 += 4) 
    {
        for (unsigned char i_3 = 3; i_3 < 11; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                {
                    var_22 = ((/* implicit */_Bool) (~(max((((2305843009213693970LL) % (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))))), (((/* implicit */long long int) arr_7 [i_2 - 2] [i_2] [i_3 - 2]))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 3; i_5 < 12; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_17 [i_2] [i_3 + 1] [i_2] [i_5] [i_5] = ((/* implicit */unsigned char) (~(((/* implicit */int) max((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_2]))))))))));
                                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) arr_9 [i_4]))));
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) min((((/* implicit */long long int) max((arr_4 [i_6 - 1] [i_4]), (arr_4 [i_6 - 1] [i_4])))), (min((((/* implicit */long long int) max((var_19), (var_19)))), (var_0))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */_Bool) var_3);
}
