/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126621
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            arr_7 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) var_13))));
            var_15 ^= (+((~(((/* implicit */int) (unsigned short)35943)))));
        }
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
        {
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 12797260087702602744ULL))));
            var_16 ^= ((/* implicit */_Bool) (+((~(arr_1 [i_2] [(unsigned char)5])))));
            arr_13 [i_0] [i_0] = ((/* implicit */signed char) (~((+(((/* implicit */int) (unsigned short)26220))))));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))));
                        arr_22 [i_4] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_2 [i_0] [i_0]))));
                    }
                } 
            } 
        }
        arr_23 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (short)6257))));
        arr_24 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(0ULL))))));
        var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) var_4))));
    }
    for (long long int i_5 = 1; i_5 < 23; i_5 += 2) 
    {
        arr_29 [i_5] = ((/* implicit */unsigned short) (~((-((-(var_1)))))));
        var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_6 = 2; i_6 < 20; i_6 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                arr_34 [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) arr_25 [i_6 - 1] [i_6 - 1]))));
                /* LoopNest 2 */
                for (long long int i_8 = 1; i_8 < 23; i_8 += 3) 
                {
                    for (short i_9 = 1; i_9 < 21; i_9 += 2) 
                    {
                        {
                            arr_40 [i_5 - 1] [(signed char)6] [(signed char)6] [i_7] [(signed char)6] [i_9] = ((/* implicit */int) (~(arr_26 [i_9 + 3])));
                            arr_41 [i_5 + 1] [i_5 + 1] [i_7] [i_8] [i_5 + 1] [i_9] [i_9] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)23796))));
                            var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_25 [(_Bool)1] [i_8 - 1]))));
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */unsigned short) (~(arr_35 [i_5] [i_5] [i_7] [i_7])));
            }
            arr_42 [i_6 + 2] = (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)32767))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                var_22 ^= ((/* implicit */long long int) (+(arr_26 [i_5 - 1])));
                var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))));
            }
            for (signed char i_11 = 0; i_11 < 24; i_11 += 1) 
            {
                arr_48 [i_5] [i_11] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)127))));
                arr_49 [i_11] [i_11] [i_11] [i_5] = ((/* implicit */long long int) (~((-(arr_39 [i_5 + 1] [i_5 + 1] [i_11] [1U] [i_11] [i_5] [(_Bool)1])))));
                arr_50 [i_5 - 1] [i_11] [i_11] = (~(((/* implicit */int) var_13)));
            }
            arr_51 [i_6] [(unsigned short)5] [(unsigned short)5] = ((/* implicit */_Bool) (+(arr_45 [i_6] [i_6 + 4] [i_6] [i_6 + 1])));
            var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))));
        }
        /* vectorizable */
        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 2) 
        {
            arr_54 [i_5 + 1] [i_12] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_53 [i_5 - 1] [i_5 - 1]))));
            arr_55 [(unsigned char)13] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_0))))));
            var_25 = (~(var_1));
            arr_56 [i_5] [i_12] [i_5] = (+(-1));
        }
        arr_57 [i_5] = ((/* implicit */long long int) (-((-(var_10)))));
    }
    for (signed char i_13 = 1; i_13 < 8; i_13 += 4) 
    {
        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(var_4)))))))));
        arr_61 [0ULL] = ((/* implicit */unsigned char) (~((+((+(((/* implicit */int) (signed char)-120))))))));
    }
    var_27 = ((/* implicit */unsigned char) (~((~((-(((/* implicit */int) (unsigned short)29593))))))));
    var_28 = (!(((/* implicit */_Bool) (+((~(2919492191U)))))));
    var_29 = ((/* implicit */unsigned int) var_8);
}
