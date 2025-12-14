/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17097
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
    var_20 ^= (~((((!(((/* implicit */_Bool) (unsigned char)60)))) ? ((~(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_0])))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 1; i_4 < 12; i_4 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2] [i_4 - 1])))))));
                    var_23 &= ((/* implicit */unsigned char) ((((-348614127) + (((/* implicit */int) arr_10 [i_2] [i_4 + 1] [(unsigned char)0])))) * (((/* implicit */int) ((-348614127) != ((~(-348614127))))))));
                }
            } 
        } 
    } 
}
