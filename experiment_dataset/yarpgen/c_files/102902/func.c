/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102902
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
    var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */unsigned int) (~((((-2147483647 - 1)) & (var_3))))))));
    var_18 = ((/* implicit */_Bool) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_16))));
                arr_6 [i_0] = ((/* implicit */int) (unsigned short)54833);
                var_20 ^= ((/* implicit */unsigned char) (+((~(((/* implicit */int) arr_5 [i_1 - 2]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        for (short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            {
                var_21 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min(((unsigned short)10702), (((/* implicit */unsigned short) arr_5 [i_3]))))), (((unsigned long long int) (_Bool)1))));
                arr_11 [(_Bool)1] [(signed char)4] [i_3] = var_2;
                var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_8 [i_2])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2] [i_3]))))))))));
                arr_12 [(unsigned short)14] = ((/* implicit */signed char) var_7);
                var_23 = ((/* implicit */short) var_8);
            }
        } 
    } 
}
