/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110488
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_14 [i_4 - 1] [i_1] [i_4 - 1] [i_0] [i_2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 2147483647)), (15852388178158764484ULL)));
                                var_13 = ((/* implicit */unsigned int) var_5);
                            }
                        } 
                    } 
                    var_14 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_7 [i_0 + 1] [i_2 + 1] [i_2 + 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_2 + 3] [i_2 + 1])) && (((/* implicit */_Bool) 15852388178158764484ULL)))))) : ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)-24814))) : (-2959683591289931151LL)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 3; i_5 < 23; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        for (short i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)7420)))))));
                                arr_29 [i_6 + 2] [i_6] = ((/* implicit */_Bool) max((((/* implicit */long long int) 2147483644)), (9223372036787666944LL)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        arr_32 [i_5] [i_6 + 1] [i_6] [i_7] [i_10] = ((/* implicit */unsigned short) var_3);
                        arr_33 [i_6] [i_5] [i_6] [i_6] = ((/* implicit */int) ((min(((~(9825399324508425817ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-101)) | (((/* implicit */int) (_Bool)1))))))) << (((min((((/* implicit */int) (signed char)-122)), (-1822992629))) + (1822992646)))));
                        arr_34 [i_5 + 1] [i_6] = ((/* implicit */long long int) arr_24 [i_10] [i_6] [i_7] [i_6 + 1] [i_6] [i_5 - 1]);
                    }
                    for (unsigned short i_11 = 0; i_11 < 24; i_11 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (+(((max((((/* implicit */int) arr_30 [16ULL])), (var_2))) + (((/* implicit */int) arr_38 [i_5] [(short)6] [i_5 - 2] [i_5 - 2])))))))));
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) (unsigned short)60474)) : (((/* implicit */int) (_Bool)1))))))) && (((/* implicit */_Bool) arr_16 [i_6])))))));
                        arr_39 [14] [i_6] [i_11] = ((/* implicit */unsigned char) (+(min((max((((/* implicit */int) var_5)), (-613130979))), (((/* implicit */int) arr_21 [i_5] [i_6]))))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) ((int) ((long long int) ((((/* implicit */_Bool) (short)-25374)) ? (-5056414221701827043LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
}
