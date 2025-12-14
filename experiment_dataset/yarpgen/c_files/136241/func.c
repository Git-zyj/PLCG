/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136241
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
    var_20 |= ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    for (signed char i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) arr_2 [i_0 - 3]);
                                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (signed char)-14))) << (((((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_4])) - (6858))))))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_4 + 1] [i_0 + 1])) ? (-1000524203) : (arr_4 [i_4 - 1] [i_0 + 1])))) <= (((long long int) (signed char)114))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned int) ((int) ((unsigned long long int) arr_2 [i_1])));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 1329670330U)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (signed char)-98)))))) & (((((1087928784U) <= (((/* implicit */unsigned int) 702936505)))) ? (((/* implicit */int) (signed char)-64)) : (((/* implicit */int) (signed char)-98))))));
        arr_16 [i_5] = ((/* implicit */signed char) (unsigned char)137);
        arr_17 [15] = ((/* implicit */unsigned char) arr_14 [i_5]);
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) arr_13 [i_5]))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-14)) + (((int) arr_1 [i_6] [i_6]))));
        var_28 = ((/* implicit */unsigned int) ((int) 3560388239U));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            for (signed char i_8 = 1; i_8 < 16; i_8 += 2) 
            {
                {
                    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) ((_Bool) arr_15 [i_7])))));
                    var_30 -= ((/* implicit */unsigned long long int) ((arr_4 [i_6 + 1] [i_6 + 1]) != (((/* implicit */int) (short)21205))));
                }
            } 
        } 
        var_31 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_6 + 2] [i_6 - 1])) ? (arr_4 [i_6 + 2] [i_6 + 1]) : (((/* implicit */int) arr_21 [i_6 - 1]))));
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            for (short i_10 = 1; i_10 < 17; i_10 += 4) 
            {
                for (unsigned short i_11 = 1; i_11 < 17; i_11 += 4) 
                {
                    {
                        var_32 = ((/* implicit */short) ((((unsigned long long int) -3965862936834199684LL)) << (((/* implicit */int) arr_22 [i_11 + 2]))));
                        arr_35 [i_6] [i_6] [i_10] [i_11] [i_9] |= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) (signed char)85))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 1; i_12 < 18; i_12 += 4) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned int) min((var_33), (2790839930U)));
        /* LoopNest 3 */
        for (unsigned char i_13 = 4; i_13 < 18; i_13 += 1) 
        {
            for (unsigned long long int i_14 = 1; i_14 < 19; i_14 += 2) 
            {
                for (unsigned short i_15 = 0; i_15 < 20; i_15 += 3) 
                {
                    {
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) -728642505)) ? (((/* implicit */int) arr_39 [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_39 [i_14] [i_13 - 2] [i_14]))));
                        var_35 *= ((unsigned char) arr_27 [i_12 + 1]);
                        arr_49 [16LL] [i_12] [i_12] [(unsigned char)10] [i_12] [i_12] |= ((/* implicit */long long int) arr_37 [i_12]);
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */int) arr_23 [i_12] [i_12] [1ULL]);
        arr_50 [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)85)) + (((/* implicit */int) (_Bool)1)))))));
    }
}
