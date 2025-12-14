/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170866
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
    var_19 = var_3;
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                /* LoopSeq 3 */
                for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_13)) & (arr_6 [i_0] [i_1] [i_2] [i_2])));
                    arr_10 [i_0 - 1] [i_2] [i_1] [i_3] = (((-(arr_3 [i_0] [i_0]))) / (((/* implicit */unsigned long long int) arr_6 [i_2] [i_1] [i_0] [i_2])));
                    var_21 = arr_6 [i_0] [i_1] [i_2] [i_2];
                }
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    arr_13 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((arr_0 [i_0 - 1]) | (((arr_8 [i_0] [i_1] [i_2] [i_0] [i_4] [i_4]) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4] [i_4] [i_2] [i_4] [i_4] [i_4])))))));
                    var_22 -= ((/* implicit */_Bool) ((((long long int) arr_7 [i_0] [i_4] [i_4])) >> (((arr_6 [i_0 - 1] [i_1] [i_2] [i_1]) + (966118147445625206LL)))));
                    var_23 = ((/* implicit */_Bool) (+(arr_9 [i_0 - 1] [i_0 - 2])));
                }
                for (signed char i_5 = 2; i_5 < 15; i_5 += 4) 
                {
                    var_24 = ((/* implicit */long long int) ((short) 9177405600020158339LL));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        arr_18 [i_0] [i_2] [i_6] [i_0] [i_6] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) + (arr_12 [i_2] [i_1] [i_1] [i_1] [i_1]))) <= ((-(-1703921184)))));
                        arr_19 [i_0 - 2] [i_1] [i_6] [i_1] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_5] [i_1] [i_0])) + ((-(((/* implicit */int) (short)32598))))));
                    }
                }
                var_25 *= ((/* implicit */unsigned int) var_16);
                arr_20 [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11909)) ? (((/* implicit */long long int) 1965603221)) : (arr_6 [i_2] [i_2] [i_1] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2] [i_0 - 2] [i_1] [i_1] [i_1]))) : (((unsigned int) 1296927283U))));
                arr_21 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((arr_11 [i_0 - 3] [i_1] [i_0 - 3] [i_2]) << (((arr_11 [i_0 - 3] [i_1] [i_1] [i_1]) - (8270892056310699294ULL)))));
            }
            arr_22 [i_0] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_0 [i_1])))) ? ((-(((/* implicit */int) (short)32598)))) : (-1451224272)));
            var_26 = ((/* implicit */signed char) var_13);
        }
        var_27 *= ((/* implicit */signed char) (-(max((6984642439745707134ULL), (((/* implicit */unsigned long long int) 1965603238))))));
    }
}
