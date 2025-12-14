/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163932
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
    var_20 = ((((((/* implicit */_Bool) 512309245)) ? (-512309245) : (863590087))) % (min(((((_Bool)0) ? (var_16) : (var_16))), (max((var_11), (var_9))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] [1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (var_18)))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)13))))));
                            arr_12 [i_1] [i_1] [i_1] [i_0] = arr_9 [(unsigned char)2] [i_0] [i_1] [i_3];
                            arr_13 [i_0] [i_0] [i_0] [i_1] [i_3 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((958908030) + (((/* implicit */int) (unsigned char)255))))) ? (2147483647) : (((((/* implicit */_Bool) -1)) ? ((+(2147483647))) : ((-(0)))))));
                            var_21 ^= ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)18)), (-1951203208)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)16475)));
                            var_22 = ((/* implicit */unsigned char) (~(255388076)));
                        }
                    } 
                } 
                var_23 = ((((/* implicit */_Bool) ((max((1042960640), (((/* implicit */int) (_Bool)1)))) / (((((/* implicit */int) (unsigned short)15730)) - (var_14)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) -958908030)) ? (-245489336) : (var_16))) : (((/* implicit */int) var_4))))));
            }
        } 
    } 
}
