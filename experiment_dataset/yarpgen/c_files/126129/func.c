/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126129
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
    var_15 |= ((/* implicit */unsigned short) var_0);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_0 [i_0])))))) - (((2305842734335787008LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30323)))))));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0])) : (arr_1 [i_0])))))) ? (((((/* implicit */_Bool) max((arr_1 [1LL]), (((/* implicit */int) arr_0 [(unsigned char)21]))))) ? (((/* implicit */int) ((2305842734335787000LL) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) : (min((arr_1 [i_0]), (arr_1 [i_0]))))) : (((/* implicit */int) var_10))));
        var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((-9223372036854775796LL), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (((/* implicit */long long int) (-(-2097380957)))) : (((arr_0 [i_0]) ? (((/* implicit */long long int) arr_1 [i_0])) : (9223231299366420480LL)))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (-1)))));
        var_20 = ((/* implicit */unsigned int) (signed char)77);
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((103079215104LL) + (((/* implicit */long long int) ((/* implicit */int) var_11)))))))))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [i_1]) : ((+(((/* implicit */int) arr_0 [i_1]))))));
        var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_1 [i_1]) : (arr_2 [i_1]))) - (((((/* implicit */_Bool) var_7)) ? (arr_1 [7]) : (((/* implicit */int) arr_3 [i_1]))))));
    }
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_5 [i_2] [i_2])))) ? (((((/* implicit */_Bool) arr_2 [i_2])) ? (-9223372036854775796LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2]))))) : (((/* implicit */long long int) ((((/* implicit */int) var_13)) - (((/* implicit */int) (unsigned short)0)))))))) ? ((-(((((/* implicit */_Bool) 3781035605511460519LL)) ? (arr_1 [i_2]) : (((/* implicit */int) arr_0 [i_2])))))) : ((-(((/* implicit */int) arr_4 [i_2]))))));
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_0 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (2305842734335787008LL)))) ? (((((/* implicit */_Bool) min((arr_5 [i_2] [i_2]), (((/* implicit */unsigned int) arr_3 [i_2]))))) ? (((((/* implicit */long long int) var_8)) + (-9223231299366420480LL))) : (((/* implicit */long long int) arr_5 [i_2] [i_2])))) : (((/* implicit */long long int) (+(max((((/* implicit */int) (unsigned short)46629)), (-1382067210))))))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 4) 
    {
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (arr_8 [i_3]) : (((/* implicit */long long int) arr_2 [i_3])))), (((/* implicit */long long int) arr_2 [i_3 + 2]))))) ? (((/* implicit */int) arr_3 [i_3])) : ((+(max((((/* implicit */int) var_2)), (arr_1 [i_3])))))));
        var_27 *= ((/* implicit */_Bool) ((103079215123LL) >> (((((/* implicit */int) (unsigned char)180)) - (146)))));
        var_28 += ((/* implicit */unsigned char) arr_7 [i_3 - 1]);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
                        {
                            var_29 &= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_7] [i_6] [i_5] [i_5] [i_4] [i_3] [i_3])) ? (var_12) : (var_12))))));
                            var_30 = ((/* implicit */int) arr_0 [i_3 + 2]);
                        }
                        for (unsigned char i_8 = 4; i_8 < 17; i_8 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_16 [i_4] [i_5] [i_8 - 3])) + (2147483647))) << (((((/* implicit */int) var_11)) - (3260)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : ((-(arr_13 [i_3] [i_8])))));
                            var_32 = ((/* implicit */unsigned short) (~(arr_9 [i_3 + 2])));
                            var_33 = ((/* implicit */unsigned char) (~(((long long int) arr_11 [i_3] [4LL] [i_6]))));
                        }
                        var_34 = ((/* implicit */unsigned long long int) arr_6 [i_6]);
                    }
                } 
            } 
            var_35 = ((/* implicit */unsigned char) ((arr_17 [i_4] [i_3 + 1] [i_3 - 1] [i_3]) - (arr_17 [i_3 - 1] [i_3] [i_3] [i_4])));
            var_36 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [(unsigned short)2])) ? (((/* implicit */int) var_7)) : (arr_12 [i_3])))) >= (((((/* implicit */_Bool) var_12)) ? (103079215119LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
        }
        for (short i_9 = 0; i_9 < 18; i_9 += 1) 
        {
            var_37 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_4 [(unsigned char)12])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58)))))))) ? (max((((/* implicit */long long int) arr_20 [i_3] [i_9] [i_9] [i_9] [i_3] [i_3])), (arr_8 [i_3 + 2]))) : (((/* implicit */long long int) ((arr_5 [i_3 + 1] [i_3 - 1]) * (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))))))));
            var_38 = ((/* implicit */signed char) arr_10 [i_3] [i_3]);
            /* LoopSeq 2 */
            for (unsigned int i_10 = 0; i_10 < 18; i_10 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_11 = 1; i_11 < 16; i_11 += 4) 
                {
                    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_5) + (var_5)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_26 [i_11 + 2] [i_10] [i_10] [i_3 + 2]))));
                    var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (32767U))))))));
                    var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) ((((((/* implicit */int) arr_0 [i_9])) < (((/* implicit */int) arr_26 [i_3] [(unsigned char)4] [(unsigned char)4] [i_3])))) ? ((~(arr_12 [i_3]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_3] [i_3] [i_3 + 2] [i_3] [i_3 - 1] [i_3]))))))))));
                }
                var_42 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_25 [i_10] [i_10] [i_10] [i_9] [i_3 - 1] [i_9]), (arr_25 [i_3] [i_3] [i_10] [i_3] [i_3 - 1] [(unsigned short)10])))) ? (15034183602774702708ULL) : (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_4 [i_9])))))))));
            }
            for (unsigned int i_12 = 0; i_12 < 18; i_12 += 1) /* same iter space */
            {
                var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_11 [i_3 - 1] [i_3] [i_3])))) ? (min((arr_18 [i_3 - 1] [i_3] [i_3] [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1]), (arr_11 [i_3 + 1] [i_3] [8]))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)61763)) | (-1073741824))))));
                var_44 = ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) > (arr_13 [i_3] [i_3]))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_13)), (((arr_22 [i_9] [i_9]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_12]))) : (arr_5 [3U] [i_3])))))) : (((max((((/* implicit */long long int) (_Bool)1)), (arr_17 [i_3 - 1] [i_9] [i_12] [i_3 - 1]))) ^ (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_12 [i_12])), (var_5)))))));
                var_45 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((unsigned char)220), (((/* implicit */unsigned char) arr_22 [i_9] [i_3 + 1]))))) ? (((/* implicit */int) arr_0 [i_9])) : ((~(2097088)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)37))))) ? (arr_5 [i_3 + 1] [i_3 + 1]) : ((-(arr_5 [i_12] [i_3 + 2])))))));
                var_46 = ((/* implicit */unsigned int) arr_9 [i_3 + 1]);
                var_47 = arr_6 [i_3];
            }
        }
        for (unsigned int i_13 = 1; i_13 < 17; i_13 += 1) 
        {
            var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_3] [i_3 - 1] [i_13] [i_13 + 1])) + (((/* implicit */int) arr_0 [i_3]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_14 [i_3 - 1] [i_3 - 1] [i_13] [i_13]), (arr_6 [i_3])))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_23 [i_3] [i_3] [i_13] [i_13])))))));
            var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_10 [i_13] [i_13 - 1]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) var_11)) : (-116610088)))) ? (max((-47191913476999302LL), (2305842734335787016LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_13] [i_13] [i_3] [10LL])) ? (((/* implicit */int) var_7)) : (arr_28 [i_13] [i_13 - 1] [i_3 + 2] [i_3]))))))) : ((-(((((/* implicit */unsigned long long int) var_9)) - (var_0)))))));
        }
        for (long long int i_14 = 2; i_14 < 17; i_14 += 2) 
        {
            var_50 = (~((-(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_14 + 1] [i_14] [i_14] [i_3]))) : (arr_31 [i_14]))))));
            var_51 = ((((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)52581))))) ^ (((arr_18 [i_3 + 1] [i_3 + 1] [(_Bool)1] [i_3 + 1] [(_Bool)1] [(_Bool)1] [(_Bool)1]) & (((/* implicit */long long int) ((/* implicit */int) var_2))))))) & (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)14336)) ? (((/* implicit */int) (short)-7)) : (((/* implicit */int) (unsigned short)4094)))) | (((((/* implicit */int) (unsigned char)19)) ^ (((/* implicit */int) (_Bool)1))))))));
        }
    }
    var_52 |= ((min((((((/* implicit */int) (unsigned short)58911)) & (-116610104))), (((/* implicit */int) (unsigned char)3)))) & (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) var_11)))) & ((~(((/* implicit */int) (unsigned short)12954)))))));
    var_53 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
}
