/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113542
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
    for (short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 ^= ((/* implicit */unsigned short) min(((~(((/* implicit */int) arr_0 [6LL])))), (((/* implicit */int) var_8))));
                var_20 = ((/* implicit */short) (-((-(((/* implicit */int) (unsigned short)27586))))));
                var_21 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) min((arr_0 [(unsigned short)14]), (arr_3 [i_1])))))) : (((((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */long long int) var_10)) : (var_7))) << (((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) var_6)))) - (59913))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        for (short i_3 = 3; i_3 < 14; i_3 += 3) 
        {
            {
                var_22 |= ((/* implicit */unsigned char) min((((short) arr_5 [i_2] [i_3])), (((/* implicit */short) var_12))));
                var_23 *= ((/* implicit */short) max(((~(((int) var_10)))), (((((/* implicit */_Bool) (short)0)) ? (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)-27832)) : (-1230249640))) : ((+(((/* implicit */int) var_12))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((unsigned long long int) 1230249640))) ? (var_13) : (((/* implicit */int) var_4)))), (((/* implicit */int) var_1))));
}
