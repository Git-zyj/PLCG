/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166684
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
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) (-(max((min((((/* implicit */unsigned long long int) (signed char)53)), (5ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-65))) / (4711284618359263008LL))))))));
                arr_5 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (+(min(((+(((/* implicit */int) (unsigned short)65535)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_12))))))));
                var_19 *= ((/* implicit */short) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_3 [i_1] [i_1 - 2])) : (((/* implicit */int) arr_3 [i_1] [i_1 - 2])))), (((/* implicit */int) ((((/* implicit */_Bool) 5968055511464831884ULL)) || (((/* implicit */_Bool) var_7)))))));
                arr_6 [i_1] [i_0] = ((/* implicit */int) var_10);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 16; i_2 += 2) 
    {
        for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            {
                var_20 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((var_11) + (2147483647))) << (((((((((/* implicit */int) (short)-1)) ^ (((/* implicit */int) var_12)))) + (5968))) - (23))))))));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-8311)) ^ (arr_0 [i_2])))) : (-7350871366295835282LL)));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) (+((-2147483647 - 1))));
}
