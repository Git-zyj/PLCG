/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114174
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : ((-9223372036854775807LL - 1LL)));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (+(-584324548))))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned short)17)) : (((/* implicit */int) arr_0 [i_0]))))));
        var_14 = ((/* implicit */int) ((_Bool) ((var_0) <= (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))));
    }
    var_15 = ((/* implicit */int) (((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (-852875049))))) >= (((/* implicit */int) var_6))));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 16; i_1 += 1) 
    {
        for (short i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_3 = 4; i_3 < 14; i_3 += 2) 
                {
                    arr_11 [i_1] [i_1] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)114)), (18446744073709551615ULL)))) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) max((var_9), ((unsigned char)68)))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)22674)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                    {
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 1) 
                        {
                            {
                                var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_1] [i_1 - 1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)65518)) : (((/* implicit */int) arr_10 [i_3]))))) ? (((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (unsigned short)57975)) : (0))) : (((((/* implicit */int) (unsigned char)17)) - (arr_13 [i_1] [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1])))));
                                arr_19 [i_1] [(unsigned char)5] [6] [(short)6] [i_1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_16 [i_1 - 1] [i_2] [i_3 + 3] [i_1] [i_5]))))) ? (-584324548) : (-2147483618)));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        arr_22 [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */short) ((unsigned char) arr_18 [i_2] [i_2] [i_3]))), (min((arr_10 [i_1]), (((/* implicit */short) (unsigned char)255))))));
                        var_17 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)7584))));
                    }
                    for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_8 = 2; i_8 < 15; i_8 += 4) 
                        {
                            arr_29 [(unsigned char)5] [i_2] [i_2] [i_7] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_7] [i_3] [i_2] [i_1]))) & (4294967295U)));
                            arr_30 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_1]))));
                            arr_31 [i_1] [i_2] [i_3 + 2] [i_7] [i_7] [i_1] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_8] [i_8] [i_8] [i_1] [i_8 - 1])) ? (((/* implicit */int) arr_16 [i_1 - 1] [i_3] [(short)6] [i_1] [i_8 + 1])) : (((/* implicit */int) arr_16 [i_1 + 1] [15] [2U] [i_1] [i_8 + 2]))));
                            arr_32 [i_1] [i_1] [i_3 - 3] [i_3 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (short)4096)))) : (((/* implicit */int) (unsigned char)17))));
                        }
                        arr_33 [i_3] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_16 [i_1] [i_2] [i_2] [i_1] [i_2]), ((unsigned char)141)))) ? (263903210) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) + (arr_2 [i_1] [(unsigned char)0])))) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (_Bool)0))))));
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */int) (unsigned char)248)) > (((/* implicit */int) (unsigned short)50094)))))));
                    }
                }
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    var_19 += ((/* implicit */short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (short)-3735)) : (((/* implicit */int) (unsigned char)105))));
                    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 1] [14LL]))))) ? ((~(((/* implicit */int) arr_6 [i_9])))) : (((((/* implicit */_Bool) (unsigned char)118)) ? (((((/* implicit */int) arr_18 [i_1 - 1] [i_1] [8])) + (arr_8 [i_9] [i_2] [i_1]))) : ((~(((/* implicit */int) arr_3 [10] [10]))))))));
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!((_Bool)1)))), (((((/* implicit */_Bool) (unsigned char)126)) ? (13148830922302947897ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65525))))))))));
                    var_22 = ((/* implicit */short) (+(var_1)));
                }
                arr_38 [i_1] = ((/* implicit */unsigned short) arr_20 [(_Bool)1] [(_Bool)1] [i_2] [i_2] [i_1] [i_1 - 1]);
                var_23 = arr_28 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1] [i_1] [(unsigned short)14] [i_1 - 1];
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6)))))));
}
