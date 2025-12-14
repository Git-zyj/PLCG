/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118027
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) == (7793988696025098563ULL)));
                    var_10 = (+(((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_0])));
                    arr_8 [7] [7] = ((/* implicit */_Bool) min((((/* implicit */int) arr_3 [2] [i_1 + 1])), ((+(((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1] [i_1 - 1]))))));
                    var_11 -= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_2]))) : ((~(arr_2 [i_1 - 1])))));
                    arr_9 [i_0] [i_0] [8ULL] = ((/* implicit */_Bool) min(((-(2297641010U))), (((/* implicit */unsigned int) var_8))));
                }
            } 
        } 
        var_12 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_5 [i_0] [(signed char)6] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */short) (signed char)22)))))))), (var_1)));
        arr_10 [i_0] [0U] &= ((/* implicit */unsigned short) ((signed char) 9ULL));
        arr_11 [(short)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((_Bool) (unsigned short)38975)) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (3413653921U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38965))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 9223372036854775785LL)) && (((/* implicit */_Bool) (short)-6680))))))))) && (((_Bool) 9223372036854775785LL))));
    }
    var_13 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 448U)) ? (var_3) : (((/* implicit */unsigned long long int) min((2297641003U), (((/* implicit */unsigned int) 1560606927)))))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
}
