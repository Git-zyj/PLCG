/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109544
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
    var_11 = ((/* implicit */_Bool) (+(((/* implicit */int) var_7))));
    var_12 ^= (~(((/* implicit */int) var_6)));
    var_13 = ((/* implicit */long long int) (+(var_1)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) max((arr_2 [i_0] [i_0]), ((-((+(((/* implicit */int) var_4)))))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            arr_11 [i_3] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) var_5);
                            var_15 = ((/* implicit */_Bool) var_4);
                            var_16 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) -1815860163)) && (((/* implicit */_Bool) 894072986)))))));
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_2] = ((((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2] [i_3])) && (((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2] [i_3])))) ? (((/* implicit */int) ((unsigned char) arr_9 [i_0] [i_2] [i_3] [i_3]))) : (((((/* implicit */_Bool) arr_7 [i_2] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_3])))));
                        }
                    } 
                } 
                var_17 += ((/* implicit */unsigned char) (-(((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (arr_6 [i_0] [i_0] [i_0]))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) var_0)))))))));
            }
        } 
    } 
}
