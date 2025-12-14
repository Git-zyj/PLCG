/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185217
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
    var_13 = ((/* implicit */short) max(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-72))) : (var_2))), (((/* implicit */long long int) (signed char)-48))));
    var_14 += ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_12)))))))), (var_2)));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0])))) | (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) arr_1 [i_0]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) /* same iter space */
        {
            arr_4 [i_0] = ((/* implicit */_Bool) var_11);
            arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((((var_3) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)23)))) / (((/* implicit */int) (short)-23909))));
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_11 [i_4] [i_1] [i_0]))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (short)23908))));
                            var_18 = ((/* implicit */long long int) ((short) arr_10 [i_0] [i_0] [i_0] [i_0 + 1]));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((((/* implicit */_Bool) (unsigned short)2474)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
            } 
            arr_16 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0])) || (((/* implicit */_Bool) arr_13 [i_1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0]))));
        }
        for (signed char i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (max((((((/* implicit */int) arr_9 [i_0] [i_5] [i_0])) / (((/* implicit */int) (unsigned short)43047)))), (((/* implicit */int) var_8)))) : ((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)43047))))));
            var_21 += ((/* implicit */unsigned short) var_9);
            arr_20 [i_0] [i_5] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)59))));
        }
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_7 = 2; i_7 < 24; i_7 += 2) 
        {
            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
            {
                for (unsigned short i_9 = 1; i_9 < 23; i_9 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                        {
                            arr_33 [i_6] [i_7] [i_6] = ((/* implicit */unsigned char) var_2);
                            arr_34 [i_7] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_23 [i_10] [i_8]))));
                            var_22 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_10] [i_9] [i_8] [i_8] [i_7] [i_6])) || ((_Bool)0))))));
                            arr_35 [i_6] [i_7] |= ((/* implicit */unsigned char) ((min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (short)-23909)) ? (((/* implicit */int) (short)-23918)) : (((/* implicit */int) (short)2226)))))) <= ((~(((/* implicit */int) (_Bool)1))))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                        {
                            var_23 |= ((/* implicit */signed char) var_9);
                            var_24 = ((/* implicit */unsigned char) (short)-23911);
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) arr_7 [i_9]))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_26 &= ((/* implicit */long long int) var_10);
                            var_27 = ((/* implicit */unsigned char) (!(min((((arr_26 [i_6] [i_6] [i_6]) && (var_5))), (((((/* implicit */_Bool) arr_2 [i_7])) || (((/* implicit */_Bool) (signed char)24))))))));
                            var_28 -= ((/* implicit */_Bool) (signed char)-48);
                        }
                        arr_42 [i_6] = ((/* implicit */unsigned char) arr_37 [i_9] [i_9] [i_9]);
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_6 + 1] [i_6 + 1] [i_6] [i_6]))))) ? (((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */int) arr_28 [i_6 + 1] [i_6] [i_6 + 1] [i_6])) : (((/* implicit */int) arr_1 [i_6 + 1])))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_1 [i_6 + 1]))))));
    }
    /* vectorizable */
    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */short) (unsigned char)80);
        var_31 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_13]))));
    }
    var_32 = ((/* implicit */short) var_2);
}
