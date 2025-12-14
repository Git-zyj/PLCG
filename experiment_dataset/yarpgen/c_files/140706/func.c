/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140706
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (-(max(((~(-7525836428776816199LL))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)37653)), (arr_3 [i_0]))))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_2] [2LL] [i_0] = ((/* implicit */signed char) ((((var_0) != (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))))) || (((var_0) <= (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)18)))))))));
                                var_10 = ((/* implicit */unsigned int) arr_0 [i_0]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))))));
}
