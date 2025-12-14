/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113674
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)384)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */int) (short)399)) != (((/* implicit */int) var_11))))))), (((/* implicit */int) (unsigned char)38))));
                arr_7 [i_1] = ((/* implicit */unsigned long long int) ((short) (~((-9223372036854775807LL - 1LL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            {
                arr_14 [i_2] [i_3] &= min((13779718451235784835ULL), (((/* implicit */unsigned long long int) (short)8621)));
                var_13 = ((/* implicit */_Bool) ((4206956430887477713ULL) % (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (short)8621))))));
    var_15 &= var_6;
}
