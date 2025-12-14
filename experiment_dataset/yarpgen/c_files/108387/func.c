/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108387
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
    for (unsigned long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */signed char) (+(min((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)0)))), (((/* implicit */int) (short)0))))));
                var_18 = ((((/* implicit */_Bool) max((arr_2 [i_0] [i_0 - 1]), (((/* implicit */unsigned short) var_13))))) && (((/* implicit */_Bool) (short)2)));
                var_19 &= ((/* implicit */unsigned int) ((long long int) (unsigned char)125));
                arr_6 [i_0] [9] = ((/* implicit */_Bool) (+((~(((/* implicit */int) var_7))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))));
                    var_21 -= (signed char)119;
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        arr_13 [i_0 - 1] [i_2] [i_0] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_0 [i_0 - 2])) || (((/* implicit */_Bool) var_8)))));
                        var_22 = ((/* implicit */unsigned char) (short)-1);
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        arr_18 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_4] [i_4] [i_0])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-19))) : (116074964U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 + 1])))));
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                        {
                            arr_22 [i_0] [i_1] [(unsigned short)2] [i_1] [(short)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (short)-24))));
                            var_23 = (~(var_12));
                            var_24 = ((/* implicit */short) (-(arr_5 [i_5])));
                            arr_23 [i_0 - 1] [i_1] [i_2] [i_4] [i_5] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (short)-1))));
                        }
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)0)) > (((/* implicit */int) (_Bool)1))));
                        arr_24 [i_0] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_27 [i_0] [i_1] = ((/* implicit */signed char) -3314946072437704581LL);
                        var_26 ^= ((/* implicit */_Bool) var_10);
                        var_27 = (short)18;
                        var_28 = ((/* implicit */_Bool) (short)8);
                    }
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                    {
                        var_29 = ((/* implicit */long long int) ((int) var_4));
                        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) var_14))));
                        arr_30 [i_0] [1] [i_0] = ((/* implicit */signed char) 457973451);
                        arr_31 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) (short)11)) || (((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_3)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) (short)-5876)) : (((/* implicit */int) (short)-12))))) : ((((~(var_12))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)161)))))));
                        var_31 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_0))));
                    }
                }
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 3) 
                    {
                        for (unsigned long long int i_10 = 1; i_10 < 11; i_10 += 3) 
                        {
                            {
                                arr_41 [8] [i_1] [i_8] [i_9] [i_9] [i_10] &= ((/* implicit */signed char) var_6);
                                var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (+(arr_40 [i_10 + 1] [i_10 + 1] [i_1]))))));
                            }
                        } 
                    } 
                    var_33 *= ((/* implicit */unsigned int) (+(((var_5) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                }
                for (int i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    var_34 *= ((/* implicit */signed char) min((((/* implicit */long long int) (_Bool)0)), (min((((/* implicit */long long int) (_Bool)1)), (var_15)))));
                    var_35 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0 + 1] [(signed char)7] [(signed char)7] [i_0 - 2])))))) ? (((((/* implicit */_Bool) (+(var_15)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) var_7))))) : (3996483506U))) : (((/* implicit */unsigned int) var_11)));
                }
                for (long long int i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    arr_46 [i_0] [i_0] = ((/* implicit */short) var_16);
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 3; i_13 < 10; i_13 += 1) 
                    {
                        for (long long int i_14 = 0; i_14 < 12; i_14 += 4) 
                        {
                            {
                                arr_53 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((unsigned char) arr_19 [i_1] [i_1] [i_13] [i_13 + 2] [i_14]))), (var_12)));
                                arr_54 [i_0] [i_1] [i_12] [i_1] [i_1] [(unsigned char)8] [i_0] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (unsigned char)27))))));
                            }
                        } 
                    } 
                    var_36 = ((/* implicit */short) var_3);
                    var_37 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 18446744073709551589ULL)) ? ((+(((/* implicit */int) (signed char)99)))) : ((-(((/* implicit */int) var_8))))))));
                }
            }
        } 
    } 
    var_38 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)0)) ? (var_16) : (((/* implicit */int) var_10))));
    /* LoopSeq 1 */
    for (unsigned short i_15 = 1; i_15 < 11; i_15 += 1) 
    {
        arr_59 [i_15] = ((/* implicit */int) ((2147483629) > (((/* implicit */int) (unsigned char)230))));
        var_39 = ((/* implicit */_Bool) max((((/* implicit */long long int) (+(((/* implicit */int) var_3))))), ((+(((((/* implicit */_Bool) arr_11 [i_15])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (short)33)))))))));
    }
    var_40 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (~(var_14))))) || (((/* implicit */_Bool) var_16))));
    var_41 &= ((/* implicit */_Bool) var_7);
}
