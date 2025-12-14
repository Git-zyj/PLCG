/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148628
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_8 [i_0] |= ((/* implicit */short) 1311123169754604016LL);
                            var_19 = ((/* implicit */unsigned int) min((var_19), ((+(((((/* implicit */_Bool) arr_5 [i_2] [i_2] [(signed char)3] [i_2 - 1])) ? (arr_5 [i_1] [(short)7] [i_2] [i_2 - 1]) : (arr_5 [i_2 + 1] [i_2] [(short)5] [i_2 - 1])))))));
                            var_20 = ((/* implicit */signed char) var_13);
                            var_21 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_1 [i_3]))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0] [i_0])) ? (arr_5 [i_0] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)243)))))));
                var_23 -= ((/* implicit */_Bool) arr_6 [10ULL] [i_1]);
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) var_8);
    var_25 = ((/* implicit */short) ((((/* implicit */long long int) (~(var_13)))) % ((-9223372036854775807LL - 1LL))));
}
