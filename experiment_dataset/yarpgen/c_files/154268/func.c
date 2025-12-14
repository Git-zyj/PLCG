/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154268
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
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        var_12 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) arr_2 [8U]))))));
        var_13 -= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (arr_1 [i_0 - 2] [i_0 + 1]))))) == (((long long int) var_8))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_14 |= ((/* implicit */signed char) var_3);
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_10))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            var_16 = ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
            /* LoopSeq 3 */
            for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) var_6);
                            var_18 += ((/* implicit */unsigned char) arr_0 [i_2]);
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_2 [i_1]))));
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */signed char) ((arr_11 [i_3] [i_2] [i_2] [i_3]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                var_21 = ((/* implicit */_Bool) ((arr_14 [11LL] [i_1] [i_2] [i_3] [i_3]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(unsigned short)14] [(_Bool)1] [(_Bool)1] [6U])))));
                arr_15 [i_1] [i_1] = ((/* implicit */short) var_6);
            }
            for (signed char i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
            {
                var_22 = ((/* implicit */int) var_2);
                arr_18 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((var_3) ? (arr_12 [i_1] [i_2] [(short)2] [i_1] [i_2] [i_6]) : (((/* implicit */long long int) var_9))))) ? (((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_1] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) arr_14 [i_6] [11U] [i_1] [i_1] [i_1])) : (var_0))) : (((/* implicit */unsigned long long int) arr_14 [(_Bool)1] [i_1] [(_Bool)1] [i_2] [i_6]))));
                var_23 ^= ((short) arr_2 [i_2]);
            }
            for (signed char i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
            {
                arr_21 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
                arr_22 [i_2] [(unsigned short)6] [i_7] [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) 1420743730)) : (arr_16 [i_1])))) <= ((+(arr_12 [(unsigned short)3] [(unsigned short)3] [i_1] [(unsigned short)3] [(unsigned short)3] [i_1])))));
                arr_23 [i_1] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_9 [i_1] [i_2] [i_2] [i_1]))));
                var_24 = ((/* implicit */_Bool) ((var_2) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) var_10))));
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) var_2))));
            }
        }
        for (short i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
        {
            var_26 *= arr_19 [i_8];
            arr_28 [i_1] = ((/* implicit */_Bool) ((arr_24 [i_1] [i_1] [i_1]) ? (var_9) : (arr_26 [(_Bool)1] [i_8])));
            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) arr_5 [i_1] [i_1]))));
            /* LoopSeq 4 */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
            {
                var_28 = ((/* implicit */long long int) arr_8 [i_9 - 1] [i_1] [i_1]);
                arr_32 [i_9] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_1] [i_1])) / (((/* implicit */int) arr_2 [i_9 - 1]))));
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((long long int) var_2)))));
            }
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) && (arr_24 [i_10] [i_10 - 1] [i_10])));
                arr_36 [i_1] = ((/* implicit */unsigned int) (_Bool)1);
                arr_37 [i_1] [i_8] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-127))));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                arr_40 [i_1] [i_1] = ((/* implicit */unsigned int) ((((arr_10 [i_1] [i_11] [i_1] [i_1] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-114))) : (arr_6 [8]))) % (((/* implicit */long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_2)))))));
                var_31 = ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) var_7))) - (-3738814874194370347LL)))));
                arr_41 [i_1] [i_8] = ((arr_3 [i_11]) ? (arr_7 [i_1] [i_1] [i_11]) : (((/* implicit */long long int) (-(1420743730)))));
                var_32 ^= ((/* implicit */_Bool) ((arr_30 [i_8] [i_11] [4] [i_8]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [6ULL] [i_8] [i_8])))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (~(arr_7 [i_1] [i_8] [i_12]))))));
                /* LoopNest 2 */
                for (unsigned short i_13 = 2; i_13 < 12; i_13 += 4) 
                {
                    for (unsigned int i_14 = 0; i_14 < 15; i_14 += 1) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned short) var_6);
                            var_35 ^= ((/* implicit */unsigned int) (_Bool)0);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 15; i_15 += 4) 
                {
                    for (int i_16 = 3; i_16 < 12; i_16 += 4) 
                    {
                        {
                            arr_54 [i_1] [i_1] [i_12] [i_1] [i_1] = ((/* implicit */long long int) ((var_6) > (arr_13 [i_16 + 3] [i_16 + 2] [i_1] [i_16 - 3] [i_16 - 2] [i_16 + 1])));
                            arr_55 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_45 [i_1] [i_16 + 2] [i_16 - 3] [i_16 + 3] [i_1])) == (((/* implicit */int) arr_2 [i_16 + 2]))));
                        }
                    } 
                } 
                var_36 -= ((/* implicit */unsigned int) (((~(var_11))) ^ (((/* implicit */long long int) (((_Bool)1) ? (1420743761) : (((/* implicit */int) (signed char)-114)))))));
            }
        }
        for (short i_17 = 0; i_17 < 15; i_17 += 2) /* same iter space */
        {
            var_37 -= ((/* implicit */unsigned short) ((arr_5 [i_1] [i_1]) << (((((/* implicit */_Bool) (short)-32752)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_26 [i_1] [i_17])))));
            var_38 = ((/* implicit */int) ((signed char) (_Bool)1));
        }
    }
    var_39 -= ((/* implicit */signed char) (-(((/* implicit */int) var_1))));
}
