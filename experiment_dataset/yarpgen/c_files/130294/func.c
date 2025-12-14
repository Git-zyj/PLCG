/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130294
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_0])) && (((/* implicit */_Bool) ((16256U) / (3697632773U))))));
                    var_14 = ((/* implicit */long long int) ((((int) arr_2 [i_0])) > (((/* implicit */int) ((short) (~(((/* implicit */int) arr_3 [i_0]))))))));
                    var_15 = ((((/* implicit */_Bool) max((((/* implicit */int) arr_7 [i_1 + 1] [i_1] [i_1 + 1] [i_0])), (-1054129943)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)3840)), ((unsigned short)53546)))) : ((-(2147483647))));
                    arr_9 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) << (((35888059530608640LL) - (35888059530608629LL)))))) ? (((((/* implicit */_Bool) -1781065432)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)66))) : (1402092731U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_2 [i_0])) + (85))))))))), (max((((/* implicit */long long int) var_11)), (arr_0 [i_0])))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            {
                arr_17 [i_3] [i_3] = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) ((signed char) var_2))) : (((/* implicit */int) ((signed char) var_2)))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (arr_6 [i_3] [i_3] [i_3] [i_3]))));
                arr_18 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (arr_10 [i_3]) : (((/* implicit */unsigned long long int) (-(4143449207U))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (short)16768);
}
