/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132907
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_19 -= ((/* implicit */_Bool) max((arr_2 [i_2] [i_1]), (((/* implicit */unsigned long long int) ((min((arr_5 [i_1] [i_1]), (arr_5 [i_0] [(short)5]))) - (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)0), ((_Bool)1))))))))));
                    arr_6 [i_1] = ((/* implicit */signed char) 977444290U);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) arr_9 [i_0] [i_1] [i_2] [i_0]);
                                var_21 *= ((/* implicit */long long int) ((((3380305480U) + (3380305503U))) > (((/* implicit */unsigned int) ((/* implicit */int) ((8869468303632161364ULL) >= (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (arr_1 [i_4]))))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned long long int) max((max((-1048814105783350990LL), (((/* implicit */long long int) (unsigned char)124)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_4 [i_0] [i_1] [i_2]), (((/* implicit */long long int) (signed char)94))))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (short i_7 = 0; i_7 < 21; i_7 += 3) 
                {
                    arr_19 [i_7] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_15);
                    var_23 = ((/* implicit */unsigned char) arr_16 [i_7] [i_6] [i_5] [i_5]);
                }
                for (signed char i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    var_24 *= ((/* implicit */signed char) min((-1048814105783350972LL), (((arr_14 [i_5] [i_8]) - (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)52186)) ? (((/* implicit */int) arr_12 [i_6])) : (((/* implicit */int) var_13)))))))));
                    arr_23 [i_5] [i_5] [i_5] [i_6] = ((/* implicit */long long int) arr_13 [i_6] [i_8]);
                    arr_24 [i_5] [i_5] = max(((!(((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_5] [i_5])))), (((14930921637582271873ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                    arr_25 [i_8] [i_6] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (4294967295U))))) && (((/* implicit */_Bool) ((signed char) arr_21 [i_5] [i_6] [i_8])))));
                }
                for (signed char i_9 = 1; i_9 < 20; i_9 += 4) 
                {
                    arr_29 [i_6] [i_6] [i_6] |= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_28 [i_9 + 1] [i_9 + 1] [i_9])) ? (arr_17 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) | (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                    arr_30 [i_9 + 1] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_21 [i_5] [i_6] [i_5])) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) max((var_17), (((/* implicit */unsigned char) (signed char)(-127 - 1)))))) : (((/* implicit */int) var_9)))) % (((((/* implicit */int) (signed char)127)) + ((-(((/* implicit */int) arr_20 [i_9]))))))));
                }
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_25 = ((/* implicit */signed char) (-(arr_17 [i_5] [i_5] [i_5] [i_5])));
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_5]))) >= (((((/* implicit */_Bool) arr_33 [i_5] [i_5] [i_5])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                }
                arr_34 [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) min((1048814105783350974LL), (((/* implicit */long long int) (signed char)-123))));
                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (+(139619044U))))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (max((var_18), (((/* implicit */unsigned short) (signed char)-94))))))) >> (((var_8) - (6855336128340112614LL)))));
}
