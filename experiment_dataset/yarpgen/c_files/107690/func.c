/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107690
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (-(((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
                var_21 = 0ULL;
                var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_4))));
            }
        } 
    } 
    var_23 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-16))));
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned int i_3 = 3; i_3 < 13; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 15; i_4 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) (-(((((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */int) (signed char)16)))) >> (((-9223372036854775787LL) + (9223372036854775792LL)))))));
                    var_25 = ((/* implicit */long long int) min(((-((-(((/* implicit */int) var_11)))))), (((/* implicit */int) var_14))));
                }
            } 
        } 
    } 
}
