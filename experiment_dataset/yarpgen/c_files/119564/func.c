/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119564
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
    var_11 = ((/* implicit */long long int) (signed char)-52);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned char) arr_3 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            arr_8 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) (-(arr_3 [i_0])));
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_12 [i_0] [i_4] = ((int) arr_11 [i_3] [i_3] [i_4] [i_3] [i_3] [i_3]);
                                var_13 = ((/* implicit */signed char) (_Bool)1);
                                arr_13 [2] [i_1] [i_4] [i_4] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_0] [i_3] [i_3] [i_1])) : (arr_0 [i_1] [i_1]))));
                            }
                            var_14 = ((/* implicit */short) max((((/* implicit */long long int) ((unsigned short) 131064ULL))), (((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */long long int) ((arr_6 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) - (((/* implicit */int) arr_9 [i_3] [i_1]))))) : (((6548426168020949680LL) % (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1] [i_3])))))))));
                            arr_14 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_4 [i_2])), (max(((-(((/* implicit */int) arr_9 [i_3] [0ULL])))), (((/* implicit */int) (_Bool)0))))));
                        }
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */unsigned int) (+(arr_6 [i_0] [i_0] [i_1] [i_1] [i_0] [i_1])));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 25; i_7 += 3) 
            {
                {
                    var_15 = ((/* implicit */int) (+(6548426168020949674LL)));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            {
                                arr_31 [i_5] [i_8] = max((-596991808), (((/* implicit */int) arr_21 [i_8] [i_5])));
                                arr_32 [i_5] [i_6] [i_6] [i_6] [i_5] = ((/* implicit */short) arr_21 [i_7] [i_5]);
                            }
                        } 
                    } 
                    arr_33 [i_5] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_27 [i_5] [i_7] [i_7] [i_6] [i_6] [i_5] [i_5])) ? (((/* implicit */int) arr_27 [i_5] [i_7] [i_7] [i_6] [i_6] [i_5] [i_5])) : (((/* implicit */int) (_Bool)1)))), ((+((~(((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 13; i_10 += 1) 
    {
        for (short i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned int) arr_16 [i_10]);
                arr_39 [i_10] [i_11] = var_7;
                arr_40 [i_11] = ((((/* implicit */_Bool) arr_4 [i_10])) ? (((unsigned int) arr_2 [i_10] [i_10] [i_10])) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))));
            }
        } 
    } 
}
