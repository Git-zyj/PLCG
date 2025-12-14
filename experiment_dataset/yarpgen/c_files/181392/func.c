/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181392
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
    var_14 = ((/* implicit */unsigned short) ((long long int) (unsigned short)34271));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_7)))) ? (((((((/* implicit */_Bool) (unsigned short)34281)) ? (14667035408031850650ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) >> (((((/* implicit */int) arr_2 [(signed char)19])) - (22667))))) : (((/* implicit */unsigned long long int) var_11))));
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)34280)) < (((/* implicit */int) (unsigned short)19046))));
                }
            } 
        } 
    } 
}
