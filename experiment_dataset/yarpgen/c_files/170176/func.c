/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170176
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_15 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (unsigned char)177)))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) 2022377519));
        arr_3 [i_0] = ((/* implicit */int) ((signed char) (!(((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                {
                    {
                        arr_13 [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) (signed char)-91);
                        arr_14 [i_0] [i_1] [i_2] [i_2] [i_3] [(unsigned short)1] = ((/* implicit */int) arr_1 [i_0]);
                        arr_15 [i_0] [i_2] [(signed char)5] [i_3] = ((/* implicit */int) ((unsigned long long int) (~(((((/* implicit */_Bool) arr_5 [i_0] [4ULL])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_2])))))));
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned long long int) (short)32767);
    var_17 ^= ((/* implicit */unsigned long long int) var_12);
}
