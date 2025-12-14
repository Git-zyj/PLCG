/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146909
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_10 = ((/* implicit */short) (signed char)-103);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) 4366003301433302226LL);
                                var_12 = -4366003301433302226LL;
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned int) (short)31);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 16; i_6 += 1) 
                        {
                            {
                                var_14 = arr_8 [i_5] [(signed char)8];
                                arr_17 [(unsigned char)14] [i_1] [(unsigned char)14] [i_5] [(unsigned char)14] = ((/* implicit */long long int) (-(arr_10 [i_0] [i_1 + 1] [i_1 + 1] [i_1 - 1] [12LL])));
                            }
                        } 
                    } 
                    arr_18 [11U] [i_1] [i_2] = ((arr_6 [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1]) - (((/* implicit */long long int) 1669468851U)));
                }
            } 
        } 
        var_15 = var_1;
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        arr_21 [(signed char)7] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4366003301433302226LL)) ? (((/* implicit */int) var_7)) : (-355734357)));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) var_3))));
    }
    var_17 = (signed char)-8;
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) 5577192920759938100LL)), (((((/* implicit */unsigned long long int) var_3)) ^ (((((/* implicit */_Bool) var_5)) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) var_1))))))));
}
