/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137831
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
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_10 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned short) arr_0 [i_3]))))) ? (((/* implicit */int) arr_9 [i_2 - 1] [i_2 + 1] [i_0 - 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(unsigned char)19]))))))) & (((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 3])) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) (unsigned char)196))))));
                            var_11 &= ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) arr_4 [i_3])))))) ? (((/* implicit */int) max((var_0), (((unsigned short) var_6))))) : ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                        }
                    } 
                } 
                var_12 = ((/* implicit */unsigned int) var_9);
            }
        } 
    } 
    var_13 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((unsigned int) (+(((/* implicit */int) (unsigned short)48122))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
}
