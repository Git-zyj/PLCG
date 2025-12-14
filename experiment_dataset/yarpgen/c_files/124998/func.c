/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124998
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_11 += ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_1) : (((/* implicit */int) (unsigned char)14))))) ? ((+(((/* implicit */int) (unsigned char)14)))) : (((/* implicit */int) ((signed char) arr_1 [i_0]))))), (((/* implicit */int) (unsigned short)38986))));
                arr_6 [i_1] = ((/* implicit */signed char) var_8);
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) var_8))))))));
                                var_12 -= ((/* implicit */short) var_0);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (short i_6 = 3; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_13 ^= ((/* implicit */signed char) ((int) 4294967295U));
                                arr_20 [i_6] [i_1] [i_5] [i_5] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)5)) || (((/* implicit */_Bool) arr_13 [i_1] [i_1]))))))), (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */int) (signed char)1))))));
                                arr_21 [i_1] [i_1] [i_0] [i_1] = ((/* implicit */short) (_Bool)1);
                            }
                        } 
                    } 
                    arr_22 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) ((int) (signed char)-83))) ? (((/* implicit */int) arr_3 [i_0])) : ((+(((/* implicit */int) arr_3 [i_1])))));
                    arr_23 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-14448)) ? (((int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)11)) : (var_1)))) : (((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */int) arr_15 [i_2] [i_1])) : ((+(((/* implicit */int) (signed char)-51))))))));
                }
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_8 = 2; i_8 < 21; i_8 += 1) 
                    {
                        arr_32 [i_0] [i_1] [i_1] = ((short) var_0);
                        arr_33 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) arr_29 [i_1] [i_7 + 1] [i_7 + 1] [i_0] [i_0]);
                    }
                    for (unsigned long long int i_9 = 3; i_9 < 19; i_9 += 4) 
                    {
                        arr_38 [i_1] [i_7] [i_7 + 1] [i_9] [i_1] [i_7] = ((/* implicit */long long int) 2702307110U);
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1] [i_7] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 22; i_11 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) ((((int) arr_0 [i_11])) << (((65535U) - (65534U)))));
                                var_16 -= ((/* implicit */_Bool) arr_19 [i_11] [i_10] [i_7] [i_1] [i_0]);
                                arr_43 [i_1] [i_1] = ((/* implicit */unsigned short) ((signed char) (unsigned char)53));
                            }
                        } 
                    } 
                    arr_44 [i_1] = ((/* implicit */long long int) (signed char)-36);
                }
                arr_45 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((unsigned int) var_9)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_4);
}
