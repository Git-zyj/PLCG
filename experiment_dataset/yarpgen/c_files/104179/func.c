/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104179
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
    var_11 = var_6;
    var_12 |= ((/* implicit */_Bool) var_10);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_13 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) / (((/* implicit */int) arr_2 [i_0] [i_0]))))) * (((arr_3 [i_0]) / (((/* implicit */unsigned long long int) var_6)))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_14 &= ((/* implicit */long long int) (unsigned short)16997);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (long long int i_4 = 2; i_4 < 9; i_4 += 4) 
                        {
                            {
                                var_15 += max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)16994))))), ((+(0LL))));
                                arr_14 [i_0] [i_1 - 1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) var_8);
                                var_16 += ((/* implicit */unsigned char) var_1);
                                var_17 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), ((~(2602401335U)))))), (var_5)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48541))) : (8365224791860236626LL)));
        var_19 = ((/* implicit */long long int) min((var_19), (min(((~(var_2))), (min((arr_12 [i_0] [i_0] [i_0] [2LL] [i_0] [i_0] [i_0]), (var_6)))))));
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            var_20 += ((/* implicit */_Bool) (unsigned short)16984);
            var_21 ^= ((/* implicit */_Bool) var_8);
            arr_18 [i_5] [i_5] = ((/* implicit */unsigned char) ((min((min((var_8), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) var_1)))) - (((/* implicit */long long int) (~((~(var_7))))))));
        }
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [(unsigned char)9] [i_0])) : (((/* implicit */int) var_9))))) > (var_3))))));
            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) var_0))));
        }
    }
    for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
    {
        arr_23 [(_Bool)1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_22 [i_7] [i_7]))));
        var_24 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13424049533190478829ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (13424049533190478829ULL)))) || (((/* implicit */_Bool) ((1229070756281498835ULL) * (18446744073709551614ULL)))))))));
        var_25 += ((/* implicit */long long int) var_9);
        arr_24 [i_7] [i_7] = ((/* implicit */unsigned char) (~(min((var_2), (((/* implicit */long long int) arr_21 [i_7] [i_7]))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 4) 
    {
        var_26 = var_7;
        /* LoopSeq 1 */
        for (long long int i_9 = 2; i_9 < 23; i_9 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_11 = 1; i_11 < 23; i_11 += 4) 
                {
                    arr_37 [i_8] [i_8] [i_8] [(_Bool)1] [i_8] |= var_1;
                    arr_38 [i_11 - 1] [i_11] [i_11] [(unsigned short)8] = ((/* implicit */unsigned long long int) ((var_10) + (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))));
                    arr_39 [(_Bool)1] [i_11] = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))));
                }
                /* LoopSeq 2 */
                for (long long int i_12 = 3; i_12 < 24; i_12 += 2) 
                {
                    var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) var_9))));
                    var_28 -= ((/* implicit */unsigned int) var_2);
                }
                for (long long int i_13 = 1; i_13 < 24; i_13 += 3) 
                {
                    var_29 = ((/* implicit */long long int) (~(arr_36 [i_9 + 1] [i_9 + 2] [i_13 - 1] [i_13])));
                    var_30 = ((/* implicit */long long int) arr_36 [9LL] [i_9 - 1] [i_10] [i_8]);
                    var_31 = ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
                    arr_45 [i_8] [(unsigned short)14] [i_9] [i_10] [i_9] = var_3;
                }
                var_32 ^= ((/* implicit */unsigned int) (~(arr_36 [i_8] [i_9] [i_9] [i_10])));
                arr_46 [i_8] [(unsigned short)1] [(unsigned char)12] = ((/* implicit */unsigned long long int) var_0);
            }
            var_33 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (13424049533190478829ULL)))) ? (min((-7090400965892798808LL), (((/* implicit */long long int) (unsigned short)16997)))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)199)))))));
            var_34 += ((/* implicit */unsigned int) max(((~(var_8))), (((var_4) ? (arr_43 [i_9 + 2] [i_9 - 2] [i_9 - 2]) : ((~(var_6)))))));
            var_35 &= max(((~(7090400965892798825LL))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))));
            arr_47 [i_8] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 5022694540519072786ULL)) ? (13424049533190478826ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) ((var_1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_7)))) : (((((/* implicit */_Bool) var_10)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
        }
        var_36 += ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_2)) : ((~((+(var_5))))));
    }
}
