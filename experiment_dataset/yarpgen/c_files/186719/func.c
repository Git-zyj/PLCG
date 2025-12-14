/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186719
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
    var_20 *= ((/* implicit */long long int) (-(((/* implicit */int) var_12))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */short) var_16);
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (short)-14539)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
    {
        var_21 -= ((/* implicit */short) ((arr_11 [i_3]) && (((/* implicit */_Bool) 1657692620))));
        arr_12 [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_3] [i_3])) | (((/* implicit */int) arr_9 [i_3]))));
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            arr_16 [i_4] = ((/* implicit */int) arr_15 [i_3] [i_3]);
            var_22 ^= ((/* implicit */signed char) 3687262015558876284ULL);
        }
        for (short i_5 = 1; i_5 < 22; i_5 += 3) 
        {
            arr_21 [i_5] = ((/* implicit */signed char) ((unsigned short) (~(3687262015558876284ULL))));
            arr_22 [i_5] = ((/* implicit */unsigned char) arr_20 [i_5 + 2] [i_5 - 1] [i_5 + 3]);
            arr_23 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-6637))));
        }
    }
    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        var_23 -= ((/* implicit */unsigned long long int) min(((signed char)127), (((/* implicit */signed char) (_Bool)1))));
        arr_26 [i_6] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_6] [i_6])) ? (arr_25 [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
    }
    for (unsigned int i_7 = 2; i_7 < 11; i_7 += 1) 
    {
        arr_31 [10U] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) arr_29 [i_7] [i_7 + 1])) : (((/* implicit */int) (unsigned char)0)))))));
        var_24 -= ((/* implicit */unsigned long long int) min((((/* implicit */int) max((arr_13 [(_Bool)1]), (arr_19 [(unsigned char)12] [i_7 - 1] [(unsigned char)12])))), (min((((/* implicit */int) (unsigned short)15169)), (var_0)))));
        arr_32 [i_7] = arr_0 [i_7 + 1];
        arr_33 [i_7] [i_7] = min((((/* implicit */unsigned int) arr_20 [i_7] [i_7 + 1] [i_7 - 2])), (arr_25 [i_7 - 1] [i_7]));
    }
    var_25 = min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */unsigned long long int) min((0), (((/* implicit */int) (unsigned short)50366))))) * (max((16788036213110148421ULL), (((/* implicit */unsigned long long int) var_0)))))));
    var_26 |= ((/* implicit */_Bool) var_14);
}
