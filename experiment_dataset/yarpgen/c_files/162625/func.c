/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162625
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
    var_16 |= ((/* implicit */unsigned int) min((((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned char)127))))))), ((-9223372036854775807LL - 1LL))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_12 [i_4] [i_3] [i_0] [i_1] [i_0] = (~(((unsigned long long int) 2ULL)));
                                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((_Bool) ((signed char) 18446744073709551613ULL))))));
                                var_18 *= ((/* implicit */_Bool) (unsigned short)0);
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] |= ((/* implicit */signed char) (~(((long long int) 4059805970463636207ULL))));
                            }
                        } 
                    } 
                    var_19 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((long long int) ((_Bool) 608351137U)))), (min(((~(268382163094078488ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)94)))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) var_12);
}
