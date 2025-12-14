/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118405
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
    var_14 = ((/* implicit */short) ((((/* implicit */int) min(((short)27736), (((/* implicit */short) var_1))))) & (((/* implicit */int) var_13))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_15 = (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)34640)) ? (((/* implicit */int) (short)2599)) : (((/* implicit */int) (unsigned char)107)))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 3; i_2 < 17; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0] [i_2 + 1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (((-(arr_1 [i_2]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (signed char)127))))))))), ((+(((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0] [i_0])))))));
                    arr_9 [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [(short)15] [i_1])) && (((/* implicit */_Bool) var_9)))))))));
                }
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) (+(((((((/* implicit */int) (signed char)127)) ^ (((/* implicit */int) (_Bool)0)))) << (((((/* implicit */int) var_13)) - (58)))))));
}
