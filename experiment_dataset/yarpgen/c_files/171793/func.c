/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171793
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 13; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)16746))));
                        arr_12 [i_1] [i_1] [i_1] [i_1] [4U] [i_0] = ((/* implicit */unsigned short) arr_4 [i_1]);
                        arr_13 [i_0] [i_1] [8LL] [i_0] = ((/* implicit */short) var_10);
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */short) ((var_2) ? (((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)27), ((signed char)12))))))) : (((((/* implicit */int) var_11)) - (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 3 */
        for (signed char i_4 = 1; i_4 < 10; i_4 += 1) 
        {
            for (short i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
                {
                    {
                        arr_24 [i_0] [i_0] [i_5] [i_0] [10ULL] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((var_11) ? (((((/* implicit */long long int) var_9)) - (var_0))) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6] [i_6] [i_4 - 1] [i_6]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_0]))))));
                        arr_25 [i_0] [i_4] [i_5] [i_6] [10U] = 4294967284U;
                        arr_26 [i_4 - 1] [0LL] = 4294967284U;
                    }
                } 
            } 
        } 
        arr_27 [i_0] = ((/* implicit */unsigned int) ((short) min((((/* implicit */unsigned int) (short)0)), (11U))));
        arr_28 [i_0] [i_0] = 1275375124U;
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 19; i_7 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_8 = 0; i_8 < 19; i_8 += 3) 
        {
            for (int i_9 = 0; i_9 < 19; i_9 += 1) 
            {
                for (unsigned int i_10 = 2; i_10 < 16; i_10 += 3) 
                {
                    {
                        arr_39 [9LL] [i_8] [i_8] [i_9] [i_8] [(unsigned short)13] = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) | (((/* implicit */int) var_10))));
                        /* LoopSeq 2 */
                        for (signed char i_11 = 1; i_11 < 18; i_11 += 1) 
                        {
                            arr_43 [i_7] [i_8] [i_8] [i_8] [i_9] [i_8] [(signed char)10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((11U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_10])))))) ? (((/* implicit */int) (unsigned short)41507)) : ((~(((/* implicit */int) var_7))))));
                            arr_44 [i_8] [i_11 - 1] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [9ULL])) ? (((var_6) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_29 [i_8])))) : (((/* implicit */int) var_2))));
                            arr_45 [i_7] [i_8] [i_9] [i_8] [0U] = ((/* implicit */short) (unsigned char)215);
                            arr_46 [16U] [1U] [i_10] [i_8] = ((/* implicit */unsigned char) (-((-(var_0)))));
                        }
                        for (unsigned short i_12 = 3; i_12 < 17; i_12 += 2) 
                        {
                            arr_49 [i_10] [i_10] [i_9] [i_12] [i_8] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                            arr_50 [(unsigned char)12] [i_10] [(short)4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)26478))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_13 = 3; i_13 < 18; i_13 += 3) 
        {
            for (short i_14 = 0; i_14 < 19; i_14 += 4) 
            {
                {
                    arr_55 [i_7] [i_7] [i_13] [i_14] = ((/* implicit */short) ((unsigned short) arr_36 [i_13] [i_13] [i_14] [i_13 - 2] [i_13] [i_14]));
                    arr_56 [i_7] [i_13] [i_14] [i_14] = ((/* implicit */unsigned int) ((long long int) arr_36 [i_13 - 3] [i_13 - 3] [i_14] [i_13 - 1] [i_13 + 1] [(unsigned char)12]));
                    arr_57 [i_7] [i_7] [i_13] [(signed char)0] = ((/* implicit */unsigned short) (~((~(1275375124U)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_15 = 2; i_15 < 16; i_15 += 3) 
    {
        arr_61 [1U] [1U] = ((signed char) arr_59 [i_15 - 2] [i_15 - 2]);
        arr_62 [i_15] [(unsigned char)10] = ((/* implicit */short) var_0);
    }
    var_13 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)20))));
    var_14 = ((/* implicit */short) (!(var_2)));
    var_15 = ((/* implicit */short) var_3);
}
