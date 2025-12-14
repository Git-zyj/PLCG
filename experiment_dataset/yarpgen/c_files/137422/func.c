/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137422
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
                {
                    arr_8 [i_0] [i_1] = ((/* implicit */unsigned short) ((long long int) var_2));
                    arr_9 [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)91))));
                }
                for (short i_3 = 0; i_3 < 21; i_3 += 2) /* same iter space */
                {
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (((-((~(((/* implicit */int) (signed char)104)))))) <= (var_10))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 2; i_4 < 18; i_4 += 2) 
                    {
                        for (unsigned int i_5 = 2; i_5 < 20; i_5 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 630529202195178583ULL))))) | ((~(((/* implicit */int) (signed char)-92))))));
                                arr_17 [i_0] [i_1] [i_3] [i_4] [(unsigned short)1] [i_4] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    var_15 = ((((/* implicit */int) min((var_11), ((unsigned short)65531)))) ^ ((-((-(((/* implicit */int) arr_10 [i_1] [3LL])))))));
                    arr_22 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((((((/* implicit */int) var_3)) + (2147483647))) << (((((arr_12 [i_0] [i_0] [(signed char)17] [(_Bool)1] [(_Bool)1] [i_6]) + (2022989603))) - (13))))) != (max((var_1), (arr_12 [i_0] [i_1] [i_6] [i_0 + 2] [i_0 - 1] [i_0])))))), (min((1067398438U), (((/* implicit */unsigned int) (signed char)-96))))))) : (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((((((/* implicit */int) var_3)) + (2147483647))) << (((((((arr_12 [i_0] [i_0] [(signed char)17] [(_Bool)1] [(_Bool)1] [i_6]) - (2022989603))) - (13))) - (122828548))))) != (max((var_1), (arr_12 [i_0] [i_1] [i_6] [i_0 + 2] [i_0 - 1] [i_0])))))), (min((1067398438U), (((/* implicit */unsigned int) (signed char)-96)))))));
                }
                /* LoopNest 3 */
                for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    for (signed char i_8 = 3; i_8 < 19; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 1; i_9 < 20; i_9 += 2) 
                        {
                            {
                                var_16 = min((((/* implicit */unsigned int) (short)-28453)), (2516768360U));
                                arr_31 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-88)) / (((/* implicit */int) (short)-11999))));
                                var_17 = ((/* implicit */unsigned char) (signed char)32);
                                var_18 ^= ((/* implicit */signed char) (unsigned char)3);
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) >> (((3501330354U) - (3501330346U)))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 13; i_10 += 2) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            {
                arr_36 [i_10] [i_11] [i_11] &= ((/* implicit */unsigned int) ((((((((/* implicit */int) var_6)) >> (((var_1) - (173907646))))) & (max((((/* implicit */int) var_4)), (arr_7 [i_10] [i_11] [i_11]))))) >> (((((int) ((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) (short)11999)) : (((/* implicit */int) (unsigned short)64969))))) - (11985)))));
                var_20 &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~((~(var_10)))))), (18446744073709551615ULL)));
            }
        } 
    } 
    var_21 = min((((/* implicit */int) var_6)), ((~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)17934)) : (((/* implicit */int) var_4)))))));
}
