/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103315
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
    var_14 &= ((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (min(((-(262143U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))))));
    var_15 |= ((/* implicit */short) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */_Bool) var_3);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_2 [i_3 - 1]))));
                                var_17 = ((/* implicit */_Bool) (~((+(arr_13 [i_4 - 3] [i_3] [i_4] [i_4 - 2] [i_4] [i_4] [i_4])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_5 = 1; i_5 < 22; i_5 += 2) /* same iter space */
    {
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned int) var_11);
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            for (unsigned short i_7 = 1; i_7 < 21; i_7 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))), (3111321574314356716ULL)));
                    arr_25 [i_5] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-19912)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_11 [i_5] [i_5] [i_5] [i_5]))))))) | (arr_2 [i_5 + 1])));
                    arr_26 [i_5] [i_6] [i_5] [i_7] = ((/* implicit */long long int) var_7);
                    var_19 = ((/* implicit */long long int) min((var_7), (var_12)));
                }
            } 
        } 
        var_20 = ((/* implicit */int) max(((-(arr_10 [i_5 + 1] [i_5] [i_5]))), (((/* implicit */unsigned int) arr_20 [i_5]))));
    }
    for (unsigned short i_8 = 1; i_8 < 22; i_8 += 2) /* same iter space */
    {
        arr_29 [i_8] [i_8] = ((/* implicit */int) var_1);
        arr_30 [i_8] = ((/* implicit */unsigned short) min((((((/* implicit */int) (short)-19918)) ^ (((/* implicit */int) arr_24 [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8])))), (((/* implicit */int) ((((/* implicit */int) ((144115187002114048LL) >= (((/* implicit */long long int) ((/* implicit */int) var_3)))))) < ((-(((/* implicit */int) arr_11 [i_8] [i_8] [i_8] [i_8])))))))));
        /* LoopNest 3 */
        for (unsigned char i_9 = 2; i_9 < 20; i_9 += 2) 
        {
            for (long long int i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                for (long long int i_11 = 0; i_11 < 23; i_11 += 2) 
                {
                    {
                        arr_41 [i_9 + 3] = ((/* implicit */short) ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))), (((long long int) arr_19 [i_8 - 1] [i_8] [i_8])))) * (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4691)) ? (35184372088831ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */int) var_9)) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) arr_34 [i_9] [i_10]))))))))));
                        arr_42 [i_8] [(unsigned short)16] [i_8] [i_8] [i_8 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_8 - 1] [i_9 - 2] [i_10] [i_11])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))));
                        arr_43 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_23 [i_9] [i_10]), (2880590583678035451ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_23 [i_10] [i_11])))) : ((~(arr_23 [i_10] [i_8])))));
                        arr_44 [i_8] [i_9] [i_10] [i_10] [i_11] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_11))));
                    }
                } 
            } 
        } 
        arr_45 [(_Bool)1] [11] = arr_11 [i_8] [i_8] [i_8] [i_8];
    }
}
