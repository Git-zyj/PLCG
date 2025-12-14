/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130658
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
    var_17 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) max((4183263867274872788LL), (((/* implicit */long long int) 188252333U))))) ? (((((/* implicit */unsigned long long int) -218428300100511930LL)) / (12194080648892791077ULL))) : (var_4)))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] |= ((/* implicit */short) var_12);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = ((/* implicit */long long int) ((unsigned int) 188252313U));
            var_18 = ((((/* implicit */_Bool) max((4106714969U), (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))))) ? (((/* implicit */int) ((var_4) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0])))))) : (((/* implicit */int) (_Bool)1)));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 10; i_2 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */_Bool) ((long long int) (short)-20540));
            /* LoopSeq 3 */
            for (int i_3 = 0; i_3 < 10; i_3 += 1) /* same iter space */
            {
                var_20 = ((var_1) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) | (((/* implicit */int) var_9))))));
                arr_11 [i_2] [i_2] [i_3] = ((/* implicit */long long int) ((((long long int) var_16)) <= (((/* implicit */long long int) ((/* implicit */int) (short)-25815)))));
            }
            for (int i_4 = 0; i_4 < 10; i_4 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) % (((/* implicit */int) arr_7 [i_4] [i_2] [i_0]))));
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((long long int) (unsigned char)218)))));
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)25815)) ? (((/* implicit */int) arr_14 [i_2])) : (((/* implicit */int) var_16))));
            }
            for (short i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                var_24 = ((/* implicit */short) var_1);
                /* LoopSeq 4 */
                for (long long int i_6 = 2; i_6 < 7; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_7 = 1; i_7 < 9; i_7 += 3) 
                    {
                        arr_23 [i_7 + 1] [i_2] [i_5] [i_2] [i_0] = ((/* implicit */int) ((4106714962U) << (((5758261103043598190LL) - (5758261103043598164LL)))));
                        arr_24 [i_2] [i_6] [i_6] [i_6] [i_7] [i_7] [i_6] = ((/* implicit */signed char) ((short) 188252335U));
                        arr_25 [i_2] = ((/* implicit */unsigned short) ((-5383945959974671662LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)4)))));
                    }
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) -9124190219639510019LL))));
                    arr_26 [i_2] = (!(((/* implicit */_Bool) (short)-6076)));
                }
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)25815))));
                    var_27 ^= ((/* implicit */unsigned long long int) ((4106714975U) << (((/* implicit */int) (unsigned char)21))));
                    arr_29 [i_2] [i_2] [i_5] [i_5] [i_8] = ((/* implicit */unsigned long long int) var_6);
                }
                for (short i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    var_28 = ((/* implicit */signed char) ((arr_0 [i_0] [i_9]) || (((/* implicit */_Bool) var_8))));
                    arr_34 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_6)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) (short)-5155)))))));
                    var_29 = arr_20 [i_5] [i_5] [i_5] [i_9] [i_5] [i_5];
                }
                for (unsigned int i_10 = 1; i_10 < 8; i_10 += 1) 
                {
                    arr_39 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)78))) >= (var_6)));
                    var_30 = ((/* implicit */signed char) (-(3239651352U)));
                    var_31 = ((/* implicit */short) ((unsigned int) var_15));
                }
            }
            var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_0] [i_0]))));
        }
    }
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned long long int) (short)3393);
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
        {
            for (signed char i_13 = 0; i_13 < 10; i_13 += 2) 
            {
                {
                    var_34 = ((((/* implicit */_Bool) arr_16 [i_11] [i_13] [i_13] [i_13])) ? (((/* implicit */int) arr_16 [i_11] [i_13] [i_12] [i_13])) : (((/* implicit */int) arr_16 [i_11] [i_12] [i_13] [i_13])));
                    arr_49 [i_11] [i_12] [i_13] [i_13] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_43 [i_13] [i_12] [i_11]))));
                }
            } 
        } 
    }
    for (unsigned int i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
    {
        arr_52 [i_14] = ((/* implicit */unsigned short) (!((_Bool)1)));
        arr_53 [i_14] = ((/* implicit */short) max((((/* implicit */unsigned int) ((short) var_10))), (((unsigned int) var_13))));
    }
    for (unsigned int i_15 = 0; i_15 < 18; i_15 += 3) 
    {
        var_35 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)4)))));
        arr_56 [i_15] [i_15] = ((/* implicit */unsigned char) (~(-7246855062116328182LL)));
        /* LoopNest 2 */
        for (short i_16 = 1; i_16 < 15; i_16 += 2) 
        {
            for (signed char i_17 = 0; i_17 < 18; i_17 += 2) 
            {
                {
                    var_36 = ((/* implicit */_Bool) (short)-6805);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_18 = 0; i_18 < 18; i_18 += 1) 
                    {
                        var_37 = ((/* implicit */unsigned char) var_4);
                        arr_66 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (arr_65 [i_15] [i_16 - 1] [i_16 + 2] [i_17] [i_18] [i_15])));
                    }
                    arr_67 [i_15] [i_17] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)-12991)))))));
                }
            } 
        } 
        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7186750351119826581LL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)78)) ? (3285726901U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6805)))))) : (((long long int) (unsigned char)63))));
    }
}
