/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127615
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
    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)12972))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) var_7)))), (((/* implicit */int) max((var_13), (((/* implicit */unsigned short) var_9)))))));
        arr_3 [19U] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (short)-12972)) & (((/* implicit */int) (signed char)87))));
        arr_4 [i_0] &= ((/* implicit */int) arr_0 [i_0] [i_0]);
        arr_5 [(_Bool)1] = ((/* implicit */unsigned long long int) (unsigned char)20);
    }
    for (short i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        arr_9 [2ULL] [8ULL] = var_13;
        var_19 = var_8;
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 1) 
        {
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) var_6))));
            arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) var_16)) << (((/* implicit */int) var_16))));
            arr_14 [i_2] [9ULL] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_11 [i_1]))));
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_1] [i_1])) << (((((((/* implicit */_Bool) var_4)) ? (-1080648680) : (var_8))) + (1080648690)))));
            arr_15 [(unsigned short)2] [2LL] [i_1] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 13882276929209209371ULL))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 1) 
            {
                for (signed char i_5 = 1; i_5 < 23; i_5 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) arr_20 [i_1] [i_3] [i_4] [i_1]))));
                        arr_25 [i_3] [i_3] [12ULL] [22ULL] [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_3]))));
                        arr_26 [i_3] [19ULL] [19ULL] [i_5 + 2] = ((/* implicit */short) (+((~(11900511725154518963ULL)))));
                    }
                } 
            } 
            arr_27 [i_3] = ((/* implicit */unsigned char) var_14);
        }
        var_23 = ((unsigned long long int) var_6);
        arr_28 [i_1] = ((/* implicit */short) ((var_3) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) * (9223372036317904896LL))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_17 [i_1] [i_1]), (var_10)))))));
    }
}
