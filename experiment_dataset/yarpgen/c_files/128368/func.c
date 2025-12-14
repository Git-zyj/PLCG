/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128368
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
    var_20 = ((/* implicit */long long int) var_7);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) | (arr_0 [(_Bool)1] [13LL])))) ? (((/* implicit */int) max(((short)7525), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */_Bool) min(((short)31688), (arr_2 [i_0])))) ? (((/* implicit */int) (unsigned char)106)) : (((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)164))))) : (((((/* implicit */int) (signed char)(-127 - 1))) * (((/* implicit */int) var_7))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 4; i_2 < 16; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_6 [i_1] [i_2 - 1] [i_1 - 1])) ? (arr_6 [i_0] [i_2 + 1] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))))) == (min((arr_6 [i_0] [i_2 + 1] [i_1 - 1]), (arr_6 [i_0] [i_2 - 3] [i_1 - 1])))));
                    arr_9 [9U] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) 1483083126U)), (arr_6 [i_0] [i_0] [i_0])))) ? (arr_4 [i_1 - 1] [i_0]) : (arr_6 [i_0] [i_1] [i_1])))) ? (max((((/* implicit */long long int) ((int) (unsigned char)91))), (arr_6 [i_2 - 3] [i_2 - 3] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_5 [i_0]), (0LL)))) && (((/* implicit */_Bool) (short)-9001))))))));
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (((-(arr_4 [i_0] [15U]))) & ((~(arr_4 [i_0] [i_0]))))))));
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)0]);
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)0)), (arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned int) min((((/* implicit */int) min(((unsigned short)17493), (((/* implicit */unsigned short) (signed char)114))))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)32767))))))) : ((-(arr_0 [i_0] [(short)2])))));
    }
    var_25 -= ((/* implicit */int) (signed char)-46);
}
