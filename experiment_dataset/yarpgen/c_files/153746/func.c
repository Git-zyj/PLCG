/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153746
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
    var_12 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) > (var_8))))));
    var_13 = ((/* implicit */long long int) 2193754058U);
    var_14 |= ((unsigned long long int) (+(((((/* implicit */_Bool) (short)3842)) ? (var_9) : (var_9)))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 6; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) arr_1 [i_1]);
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_0] [i_0 + 1])) : (-570490466)))) ? (var_7) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)124))))) / (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_1]), ((signed char)-45))))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) (((-(arr_8 [i_2]))) / (((/* implicit */long long int) 268431360))));
        /* LoopNest 2 */
        for (signed char i_3 = 4; i_3 < 21; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 22; i_4 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) (~((((!(((/* implicit */_Bool) var_7)))) ? ((-(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_10 [i_2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        for (long long int i_6 = 1; i_6 < 18; i_6 += 3) 
                        {
                            {
                                arr_21 [i_6] &= ((/* implicit */_Bool) (+(var_7)));
                                var_17 = min((((/* implicit */unsigned short) (_Bool)0)), (((unsigned short) ((var_1) - (((/* implicit */long long int) arr_15 [i_2] [i_2] [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 = (!(((/* implicit */_Bool) max((arr_11 [i_2]), (arr_14 [i_2] [i_2])))));
        var_19 ^= ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 3; i_9 < 20; i_9 += 2) 
            {
                {
                    var_20 ^= ((((/* implicit */int) (signed char)124)) < (((/* implicit */int) (signed char)-62)));
                    arr_31 [i_8] [i_8] [i_9] = ((/* implicit */long long int) var_2);
                    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_24 [i_8])) : (((/* implicit */int) arr_24 [(_Bool)0]))))), (((((/* implicit */_Bool) (signed char)-45)) ? (-8439505974178775899LL) : (((/* implicit */long long int) arr_29 [i_7] [i_8] [i_9])))))))));
                    arr_32 [i_7] [i_8] [i_8 - 1] [i_9] = ((/* implicit */unsigned short) ((var_4) ? (max((((/* implicit */unsigned long long int) ((short) arr_12 [i_7] [i_8]))), (var_7))) : (((/* implicit */unsigned long long int) (-(((int) arr_12 [i_7] [i_9])))))));
                    var_22 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [0ULL] [i_8 + 2] [(_Bool)1])) || (((/* implicit */_Bool) (signed char)-125)))))) < ((~(arr_25 [i_9] [i_9] [12ULL])))));
                }
            } 
        } 
        arr_33 [i_7] [i_7] = arr_16 [i_7] [i_7] [i_7] [(unsigned short)14] [i_7] [i_7];
        var_23 -= ((/* implicit */short) var_1);
        arr_34 [i_7] = ((/* implicit */unsigned short) var_10);
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) /* same iter space */
    {
        arr_38 [i_10] = (~(((/* implicit */int) arr_23 [i_10] [i_10])));
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 22; i_11 += 3) 
        {
            arr_41 [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_10])) ? (((((/* implicit */_Bool) (short)-24722)) ? (0ULL) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11330)))));
            arr_42 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_19 [i_10] [i_11] [i_11] [i_10] [i_10] [i_10] [i_11])) : ((-(((/* implicit */int) (unsigned short)16165))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_12 = 3; i_12 < 21; i_12 += 3) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_24 ^= ((/* implicit */unsigned char) arr_23 [i_12 - 1] [i_10]);
                    arr_49 [i_10] [i_12] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) (short)24739)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_12 - 2] [12ULL] [i_12 - 1] [i_12 + 1]))) : (arr_11 [i_12 - 3])));
                    arr_50 [i_13] [i_12 - 2] [i_10] = (!(((/* implicit */_Bool) (~(1440946571U)))));
                }
            } 
        } 
    }
}
