/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166525
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
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) (+(var_6)))))));
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0 - 2] [i_0 + 1] &= ((/* implicit */long long int) (((~(9223372036854775807LL))) < (((/* implicit */long long int) ((/* implicit */int) max((arr_0 [i_0 - 1] [i_0 - 1]), (arr_0 [i_0 + 1] [i_0 - 2])))))));
        arr_4 [i_0] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((unsigned char) (_Bool)1)))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                arr_11 [i_0 - 3] [i_1] [i_2 + 1] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)20348)) < (((/* implicit */int) arr_1 [i_0 + 1] [i_1])))) ? (((((/* implicit */_Bool) arr_2 [i_0 - 3])) ? (((/* implicit */long long int) arr_9 [i_2 - 1] [i_1] [i_0 - 3])) : (arr_8 [i_0 - 2] [i_1] [i_2 - 2] [i_2 - 2]))) : (((/* implicit */long long int) arr_9 [i_2] [i_1] [i_0 - 2]))));
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    for (long long int i_4 = 3; i_4 < 17; i_4 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_13 [i_4 + 3] [i_2 + 1] [i_1] [i_0 - 1]))) < (((/* implicit */int) arr_1 [i_3] [i_3]))));
                            var_16 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_6 [i_3] [i_2 - 2] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_2 - 1])) : (((/* implicit */int) arr_13 [i_4 - 2] [i_2 - 2] [i_1] [i_0 + 1]))))));
                            arr_16 [i_4] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_0] [i_0 - 2]))) ? ((-(arr_8 [i_4] [i_1] [i_2 - 2] [i_0 - 3]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_14 [i_4]))))));
                        }
                    } 
                } 
                arr_17 [i_0 - 1] [i_0 + 1] = (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0 - 3] [i_1] [i_2 - 1]))))));
            }
            arr_18 [i_0 + 1] [i_1] = ((/* implicit */signed char) ((((_Bool) arr_13 [i_0 - 1] [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) ((int) (short)3914))) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_15 [i_0])) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))))))) : (((long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_1] [i_1] [i_0 - 3]))))));
        }
        for (int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 3; i_6 < 20; i_6 += 3) 
            {
                for (signed char i_7 = 1; i_7 < 18; i_7 += 3) 
                {
                    {
                        arr_26 [i_0 + 1] [i_5] [i_6] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_15 [i_7 - 1]))));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            var_17 += ((/* implicit */long long int) ((-1852394178) < (((/* implicit */int) (short)32767))));
                            arr_31 [i_0 - 2] [i_5] [i_5] [i_6 - 1] [i_7 + 1] [i_7] [i_8] = ((/* implicit */unsigned int) arr_10 [i_0] [i_5] [i_7] [i_5]);
                        }
                        arr_32 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 2] = ((/* implicit */signed char) arr_30 [i_0 - 3] [i_5] [i_5]);
                        var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((short) arr_27 [i_5] [i_5] [i_5] [i_0 - 2] [i_0 - 1])))));
        }
        /* vectorizable */
        for (unsigned char i_9 = 2; i_9 < 19; i_9 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned short i_12 = 3; i_12 < 18; i_12 += 4) 
                    {
                        {
                            arr_43 [i_0 - 1] [i_0 - 2] [i_9 - 2] [i_10] [i_9] [i_12 + 3] [i_12 - 2] = (!((!(((/* implicit */_Bool) 3663714925U)))));
                            var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)252)))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                for (unsigned short i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    {
                        arr_49 [i_9 + 2] [i_9] [i_13] [i_14] [i_9 + 2] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) -234525743)) ? ((+(arr_9 [i_14] [i_14] [i_14]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_13] [i_9] [i_0])))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_21 [i_14] [i_13] [i_9] [i_0 - 3]))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_9]))) : (arr_9 [i_0] [i_9 - 2] [i_13]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)20350)) ? (arr_19 [i_0] [i_9 - 1] [i_9 - 1]) : (((/* implicit */int) arr_20 [i_0 + 1])))))));
                        arr_50 [i_14] [i_9] [i_13] [i_14] [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned char)175)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0 - 1] [i_0 + 1] [i_0 - 3] [i_0 - 2]))) : (arr_24 [i_0] [i_9 - 1] [i_0 - 3] [i_14] [i_14] [i_13])))));
                    }
                } 
            } 
        }
        var_22 = ((/* implicit */unsigned char) 274877906943ULL);
    }
    for (int i_15 = 0; i_15 < 20; i_15 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_16 = 0; i_16 < 20; i_16 += 4) 
        {
            var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_25 [i_16] [i_15])))) / (((arr_52 [i_15] [i_15]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_20 [i_16])))) : (((((/* implicit */_Bool) 631252371U)) ? (arr_23 [i_16]) : (((/* implicit */unsigned long long int) arr_35 [i_15] [i_16])))))));
            var_24 &= ((/* implicit */signed char) arr_48 [i_15] [i_15] [i_15] [i_16]);
        }
        arr_57 [i_15] = ((/* implicit */signed char) (unsigned char)255);
    }
}
