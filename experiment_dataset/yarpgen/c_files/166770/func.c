/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166770
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
    for (short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 4; i_3 < 21; i_3 += 2) 
                    {
                        var_13 = ((/* implicit */short) (-((((_Bool)1) ? (((((/* implicit */_Bool) (short)10939)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))) : ((+(2084117545)))))));
                        var_14 = ((/* implicit */unsigned short) min((min((arr_11 [i_0 + 3] [i_3 + 1] [i_3 - 4]), (((/* implicit */int) arr_1 [i_0 + 3])))), (((((/* implicit */_Bool) arr_11 [i_0 + 2] [i_3 - 3] [i_3 - 4])) ? (((/* implicit */int) var_1)) : (arr_11 [i_0 + 1] [i_3 - 3] [i_3 - 1])))));
                    }
                    for (int i_4 = 1; i_4 < 19; i_4 += 4) 
                    {
                        var_15 |= ((/* implicit */unsigned int) (signed char)-99);
                        var_16 = ((/* implicit */unsigned long long int) var_5);
                    }
                    var_17 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (short)-1024)) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        arr_16 [i_0 + 3] [i_1] [i_1] [i_0] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)8487))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */long long int) ((short) (-(1444356261))));
                            arr_20 [i_0] [i_1] [i_1] [i_5] [i_5] [i_6] &= ((/* implicit */unsigned int) ((((var_9) ? (min((arr_8 [i_2] [i_5] [i_0]), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5]))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) && (((/* implicit */_Bool) (signed char)-61))))))));
                            var_19 = ((/* implicit */_Bool) var_6);
                            var_20 = ((/* implicit */unsigned int) var_12);
                            var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) min((arr_11 [(short)6] [(_Bool)1] [i_0]), (((/* implicit */int) arr_0 [i_2]))))) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2] [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)36))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)10932))) : (((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0])) : (var_10))))) : (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_11)))), (((/* implicit */int) arr_15 [i_0 + 2])))))));
                        }
                    }
                    for (int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_8 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 2] [i_0 + 2]))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65528)) && (((/* implicit */_Bool) var_10)))))) : (((10619409549644582297ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                        var_23 = ((/* implicit */unsigned int) arr_8 [i_7] [i_0] [i_1]);
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            {
                                var_24 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_8] [i_8] [i_1])) ? ((-(10619409549644582293ULL))) : (((/* implicit */unsigned long long int) ((int) ((arr_23 [i_9] [i_9] [i_9] [i_9] [i_9]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (175194903U)))))));
                                var_25 = ((/* implicit */unsigned long long int) var_3);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
    var_27 = ((/* implicit */unsigned int) ((var_5) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))));
}
