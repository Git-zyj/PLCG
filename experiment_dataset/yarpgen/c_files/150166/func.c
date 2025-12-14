/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150166
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
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_0)), (var_13))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
                    arr_11 [i_0] [(signed char)3] = ((/* implicit */unsigned char) arr_6 [(unsigned char)10] [i_0]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min((max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_14 [i_2] [i_0] [i_2] [i_0] [i_0])), (448689396044300678LL)))), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_1 + 1] [i_2] [(short)4] [i_4 + 3] [i_4 - 1]))))))))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((4294967295U), (((/* implicit */unsigned int) (unsigned char)17)))))));
                                var_20 = ((/* implicit */long long int) (~(((/* implicit */int) ((_Bool) arr_7 [i_0] [i_0])))));
                                arr_17 [i_1] [i_4] [i_2] [i_2] [8LL] [i_4] [i_0] = ((/* implicit */unsigned char) (!((((!(((/* implicit */_Bool) arr_13 [i_2])))) && (((/* implicit */_Bool) arr_2 [i_1 - 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_21 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) 422116079U)))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) ((long long int) (unsigned char)133))) ? (((/* implicit */int) min(((short)22283), ((short)32526)))) : (((/* implicit */int) (signed char)127))))));
                                var_22 = ((/* implicit */unsigned int) (~((~(arr_4 [i_1 - 1] [i_1 + 1] [4LL])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
