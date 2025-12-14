/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166618
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
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0 - 2]);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 2; i_2 < 20; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    {
                        var_17 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_2 - 2] [i_2] [i_2 + 2] [i_2] [i_2])) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4] [22ULL] [i_2 - 1])))))));
                        arr_14 [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_2 + 3]))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            for (unsigned int i_6 = 3; i_6 < 21; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    {
                        var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) (signed char)89))))))) : (arr_6 [i_1])));
                        var_19 = ((/* implicit */long long int) ((arr_19 [i_7] [i_6] [i_6 + 2] [i_6] [i_5] [22ULL]) - (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_6])))))));
                        var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */unsigned long long int) 8191LL)) : (14829411365896541229ULL))) >= (var_16)));
                    }
                } 
            } 
        } 
        var_21 &= ((/* implicit */unsigned long long int) ((unsigned char) ((unsigned int) 14829411365896541229ULL)));
        arr_21 [i_1] = ((/* implicit */_Bool) var_6);
        var_22 = ((/* implicit */unsigned int) arr_13 [i_1] [(signed char)10] [i_1] [2U]);
    }
    for (long long int i_8 = 4; i_8 < 24; i_8 += 2) 
    {
        arr_26 [i_8] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_22 [i_8]))));
        /* LoopNest 2 */
        for (unsigned char i_9 = 1; i_9 < 24; i_9 += 4) 
        {
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) arr_24 [i_10]);
                    var_24 *= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_22 [i_8 - 3]))))) ^ (((((/* implicit */int) arr_22 [i_8 - 2])) + (((/* implicit */int) arr_22 [i_8 - 3]))))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 25; i_11 += 2) 
                    {
                        for (unsigned int i_12 = 2; i_12 < 24; i_12 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_15))) != (((/* implicit */int) arr_23 [i_8 - 4]))));
                                arr_36 [i_8] [i_9] [i_8] [i_10] [i_9] [i_11] [19ULL] = arr_35 [i_10];
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 3) 
                    {
                        arr_39 [i_10] [i_9] [i_9] = arr_33 [i_10] [i_9];
                        arr_40 [i_10 + 1] [i_10] [i_10] [i_13] = ((/* implicit */unsigned short) arr_37 [i_8] [i_10] [i_10 + 1] [i_13]);
                    }
                    for (unsigned long long int i_14 = 1; i_14 < 23; i_14 += 1) 
                    {
                        arr_45 [i_10] [i_9] [i_10] [i_14] = ((/* implicit */unsigned long long int) min((((unsigned char) ((_Bool) arr_32 [i_10] [i_14]))), (((/* implicit */unsigned char) var_7))));
                        /* LoopSeq 2 */
                        for (unsigned char i_15 = 0; i_15 < 25; i_15 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */signed char) arr_41 [16U] [i_9 + 1] [i_10] [(_Bool)1]);
                            var_27 = (!(((/* implicit */_Bool) (+(arr_42 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_8])))));
                            var_28 -= ((/* implicit */unsigned long long int) var_14);
                            arr_50 [i_15] [i_14] [i_10] [(signed char)9] [i_8] = ((/* implicit */unsigned int) (-(var_16)));
                        }
                        for (unsigned char i_16 = 0; i_16 < 25; i_16 += 2) /* same iter space */
                        {
                            arr_53 [i_8] [i_8] [i_10] [i_16] [(_Bool)1] [i_8] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [i_9] [i_10] [i_14])))))));
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) arr_32 [i_8] [16U]))));
                            arr_54 [i_10] [i_10 + 1] [i_10] [i_10] = ((/* implicit */unsigned int) arr_48 [i_8] [i_9] [i_10 + 1] [i_9] [i_10]);
                        }
                    }
                }
            } 
        } 
        var_30 = ((unsigned long long int) ((signed char) arr_35 [i_8]));
    }
    var_31 = ((/* implicit */unsigned char) var_10);
    var_32 = (+(min((((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned short) var_8))))), (min((((/* implicit */unsigned int) var_9)), (var_14))))));
}
