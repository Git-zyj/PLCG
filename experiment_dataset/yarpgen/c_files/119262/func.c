/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119262
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
    var_14 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_15 = ((/* implicit */long long int) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) < (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))))));
            var_16 = (+(((long long int) (-(((/* implicit */int) (unsigned char)247))))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 1; i_4 < 9; i_4 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_5 = 2; i_5 < 11; i_5 += 2) /* same iter space */
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) ^ (((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_3] [i_0] [i_5]))) : (arr_11 [i_5] [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            arr_16 [i_0] [i_0] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_0))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_15 [i_0] [i_2] [i_0] [i_4 - 1] [i_2])))))));
                            arr_17 [i_0] [i_0] [i_3] [i_4 + 1] [i_0] = ((/* implicit */unsigned short) (~(17592169267200ULL)));
                            arr_18 [i_0] [i_3] [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */_Bool) arr_14 [i_0]);
                        }
                        for (signed char i_6 = 2; i_6 < 11; i_6 += 2) /* same iter space */
                        {
                            arr_21 [i_0] [i_2] [i_0] [i_4] [i_6 - 1] [i_6 + 2] = ((/* implicit */_Bool) max(((unsigned short)44867), (((/* implicit */unsigned short) (unsigned char)175))));
                            var_18 = ((/* implicit */signed char) (~(arr_10 [i_3] [i_0] [i_4 + 4] [i_3] [i_6 + 1])));
                        }
                        var_19 *= ((/* implicit */_Bool) var_6);
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_8 = 2; i_8 < 10; i_8 += 3) 
                {
                    var_20 -= ((/* implicit */unsigned char) (+(arr_4 [i_8 - 2] [i_8 + 2] [i_8 - 2])));
                    /* LoopSeq 4 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        arr_28 [i_0] [i_2] [i_2] [i_8] [i_9] [i_2] |= ((/* implicit */_Bool) (+(arr_14 [i_8 - 1])));
                        var_21 -= ((/* implicit */unsigned int) arr_13 [i_0] [i_0] [i_0] [i_7] [i_2] [i_0] [i_9]);
                        arr_29 [i_0] [i_2] [i_7] [i_0] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))));
                        var_22 = ((/* implicit */long long int) (~(arr_10 [i_8 + 3] [i_0] [i_7] [i_0] [i_0])));
                    }
                    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)5)) && (((/* implicit */_Bool) (unsigned short)4359))));
                        var_24 += ((/* implicit */unsigned short) (~(arr_1 [i_0] [i_2])));
                        var_25 -= var_5;
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_26 -= ((/* implicit */unsigned short) var_3);
                        var_27 = var_6;
                    }
                    for (unsigned int i_12 = 0; i_12 < 13; i_12 += 1) 
                    {
                        var_28 -= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_35 [i_0]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_34 [i_2] [i_2] [i_2] [i_2] [i_2])) > (var_7))))));
                        arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] = arr_15 [i_0] [i_8 - 1] [i_7] [i_8 + 2] [i_8 + 2];
                    }
                }
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))) ^ (arr_11 [i_0] [i_2] [i_0] [i_2] [i_7] [i_7])));
            }
            var_30 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_2] [i_2])) && (((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_0] [i_2]))))) + (((/* implicit */int) ((unsigned char) (unsigned char)9)))));
            /* LoopNest 2 */
            for (unsigned int i_13 = 3; i_13 < 11; i_13 += 4) 
            {
                for (int i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_47 [i_0] [i_13 - 3] [i_0] = ((/* implicit */_Bool) (~((~(arr_33 [i_13] [i_0] [i_13 - 3] [i_13 + 1])))));
                            var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_12 [i_14] [i_0] [i_13 + 1] [i_0] [i_2]))))) | (arr_33 [i_15] [i_0] [i_0] [i_13])));
                        }
                        var_32 = (+(min(((-(var_3))), (((/* implicit */unsigned int) arr_7 [i_0] [i_13 + 2] [i_13 - 3] [i_0])))));
                        var_33 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (~(arr_2 [i_14] [i_14]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)0)))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_11))))))));
                        var_34 -= ((/* implicit */unsigned int) ((unsigned char) (~(arr_10 [i_0] [i_2] [i_0] [i_13 - 2] [i_2]))));
                    }
                } 
            } 
        }
        for (unsigned short i_16 = 0; i_16 < 13; i_16 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_17 = 0; i_17 < 13; i_17 += 4) 
            {
                var_35 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_10 [i_0] [i_17] [i_16] [i_17] [i_17]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_0] [i_0] [i_17]))))))));
                var_36 += ((/* implicit */unsigned long long int) (~((-(var_3)))));
                arr_52 [i_0] [i_0] [i_16] [i_17] = ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
            }
            var_37 += ((/* implicit */unsigned short) (-(((max((((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_16] [i_0])), (arr_4 [i_0] [i_0] [i_0]))) << (((arr_9 [i_16] [i_16] [8U]) - (3340395120U)))))));
        }
        var_38 = ((/* implicit */signed char) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
    }
    var_40 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) var_12))))) : (((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))))));
    var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((long long int) var_9)) <= (((/* implicit */long long int) ((/* implicit */int) var_2)))))) << (((var_0) - (4786475791655168285LL)))));
}
