/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164119
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
    var_14 = ((/* implicit */unsigned int) var_11);
    var_15 = ((/* implicit */_Bool) max((((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (-9222222812565448106LL) : (((/* implicit */long long int) var_3)))) != (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (var_0)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (arr_1 [i_0]) : (min((arr_1 [i_0]), (arr_1 [i_0]))))))));
        var_17 = ((/* implicit */signed char) ((long long int) (signed char)-13));
        arr_2 [(unsigned char)15] &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [11LL]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            arr_5 [i_1] &= ((/* implicit */unsigned short) ((short) arr_3 [i_0] [i_1] [i_1]));
            var_18 = ((/* implicit */unsigned char) ((arr_1 [i_0]) % (((2098402945U) << (((arr_1 [i_1]) - (1685484908U)))))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            arr_8 [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (arr_3 [(unsigned char)15] [(unsigned char)15] [i_0]) : (((/* implicit */int) (signed char)-10))));
            var_19 = ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [3U] [14]))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 4; i_4 < 21; i_4 += 1) 
            {
                for (int i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [9ULL])) ? (arr_1 [i_0]) : (4294967295U)));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned char) var_8);
                            var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_3 + 2] [i_3] [(unsigned char)9] [i_4 + 1]))));
                            var_23 *= ((/* implicit */int) 0U);
                        }
                        /* LoopSeq 2 */
                        for (int i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            arr_22 [i_0] [i_3] [(unsigned short)1] [(signed char)6] [i_7] [i_3 + 2] [i_7] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(var_12))))));
                            var_24 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (arr_3 [i_4] [i_3 - 1] [i_3]) : ((+(((/* implicit */int) arr_7 [i_4] [(signed char)0]))))));
                            var_25 &= ((/* implicit */unsigned char) arr_9 [i_4]);
                            arr_23 [i_0] [i_3] [i_4] [i_5] [i_7] = ((/* implicit */unsigned char) ((signed char) ((_Bool) var_8)));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_3] [i_4 - 4] [i_5])) ? (arr_6 [i_3 + 3] [i_3 + 2] [i_4 - 2]) : (((/* implicit */unsigned int) var_0))));
                        }
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned int) arr_12 [(signed char)15] [i_4] [i_3] [i_0]);
                            var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) var_7))));
                        }
                    }
                } 
            } 
            var_29 *= arr_18 [i_3] [i_3] [i_0];
        }
    }
}
