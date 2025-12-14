/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184930
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1)) ? (((arr_4 [i_0] [i_1] [(signed char)17]) + (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) arr_2 [i_0]))));
            arr_7 [i_0] [13LL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))));
        }
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((signed char) ((((((/* implicit */_Bool) 3476834344U)) && (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_4 [i_3] [i_2 + 1] [i_3])) ? (((/* implicit */int) var_14)) : (var_12))) : (((/* implicit */int) (unsigned short)38704)))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 20; i_4 += 4) 
                    {
                        for (long long int i_5 = 2; i_5 < 20; i_5 += 3) 
                        {
                            {
                                arr_20 [i_0] [i_0] [i_0] [12U] [i_0] [i_3] [13] = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)171)), (((((/* implicit */_Bool) (unsigned short)38704)) ? (((/* implicit */int) max(((signed char)-21), (((/* implicit */signed char) (_Bool)0))))) : ((~(((/* implicit */int) (short)-31925))))))));
                                var_20 += ((/* implicit */_Bool) var_2);
                                arr_21 [i_0] [i_0] [i_3] [i_0] [i_4 + 2] [(short)0] [i_5] = ((/* implicit */signed char) var_9);
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) min((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_16 [i_0 + 1] [i_2] [i_2] [i_0] [i_4] [i_5])))), (((/* implicit */int) (unsigned short)59685))))) == (((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)67)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) : (arr_4 [i_4 + 2] [i_4 + 2] [i_2 + 2])))));
                                arr_22 [i_0] [i_4 + 1] [i_0] [i_4 + 2] [i_0] [i_4 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 33554431)) ? ((+(((/* implicit */int) arr_14 [i_4 - 1] [i_0] [i_2 + 1] [i_0 + 1] [i_0] [i_0 + 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)31925)))))));
                            }
                        } 
                    } 
                    var_22 = ((((/* implicit */_Bool) (short)31944)) ? (arr_19 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0 + 1] [(short)13]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_2])))) : (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_11 [i_0] [(signed char)5] [i_0]))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 22; i_6 += 3) 
        {
            var_23 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-31925))))) ? (((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)254)))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_14 [i_0 + 1] [(signed char)0] [i_0] [i_0] [i_6] [i_6])), ((unsigned char)237)))));
            arr_26 [i_0] [19] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 1] [i_0 + 1] [i_0]))) - (((((/* implicit */_Bool) arr_1 [i_0])) ? (4294967288U) : (((/* implicit */unsigned int) var_12)))))))));
        }
        /* LoopSeq 2 */
        for (short i_7 = 2; i_7 < 20; i_7 += 2) 
        {
            arr_29 [i_0] = ((/* implicit */unsigned short) ((max(((!(((/* implicit */_Bool) 1826430265U)))), ((!((_Bool)1))))) || (((/* implicit */_Bool) (short)2))));
            arr_30 [i_0] [i_0] [i_7 - 2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (signed char)-32)), (arr_18 [i_7 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])));
        }
        /* vectorizable */
        for (unsigned int i_8 = 1; i_8 < 21; i_8 += 1) 
        {
            arr_35 [i_0] [i_0] = ((/* implicit */_Bool) arr_5 [i_8 + 1] [i_8 - 1]);
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 20U)) - (var_0)))) ? (2398629027U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120)))));
            var_25 += ((/* implicit */short) ((((/* implicit */int) (unsigned short)56353)) - (((/* implicit */int) (signed char)-66))));
        }
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_38 [i_9] [i_9] = ((/* implicit */short) ((unsigned short) min((1826430265U), (arr_17 [i_9]))));
        arr_39 [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_18 [i_9] [i_9] [i_9] [i_9] [i_9])))) ? (((/* implicit */unsigned long long int) arr_19 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) : (((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_0))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))))) ? (((((/* implicit */_Bool) arr_14 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) ? (arr_12 [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */int) arr_31 [i_9])))) : (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)1024)) : (1263447337))))))));
    }
    var_26 = ((/* implicit */unsigned int) var_7);
    var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) ((var_8) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58)))))), ((-(((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 25; i_10 += 2) 
    {
        for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) 
        {
            {
                var_28 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)58))));
                /* LoopNest 3 */
                for (int i_12 = 1; i_12 < 24; i_12 += 2) 
                {
                    for (short i_13 = 0; i_13 < 25; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_46 [i_10] [i_11] [i_11] [i_11]))));
                                arr_51 [i_11] [i_13] [16] [0] [i_10] [0] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_6)) + (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_49 [i_10] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1])))));
                                var_30 = ((((/* implicit */_Bool) (short)25453)) ? (-520569306) : (((/* implicit */int) (signed char)85)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
