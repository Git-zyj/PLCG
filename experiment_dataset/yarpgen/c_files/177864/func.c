/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177864
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
    var_19 &= ((/* implicit */long long int) ((((/* implicit */int) var_7)) >= (var_10)));
    var_20 = ((/* implicit */unsigned int) var_16);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_21 = arr_0 [i_0];
        arr_3 [(unsigned short)2] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        var_22 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 196608)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) : (arr_1 [i_0])))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            var_23 -= ((/* implicit */long long int) (~(((((/* implicit */int) arr_2 [i_1 - 1] [i_2 + 1])) | (((/* implicit */int) arr_2 [i_1 - 1] [i_2 + 2]))))));
                            var_24 = ((/* implicit */unsigned int) var_0);
                        }
                        arr_14 [i_0] [(_Bool)1] [i_2] [i_1] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) min(((unsigned char)2), (((/* implicit */unsigned char) (signed char)-25))))) >= (((((/* implicit */_Bool) arr_11 [i_2 + 3] [i_1 + 1] [i_2 - 1] [i_3])) ? (((/* implicit */int) arr_11 [i_2 + 1] [i_1 + 1] [i_2] [1U])) : (((/* implicit */int) var_17))))));
                        /* LoopSeq 2 */
                        for (short i_5 = 2; i_5 < 13; i_5 += 2) 
                        {
                            var_25 &= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) || (((/* implicit */_Bool) var_11)))))));
                            var_26 ^= ((/* implicit */short) max((arr_1 [i_3]), (((/* implicit */long long int) var_0))));
                            arr_18 [i_0] [i_1] [i_5] [i_2] [i_3] [i_3] [i_5 - 2] |= ((/* implicit */unsigned long long int) arr_7 [i_0] [i_5] [i_2] [i_3]);
                        }
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            arr_21 [i_6] [i_0] [i_2] |= ((/* implicit */short) var_3);
                            var_27 -= ((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_0]);
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_7 = 1; i_7 < 11; i_7 += 4) 
    {
        arr_25 [i_7] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16))))));
        var_28 = ((/* implicit */short) var_7);
    }
    /* LoopSeq 2 */
    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        arr_29 [i_8] = (-(((arr_20 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) - (((/* implicit */unsigned long long int) arr_4 [i_8] [i_8] [i_8])))));
        var_29 |= ((/* implicit */long long int) var_11);
        var_30 = ((/* implicit */unsigned int) var_17);
        /* LoopSeq 2 */
        for (long long int i_9 = 3; i_9 < 12; i_9 += 4) 
        {
            arr_32 [i_9] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_31 [i_9] [i_9 + 1])))) ? ((-(arr_10 [i_8] [i_9 - 3]))) : (((/* implicit */unsigned long long int) arr_23 [i_9 - 2] [i_9 - 2]))));
            var_31 = ((/* implicit */signed char) arr_8 [i_9]);
            arr_33 [i_8] [i_8] [i_9] = arr_26 [i_9 - 1];
            var_32 = ((/* implicit */long long int) var_6);
            arr_34 [i_8] &= ((/* implicit */long long int) (+(((((/* implicit */_Bool) -1073741824)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (unsigned short)16))))));
        }
        for (int i_10 = 1; i_10 < 12; i_10 += 1) 
        {
            var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) || (((/* implicit */_Bool) var_4)))))) : (((var_9) ? (arr_7 [i_8] [i_10] [i_10 + 1] [i_10 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
            arr_37 [i_10] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
            var_34 -= ((/* implicit */unsigned short) arr_20 [i_8] [i_10 - 1] [i_10 + 1] [i_8] [i_8] [i_8]);
        }
    }
    for (int i_11 = 0; i_11 < 19; i_11 += 4) 
    {
        var_35 = ((/* implicit */short) var_18);
        arr_40 [i_11] [i_11] = var_17;
        var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)253))));
    }
}
