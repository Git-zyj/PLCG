/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166828
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)53)) ? (((/* implicit */int) (signed char)-46)) : (((/* implicit */int) (unsigned char)213))));
                    var_16 ^= ((/* implicit */signed char) min((((unsigned char) arr_5 [(unsigned short)16] [i_1])), (((/* implicit */unsigned char) arr_5 [(signed char)2] [(signed char)2]))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned char) min(((signed char)-27), ((signed char)-119)));
    }
    var_17 = ((/* implicit */unsigned char) (signed char)-127);
    var_18 = (signed char)124;
}
