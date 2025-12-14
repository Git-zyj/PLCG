/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127861
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
    var_15 = ((/* implicit */unsigned short) min((((long long int) var_8)), (((/* implicit */long long int) max((min((((/* implicit */int) var_10)), (var_12))), (((/* implicit */int) min(((unsigned short)384), ((unsigned short)20875)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_1 - 1] = ((/* implicit */_Bool) (-((~(var_4)))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_0] [i_1] = min((min((arr_1 [i_2]), (arr_1 [i_2]))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_5 [i_1]) > (((/* implicit */long long int) 254)))))))));
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(arr_3 [i_0])));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (-(((((((/* implicit */int) (unsigned char)0)) > ((-2147483647 - 1)))) ? (min((var_12), (((/* implicit */int) var_13)))) : ((+(var_9)))))));
}
