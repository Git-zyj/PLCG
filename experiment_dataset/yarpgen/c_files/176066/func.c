/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176066
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
    var_11 &= ((/* implicit */int) (unsigned short)57493);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(-1408374229)))) ? (max((((/* implicit */unsigned int) var_5)), (arr_4 [(unsigned short)4] [i_1] [i_1] [i_2]))) : (((/* implicit */unsigned int) ((-1408374217) & (((/* implicit */int) (short)(-32767 - 1))))))));
                    var_12 = ((/* implicit */unsigned int) 1408374243);
                }
            } 
        } 
    } 
}
