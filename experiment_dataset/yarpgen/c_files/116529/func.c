/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116529
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_12 [i_1] = ((/* implicit */long long int) arr_3 [i_1] [i_1 + 1] [i_1 + 1]);
                            arr_13 [i_0] [i_0] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) arr_3 [i_0] [i_0] [i_0])))));
                            arr_14 [i_3] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) arr_10 [i_1 - 1] [i_1 + 1] [i_1 - 1])))));
                var_17 = ((/* implicit */long long int) (unsigned char)211);
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (975805797031536560ULL)))) ? ((+(var_5))) : (((/* implicit */unsigned int) var_14)))) : (max((((((/* implicit */_Bool) var_1)) ? (var_6) : (var_3))), (((/* implicit */unsigned int) (unsigned char)75)))))))));
    var_19 &= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_0)), (var_9)));
    var_20 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) * (max((-7102756821580566233LL), (((/* implicit */long long int) 2501252248U))))));
}
