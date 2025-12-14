/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120686
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                var_19 += ((/* implicit */short) (~(3267115892U)));
                var_20 = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */unsigned int) var_16)), (((unsigned int) (unsigned char)25)))));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((unsigned long long int) (unsigned char)18)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        for (int i_3 = 2; i_3 < 9; i_3 += 2) 
        {
            {
                var_22 ^= ((/* implicit */unsigned int) arr_1 [i_3]);
                arr_12 [i_3] = ((/* implicit */signed char) arr_7 [i_2] [i_3]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            {
                arr_18 [i_5] [i_5] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-3322)) ? (arr_16 [i_4] [i_4] [i_4]) : (min((var_2), (((/* implicit */unsigned int) var_17))))))), (var_4)));
                arr_19 [i_4] [i_5] [i_5] = ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-22023)), (3267115892U)))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4] [i_4]))))))) * (((/* implicit */int) (unsigned char)249))));
                arr_20 [i_5] = ((/* implicit */int) (unsigned char)244);
                arr_21 [i_5] [8] [i_5] = ((/* implicit */unsigned int) (unsigned char)33);
            }
        } 
    } 
    var_23 -= (+(((/* implicit */int) var_8)));
}
