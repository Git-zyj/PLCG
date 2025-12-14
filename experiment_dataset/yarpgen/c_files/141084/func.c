/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141084
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
    var_20 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (short)-1227)) <= (((/* implicit */int) (unsigned short)61354))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) min((((/* implicit */int) var_9)), ((~(((/* implicit */int) (unsigned char)243))))))) & (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (1855802912U))))))));
                arr_6 [6U] = ((/* implicit */int) (((!((_Bool)1))) || (((/* implicit */_Bool) ((signed char) var_19)))));
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)7936))))))));
                var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_16)), (2439164391U)))) + (var_10)))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)61365)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */int) var_6))))));
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((signed char) max((var_0), (((/* implicit */int) var_2))))))));
        var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) min((var_2), (((unsigned short) (unsigned char)12)))))));
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_27 = ((/* implicit */unsigned long long int) var_3);
            var_28 += ((/* implicit */int) var_10);
            arr_12 [i_2] [(unsigned short)6] [(signed char)6] |= ((/* implicit */unsigned short) var_13);
            /* LoopSeq 1 */
            for (signed char i_4 = 1; i_4 < 10; i_4 += 2) 
            {
                var_29 &= ((/* implicit */unsigned int) var_10);
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */int) min((arr_19 [i_2] [i_2] [i_4] [3ULL] [(signed char)3] [3ULL] [(signed char)3]), (((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_5)))))))) != (((/* implicit */int) ((signed char) ((((/* implicit */int) arr_15 [1LL] [i_2] [i_2] [3])) <= (((/* implicit */int) var_7)))))))))));
                            arr_20 [(unsigned char)5] [i_5] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */int) min((min((var_8), (var_8))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7)))))));
                            var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) var_11))));
                            var_32 = ((/* implicit */short) arr_10 [i_3]);
                        }
                    } 
                } 
            }
        }
        arr_21 [0LL] = ((/* implicit */_Bool) var_15);
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            /* LoopNest 3 */
            for (signed char i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 2; i_9 < 10; i_9 += 4) 
                {
                    for (int i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        {
                            var_33 += ((/* implicit */unsigned short) arr_18 [8ULL] [8ULL] [(signed char)8] [i_9] [8ULL] [(unsigned char)1]);
                            arr_32 [10LL] [10LL] [i_8] [(_Bool)1] [(unsigned short)1] = ((/* implicit */_Bool) (unsigned char)244);
                            var_34 = ((/* implicit */int) ((max((arr_18 [i_8] [i_9 + 1] [i_9] [(short)8] [i_9 - 1] [i_10]), (((/* implicit */unsigned int) var_13)))) == (((((/* implicit */_Bool) arr_18 [i_8] [i_9 - 1] [i_9] [i_9 - 2] [i_9 - 2] [i_9])) ? (arr_18 [9] [i_9 + 1] [i_9 - 1] [i_9] [i_9 + 1] [8ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_8] [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 2] [i_9 - 2] [10LL])))))));
                            arr_33 [(_Bool)1] [5] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) (~(max((((/* implicit */int) (_Bool)1)), (448253144)))));
                            arr_34 [i_2] = ((/* implicit */int) (~((~(var_10)))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
            {
                for (signed char i_12 = 0; i_12 < 11; i_12 += 1) 
                {
                    {
                        var_35 = ((/* implicit */unsigned int) min((var_35), ((((+(arr_28 [5LL] [i_11] [i_2] [i_2]))) / (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((long long int) (unsigned short)18550)))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            var_36 = ((/* implicit */short) ((int) var_10));
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)138))) : (-1057958920476459906LL)));
                            arr_45 [i_2] [i_7] [0] [(unsigned short)0] [i_13] [i_13] [i_7] |= ((arr_7 [i_2]) || (arr_7 [i_2]));
                        }
                    }
                } 
            } 
        }
    }
}
