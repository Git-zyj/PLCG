/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141573
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
    var_19 = ((/* implicit */short) (signed char)-1);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 += ((/* implicit */signed char) (+(-1597259314)));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
                    {
                        arr_10 [i_2] = ((/* implicit */short) (((-(134209536U))) << (((/* implicit */int) (_Bool)1))));
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((long long int) arr_2 [i_1] [i_3])))));
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (signed char)8))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
                    {
                        arr_13 [i_4] [i_2 - 1] [i_1] [i_0 + 1] = ((/* implicit */_Bool) max(((~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_6))))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))));
                        var_23 |= ((/* implicit */_Bool) var_6);
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 4) /* same iter space */
                    {
                        arr_18 [i_1] [11U] [i_2] [i_5] = ((/* implicit */unsigned char) 0U);
                        arr_19 [5U] [i_2] [i_1] [5U] = ((/* implicit */long long int) (signed char)-87);
                    }
                    var_24 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_16))))), (arr_4 [i_0] [i_1])));
                    arr_20 [i_2] = ((/* implicit */signed char) (_Bool)1);
                    arr_21 [3] [i_1] [i_0] [i_0 + 2] = ((/* implicit */unsigned int) (signed char)22);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_6 = 2; i_6 < 19; i_6 += 4) 
    {
        for (int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            for (unsigned int i_8 = 3; i_8 < 19; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 2; i_10 < 16; i_10 += 3) 
                        {
                            {
                                var_25 |= ((/* implicit */unsigned int) (+(-419819261)));
                                arr_34 [i_9] [i_9] [i_10] [i_7] [i_6] = ((/* implicit */long long int) 1092357421U);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)8)) + (-2147483637)));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_12 = 0; i_12 < 14; i_12 += 2) 
        {
            for (unsigned short i_13 = 2; i_13 < 12; i_13 += 4) 
            {
                for (unsigned int i_14 = 0; i_14 < 14; i_14 += 3) 
                {
                    {
                        var_27 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) arr_41 [i_11] [i_13 - 2] [i_11] [i_14])) : (4323455642275676160ULL)))));
                        var_28 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)118)) ? (3783745782600546446LL) : (((/* implicit */long long int) (+((((_Bool)1) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (short)-13166)))))))));
                        var_29 = (!(((/* implicit */_Bool) min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) var_0))))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) min((((/* implicit */int) var_9)), (((var_3) ? ((((_Bool)0) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) (short)18190)))) : (909465610))))))));
        /* LoopNest 2 */
        for (unsigned int i_15 = 1; i_15 < 11; i_15 += 1) 
        {
            for (short i_16 = 0; i_16 < 14; i_16 += 4) 
            {
                {
                    var_31 &= ((/* implicit */signed char) 1474188931U);
                    arr_52 [i_16] [i_15 - 1] [i_15 + 3] [12] |= ((/* implicit */unsigned short) (_Bool)0);
                    var_32 = ((/* implicit */int) 3920751742U);
                    var_33 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1044480U)) ? (((/* implicit */unsigned int) 2026475416)) : (1738673831U)));
                }
            } 
        } 
    }
    for (int i_17 = 1; i_17 < 14; i_17 += 2) 
    {
        var_34 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (1474188931U)))) ? (min((max((((/* implicit */unsigned int) (unsigned char)11)), (4293922815U))), (((/* implicit */unsigned int) (signed char)36)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-22138)) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (short)0))))));
        var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (unsigned short)11772)) : ((+((-(((/* implicit */int) (short)63)))))))))));
        var_36 = max((((/* implicit */long long int) var_5)), (((((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)197))))) ^ (((((/* implicit */long long int) ((/* implicit */int) (signed char)-58))) / (var_11))))));
    }
}
