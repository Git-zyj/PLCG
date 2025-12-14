/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107010
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) var_13)) | (((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        arr_9 [i_2] [i_1] [i_1] [(unsigned short)6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6579909537060797483ULL)) ? (((/* implicit */int) (unsigned short)18105)) : (((/* implicit */int) (unsigned short)49152))))) != ((+(arr_6 [i_2] [i_0])))));
                        var_20 = ((/* implicit */int) var_1);
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */int) 6579909537060797497ULL);
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) 6579909537060797497ULL))));
        var_23 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)4] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 + 1]))));
    }
}
