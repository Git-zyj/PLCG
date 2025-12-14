/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111746
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
    var_11 |= ((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), ((~(max((((/* implicit */long long int) var_3)), (-1LL)))))));
    var_12 = ((/* implicit */short) (signed char)0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 17; i_1 += 4) 
        {
            arr_4 [i_0] [i_1 + 1] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            var_13 = ((/* implicit */long long int) (~(arr_3 [i_0] [i_0] [(signed char)13])));
            var_14 = ((/* implicit */unsigned int) ((arr_3 [i_1 - 1] [i_1 - 2] [i_1 - 2]) ^ (arr_3 [i_1 - 1] [i_1 - 2] [i_1 - 2])));
            /* LoopSeq 1 */
            for (short i_2 = 2; i_2 < 15; i_2 += 2) 
            {
                var_15 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)16052)) == (arr_5 [i_2 + 3] [i_1 - 2] [i_1 - 2])));
                /* LoopSeq 3 */
                for (unsigned char i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 3; i_4 < 17; i_4 += 2) 
                    {
                        var_16 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_4 - 2] [i_4] [i_4] [i_4 - 2] [i_1])) != (((/* implicit */int) arr_13 [i_4] [i_4 - 1] [i_4] [i_4 - 2] [i_4]))));
                        arr_14 [i_0] [i_1] [(_Bool)1] [i_3 + 3] [i_3 + 3] &= ((arr_6 [i_2 - 2] [i_4 + 1] [i_4] [i_4]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 + 2]))));
                        var_17 = ((/* implicit */int) (~(7870275680737965132LL)));
                    }
                    var_18 = ((/* implicit */long long int) (signed char)-125);
                    var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3 + 2]))));
                    var_20 *= ((/* implicit */unsigned short) (unsigned char)249);
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_21 = (short)14712;
                    var_22 = ((/* implicit */short) ((unsigned int) arr_10 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]));
                    var_23 = ((/* implicit */long long int) ((signed char) arr_11 [i_1] [i_1 - 2] [i_1 - 2] [i_1 - 2]));
                    arr_19 [i_5] = (~(((/* implicit */int) (signed char)-1)));
                }
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    var_24 = ((/* implicit */unsigned char) ((1869516769) + (((/* implicit */int) arr_20 [i_2 + 2] [i_2 + 3] [i_2 - 2]))));
                    var_25 &= ((/* implicit */unsigned int) arr_18 [i_1 - 2] [i_1 - 1] [i_2 + 2] [i_2 + 3]);
                }
            }
        }
        arr_22 [i_0] = 5896409819394468729LL;
        var_26 = ((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0]);
    }
    for (unsigned char i_7 = 3; i_7 < 16; i_7 += 3) 
    {
        arr_26 [6ULL] [i_7] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [14] [i_7 + 1] [i_7 + 1] [i_7] [i_7]))))), (((0LL) & (((/* implicit */long long int) (~(((/* implicit */int) arr_20 [i_7] [i_7] [i_7])))))))));
        var_27 = ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_8 [i_7 + 1])))), (((/* implicit */int) arr_8 [i_7 - 3]))));
        var_28 ^= ((/* implicit */long long int) arr_0 [(unsigned char)10]);
        var_29 *= min((((/* implicit */unsigned long long int) (+(arr_2 [(short)14] [i_7])))), (max((arr_3 [i_7 - 2] [i_7 - 1] [i_7 - 2]), (arr_3 [i_7 + 1] [i_7] [i_7 - 1]))));
    }
    for (short i_8 = 0; i_8 < 17; i_8 += 1) 
    {
        arr_30 [i_8] = (-(arr_27 [i_8] [i_8]));
        arr_31 [i_8] [i_8] = ((arr_16 [i_8]) <= (((/* implicit */int) arr_0 [i_8])));
    }
}
