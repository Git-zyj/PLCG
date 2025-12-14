/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150275
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)6815))) & (18446744073709551615ULL)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_13 = ((((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_4] [i_4] [i_1 + 1] [i_0])) | (((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_2] [i_3] [i_4] [(unsigned short)8])));
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_0])))) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_4])) - (120)))));
                                var_14 += ((/* implicit */unsigned int) (_Bool)1);
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)41643))));
                            }
                        } 
                    } 
                    var_15 ^= ((/* implicit */signed char) (-(((/* implicit */int) var_11))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_3 [i_0] [i_0] [i_1 + 1]) : (((/* implicit */unsigned long long int) arr_9 [14ULL] [i_0] [i_1 + 1] [i_1 - 1]))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((arr_3 [i_0] [14ULL] [i_0]) != (arr_3 [i_0] [(unsigned short)2] [i_0]))))));
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_9 [16U] [i_0] [i_0] [i_0]) : (arr_9 [2U] [i_0] [i_0] [i_0])));
    }
    /* LoopNest 3 */
    for (unsigned char i_5 = 1; i_5 < 13; i_5 += 1) 
    {
        for (short i_6 = 1; i_6 < 14; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)23920)) ? (((/* implicit */int) (unsigned short)38912)) : (((/* implicit */int) (unsigned short)38912)))) - (((/* implicit */int) arr_21 [i_6 - 1] [i_6 - 1]))));
                    arr_24 [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 9U))))) & (((/* implicit */int) (!(((/* implicit */_Bool) max((14058043615436730072ULL), (((/* implicit */unsigned long long int) (unsigned char)229))))))))));
                    arr_25 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_9 [i_5 + 1] [i_6] [i_6 + 1] [i_7])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)23878)) : (((/* implicit */int) (unsigned short)26620))))) : (((((/* implicit */_Bool) arr_16 [i_5 + 1])) ? (arr_9 [i_5 + 2] [i_6] [i_7] [i_7]) : (((/* implicit */long long int) var_9))))));
                    var_19 = ((/* implicit */signed char) 12734564353594381801ULL);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_7);
    var_21 &= ((/* implicit */unsigned char) min((var_10), (((min((((/* implicit */unsigned long long int) var_4)), (17179869183ULL))) * (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2918931560U)), (-7637339041789322039LL))))))));
}
