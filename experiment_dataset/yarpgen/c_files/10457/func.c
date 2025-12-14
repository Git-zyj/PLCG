/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10457
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_10 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)4051)) & (((/* implicit */int) (unsigned char)19))))) ? (((((/* implicit */int) arr_1 [i_0])) | (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) (short)-4051)) ? (((/* implicit */int) (short)4040)) : (-1))))), (((((/* implicit */_Bool) ((3461558731U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (-883735067))) : (((int) (short)4072))))));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (long long int i_3 = 3; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_11 = ((/* implicit */short) (signed char)127);
                        var_12 |= ((/* implicit */unsigned short) (+(arr_7 [16LL] [i_2] [16LL])));
                        var_13 = ((((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1])) << (((/* implicit */int) ((((/* implicit */long long int) -906800920)) < (((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_2] [i_3])))))))));
                    }
                } 
            } 
            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((int) -21)))));
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    {
                        arr_17 [i_0] [i_1] = ((/* implicit */unsigned char) arr_12 [i_0] [i_0]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_6 = 2; i_6 < 18; i_6 += 3) 
                        {
                            var_15 = ((((/* implicit */int) arr_12 [i_0] [i_0])) % (var_6));
                            var_16 *= ((/* implicit */short) var_6);
                        }
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1 + 2] [i_5])) ^ (((/* implicit */int) arr_9 [i_0] [i_1] [i_1 + 1] [i_1 - 1]))))) ^ ((~(arr_19 [i_1 + 1] [i_1] [i_0])))));
                        var_18 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_9 [i_0] [i_5] [i_5] [i_0])))) && (((/* implicit */_Bool) ((unsigned char) (short)-4073)))));
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) var_2)), (var_5)))));
                    }
                } 
            } 
        }
    }
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
    {
        for (unsigned long long int i_8 = 3; i_8 < 10; i_8 += 3) 
        {
            {
                var_19 = (i_8 % 2 == zero) ? ((~(((arr_26 [i_7]) << (((((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_8] [i_8] [i_8]))))) - (3366712313373728000ULL))))))) : ((~(((arr_26 [i_7]) << (((((((var_5) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_8] [i_8] [i_8]))))) - (3366712313373728000ULL))) - (17469333015991162299ULL)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-4057)) ? (((/* implicit */int) (unsigned short)23364)) : (((/* implicit */int) ((unsigned char) 18446744073709551615ULL)))));
                    /* LoopSeq 3 */
                    for (int i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        arr_33 [i_7] [i_8] [i_9] [i_10] [i_10] = ((/* implicit */unsigned short) (-(arr_23 [i_8 + 1])));
                        arr_34 [i_7] [i_8] [i_8] [i_9] [i_10] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_7] [i_8 - 3] [i_8])) ? ((+(((/* implicit */int) arr_25 [i_8])))) : (((/* implicit */int) (unsigned short)23347))));
                        arr_35 [i_8] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [i_8])) ? (((/* implicit */int) arr_30 [i_8])) : (((/* implicit */int) arr_30 [i_8]))));
                        var_21 = ((/* implicit */long long int) arr_24 [i_7]);
                    }
                    for (unsigned int i_11 = 1; i_11 < 12; i_11 += 3) 
                    {
                        arr_38 [i_11] [i_11] [i_11] [i_11] [i_11] [i_8] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)23347)) / (1888532601)));
                        /* LoopSeq 1 */
                        for (short i_12 = 1; i_12 < 12; i_12 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned char) arr_12 [i_8] [i_8]);
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_8))) ? (((/* implicit */int) arr_9 [18LL] [i_11 - 1] [18LL] [i_12 + 1])) : (((/* implicit */int) arr_15 [i_11 + 1] [i_12 + 1] [i_11 + 1] [i_12]))));
                            arr_41 [i_8] [i_8] [i_8] = ((/* implicit */signed char) arr_4 [i_12 + 1] [i_11]);
                            arr_42 [i_8] [i_11] [i_12] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50056))) == (var_5))))));
                        }
                        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(2569113397522957362LL))))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_8] [i_8]))) / (var_7)))) ? (var_7) : (arr_40 [i_11 + 1] [i_11 + 1] [i_11] [i_11] [i_11 - 1])));
                    }
                    for (unsigned char i_13 = 1; i_13 < 9; i_13 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_14 = 0; i_14 < 13; i_14 += 3) /* same iter space */
                        {
                            arr_49 [i_7] [10U] [i_8] [i_9] [i_13] [i_14] |= ((/* implicit */long long int) arr_47 [8ULL]);
                            arr_50 [i_8] [i_8] [i_9] = ((/* implicit */long long int) arr_18 [i_7] [i_8] [i_8] [i_8] [i_14]);
                        }
                        for (short i_15 = 0; i_15 < 13; i_15 += 3) /* same iter space */
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((short) (short)-4042)))) & (arr_2 [i_7] [i_8 + 1])));
                            arr_55 [i_7] [i_8] [i_9] [i_13] [i_13] [i_8] = ((/* implicit */_Bool) ((arr_16 [i_8] [i_8] [i_8 + 3] [i_13 + 1] [i_15]) | (arr_16 [i_7] [i_8] [i_8 - 1] [i_13 - 1] [i_15])));
                            var_27 |= ((/* implicit */_Bool) arr_14 [i_13] [i_8] [i_8] [i_8]);
                        }
                        arr_56 [i_7] [i_7] [i_8] [i_7] [i_8] [i_7] = ((/* implicit */unsigned char) (+(var_9)));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */long long int) 2897241107U)) > (-4393111859969319821LL)));
                    }
                }
                var_29 -= ((/* implicit */short) ((unsigned int) arr_10 [i_7] [i_8] [i_7] [i_8] [i_7] [i_7]));
                arr_57 [i_7] [i_8] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_13 [i_8])))) * (((((/* implicit */_Bool) arr_13 [i_8])) ? (((/* implicit */int) arr_13 [i_8])) : (((/* implicit */int) arr_13 [i_8]))))));
                /* LoopNest 2 */
                for (unsigned char i_16 = 0; i_16 < 13; i_16 += 3) 
                {
                    for (unsigned int i_17 = 0; i_17 < 13; i_17 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)23366)) ? (-1) : (((/* implicit */int) (signed char)-64))));
                            arr_62 [i_8] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_8])) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_8] [i_7] [i_8 + 2] [i_8 + 2] [i_7])) || (((/* implicit */_Bool) arr_8 [i_8] [i_17] [i_8 + 2] [i_8] [i_17])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_31 = ((/* implicit */int) var_1);
}
