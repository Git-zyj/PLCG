/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128940
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
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((arr_0 [i_0 - 2]) / (arr_0 [i_0 + 1])));
        var_20 = ((/* implicit */int) arr_0 [12U]);
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (+(arr_0 [i_0 - 2])));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_21 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) 260346030U)) == (arr_1 [i_1])));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))));
        }
        var_22 |= ((/* implicit */short) ((((/* implicit */int) var_14)) >= (((/* implicit */int) (short)14772))));
    }
    var_23 = ((/* implicit */unsigned int) var_17);
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_18))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_7)) | (((((/* implicit */int) (signed char)-1)) | (((/* implicit */int) (short)-14773))))))) : ((~(((((/* implicit */long long int) var_6)) & (6033391512248130374LL)))))));
    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        for (long long int i_3 = 2; i_3 < 14; i_3 += 3) 
        {
            {
                arr_15 [i_3] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */int) arr_5 [(short)13] [i_2] [i_3])) : (((/* implicit */int) arr_5 [(unsigned short)16] [i_2] [i_3]))))))) || (((((/* implicit */_Bool) max((((/* implicit */short) arr_6 [i_2] [i_2] [i_2])), (var_11)))) && (((/* implicit */_Bool) arr_12 [i_3]))))));
                var_26 = ((/* implicit */int) ((((/* implicit */int) (short)14776)) == ((+(((/* implicit */int) arr_12 [i_2]))))));
                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) (~(arr_1 [i_2])))) ? (((arr_1 [i_2]) + (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3 + 1]))))) : (((/* implicit */long long int) var_19)))))));
                arr_16 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 16409501005516791651ULL)) ? (-2147483635) : (((/* implicit */int) arr_6 [i_3] [9LL] [i_3])))), (((/* implicit */int) arr_12 [i_2]))))) ? (max((((/* implicit */long long int) arr_5 [i_3 - 1] [i_3 - 1] [i_3])), (arr_1 [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_3 + 1] [i_3 + 1] [(unsigned short)5]))))))));
            }
        } 
    } 
}
