/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119794
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
    var_20 = ((/* implicit */unsigned char) ((var_6) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (var_6)))) ? (var_1) : (((/* implicit */int) (unsigned short)60997))))));
    var_21 = var_8;
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(arr_1 [i_0])));
            arr_9 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)56515))));
        }
        var_22 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_7 [i_0])) ? (arr_3 [(_Bool)1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]))));
                                var_24 = ((/* implicit */unsigned int) (+(arr_13 [(unsigned short)1] [i_4 + 2] [1LL])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            {
                                arr_28 [(short)1] [i_7] [(short)1] [(_Bool)1] [4LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_6)) ^ (var_18)))) ? (arr_2 [4] [4]) : (arr_2 [i_0] [0LL])));
                                var_25 = ((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0]);
                                arr_29 [i_0] [i_0] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) (_Bool)1)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)123)) : (((arr_1 [i_0]) | (-987051004)))));
    }
    /* vectorizable */
    for (short i_8 = 3; i_8 < 14; i_8 += 3) 
    {
        var_27 |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_30 [i_8])) ? (arr_31 [(short)8]) : (arr_31 [(unsigned short)4])))));
        /* LoopSeq 2 */
        for (long long int i_9 = 0; i_9 < 17; i_9 += 1) /* same iter space */
        {
            arr_36 [i_8 + 2] [i_8] = (+(((/* implicit */int) arr_33 [i_8 - 1] [i_8])));
            arr_37 [i_8] [14] [i_8] = ((/* implicit */int) (unsigned short)4536);
            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) arr_33 [16] [6U]))));
        }
        for (long long int i_10 = 0; i_10 < 17; i_10 += 1) /* same iter space */
        {
            arr_41 [10U] [i_8] [(unsigned short)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_33 [i_8 - 3] [i_8])) ? (((/* implicit */int) arr_40 [i_8] [i_8 + 3] [i_8 - 3])) : (((/* implicit */int) arr_40 [i_8] [i_8 + 3] [i_8 - 3]))));
            arr_42 [i_8] = ((((/* implicit */_Bool) arr_30 [i_8 - 1])) ? (arr_30 [i_8 + 2]) : (arr_30 [i_8 - 2]));
        }
    }
    var_29 = ((/* implicit */int) ((unsigned short) ((int) ((((/* implicit */int) var_5)) >> (((var_17) - (4277883727U)))))));
    var_30 = ((/* implicit */int) var_17);
}
