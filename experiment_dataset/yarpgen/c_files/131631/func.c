/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131631
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
    var_10 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned int) var_5);
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 402653184)) <= (12580510105075428051ULL)));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (+((~(((/* implicit */int) arr_1 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            arr_7 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) arr_6 [i_0] [i_1 + 2])) - ((+(((/* implicit */int) (unsigned short)47459)))))) == (((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_0])) << (((((/* implicit */int) arr_2 [i_0])) - (59652)))))) ? ((~(((/* implicit */int) var_6)))) : (((/* implicit */int) var_5))))));
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((12580510105075428037ULL), (((/* implicit */unsigned long long int) arr_2 [i_1 - 2]))))) ? (((/* implicit */int) ((unsigned short) arr_2 [i_1 - 2]))) : (((/* implicit */int) ((signed char) arr_2 [i_1 - 1])))));
            var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 + 1]))));
            arr_9 [i_1] = arr_0 [i_1 + 2];
        }
        var_14 = ((/* implicit */unsigned long long int) (+((~((~(402653181)))))));
    }
    for (signed char i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
    {
        var_15 = (+(((/* implicit */int) min((arr_4 [i_2] [i_2] [i_2]), (arr_4 [i_2] [i_2] [i_2])))));
        var_16 = (-(((/* implicit */int) arr_1 [i_2] [i_2])));
        var_17 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)67)), ((unsigned char)69))))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_3])) >> (((((/* implicit */int) arr_2 [i_3])) - (59657)))));
        arr_17 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3] [i_3])) ? (arr_13 [i_3] [i_3]) : (arr_13 [i_3] [i_3])));
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_5 = 2; i_5 < 9; i_5 += 3) 
            {
                var_19 = ((/* implicit */unsigned long long int) arr_2 [i_3]);
                var_20 = ((/* implicit */int) ((12580510105075428045ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1007411441U)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_5] [i_3])) ? (((/* implicit */int) arr_11 [i_5])) : (((/* implicit */int) (short)24410))))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned char i_8 = 2; i_8 < 9; i_8 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_3] [i_4]))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_30 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))) : (((/* implicit */int) arr_12 [i_8 - 1]))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -3228679201174507268LL)) ? (1877943572U) : (((/* implicit */unsigned int) 1457809988))));
                        }
                    } 
                } 
                arr_31 [i_3] [i_4] [i_6] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_3] [i_4] [i_6] [i_6]))) == (((unsigned long long int) arr_0 [i_3]))));
                /* LoopNest 2 */
                for (unsigned int i_9 = 3; i_9 < 7; i_9 += 2) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        {
                            arr_37 [i_3] [i_3] = ((unsigned long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_22 [i_3] [i_3] [i_3] [i_3]))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)59605)) ? (((/* implicit */int) ((short) arr_24 [i_3] [i_9] [i_6] [i_6]))) : (((/* implicit */int) arr_30 [i_3] [i_9] [i_9] [i_9] [i_9] [i_3]))));
                        }
                    } 
                } 
            }
            for (unsigned int i_11 = 1; i_11 < 9; i_11 += 4) 
            {
                var_25 = ((/* implicit */unsigned char) ((1313332207U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5912)))));
                var_26 = ((/* implicit */int) ((arr_24 [i_3] [i_4] [i_3] [i_11 - 1]) / (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))));
            }
            arr_40 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)59596)) + (((/* implicit */int) arr_28 [i_3] [i_4] [i_3]))));
        }
        for (unsigned int i_12 = 1; i_12 < 9; i_12 += 4) 
        {
            var_27 = (!(arr_6 [i_3] [i_3]));
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_12 - 1] [i_12])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3]))))) : (((/* implicit */int) ((_Bool) -1290152573)))));
            arr_45 [i_3] = ((/* implicit */_Bool) ((((unsigned long long int) (unsigned char)205)) - (((/* implicit */unsigned long long int) arr_13 [i_3] [i_12 - 1]))));
            /* LoopSeq 2 */
            for (long long int i_13 = 3; i_13 < 8; i_13 += 4) 
            {
                arr_48 [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_12 + 1] [i_12 - 1] [i_13 - 1])) * (((/* implicit */int) arr_28 [i_12 - 1] [i_12 + 1] [i_13 + 1]))));
                var_29 = ((unsigned int) ((unsigned char) 1007411441U));
            }
            for (unsigned char i_14 = 1; i_14 < 7; i_14 += 4) 
            {
                var_30 = ((/* implicit */int) arr_11 [i_12 + 1]);
                arr_52 [i_3] [i_3] = ((int) arr_41 [i_3]);
            }
        }
        arr_53 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_3]))) : (arr_23 [i_3] [i_3] [i_3] [i_3])));
        /* LoopSeq 1 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_31 = ((/* implicit */unsigned short) var_3);
            var_32 = ((/* implicit */signed char) arr_15 [i_3]);
            arr_56 [i_15] [i_15] [i_3] = ((/* implicit */unsigned int) (unsigned short)5941);
        }
    }
}
