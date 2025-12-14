/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144527
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
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_12))) ? ((-(((/* implicit */int) var_16)))) : (((/* implicit */int) var_14))));
    var_20 = ((/* implicit */_Bool) ((long long int) (_Bool)1));
    var_21 = ((/* implicit */unsigned char) min((0ULL), (((/* implicit */unsigned long long int) var_3))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            for (unsigned short i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        arr_9 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] = (_Bool)1;
                        var_22 = ((/* implicit */unsigned short) ((unsigned int) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_5 [i_0 - 1] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_9)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))) > (var_0))))))));
                        var_23 = arr_1 [i_1] [i_2];
                        var_24 = min((9223372036854775807LL), (((/* implicit */long long int) ((var_11) >= (((/* implicit */unsigned long long int) var_9))))));
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                    {
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) var_14))));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))))) * (arr_5 [i_4] [i_2] [i_0]))))));
                        var_27 = ((/* implicit */_Bool) min((var_27), ((_Bool)1)));
                        var_28 = ((/* implicit */unsigned char) (signed char)96);
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        arr_16 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((arr_15 [i_0 - 1] [i_0 - 1] [i_0 - 1]) + (((/* implicit */int) var_1))));
                        arr_17 [i_2] [i_1] = ((/* implicit */unsigned short) (signed char)96);
                    }
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        arr_20 [i_1] [i_1] = ((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-97)), ((unsigned char)89))))) : (1490045764U));
                        arr_21 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) ((arr_15 [i_1] [i_2] [i_2]) < ((((_Bool)1) ? (((/* implicit */int) (short)32763)) : (((/* implicit */int) arr_7 [i_6] [i_2] [i_1] [i_1] [i_0] [i_0]))))))) : (var_5)));
                    }
                }
            } 
        } 
        arr_22 [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((((((/* implicit */int) var_13)) < (((/* implicit */int) (short)-32761)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0]))) : (var_8)))) < (9223372036854775807LL)));
        var_29 *= ((/* implicit */short) (signed char)93);
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 2; i_7 < 19; i_7 += 2) 
        {
            for (short i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 21; i_10 += 2) 
                        {
                            {
                                arr_36 [i_0] [i_7] [i_8] [i_9] [i_8] [i_10] [i_9] = ((/* implicit */signed char) min((((((/* implicit */int) arr_6 [i_9 + 1])) == (((/* implicit */int) arr_8 [i_7] [i_7] [i_7 - 1] [i_7])))), (var_16)));
                                arr_37 [i_0] [i_0] [i_8] [i_9] [i_10] = ((/* implicit */short) ((((/* implicit */int) arr_7 [i_0] [i_7 + 2] [i_9] [i_9] [i_10] [i_10])) + (((/* implicit */int) (!(((/* implicit */_Bool) ((927977246U) << (((var_9) - (1243337971)))))))))));
                                arr_38 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) ((1390090263) + (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_39 [i_0 - 1] [i_0] = ((/* implicit */unsigned char) (signed char)2);
                }
            } 
        } 
    }
}
