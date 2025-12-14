/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15155
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_16) : (-1350867883)))) - (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (8617440935493400717LL))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26388)))));
    var_21 -= ((/* implicit */int) var_7);
    var_22 += var_5;
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_23 ^= ((/* implicit */int) var_2);
        arr_2 [i_0] |= ((/* implicit */signed char) var_17);
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_24 -= ((/* implicit */signed char) var_1);
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_3 + 1]))) != ((-(3812602709U)))));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) var_10))));
                    }
                } 
            } 
            var_27 = ((/* implicit */short) ((((/* implicit */int) var_13)) - (((/* implicit */int) ((signed char) var_8)))));
        }
        for (int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            var_28 = ((/* implicit */signed char) (((~(((/* implicit */int) var_0)))) & (((/* implicit */int) arr_10 [i_0] [i_4]))));
            /* LoopSeq 1 */
            for (long long int i_5 = 1; i_5 < 19; i_5 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    arr_17 [i_5] [i_0] [i_5] = ((/* implicit */unsigned int) ((((_Bool) var_13)) ? (((/* implicit */int) arr_12 [i_4] [i_4] [i_5 - 1])) : (((/* implicit */int) var_9))));
                    var_29 |= ((/* implicit */_Bool) var_1);
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_14 [i_5 + 1] [i_5] [i_5 - 1])) < (((/* implicit */int) var_10))));
                    var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) arr_12 [i_0] [i_5] [i_0]))));
                }
                for (short i_7 = 3; i_7 < 19; i_7 += 2) 
                {
                    arr_21 [(unsigned short)19] [i_5] [i_0] [i_7 - 1] [i_0] [i_0] = ((/* implicit */signed char) 3401641900U);
                    var_32 = ((/* implicit */signed char) var_6);
                }
                arr_22 [i_0] [i_4] [i_5] = ((/* implicit */short) (unsigned char)255);
                arr_23 [i_5] [i_4] [i_5 + 1] = ((/* implicit */unsigned short) arr_6 [i_0] [i_5 - 1] [i_5 - 1]);
            }
        }
        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_8])) ? (1913959274U) : (((/* implicit */unsigned int) arr_24 [i_8]))));
            var_34 = ((/* implicit */signed char) var_7);
            /* LoopNest 3 */
            for (unsigned short i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (signed char i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */long long int) arr_31 [i_0] [i_8] [i_0] [i_0]);
                            var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (var_12) : (var_16))))));
                        }
                    } 
                } 
            } 
            var_37 = ((/* implicit */long long int) ((-1762948722) ^ (var_12)));
        }
        var_38 = ((/* implicit */short) 917336102);
        /* LoopSeq 1 */
        for (short i_12 = 3; i_12 < 18; i_12 += 2) 
        {
            arr_38 [i_0] [i_12] = ((/* implicit */_Bool) (~(((-1541534384) / (((/* implicit */int) (signed char)124))))));
            var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_0] [0U] [i_12] [i_12 - 1])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_15 [i_0] [(short)8] [(short)8] [i_12 + 2]))));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 20; i_13 += 1) 
            {
                for (long long int i_14 = 3; i_14 < 19; i_14 += 3) 
                {
                    {
                        var_40 ^= ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))) == ((-9223372036854775807LL - 1LL)));
                        var_41 = ((/* implicit */int) var_0);
                        var_42 = (signed char)-22;
                    }
                } 
            } 
        }
    }
    for (short i_15 = 0; i_15 < 20; i_15 += 1) /* same iter space */
    {
        arr_48 [i_15] [i_15] = max(((+(684696639))), (((/* implicit */int) ((((/* implicit */int) var_6)) != ((-(((/* implicit */int) arr_27 [6ULL]))))))));
        var_43 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_18))));
    }
    for (short i_16 = 0; i_16 < 20; i_16 += 1) /* same iter space */
    {
        var_44 ^= max((((/* implicit */unsigned int) var_15)), (var_2));
        var_45 = ((/* implicit */unsigned int) ((max((((/* implicit */int) var_5)), (((((/* implicit */int) (unsigned char)2)) * (((/* implicit */int) (unsigned short)4724)))))) * (((/* implicit */int) max((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_17)))), (((arr_43 [i_16] [i_16] [i_16] [i_16] [i_16] [(short)12]) && (((/* implicit */_Bool) var_9)))))))));
        var_46 = ((/* implicit */long long int) min((min((((/* implicit */int) var_9)), (arr_47 [i_16]))), (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_33 [i_16] [i_16] [i_16])) : (var_19))) * (((((/* implicit */int) var_13)) / (((/* implicit */int) var_5))))))));
        arr_52 [i_16] [i_16] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_16] [i_16]))))) : (((/* implicit */int) arr_9 [i_16] [i_16] [(short)5] [i_16]))))));
        var_47 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_51 [i_16])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_51 [i_16]))))));
    }
    for (short i_17 = 0; i_17 < 20; i_17 += 1) /* same iter space */
    {
        arr_55 [i_17] [i_17] = ((/* implicit */unsigned int) -1350867873);
        var_48 = ((/* implicit */long long int) max((arr_36 [i_17] [i_17]), (((/* implicit */short) var_10))));
        var_49 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-13097))) ^ (4088433613U)))) * (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) max((3353206530U), (((/* implicit */unsigned int) arr_35 [i_17] [i_17]))))) : (var_11)))));
    }
}
