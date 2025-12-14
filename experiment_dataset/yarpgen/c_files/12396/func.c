/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12396
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(arr_3 [i_2] [i_1])));
                arr_8 [4LL] [i_1] &= ((/* implicit */long long int) (+(-456296302)));
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) var_1))));
                    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((unsigned short) ((arr_11 [i_0] [i_0] [i_2] [i_3]) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-73)))))))));
                }
                for (long long int i_4 = 3; i_4 < 9; i_4 += 4) 
                {
                    arr_15 [i_0] [i_4] [i_2] [i_2] = ((/* implicit */unsigned long long int) (signed char)127);
                    arr_16 [i_0] [i_1] [i_1] [i_0] [i_1] [i_4] = ((/* implicit */short) ((arr_13 [i_0] [i_0] [i_0] [i_4 - 1]) / (arr_11 [i_0] [8U] [i_2] [i_4 - 1])));
                    arr_17 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) (+(arr_5 [i_4 - 3] [i_4 - 1] [i_4] [(signed char)8])));
                }
            }
            arr_18 [i_0] [i_0] [(short)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [(unsigned char)3] [i_0] [i_0])) ? ((-(((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) arr_14 [i_1]))));
            var_12 += ((/* implicit */unsigned short) var_7);
            var_13 += ((/* implicit */unsigned int) (unsigned short)6);
        }
        arr_19 [(signed char)3] [i_0] = ((/* implicit */long long int) (unsigned short)0);
        var_14 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_14 [i_0])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) & (var_0))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255))))))));
        arr_20 [i_0] = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
    }
    /* LoopSeq 1 */
    for (short i_5 = 3; i_5 < 9; i_5 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) ((long long int) arr_24 [i_5]));
        arr_25 [i_5 - 1] [i_5 - 1] = 9223372036854775807LL;
        var_16 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_5 - 2] [i_5 + 1])) || (((/* implicit */_Bool) var_9))))), (((((/* implicit */int) arr_23 [i_5] [i_5 - 1])) - (((/* implicit */int) arr_24 [i_5 + 3]))))));
        var_17 = ((/* implicit */long long int) (unsigned char)74);
        var_18 = ((unsigned short) (-(((/* implicit */int) var_5))));
    }
    var_19 = ((/* implicit */unsigned int) (short)(-32767 - 1));
    var_20 = ((/* implicit */short) (~(var_0)));
    var_21 = ((/* implicit */unsigned short) ((long long int) (unsigned short)54975));
}
