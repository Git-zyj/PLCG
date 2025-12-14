/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136929
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
    var_14 ^= ((/* implicit */unsigned short) var_0);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (signed char)-19))))) <= (((/* implicit */int) var_1))))) ^ (((((/* implicit */int) arr_2 [i_0])) >> (((((/* implicit */int) arr_2 [i_0])) - (91)))))));
        arr_4 [(short)2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (signed char)-41)) : (((/* implicit */int) (unsigned short)65535)))) | (((/* implicit */int) ((((/* implicit */int) (signed char)81)) <= (((/* implicit */int) var_11)))))));
        arr_5 [(unsigned short)16] = ((/* implicit */int) ((unsigned char) 17273726618440203564ULL));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 6888919448681192516LL)) <= (18446744073709551615ULL)));
        var_15 = ((/* implicit */short) -1LL);
        /* LoopSeq 1 */
        for (unsigned char i_2 = 2; i_2 < 8; i_2 += 4) 
        {
            arr_12 [i_1] [i_2] [i_2] &= ((/* implicit */short) ((((((/* implicit */int) (unsigned short)65529)) | (((/* implicit */int) (short)32767)))) == (((((/* implicit */int) arr_10 [i_2 + 2] [i_2 + 2])) ^ (((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 2]))))));
            arr_13 [i_1] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_10)) % (((/* implicit */int) (signed char)19)))) + (((/* implicit */int) (signed char)78))));
            var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_7 [i_2 - 2] [i_2 + 1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-25))))))));
            arr_14 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2 + 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2])) || (((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2])) && (((/* implicit */_Bool) arr_0 [i_2 + 1])))))));
        }
        var_17 -= ((/* implicit */unsigned short) 9223372036854775807LL);
        var_18 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_1])) : (-1084469204)))) ^ (((arr_7 [i_1] [i_1]) >> (((9223372036854775807LL) - (9223372036854775800LL)))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_4 = 0; i_4 < 18; i_4 += 4) 
        {
            var_19 &= ((/* implicit */signed char) ((((/* implicit */int) var_4)) + (((/* implicit */int) arr_0 [i_4]))));
            var_20 -= ((((/* implicit */_Bool) 1084469205)) || (((/* implicit */_Bool) 15ULL)));
        }
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
        {
            var_21 = ((/* implicit */long long int) var_5);
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                var_22 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) + (arr_21 [i_5] [i_3])));
                arr_26 [i_3] [i_5] [i_3] [i_5] = ((/* implicit */unsigned short) -1084469204);
                var_23 = ((/* implicit */unsigned long long int) ((((((-874890531) % (((/* implicit */int) var_2)))) + (2147483647))) << (((var_13) - (14244583303264364747ULL)))));
            }
        }
    }
}
