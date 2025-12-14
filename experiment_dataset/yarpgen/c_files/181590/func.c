/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181590
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (int i_3 = 1; i_3 < 14; i_3 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (long long int i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            arr_14 [i_0] [(unsigned short)2] [i_0] [i_3 + 1] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) (short)-27010)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2344))) : (0ULL))) : (max((min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)27010)) ? (((/* implicit */int) (short)-27020)) : (((/* implicit */int) (unsigned char)217)))))))));
                            var_17 = ((/* implicit */unsigned char) var_10);
                        }
                        for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)26997)) & (((/* implicit */int) ((signed char) 1152476092)))))) ? (min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_15 [i_0] [i_2])) : (((/* implicit */int) var_5)))), (((/* implicit */int) arr_3 [i_3 + 2] [i_3 + 2])))) : (((/* implicit */int) var_2))));
                            var_19 = arr_7 [i_0] [i_0] [i_0];
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 2; i_6 < 15; i_6 += 2) 
                        {
                            arr_21 [i_0] [i_1] [i_2] [i_6 + 2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)29321)) + (arr_13 [i_6 + 1])));
                            var_20 += ((/* implicit */short) arr_8 [(short)11] [14U] [i_2] [11ULL] [11ULL] [11ULL]);
                        }
                        /* vectorizable */
                        for (signed char i_7 = 3; i_7 < 14; i_7 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-56))))) : ((-(1152476115)))));
                            arr_25 [i_7] [i_3] [i_3] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) arr_6 [i_0]);
                            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_1] [i_0]))));
                        }
                        var_23 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_2] [i_2] [i_3 + 2] [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 1])) / (((/* implicit */int) arr_17 [i_0] [i_0] [i_3] [i_3 + 2] [i_3] [i_3 + 2] [i_3 + 2]))))) ? (((/* implicit */unsigned long long int) (+(min((var_7), (((/* implicit */long long int) 2194529730U))))))) : ((~(max((14452513400882766855ULL), (((/* implicit */unsigned long long int) (unsigned short)13734)))))));
                        var_24 += ((/* implicit */unsigned int) max((((/* implicit */int) min((arr_16 [i_3] [i_3] [(unsigned short)7] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1]), (arr_16 [i_3 + 1] [7LL] [(signed char)10] [(signed char)10] [i_3 + 3] [14U] [i_3 + 1])))), (((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) (unsigned short)1))))));
                        var_25 = ((/* implicit */short) arr_24 [i_0] [i_1] [i_1] [i_1] [i_3 - 1] [i_1]);
                    }
                } 
            } 
        } 
        arr_26 [i_0] = ((/* implicit */signed char) var_0);
        arr_27 [(signed char)12] = ((/* implicit */unsigned short) ((2305825417027649536LL) >= (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        arr_28 [(unsigned char)12] = ((/* implicit */unsigned int) arr_23 [i_0] [10]);
    }
    var_26 = ((/* implicit */signed char) var_14);
}
