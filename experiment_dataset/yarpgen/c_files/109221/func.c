/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109221
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) (!(max((var_5), (arr_6 [i_0] [i_1 + 2] [i_0] [i_4])))));
                                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [(_Bool)1] [i_3])))))));
                                var_22 -= ((/* implicit */_Bool) (-(((/* implicit */int) ((10389841742077193501ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    arr_12 [i_2] [i_1] [i_1 + 3] [i_1] = ((/* implicit */unsigned char) 3408108520464100049ULL);
                    var_23 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_7 [i_0] [i_2] [i_1 + 3] [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)127)))));
                }
            } 
        } 
    } 
    var_24 &= ((/* implicit */_Bool) var_6);
    var_25 = ((/* implicit */short) max((var_10), (((/* implicit */long long int) var_14))));
    var_26 *= ((/* implicit */unsigned char) max((5508381004884715078LL), (((/* implicit */long long int) (signed char)(-127 - 1)))));
    var_27 *= var_13;
}
