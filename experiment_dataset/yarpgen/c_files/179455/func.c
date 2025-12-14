/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179455
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
    var_13 = ((/* implicit */unsigned int) (-(((((/* implicit */int) min(((unsigned short)55608), (var_3)))) / (((/* implicit */int) var_3))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) (+(((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) arr_0 [i_0])) - (22281)))))))) : (((/* implicit */_Bool) (+(((((/* implicit */int) arr_0 [i_0])) << (((((((/* implicit */int) arr_0 [i_0])) - (22281))) + (840))))))));
        arr_3 [i_0] = ((/* implicit */int) arr_1 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_0 [i_0]))));
        var_14 = ((/* implicit */unsigned char) arr_1 [i_0 + 1]);
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */int) (!(var_8)))) % (((int) (unsigned short)55608)))))));
                    var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)0)))) < (((/* implicit */int) (!(((/* implicit */_Bool) 14)))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) (signed char)122)) || (((/* implicit */_Bool) var_12))))))))));
                                arr_15 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 2] = ((/* implicit */long long int) ((unsigned short) (unsigned short)56796));
                                arr_16 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_3);
                                arr_17 [i_0] [i_1] [i_0] [i_0] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) arr_5 [i_3] [i_3] [i_2])) ? (arr_6 [i_0] [i_0] [i_0 - 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (int i_6 = 3; i_6 < 17; i_6 += 3) 
                        {
                            {
                                var_18 = ((((/* implicit */_Bool) 44)) ? ((+(((/* implicit */int) arr_13 [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0])))) : (14));
                                arr_22 [i_0] [i_0] = ((/* implicit */int) var_10);
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_1 - 1])))))));
                                arr_23 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)32765))));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_5] [i_2] [i_1] [i_0 - 1] [i_0])) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_5] [i_0])))) : (((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
    {
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 21; i_8 += 4) 
        {
            for (unsigned short i_9 = 0; i_9 < 21; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    {
                        arr_35 [i_9] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_33 [i_8] [i_9]) : (arr_33 [i_9] [i_9])))) ? (max((((/* implicit */int) var_0)), (arr_33 [i_7] [i_9]))) : ((+(arr_33 [i_8] [i_9]))));
                        var_21 ^= ((/* implicit */short) (!(((/* implicit */_Bool) 2147483641))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */long long int) min((var_22), (var_12)));
        arr_36 [i_7] [i_7] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))))))));
        var_23 = ((/* implicit */unsigned char) 1);
        /* LoopNest 3 */
        for (short i_11 = 3; i_11 < 18; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (long long int i_13 = 4; i_13 < 20; i_13 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) arr_32 [i_7] [i_12] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) (unsigned char)215)) : (arr_26 [i_11 + 2] [i_11 + 2]))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((unsigned char) var_2))) : (((/* implicit */int) var_5))))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) 9223372036854775807LL))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_14 = 4; i_14 < 20; i_14 += 3) 
    {
        arr_45 [i_14] [i_14] = ((/* implicit */short) arr_26 [i_14 - 3] [i_14 - 1]);
        arr_46 [i_14] = ((/* implicit */unsigned char) (+(-22)));
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((arr_28 [i_14 - 4]) > (arr_28 [i_14 - 4]))))));
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 1; i_15 < 18; i_15 += 3) 
        {
            for (int i_16 = 0; i_16 < 21; i_16 += 1) 
            {
                {
                    var_27 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_32 [i_14 - 1] [i_14 - 4] [i_14] [i_14 - 4] [i_14] [i_14])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)41))))));
                    /* LoopSeq 1 */
                    for (int i_17 = 0; i_17 < 21; i_17 += 4) 
                    {
                        var_28 += arr_34 [i_17] [i_17] [i_15 + 3] [i_16] [i_15 + 3] [i_14];
                        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) arr_49 [i_14 - 1]))));
                    }
                    var_30 -= ((/* implicit */unsigned char) (_Bool)1);
                }
            } 
        } 
    }
    for (short i_18 = 0; i_18 < 19; i_18 += 3) 
    {
        var_31 = ((/* implicit */unsigned char) var_8);
        /* LoopNest 2 */
        for (unsigned short i_19 = 0; i_19 < 19; i_19 += 4) 
        {
            for (unsigned char i_20 = 1; i_20 < 18; i_20 += 2) 
            {
                {
                    var_32 ^= ((/* implicit */short) var_0);
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned short) var_8))))))));
                        arr_65 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */int) max((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_12))))))), (var_4)));
                    }
                    arr_66 [i_18] [i_18] [i_20] = ((/* implicit */unsigned char) arr_14 [i_18] [i_20] [i_19] [i_19] [i_19] [i_18]);
                }
            } 
        } 
    }
    var_34 = ((/* implicit */unsigned short) max((15376203525112803697ULL), (((/* implicit */unsigned long long int) var_7))));
}
