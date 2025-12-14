/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111781
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
    var_19 = ((/* implicit */short) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) || (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_3))))))), (var_14)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */short) (!(arr_1 [i_1])));
                var_20 -= ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_5 [(short)8] [i_1]))))) > (max((arr_4 [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) 4629232272738633652LL)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */short) -2147483646);
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 2; i_3 < 18; i_3 += 2) 
        {
            {
                var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_4))));
                var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)0)), (min((347657171), (((/* implicit */int) (unsigned short)1049))))));
                var_24 -= ((/* implicit */short) max(((+(((/* implicit */int) arr_5 [i_3 + 2] [i_3 - 1])))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_17)) : (arr_3 [i_2])))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((long long int) var_18))) ? (min((var_10), (var_16))) : (max((var_16), (var_16))))), (var_5)));
}
