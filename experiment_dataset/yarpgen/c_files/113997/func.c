/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113997
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
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */int) var_2);
                    var_17 = ((/* implicit */unsigned char) 3767841719882038565ULL);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_3 = 2; i_3 < 8; i_3 += 3) 
        {
            var_18 = ((/* implicit */unsigned char) ((374629688175362945ULL) ^ (((/* implicit */unsigned long long int) ((0U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))));
            arr_11 [i_0 + 4] [i_0 + 4] [i_0 + 4] |= ((/* implicit */unsigned char) 374629688175362945ULL);
            var_19 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_4 [i_0 + 4])))));
            var_20 += ((/* implicit */long long int) 4294967276U);
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_3 + 2]))));
        }
        for (unsigned char i_4 = 1; i_4 < 10; i_4 += 3) 
        {
            var_22 = ((/* implicit */long long int) (~(((((/* implicit */int) arr_13 [i_0])) / (((/* implicit */int) var_5))))));
            /* LoopSeq 1 */
            for (short i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_0 [i_4]) ^ (((/* implicit */unsigned long long int) 1481345379)))))));
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) var_14))))))));
                var_25 = ((/* implicit */unsigned long long int) (unsigned char)175);
            }
        }
        var_26 = ((/* implicit */unsigned char) 1481345379);
        /* LoopSeq 2 */
        for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            arr_21 [i_0] [i_0] [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_6])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))) ^ (var_12)));
            arr_22 [i_6] = ((/* implicit */unsigned char) (signed char)64);
            var_27 = ((/* implicit */signed char) var_7);
        }
        for (unsigned long long int i_7 = 3; i_7 < 8; i_7 += 3) 
        {
            var_28 = ((/* implicit */unsigned int) arr_5 [i_0 + 3] [i_0 + 3] [i_7]);
            /* LoopSeq 1 */
            for (signed char i_8 = 1; i_8 < 9; i_8 += 1) 
            {
                var_29 &= ((arr_19 [i_8 - 1] [i_8] [i_8]) - (((/* implicit */unsigned long long int) ((4294967284U) + (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                var_30 = ((/* implicit */unsigned int) 36011204832919552ULL);
            }
        }
    }
    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) max((((/* implicit */unsigned int) var_16)), (2712013652U))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((signed char)-77), (var_11))))) : ((~(36011204832919553ULL))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)22860)) : (((/* implicit */int) (unsigned char)0)))), (1481345379))))));
}
