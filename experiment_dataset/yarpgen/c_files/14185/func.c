/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14185
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
    var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-31797)), (3U)));
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((+(var_8))), (((/* implicit */unsigned long long int) (~(4294967290U)))))))));
    var_19 *= ((unsigned long long int) var_13);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 4; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [(signed char)20] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) ((_Bool) (short)(-32767 - 1)))) : (((/* implicit */int) arr_1 [i_1]))));
                var_20 = ((/* implicit */_Bool) ((arr_3 [i_0]) % ((~(min((((/* implicit */unsigned int) var_0)), (4294967288U)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            {
                var_21 = ((/* implicit */_Bool) ((short) 0U));
                arr_11 [i_2] [i_3] &= ((/* implicit */short) ((((/* implicit */int) min((arr_8 [i_3] [i_3]), (arr_8 [i_3] [i_2])))) * (((/* implicit */int) ((unsigned short) arr_8 [i_3] [i_3])))));
                var_22 += ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) min((var_13), (((/* implicit */unsigned int) arr_1 [i_2]))))), (arr_9 [i_2] [i_3] [i_2])))));
                var_23 ^= min(((_Bool)1), ((_Bool)1));
                var_24 = ((/* implicit */unsigned int) min((((unsigned short) (short)993)), (((/* implicit */unsigned short) min((arr_8 [i_3] [i_2]), (((/* implicit */short) ((((/* implicit */int) arr_4 [i_3] [i_3])) == (((/* implicit */int) arr_2 [i_2]))))))))));
            }
        } 
    } 
}
