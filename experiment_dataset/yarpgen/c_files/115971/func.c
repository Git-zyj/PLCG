/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115971
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
    var_15 = max((((/* implicit */short) (!(((/* implicit */_Bool) var_4))))), (var_12));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            arr_6 [8U] [(signed char)5] [(signed char)5] = ((/* implicit */signed char) ((unsigned int) (signed char)66));
            /* LoopSeq 1 */
            for (int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                var_16 &= ((/* implicit */unsigned short) ((((((/* implicit */int) var_7)) <= (((/* implicit */int) (signed char)85)))) ? (((long long int) arr_1 [i_0])) : (arr_2 [i_2 + 3])));
                var_17 = (((-(arr_2 [(_Bool)1]))) - (arr_1 [i_2 + 1]));
                var_18 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_9 [i_0] [i_1] [i_2]))));
            }
        }
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    {
                        arr_17 [i_3] [i_4] [i_3] = ((/* implicit */_Bool) arr_4 [i_0]);
                        var_19 = ((/* implicit */_Bool) ((((((/* implicit */int) var_3)) > (((/* implicit */int) var_12)))) ? (((((/* implicit */_Bool) 1044480U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)14))) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_14))))));
                        var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)54983)) <= (((/* implicit */int) (short)22183)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_3] [i_4] [i_5]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)5839)) || (((/* implicit */_Bool) 33554428U)))))));
                        arr_18 [i_3] [i_3] [i_3] [4U] [i_3] = ((/* implicit */signed char) var_10);
                    }
                } 
            } 
            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-62))));
        }
        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            var_22 = ((/* implicit */unsigned int) (unsigned char)15);
            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
            arr_21 [i_0] [i_0] [i_0] = ((/* implicit */short) ((_Bool) 25));
        }
        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 3) 
        {
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 14; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) 3463736886U);
                        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) var_11))))))));
                        arr_30 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 4261412866U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10553))) : (13113415672708065086ULL))) + (((/* implicit */unsigned long long int) arr_24 [i_7] [i_7]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_38 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) << (((((/* implicit */int) arr_7 [i_0] [i_0] [i_10])) - (22386)))));
                        arr_39 [i_7] [3ULL] [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [i_10] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_2)))) : (0U)));
                    }
                } 
            } 
            var_26 = ((/* implicit */_Bool) (((!(arr_5 [i_0] [i_7] [i_7]))) ? (((/* implicit */long long int) ((arr_37 [i_7]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))) : (arr_20 [i_0] [i_7])));
        }
        arr_40 [i_0] [i_0] &= ((/* implicit */long long int) var_14);
    }
    /* vectorizable */
    for (short i_12 = 3; i_12 < 18; i_12 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_13 = 3; i_13 < 17; i_13 += 3) 
        {
            for (unsigned int i_14 = 1; i_14 < 18; i_14 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_15 = 0; i_15 < 19; i_15 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-10848))))) : (5333328401001486529ULL)));
                        arr_49 [i_12] = arr_48 [i_12 - 1] [(_Bool)1] [i_13] [(_Bool)1] [i_15];
                        var_28 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)2279)) : (((/* implicit */int) arr_47 [i_14]))))));
                        var_29 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_47 [i_12 - 3])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)66)))))) : (((((/* implicit */_Bool) arr_45 [0U] [i_14] [i_13 - 1])) ? (arr_44 [i_14] [i_15]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))));
                        arr_50 [i_12] [i_13] [i_14] [i_14] = ((/* implicit */short) (-(arr_48 [i_12] [i_12 - 1] [i_13 + 2] [6ULL] [i_15])));
                    }
                    for (signed char i_16 = 0; i_16 < 19; i_16 += 2) /* same iter space */
                    {
                        arr_53 [i_12 - 3] [i_13] [i_12 - 3] [i_12 - 3] = ((/* implicit */long long int) ((-22LL) >= (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                        arr_54 [i_12] [i_13] [i_14] [(short)12] [i_16] = ((((/* implicit */_Bool) (short)-14967)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54980))) : (20U));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 21U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54963))) : (9223372036854775807LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))) : (((((/* implicit */_Bool) 0)) ? (1023LL) : ((-9223372036854775807LL - 1LL))))));
                    }
                    arr_55 [i_12] = ((/* implicit */int) var_7);
                }
            } 
        } 
        var_31 += ((/* implicit */short) ((((/* implicit */long long int) 329244270U)) | (9223372036854775807LL)));
        /* LoopSeq 2 */
        for (unsigned char i_17 = 2; i_17 < 17; i_17 += 3) 
        {
            var_32 = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) var_2))))) | (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) arr_46 [i_12 + 1] [i_17] [i_17])) : (-9223372036854775791LL)))));
            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */int) arr_57 [i_12 + 1])) * (((/* implicit */int) arr_57 [i_12 + 1])))))));
        }
        for (signed char i_18 = 1; i_18 < 17; i_18 += 1) 
        {
            arr_62 [i_12] [15LL] = ((/* implicit */unsigned int) ((arr_45 [i_12] [i_12 + 1] [i_18 + 1]) == (arr_56 [i_18] [i_18 + 1] [i_18 - 1])));
            arr_63 [9ULL] [9ULL] [9ULL] = ((/* implicit */unsigned int) (+(5333328401001486524ULL)));
        }
    }
}
