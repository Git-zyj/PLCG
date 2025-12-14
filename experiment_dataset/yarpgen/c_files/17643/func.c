/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17643
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
    var_19 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) (~(((int) arr_11 [i_0] [2ULL] [(signed char)5]))));
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_11 [i_1 + 2] [i_2 + 3] [i_2 - 1]))) ? (arr_0 [i_1 - 3] [i_1 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((int) (short)-32746);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned int) var_1);
    var_24 = ((/* implicit */unsigned char) (+(var_10)));
}
