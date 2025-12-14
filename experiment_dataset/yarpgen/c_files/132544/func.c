/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132544
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
    var_12 = (signed char)19;
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 7; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0]))))));
        var_14 += arr_2 [i_0];
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 14; i_1 += 2) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */long long int) 2147352576U)) : (-3646980899933947080LL)));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_4 [i_1 + 2] [i_1]))));
        var_17 *= ((/* implicit */unsigned short) ((-1655198517804288565LL) > (((/* implicit */long long int) 8U))));
        /* LoopSeq 4 */
        for (short i_2 = 2; i_2 < 17; i_2 += 3) 
        {
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (21ULL)));
            /* LoopSeq 4 */
            for (short i_3 = 1; i_3 < 16; i_3 += 3) 
            {
                var_19 -= ((/* implicit */short) ((((/* implicit */int) (signed char)-3)) == (((/* implicit */int) arr_4 [i_3 - 1] [i_2 - 1]))));
                arr_11 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 221052894644624599LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-40))));
                var_20 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_3])) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)168)) % (((/* implicit */int) var_1)))))));
            }
            for (signed char i_4 = 3; i_4 < 16; i_4 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 4; i_5 < 14; i_5 += 4) 
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((/* implicit */int) arr_15 [i_1 + 2] [i_2 - 1] [i_4] [i_5] [i_5 - 3] [i_5])) : (((/* implicit */int) arr_13 [i_4 - 2] [i_2 - 1] [i_1 + 1]))));
                    arr_17 [i_1] [i_1] [i_1 + 3] = arr_15 [17U] [i_2] [i_4] [i_2] [i_2] [i_4];
                }
                var_22 = ((/* implicit */long long int) arr_4 [i_1] [i_1 + 4]);
            }
            for (long long int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) ((long long int) ((697468031532534863LL) & (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1 + 1] [i_1] [i_1]))))));
                    arr_22 [i_7] [i_2 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_7 + 1] [i_7] [i_7 + 1] [i_7] [i_7 + 1] [i_7 + 1])) || (((/* implicit */_Bool) (unsigned char)30))));
                    arr_23 [i_7 + 1] [i_7] [i_6] [i_7] [i_1] = ((/* implicit */_Bool) arr_10 [i_2 - 1] [i_1 + 2] [i_1 + 2]);
                    arr_24 [i_7] [i_6] [i_2 + 1] [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-19))));
                    arr_25 [i_1] [(unsigned short)10] [i_7] [i_1] = (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7371006307332198618ULL));
                }
                arr_26 [i_1] [12LL] = ((/* implicit */short) ((arr_15 [i_2 - 1] [(short)0] [i_2 + 1] [i_2 - 2] [i_2 - 2] [5LL]) ? (((/* implicit */unsigned long long int) ((-7721753947218966707LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (24ULL)));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 3; i_9 < 15; i_9 += 4) 
                    {
                        {
                            arr_31 [i_1] [i_1 + 3] [i_9] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (~(arr_3 [i_1 + 1])));
                            var_24 = ((/* implicit */unsigned int) var_2);
                        }
                    } 
                } 
            }
            for (unsigned int i_10 = 2; i_10 < 17; i_10 += 2) 
            {
                var_25 = ((/* implicit */long long int) min((var_25), (((((/* implicit */long long int) arr_3 [i_10])) | (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) arr_3 [i_1 + 4])) : (-221052894644624597LL)))))));
                arr_34 [i_10 - 1] [(short)9] [(short)9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_32 [10LL] [i_2] [i_10]))) ? (((arr_27 [i_10 - 1] [i_2 - 2] [i_10] [i_10 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-221052894644624620LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))));
                var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((unsigned long long int) arr_16 [i_1 + 1] [i_2 - 2] [i_10 - 2] [i_10] [i_10] [i_10 + 1])))));
            }
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(arr_28 [i_1 + 1] [i_1] [i_1] [16LL] [i_2 - 2]))))) : (arr_20 [i_2 - 1] [i_2] [i_2 - 1] [i_1 + 1] [i_2])));
        }
        for (signed char i_11 = 1; i_11 < 14; i_11 += 1) 
        {
            var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_11 + 3])) ? (((/* implicit */int) arr_14 [i_11] [i_11 + 3] [i_1 + 3] [i_1 - 1])) : (((/* implicit */int) arr_13 [i_1 + 2] [i_11 + 1] [i_11 + 1]))));
            var_29 = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_4)))) > (((/* implicit */int) arr_27 [(short)14] [i_11 + 3] [i_11 + 1] [5LL]))));
        }
        for (long long int i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
        {
            var_30 ^= ((/* implicit */unsigned long long int) var_4);
            arr_41 [i_1] [i_1 + 2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_27 [i_1 + 4] [(signed char)3] [i_1 + 1] [i_12])) >= (((/* implicit */int) var_11)))))));
        }
        for (long long int i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
        {
            var_31 += ((/* implicit */unsigned char) arr_20 [i_1 + 2] [i_1 + 3] [i_1 + 3] [i_1] [i_13]);
            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)189)))))));
        }
    }
}
