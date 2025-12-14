/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171117
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
    var_15 = max((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 231212581))))))), (var_2));
    var_16 = ((/* implicit */signed char) (-(((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 20; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        {
                            var_17 &= ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_3]))));
                            var_18 ^= ((/* implicit */signed char) (((+(max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_6 [i_3] [22ULL]))))) + (((((/* implicit */_Bool) min((-5533167065849279980LL), (((/* implicit */long long int) (_Bool)1))))) ? (arr_6 [i_0] [i_0]) : (max((((/* implicit */unsigned long long int) (signed char)104)), (arr_7 [i_0] [i_1] [i_2 + 3] [i_2 + 3])))))));
                        }
                    } 
                } 
                var_19 = ((var_8) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_2 [(short)20] [9U])), ((unsigned char)181)))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_4 = 4; i_4 < 22; i_4 += 4) 
                {
                    var_20 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (_Bool)1)) << (((-5533167065849279987LL) + (5533167065849280000LL)))))));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 1; i_5 < 22; i_5 += 3) 
                    {
                        var_21 = ((unsigned char) (!((_Bool)1)));
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? ((-(((/* implicit */int) (unsigned short)4225)))) : (((/* implicit */int) ((((/* implicit */unsigned int) 1116349615)) >= (var_13))))));
                        var_23 = ((/* implicit */unsigned char) var_0);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            arr_18 [i_0] [7ULL] [7ULL] [7ULL] [i_5] [i_5] [i_6] = ((((unsigned long long int) (signed char)96)) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_5 [i_4 + 1])) : (((/* implicit */int) (unsigned char)74))))));
                            var_24 = ((/* implicit */_Bool) arr_9 [i_1] [i_4 - 2] [i_5 - 1]);
                            var_25 = ((/* implicit */unsigned short) (~(((1336186606) & (1722107085)))));
                        }
                    }
                    for (long long int i_7 = 1; i_7 < 22; i_7 += 2) 
                    {
                        var_26 = ((((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_7] [(unsigned char)13] [i_4] [i_7 - 1]))))) & (((-5856779218019033244LL) & (((/* implicit */long long int) var_4)))));
                        var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)27414)))))));
                    }
                }
                for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    var_28 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_0] [i_1] [15LL] [i_1] [i_8] [i_8])))))));
                    arr_24 [i_0] [i_0] = (((-(arr_22 [i_0] [i_0] [i_0]))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_19 [i_0] [22ULL] [i_1] [(_Bool)1])) < (((/* implicit */int) (_Bool)1)))))));
                    var_29 = ((/* implicit */signed char) ((unsigned int) max((arr_7 [i_0] [i_8] [i_8] [15ULL]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (-5533167065849279980LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            {
                                var_30 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [6ULL]))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_9] [i_10])))))));
                                var_31 = ((/* implicit */unsigned int) (~((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (arr_14 [i_0] [i_9] [i_9] [(unsigned char)4])))))));
                                var_32 = ((/* implicit */int) (unsigned char)158);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 23; i_12 += 2) 
                    {
                        for (unsigned short i_13 = 3; i_13 < 21; i_13 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned char) ((((((arr_29 [i_0] [i_0] [i_0] [i_9] [i_0] [i_9] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0] [i_0] [(_Bool)1] [i_9] [i_12] [i_12] [i_13 + 2]))) : (var_0))) + (9223372036854775807LL))) >> ((((-(-5856779218019033254LL))) - (5856779218019033205LL)))));
                                var_34 = ((/* implicit */short) (((~(((/* implicit */int) ((7774273665378641571ULL) <= (15370425387322853030ULL)))))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_13 - 3] [i_13] [2ULL] [2ULL] [i_13 - 2] [i_13 - 1] [i_13 + 2])))))));
                                var_35 = ((/* implicit */int) 8687534855010235681ULL);
                            }
                        } 
                    } 
                }
                var_36 = ((/* implicit */long long int) (-(-540809389)));
            }
        } 
    } 
    var_37 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) var_5)))))))));
    var_38 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_14))))));
}
