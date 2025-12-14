/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101247
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
    var_11 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) >> (((((((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_6)))) & (((/* implicit */int) var_10)))) - (2798)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_12 += ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) & (((/* implicit */int) (signed char)5)))) | (((/* implicit */int) var_3))));
        arr_2 [i_0] [i_0] = var_3;
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */signed char) var_5);
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_14 -= ((/* implicit */signed char) var_4);
            var_15 = var_8;
            var_16 += ((/* implicit */short) var_9);
            arr_9 [(short)1] = ((/* implicit */short) ((var_5) / (((((/* implicit */int) var_7)) - (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_7)))))))));
            arr_10 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_7)) / (((((/* implicit */int) var_1)) - (((/* implicit */int) (unsigned short)55928))))));
        }
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            arr_13 [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((((var_5) | (((/* implicit */int) var_4)))) / (((((/* implicit */int) var_0)) | (((/* implicit */int) var_1)))))) | (((/* implicit */int) var_1))));
            var_17 = ((/* implicit */long long int) var_3);
            arr_14 [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) var_6)) - (((((((/* implicit */int) (short)0)) / (((/* implicit */int) var_1)))) * (((/* implicit */int) var_1))))));
        }
        arr_15 [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) var_0)) | (((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (short)-1)))))) & (var_5)));
        var_18 = ((/* implicit */_Bool) var_5);
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_6 = 0; i_6 < 10; i_6 += 1) 
            {
                arr_23 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_1))));
                arr_24 [i_6] = var_7;
            }
            var_19 = ((/* implicit */short) var_2);
        }
        arr_25 [i_4] [i_4] = ((/* implicit */signed char) ((((var_5) / (((/* implicit */int) var_4)))) <= (var_5)));
        /* LoopSeq 3 */
        for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            arr_29 [i_4] [i_7] = ((/* implicit */signed char) var_4);
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) var_3))))) - (((var_5) & (((/* implicit */int) var_7)))))))));
            var_21 += ((/* implicit */long long int) ((18446744073709551594ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112)))));
        }
        for (short i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            arr_33 [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) 2582083310546964753LL)) - (11549534805442688268ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_1)))))));
            var_22 = ((/* implicit */unsigned char) var_5);
            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((((/* implicit */int) var_0)) + (((/* implicit */int) var_8)))) | (((((/* implicit */int) var_6)) + (var_5))))))));
            /* LoopSeq 1 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_37 [i_8] [i_8] [i_4] = var_9;
                /* LoopSeq 2 */
                for (signed char i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    arr_40 [i_4] [i_8] = ((/* implicit */unsigned char) ((var_2) / (((/* implicit */int) var_6))));
                    var_24 = ((/* implicit */int) var_8);
                    arr_41 [i_8] [i_8] [(unsigned short)9] [(signed char)1] = ((/* implicit */short) var_5);
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) var_4))));
                }
                for (int i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    arr_44 [i_8] [i_9] = ((/* implicit */signed char) var_5);
                    var_26 = ((/* implicit */signed char) var_5);
                }
                arr_45 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_8))))) & (var_2)));
                var_27 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_10))))) * (((((/* implicit */int) var_3)) - (((/* implicit */int) var_7))))));
                arr_46 [i_8] [i_8] [i_8] [(unsigned short)7] = ((/* implicit */long long int) var_6);
            }
        }
        for (unsigned char i_12 = 0; i_12 < 10; i_12 += 1) 
        {
            arr_51 [i_4] [i_12] = ((/* implicit */unsigned char) var_8);
            var_28 = ((/* implicit */signed char) var_4);
        }
    }
    for (long long int i_13 = 0; i_13 < 13; i_13 += 2) 
    {
        arr_54 [i_13] = ((/* implicit */signed char) ((((/* implicit */int) var_0)) / (((((/* implicit */int) var_1)) << (((((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_6)))) - (14809)))))));
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_3)))))));
        /* LoopSeq 2 */
        for (int i_14 = 0; i_14 < 13; i_14 += 1) 
        {
            var_30 = var_4;
            arr_57 [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)25)) + (((/* implicit */int) (unsigned char)48))));
            arr_58 [i_13] = ((/* implicit */long long int) var_6);
        }
        /* vectorizable */
        for (short i_15 = 0; i_15 < 13; i_15 += 3) 
        {
            /* LoopSeq 3 */
            for (short i_16 = 0; i_16 < 13; i_16 += 1) /* same iter space */
            {
                var_31 = ((/* implicit */unsigned short) var_1);
                var_32 = ((((((/* implicit */int) var_1)) + (((/* implicit */int) var_0)))) / (((var_5) - (((/* implicit */int) var_1)))));
            }
            for (short i_17 = 0; i_17 < 13; i_17 += 1) /* same iter space */
            {
                var_33 = var_8;
                arr_69 [(_Bool)1] [i_13] [i_15] [i_17] = ((/* implicit */unsigned short) var_0);
            }
            for (short i_18 = 0; i_18 < 13; i_18 += 1) /* same iter space */
            {
                var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) ((var_2) | (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_7))))))))));
                var_35 -= ((/* implicit */signed char) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_0))));
            }
            arr_72 [i_13] [i_13] [i_13] = ((/* implicit */signed char) var_3);
        }
        var_36 = ((/* implicit */long long int) var_6);
    }
    /* LoopSeq 1 */
    for (unsigned short i_19 = 0; i_19 < 24; i_19 += 2) 
    {
        var_37 = ((/* implicit */short) ((((-1073577095) & (var_2))) / (((/* implicit */int) ((((var_2) / (((/* implicit */int) var_0)))) <= (((((/* implicit */int) var_9)) & (((/* implicit */int) var_9)))))))));
        var_38 |= ((/* implicit */short) ((((((/* implicit */int) var_6)) ^ (((((var_5) + (2147483647))) << (((((/* implicit */int) var_10)) - (36845))))))) ^ (((/* implicit */int) var_0))));
    }
    var_39 += ((/* implicit */unsigned short) var_0);
    var_40 = ((/* implicit */unsigned long long int) var_6);
}
