/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156776
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
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 7; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) 32767U);
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2]))))) ^ (((/* implicit */int) (short)4095))));
                            var_18 = ((/* implicit */short) arr_3 [i_0] [i_0 + 2]);
                        }
                    } 
                } 
                var_19 -= var_7;
            }
        } 
    } 
    var_20 = ((/* implicit */short) (~((((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (32767U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) 4294934529U))))))))));
    var_21 = ((/* implicit */long long int) ((unsigned char) var_11));
    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) var_3))));
}
