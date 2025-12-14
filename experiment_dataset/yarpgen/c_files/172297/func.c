/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172297
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
    var_11 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned char)244)))), (((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_0)), (var_10)))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (unsigned char)244)))))))) : (var_6)));
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) max((max((3641831148U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1809005384518880101LL))))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_9)), ((unsigned char)11)))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (signed char i_4 = 2; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) var_8);
                                arr_13 [i_0] [i_1] [i_2] [0LL] [i_4] = ((/* implicit */long long int) (-(((arr_12 [i_0] [i_0] [i_3] [i_4 - 2] [i_4 + 1] [i_4 + 2]) >> (((((/* implicit */int) arr_11 [i_4] [i_4] [i_4 - 2] [i_4 - 2] [i_4] [(signed char)18])) - (57843)))))));
                                arr_14 [i_1] [i_3] &= ((/* implicit */unsigned char) ((_Bool) ((((_Bool) (unsigned short)12175)) ? ((+(var_4))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (arr_12 [i_0] [(signed char)0] [17] [i_2] [i_3] [i_4]) : (-307316431)))))));
                                var_14 ^= ((/* implicit */unsigned short) max((min(((((_Bool)1) ? (var_6) : (2208560074U))), (((/* implicit */unsigned int) arr_12 [i_2] [i_4 - 1] [i_4 + 1] [i_4 - 2] [i_4 - 2] [i_4 - 1])))), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)11)))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned long long int) ((unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [10] [i_0] [i_2] [i_2] [i_2]))) + (var_10))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))));
                    var_16 = ((/* implicit */unsigned int) ((long long int) (~(((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] [i_2])))));
                }
            } 
        } 
    } 
}
