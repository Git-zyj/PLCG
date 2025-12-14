/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176830
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
    for (long long int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)77)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)31)))));
                var_16 = ((/* implicit */long long int) (((~(arr_4 [i_1]))) - (var_13)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 4; i_2 < 22; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_3 [i_2]))))) > (((((/* implicit */_Bool) arr_5 [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)179))) : (4128768LL))))) ? (((((/* implicit */int) (unsigned char)181)) & (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) arr_13 [i_3]))));
                var_18 = ((/* implicit */short) arr_5 [i_2] [i_2]);
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)77)) ? (((/* implicit */int) (unsigned short)22118)) : (((/* implicit */int) (signed char)31))));
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)22118)) ? (20U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7)))))))) || (((/* implicit */_Bool) min(((unsigned short)65109), (((/* implicit */unsigned short) ((short) (short)21463))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) var_9))));
}
