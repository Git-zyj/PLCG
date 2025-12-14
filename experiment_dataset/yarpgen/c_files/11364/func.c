/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11364
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_20 ^= ((/* implicit */unsigned char) (~((-(((/* implicit */int) min((arr_5 [i_2]), (((/* implicit */short) (_Bool)1)))))))));
                            arr_10 [i_0] [i_0] [i_0] [i_0] [i_3] [i_0] = ((((arr_0 [i_3 + 1] [i_1 + 1]) != (arr_0 [i_3 + 1] [i_1 + 1]))) ? (((((var_16) ^ (var_16))) | (762657608))) : (((/* implicit */int) arr_1 [i_1] [i_2])));
                        }
                    } 
                } 
                arr_11 [i_0] &= ((/* implicit */unsigned char) max((910221073923042489ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned char i_4 = 1; i_4 < 12; i_4 += 2) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */short) var_7);
        arr_16 [i_4] &= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 2; i_6 < 24; i_6 += 2) 
        {
            for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
            {
                for (signed char i_8 = 2; i_8 < 24; i_8 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_17 [i_5] [i_7])) : (var_5)))))));
                        var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) -1497824310)) ? (((((/* implicit */_Bool) ((long long int) var_5))) ? (((int) var_6)) : (((/* implicit */int) arr_23 [i_6 - 1] [i_6 - 1])))) : (((/* implicit */int) min((arr_24 [i_8 - 2] [i_6 - 2] [i_7] [i_8 - 1]), (((((/* implicit */_Bool) -762657610)) && (arr_21 [i_5] [i_5] [i_5]))))))));
                        var_23 |= ((/* implicit */unsigned short) max((8087585040902392471ULL), (8094748056200955615ULL)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_9 = 4; i_9 < 23; i_9 += 1) 
        {
            for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                {
                    arr_34 [i_10] [i_9 - 1] [i_9 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_21 [i_9 - 4] [i_10] [i_10])), (arr_30 [i_9 + 1] [i_9 + 1])))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_9] [i_9]))) : (var_8)))))));
                    var_24 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)241)) : (1246572522)))) ? (((/* implicit */int) var_13)) : (arr_26 [i_5] [i_9] [i_10] [i_10]))), ((-(((/* implicit */int) var_1))))));
                }
            } 
        } 
        arr_35 [i_5] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (3510215288984312495LL)))) ? ((+(((/* implicit */int) arr_17 [i_5] [i_5])))) : ((+(((/* implicit */int) var_9)))))), ((~(((/* implicit */int) arr_24 [i_5] [i_5] [i_5] [i_5]))))));
    }
    /* vectorizable */
    for (int i_11 = 3; i_11 < 23; i_11 += 4) 
    {
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 21; i_12 += 3) 
        {
            for (long long int i_13 = 0; i_13 < 24; i_13 += 4) 
            {
                for (long long int i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    {
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)37)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7458974881594036593ULL))))));
                        arr_45 [i_12] [i_12] = ((/* implicit */unsigned char) arr_30 [i_12] [i_14]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_15 = 0; i_15 < 24; i_15 += 4) 
        {
            for (short i_16 = 2; i_16 < 21; i_16 += 1) 
            {
                {
                    arr_51 [i_16] [i_16] = ((/* implicit */unsigned char) arr_17 [i_11 - 3] [i_16 - 2]);
                    var_26 = arr_20 [i_11] [i_15] [i_16 + 3];
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 24; i_17 += 2) 
                    {
                        for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 3) 
                        {
                            {
                                arr_56 [i_17] [i_18] [i_17] [i_17] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_16 + 2] [i_11 + 1])) / (((/* implicit */int) arr_18 [i_16 + 3] [i_11 - 3]))));
                                var_27 = ((/* implicit */_Bool) (-(36028522141057024ULL)));
                                arr_57 [i_11] [i_11] [i_11] [i_11 - 2] [i_11] [i_11] = ((/* implicit */unsigned char) ((1497824309) % (arr_26 [i_11] [i_11] [i_11] [i_11 - 2])));
                                var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (-((-(var_15))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_29 = ((/* implicit */short) min((4230798631409792313ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_19)))) ? (((/* implicit */int) var_2)) : (var_11))))));
    var_30 |= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (signed char)0)))))));
}
