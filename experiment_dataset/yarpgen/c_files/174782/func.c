/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174782
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_16 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (var_11))), (9763167501091656749ULL)));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_17 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)1161)) ? (((/* implicit */int) (unsigned short)65507)) : (((/* implicit */int) (short)-26534)))), (((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((arr_5 [i_0] [i_1] [i_2]) ? (((var_1) / (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0])) * (((/* implicit */int) var_9))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) (+(16316072504359371873ULL)));
                                arr_12 [i_0] [i_0] [i_0] [i_3] [i_4] &= ((/* implicit */short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)49))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)191))))) : (min((((/* implicit */unsigned int) var_2)), (arr_0 [i_0] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4756316974204357860ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (735117975))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(735117975)))) ? (((/* implicit */int) (unsigned short)29)) : (min((((/* implicit */int) var_13)), ((-(((/* implicit */int) (unsigned char)88))))))));
        var_21 = ((((/* implicit */int) (unsigned short)31345)) - (((/* implicit */int) (_Bool)1)));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
        {
            var_22 = ((/* implicit */long long int) (signed char)118);
            arr_17 [i_6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) - (((var_11) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31)))))));
        }
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            for (signed char i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                {
                    arr_23 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_7))));
                    arr_24 [i_5] = ((/* implicit */short) ((((/* implicit */int) (signed char)86)) - (-1191338454)));
                }
            } 
        } 
    }
    for (signed char i_9 = 0; i_9 < 18; i_9 += 3) 
    {
        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) -1191338461))));
        var_24 -= ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_4)), (arr_27 [i_9] [i_9])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)21010))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (((arr_25 [i_9]) | (((/* implicit */unsigned long long int) arr_28 [i_9])))))));
    }
    for (unsigned char i_10 = 0; i_10 < 23; i_10 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_11 = 0; i_11 < 23; i_11 += 3) 
        {
            for (signed char i_12 = 0; i_12 < 23; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 23; i_13 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (0U)));
                        var_26 -= ((/* implicit */unsigned long long int) 4145814819U);
                        var_27 += ((/* implicit */unsigned char) 228928158U);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_14 = 0; i_14 < 23; i_14 += 2) 
        {
            for (short i_15 = 0; i_15 < 23; i_15 += 4) 
            {
                {
                    arr_45 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_14)) + (((/* implicit */int) var_9)))) - (((/* implicit */int) ((unsigned char) (unsigned char)99)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 3) 
                    {
                        for (signed char i_17 = 0; i_17 < 23; i_17 += 3) 
                        {
                            {
                                var_28 &= (unsigned char)160;
                                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_2)) - (1191338461))))) ? (((((/* implicit */int) var_5)) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18564))))))) : (((((/* implicit */_Bool) ((-2851110324922774969LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)5)))))) ? (((/* implicit */int) (signed char)-81)) : (((/* implicit */int) ((short) (signed char)-5)))))));
                                arr_51 [i_16] [i_16] [i_17] [i_17] [17U] = ((/* implicit */unsigned long long int) var_7);
                                var_30 = ((/* implicit */unsigned long long int) (short)-24224);
                                var_31 *= ((/* implicit */unsigned short) ((99633862U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)874)))));
                            }
                        } 
                    } 
                    var_32 = var_10;
                    /* LoopNest 2 */
                    for (signed char i_18 = 0; i_18 < 23; i_18 += 2) 
                    {
                        for (unsigned char i_19 = 0; i_19 < 23; i_19 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (_Bool)1)), (354308939U))) - (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                                var_34 = ((/* implicit */_Bool) var_2);
                                var_35 = (unsigned short)65527;
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_36 = var_6;
}
