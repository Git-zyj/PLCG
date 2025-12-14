/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161952
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
    var_10 = ((/* implicit */short) max((var_5), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(var_1)))) == (((unsigned long long int) (_Bool)0)))))));
    var_11 = min((var_4), (((/* implicit */int) (short)153)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        arr_2 [(_Bool)1] = ((/* implicit */unsigned char) max((((short) min(((short)153), (((/* implicit */short) arr_0 [i_0]))))), (var_9)));
        arr_3 [i_0 - 3] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2]))) / (min((-2510403359717737560LL), (((/* implicit */long long int) ((var_4) + (((/* implicit */int) (unsigned short)49291)))))))));
    }
    for (unsigned int i_1 = 4; i_1 < 8; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 6; i_2 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_3 = 1; i_3 < 9; i_3 += 1) 
            {
                var_12 = ((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 - 2] [i_2 + 4])) != (((/* implicit */int) arr_4 [i_1 + 1] [i_2 + 1]))));
                arr_11 [i_1] [i_1] = ((/* implicit */long long int) (_Bool)1);
                var_13 = ((/* implicit */unsigned int) var_2);
                var_14 += ((/* implicit */long long int) (short)31787);
            }
            for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 4) 
            {
                arr_16 [i_1] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_22 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-57)) && (((/* implicit */_Bool) arr_17 [(signed char)5] [i_1] [i_1] [(signed char)5] [i_1 + 2]))));
                            arr_23 [i_1] [i_2 + 4] [i_4 + 2] [i_5] [1LL] = ((/* implicit */short) var_2);
                            var_15 = ((/* implicit */unsigned short) var_1);
                            var_16 = ((/* implicit */long long int) ((signed char) arr_0 [i_1]));
                            arr_24 [i_4] &= ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-30111)))))) : (((unsigned int) arr_8 [i_2] [i_5] [i_6]))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_18 [i_1] [i_2] [(unsigned char)3] [i_1] [i_4 - 1] [1ULL]))));
            }
            for (unsigned char i_7 = 1; i_7 < 9; i_7 += 1) 
            {
                arr_29 [(signed char)4] [(signed char)4] [(signed char)4] |= ((/* implicit */int) arr_9 [i_2 + 1] [i_1 - 1] [(signed char)4] [(unsigned short)6]);
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_1 - 2] [i_1 - 2])) < (((/* implicit */int) (_Bool)0)))))));
                arr_30 [i_1 + 2] [i_1] [i_7 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)148)) : ((+(var_3)))));
                var_19 = ((/* implicit */_Bool) ((unsigned long long int) arr_19 [i_2 - 1] [i_1] [i_2 + 4] [i_2 - 1] [i_2 + 4]));
            }
            arr_31 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_2 + 2])) ? (0) : (((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                for (unsigned char i_9 = 0; i_9 < 10; i_9 += 4) 
                {
                    {
                        arr_36 [(unsigned char)2] [i_2] [i_8] [i_1] = ((/* implicit */unsigned short) arr_0 [i_1]);
                        arr_37 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)158)) < (((/* implicit */int) arr_12 [i_1] [i_1] [i_8] [(signed char)3]))));
                    }
                } 
            } 
            var_20 -= ((/* implicit */unsigned int) (short)-154);
        }
        /* vectorizable */
        for (unsigned int i_10 = 1; i_10 < 6; i_10 += 1) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) ((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_1] [i_1 - 1] [i_1])))));
            var_22 = ((/* implicit */unsigned short) arr_26 [i_1 - 3] [i_1 - 1] [i_1]);
        }
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
    }
}
