/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131694
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
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_20 ^= ((/* implicit */unsigned short) 4607182418800017408ULL);
                var_21 ^= ((/* implicit */unsigned char) ((-984878247) % (((((/* implicit */int) (unsigned short)33927)) - (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)63273)) : (((/* implicit */int) (signed char)119))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) var_6)) == (((int) var_2)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            {
                arr_10 [i_2] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)13441)) / (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) var_7)))))))));
                var_23 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (short)-22437)) : (((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)17295)) << (((var_8) + (698662285)))))) : (min((4211350459638231998ULL), (((/* implicit */unsigned long long int) (unsigned char)163))))));
                arr_11 [19U] = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? ((~(var_8))) : ((~(((/* implicit */int) (signed char)10))))));
            }
        } 
    } 
}
