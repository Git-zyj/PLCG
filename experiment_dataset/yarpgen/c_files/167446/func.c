/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167446
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
    var_15 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 8; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_8 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (2147483647) : (1535429640)));
                            var_16 = ((/* implicit */long long int) (-(((/* implicit */int) (!(arr_1 [i_2 - 4] [i_2 + 2]))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(7084217216118920656LL)))) ? (((/* implicit */int) ((273706504) >= (((/* implicit */int) (signed char)0))))) : (((/* implicit */int) ((signed char) var_2))))))));
                arr_9 [i_0] [i_0] [(unsigned short)1] = (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)19642)))) < (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_1] [i_0])))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (-(((/* implicit */int) ((signed char) ((((/* implicit */int) var_14)) << (((((/* implicit */int) var_14)) - (30965)))))))));
    var_19 = var_13;
}
