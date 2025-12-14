/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140451
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 3; i_3 < 13; i_3 += 4) 
                    {
                        var_14 = ((unsigned short) (-(9000760779447512521ULL)));
                        var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0]))));
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 1) 
                    {
                        var_16 *= ((/* implicit */unsigned long long int) var_0);
                        /* LoopSeq 4 */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1 + 1] [i_1])) >= (((((/* implicit */int) (unsigned short)62420)) + (((/* implicit */int) (_Bool)0))))));
                            var_18 ^= ((/* implicit */signed char) ((unsigned short) arr_9 [(_Bool)1] [i_2] [(unsigned char)4]));
                            var_19 += ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_1 + 1] [4ULL])) : (160393696)));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (arr_14 [(unsigned short)12] [i_2] [i_4 - 1] [i_5])));
                        }
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)244)) & (((/* implicit */int) (unsigned char)195)))))));
                            arr_18 [i_0] [(_Bool)1] [i_2] [i_4] [i_1] = ((/* implicit */signed char) ((long long int) ((arr_7 [i_0] [i_1] [i_4 - 1] [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32945))) : (var_12))));
                            var_22 = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_10 [i_1] [i_2 - 1] [i_1] [i_6])) >> (((((/* implicit */int) arr_8 [i_0] [i_1] [i_2])) - (59998)))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_23 |= ((/* implicit */_Bool) (unsigned char)61);
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) (unsigned char)195)) / (((/* implicit */int) arr_1 [i_4]))))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_1] [i_1] [6LL] [(_Bool)1] [i_8] = ((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)65518)))) + (((/* implicit */int) (unsigned short)15))));
                            var_25 += ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0]);
                            arr_25 [i_1] [i_1] [i_2] [i_4] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_2 + 2] [i_2 + 2] [i_2 + 1])) ^ (((/* implicit */int) arr_8 [i_2 + 2] [i_2 + 2] [i_2 + 1]))));
                        }
                        arr_26 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (+(arr_11 [i_4 - 1] [i_2 + 3] [i_2 + 3] [i_0 - 1] [i_0] [i_0])));
                    }
                    var_26 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                    arr_27 [i_1] [i_1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) (((((-(((/* implicit */int) (unsigned char)6)))) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_1])) - (19192)))))) : (((/* implicit */unsigned short) (((((-(((/* implicit */int) (unsigned char)6)))) + (2147483647))) >> (((((((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_1])) - (19192))) - (9750))))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_31 [i_1] [i_1] = max((max((max((arr_4 [i_0 + 1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned short) (unsigned char)189)))), (((/* implicit */unsigned short) (unsigned char)61)))), (max((min(((unsigned short)18), ((unsigned short)65518))), ((unsigned short)30980))));
                    arr_32 [(_Bool)1] [(_Bool)1] |= ((/* implicit */signed char) arr_0 [i_1 + 1] [i_1 + 1]);
                }
                var_27 = ((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [2ULL]);
            }
        } 
    } 
    var_28 = ((unsigned short) var_7);
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))))), (max((((/* implicit */unsigned short) (unsigned char)60)), (var_1)))))) ^ (((/* implicit */int) ((((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_13)))) != (((/* implicit */int) var_2)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_10 = 4; i_10 < 12; i_10 += 2) 
    {
        var_30 &= ((/* implicit */unsigned char) arr_33 [i_10]);
        arr_37 [(_Bool)1] = ((unsigned short) (-(((/* implicit */int) arr_34 [i_10]))));
        var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_36 [i_10])) ? (((/* implicit */int) arr_35 [i_10])) : (((/* implicit */int) (unsigned char)240)))) != (((/* implicit */int) arr_36 [(_Bool)1]))));
    }
    for (unsigned short i_11 = 0; i_11 < 20; i_11 += 4) 
    {
        var_32 = 160393696;
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned long long int i_13 = 3; i_13 < 19; i_13 += 1) 
            {
                {
                    arr_46 [i_11] [i_13] = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)60)), (1079849504)));
                    arr_47 [i_13] [i_12] [i_13] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)53165)) / (min(((+(((/* implicit */int) var_2)))), (((/* implicit */int) (!((_Bool)0))))))));
                }
            } 
        } 
        var_33 = max((((/* implicit */unsigned long long int) (unsigned short)65518)), (((unsigned long long int) arr_42 [i_11] [i_11] [i_11])));
    }
    var_34 = ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
}
