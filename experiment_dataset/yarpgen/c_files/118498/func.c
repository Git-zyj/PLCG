/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118498
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
    var_14 = ((/* implicit */unsigned int) var_11);
    var_15 = ((/* implicit */unsigned short) (~(((((((/* implicit */int) var_7)) % (((/* implicit */int) var_2)))) << (((((((var_1) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)15)) - (15))))) - (9179759389980409224LL)))))));
    var_16 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)0))));
    /* LoopSeq 4 */
    for (int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((unsigned short) ((unsigned int) (_Bool)0)));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2)))))))) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-19)) == (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) == (((/* implicit */int) (_Bool)1))))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 13; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            {
                                arr_16 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                                var_17 = ((/* implicit */unsigned char) (_Bool)0);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 11; i_7 += 4) 
                        {
                            {
                                arr_22 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) var_11);
                                arr_23 [i_1] [i_1] [i_3] [i_1] [i_1] [6] = (((_Bool)1) ? (arr_18 [i_7] [i_7] [i_7 + 4] [i_7 + 4] [i_7 + 3]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                                var_18 = ((/* implicit */unsigned short) ((short) (signed char)-10));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (signed char i_9 = 2; i_9 < 14; i_9 += 1) 
                        {
                            {
                                var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_9 - 1])) ? (((/* implicit */int) arr_8 [i_9 - 2] [i_9] [(unsigned char)10])) : (((/* implicit */int) arr_1 [i_9 - 1]))));
                                var_20 = ((/* implicit */short) arr_18 [i_1] [i_1 + 4] [i_1] [i_1 - 1] [i_1 - 1]);
                                var_21 = var_7;
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_10 = 2; i_10 < 11; i_10 += 1) 
        {
            for (unsigned char i_11 = 2; i_11 < 12; i_11 += 3) 
            {
                {
                    arr_37 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))) == (((((/* implicit */_Bool) arr_28 [i_1 + 4] [0LL] [i_1 + 4] [i_1] [i_1 - 1] [i_1] [i_1 + 4])) ? (2U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                    var_22 ^= ((((/* implicit */_Bool) ((arr_31 [6LL] [0U]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) ? (8788782775565514797LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))));
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) var_13);
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_1 - 1] [0U] [i_1 + 3] [8ULL])) >= (((int) var_2))));
        arr_38 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)448))))) ? (arr_0 [8U]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (arr_0 [10])))))));
    }
    /* vectorizable */
    for (short i_12 = 4; i_12 < 14; i_12 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            for (unsigned short i_14 = 1; i_14 < 15; i_14 += 2) 
            {
                {
                    var_25 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) <= (var_0));
                    var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) || ((!(((/* implicit */_Bool) 4875153853074712088ULL))))));
                }
            } 
        } 
        arr_48 [i_12 + 2] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_39 [i_12 - 2])) ? (-1720455214) : (((/* implicit */int) (_Bool)1))));
        var_27 = ((/* implicit */long long int) (-(((/* implicit */int) arr_41 [i_12 - 1]))));
    }
    for (unsigned int i_15 = 0; i_15 < 14; i_15 += 3) 
    {
        arr_52 [i_15] [i_15] = min((((/* implicit */long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (0U)))), ((+(((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (var_1))))));
        /* LoopNest 3 */
        for (int i_16 = 0; i_16 < 14; i_16 += 4) 
        {
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                for (int i_18 = 0; i_18 < 14; i_18 += 3) 
                {
                    {
                        arr_63 [i_17] [i_16] = ((/* implicit */long long int) ((arr_5 [i_17 + 1]) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -771856242))))))));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (~(((/* implicit */int) var_4)))))) ? (var_9) : (((var_10) ? (436375507U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_15] [i_15] [i_15] [i_15] [i_15]))) == (var_8)))))))));
                        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (short)-32757)))), ((-(((/* implicit */int) (short)448))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_15] [i_15] [i_15])) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)33)))) : (((/* implicit */int) ((unsigned char) (short)-17731)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))) - ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_8))))))))));
                    }
                } 
            } 
        } 
    }
}
