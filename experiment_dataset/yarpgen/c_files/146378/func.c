/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146378
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
    for (short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_10 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_9)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(15477397832643696573ULL)))) ? (((/* implicit */long long int) min((0U), (((/* implicit */unsigned int) (short)12))))) : (var_6))))));
                arr_4 [(short)5] [i_0 - 1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((6089746931684355555LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-8))))))) | (max((var_5), (((/* implicit */unsigned int) (short)30757))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 4) 
    {
        for (long long int i_3 = 1; i_3 < 10; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned long long int) (unsigned short)0);
                            var_12 = ((/* implicit */short) (unsigned short)255);
                            var_13 *= ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) var_5)), ((-(var_6)))))));
                            var_14 = ((/* implicit */short) -1176674391100816144LL);
                            var_15 -= ((/* implicit */short) ((var_9) < (((/* implicit */unsigned long long int) (+(var_8))))));
                        }
                    } 
                } 
                arr_14 [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((3437386163U) < (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))) + (min((((/* implicit */unsigned long long int) ((0U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1))))))), ((~(18446744073709551615ULL)))))));
            }
        } 
    } 
}
