/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149780
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 - 1])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_0 [i_0 + 2] [i_0]))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [(unsigned char)2] [(unsigned char)2] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */int) var_12)) * (((/* implicit */int) arr_7 [i_0 + 1] [i_1 - 1] [i_2 + 3] [i_2]))));
                    arr_10 [i_0] [i_0] [0U] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)39)) <= (((/* implicit */int) (signed char)66))));
                }
            } 
        } 
    }
    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */int) min((max((((/* implicit */long long int) (!(((/* implicit */_Bool) 588148118U))))), ((~(var_5))))), (((/* implicit */long long int) max((arr_12 [(unsigned short)16] [(unsigned short)16]), (arr_12 [i_3] [i_3]))))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (+(((/* implicit */int) ((1563183066U) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96)))))))))));
    }
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_4))))), ((~((~(((/* implicit */int) (_Bool)1))))))));
                /* LoopNest 2 */
                for (signed char i_6 = 3; i_6 < 24; i_6 += 4) 
                {
                    for (long long int i_7 = 1; i_7 < 22; i_7 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 2) 
                            {
                                arr_28 [i_4] [i_5] [i_6] [(unsigned char)4] [(unsigned char)4] [i_6] = ((/* implicit */unsigned char) var_8);
                                arr_29 [15U] [i_7] [i_6] [i_5] [i_4] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-40))))));
                                var_18 = ((((/* implicit */_Bool) arr_24 [i_7 + 2] [i_7 + 2] [i_6] [i_7] [i_6 - 3] [i_5] [i_7])) ? (((/* implicit */int) (unsigned char)105)) : (((/* implicit */int) arr_19 [i_4])));
                                arr_30 [i_8] [i_4] [i_6] [(signed char)18] = ((int) arr_21 [i_5] [i_6 - 3] [i_7] [i_7 + 2]);
                                var_19 = ((/* implicit */short) var_14);
                            }
                            arr_31 [i_7] [i_6] [i_5] [i_4] = ((/* implicit */signed char) -3236615188736326167LL);
                        }
                    } 
                } 
                var_20 = ((/* implicit */int) ((_Bool) 4290772992U));
            }
        } 
    } 
}
