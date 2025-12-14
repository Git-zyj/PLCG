/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108756
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
    var_18 = ((/* implicit */int) (unsigned char)91);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                var_19 += ((/* implicit */unsigned short) ((_Bool) 1131812772));
                var_20 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 4] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0 + 4] [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0 + 3] [i_0])))), (((/* implicit */int) (_Bool)0))));
                var_21 = ((/* implicit */unsigned short) var_3);
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) ((((var_8) ? (((/* implicit */int) var_14)) : ((~(((/* implicit */int) var_5)))))) ^ (((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
            {
                {
                    var_23 ^= ((/* implicit */int) (+(arr_1 [i_4])));
                    var_24 = ((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)42)) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8)))))), (arr_12 [i_2] [i_2])));
                }
            } 
        } 
    } 
}
