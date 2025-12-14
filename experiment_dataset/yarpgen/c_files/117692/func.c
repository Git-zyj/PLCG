/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117692
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
    var_19 = ((/* implicit */signed char) var_18);
    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((7ULL) >> (((((/* implicit */int) (unsigned short)65535)) - (65496))))), (((/* implicit */unsigned long long int) var_2)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 3; i_2 < 24; i_2 += 4) 
                {
                    var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)61819)) ? (((/* implicit */int) arr_2 [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 + 1]))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 502826756621139527LL)) ? (-629429794) : (1032192)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) 3989541425U);
                                var_24 = ((/* implicit */unsigned char) ((unsigned long long int) (-(var_9))));
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2838087201368850389ULL)) ? (((/* implicit */int) arr_10 [i_1 + 3] [i_1 - 1] [i_1 - 1])) : (((((/* implicit */_Bool) 6884305394043057751ULL)) ? (((/* implicit */int) (short)-15104)) : (((/* implicit */int) (short)24303))))));
                            }
                        } 
                    } 
                }
                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((max((arr_0 [i_0]), (((/* implicit */unsigned int) arr_10 [i_0] [(unsigned char)7] [i_1])))), (((/* implicit */unsigned int) var_17))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)224)), ((short)-2623))))))) : (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)16)), ((unsigned short)3870))))));
            }
        } 
    } 
}
