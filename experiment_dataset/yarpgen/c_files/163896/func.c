/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163896
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (short)24592);
        arr_3 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)27640))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (short)9455)))))) ^ (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */int) 3062448976U);
        arr_8 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)24566))) + (((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (arr_0 [i_1] [i_1]) : (((/* implicit */unsigned long long int) 306413913))))));
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 18; i_3 += 1) 
        {
            var_17 += ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_12 [i_3] [i_2])) ? (3451841789U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))))));
            arr_17 [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (short)-9451)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) 3451841771U)))));
            /* LoopNest 3 */
            for (unsigned char i_4 = 1; i_4 < 16; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (short i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) (unsigned short)37557);
                            var_19 = ((/* implicit */unsigned int) ((18446744073709551615ULL) | (((/* implicit */unsigned long long int) arr_19 [i_2] [i_2] [i_2]))));
                            arr_26 [i_6] [i_3] [i_2] [i_2] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) arr_15 [i_4])))));
                            arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) arr_24 [i_5] [i_5] [i_5] [i_5]);
                            arr_28 [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)30233))));
                        }
                    } 
                } 
            } 
        }
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (signed char)96))));
        arr_29 [i_2] [i_2] = ((/* implicit */unsigned char) arr_23 [i_2] [i_2] [i_2] [i_2] [i_2]);
        /* LoopSeq 2 */
        for (short i_7 = 3; i_7 < 15; i_7 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) var_2)), (4962165952289491233ULL)))));
            arr_32 [i_2] [i_2] = ((/* implicit */short) arr_18 [i_7] [i_7] [i_7]);
        }
        for (int i_8 = 2; i_8 < 14; i_8 += 2) 
        {
            var_22 = ((/* implicit */_Bool) (+(min((843125506U), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)32479)))))))));
            arr_35 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((arr_34 [i_2] [i_2]) + (((/* implicit */int) arr_22 [i_2] [i_2]))));
            var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_12 [i_2] [i_8 + 4]))) + (((/* implicit */int) (short)-24567))));
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (_Bool)1))));
        }
    }
    var_25 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_9 = 0; i_9 < 25; i_9 += 1) 
    {
        arr_38 [i_9] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32479))) | (5298972680265650721ULL)));
        arr_39 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_37 [i_9]))) ? (((/* implicit */int) arr_36 [i_9] [i_9])) : (((/* implicit */int) ((_Bool) arr_36 [i_9] [i_9])))));
        var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)507))));
    }
    var_27 |= ((/* implicit */int) (~(18446744073709551615ULL)));
    var_28 &= ((/* implicit */_Bool) var_14);
}
