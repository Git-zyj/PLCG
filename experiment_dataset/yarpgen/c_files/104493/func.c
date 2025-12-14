/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104493
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
    var_20 = ((/* implicit */short) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (var_8)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */short) ((min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)241))))), (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_1] [i_2])) ? (arr_7 [i_2] [i_2] [i_1] [(unsigned char)3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-21904))))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) max((var_12), ((short)27607)))) == (((/* implicit */int) arr_6 [i_0] [i_1]))))))));
                    var_21 ^= ((/* implicit */long long int) ((unsigned char) ((short) max((((/* implicit */unsigned short) (unsigned char)31)), (var_13)))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) min((min(((signed char)(-127 - 1)), ((signed char)-28))), (var_14)));
    var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) (unsigned char)31))))))));
    var_24 = ((/* implicit */unsigned short) max((var_24), (var_4)));
}
