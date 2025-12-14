/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123198
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
    var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) min((var_2), (((/* implicit */long long int) var_3))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 |= ((/* implicit */unsigned char) (unsigned short)36203);
            var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [16LL]))));
            var_16 += ((/* implicit */unsigned int) (-((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_2 [i_0] [i_1])))))));
        }
        for (short i_2 = 1; i_2 < 17; i_2 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_4 [i_2 + 2] [(unsigned char)3]), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)29353)))))))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_3)) % (arr_4 [i_0] [i_2 - 1]))))));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 4 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_18 &= ((/* implicit */unsigned short) max(((~(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [(signed char)12] [3])) : (((/* implicit */int) var_5)))))), (max(((+(arr_3 [i_2 + 2] [i_2]))), (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)29326))))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)36203)) > (((/* implicit */int) var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (max((((/* implicit */long long int) (unsigned short)29333)), (var_2)))))) ? ((-(((/* implicit */int) (signed char)0)))) : ((~(arr_3 [i_2 + 1] [i_2])))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) arr_9 [i_0] [i_2 + 1] [i_2] [i_2] [15LL] [i_2 + 2]))));
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) arr_5 [i_0] [i_2 + 1] [i_0]))));
                }
                for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) (-(((arr_4 [i_0] [i_2]) << (((((var_0) ^ (((/* implicit */unsigned long long int) arr_3 [i_0] [i_2 + 2])))) - (4995305268524775392ULL)))))));
                    var_23 &= ((/* implicit */unsigned char) arr_4 [i_0] [i_3]);
                }
                for (long long int i_7 = 1; i_7 < 18; i_7 += 4) 
                {
                    var_24 += ((/* implicit */signed char) var_2);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) 2770073579U);
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)0))) ? ((~(var_10))) : (var_7)));
                        var_27 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned long long int) var_7)) * (var_4))));
                        var_28 += (!(((/* implicit */_Bool) arr_11 [i_8] [i_2 - 1] [i_7])));
                        var_29 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (216188382U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)54)))));
                    }
                    for (unsigned int i_9 = 1; i_9 < 18; i_9 += 1) 
                    {
                        var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((unsigned char)128), (((/* implicit */unsigned char) arr_9 [i_0] [3U] [i_3] [i_7] [i_9 + 1] [i_3])))))));
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2 - 1] [i_2] [i_7 + 1] [i_2])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29332)) ? (var_7) : (var_2)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)58))))) : (var_2))) : (((long long int) var_3))));
                    }
                }
                var_32 = ((/* implicit */unsigned char) var_1);
                /* LoopSeq 2 */
                for (unsigned char i_10 = 3; i_10 < 17; i_10 += 4) 
                {
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */int) max((arr_10 [i_10 - 2] [i_10 - 2] [i_0] [i_3] [(short)7]), (arr_10 [i_10 - 2] [i_10 - 2] [i_3] [i_10] [i_2 - 1])))) : (((/* implicit */int) min((((/* implicit */short) var_9)), (arr_10 [i_10 - 2] [i_2] [i_3] [i_10 + 2] [i_10]))))));
                    var_34 = ((/* implicit */_Bool) (-(((/* implicit */int) min((((_Bool) var_4)), (((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) arr_17 [i_0] [i_0] [i_2 + 2])))))))));
                }
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_0] [i_2 + 1])) >> (((((/* implicit */int) arr_24 [i_0] [i_2 + 2])) - (27847)))))) ? (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (arr_14 [i_0] [0] [i_2] [i_3] [i_11] [i_11]))), ((~(arr_7 [i_0]))))) : (((/* implicit */int) var_8))));
                    var_36 = ((/* implicit */long long int) ((signed char) (unsigned short)36190));
                    var_37 = ((/* implicit */unsigned short) var_0);
                }
                var_38 ^= ((/* implicit */unsigned short) -662091540);
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
                {
                    for (long long int i_13 = 1; i_13 < 15; i_13 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (9223372036854775786LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))))) : (((/* implicit */long long int) arr_16 [i_0] [i_2] [(unsigned short)0] [i_12] [14]))));
                            var_40 = ((/* implicit */short) ((signed char) ((max((9223372036854775786LL), (((/* implicit */long long int) (_Bool)1)))) - (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_11 [(_Bool)1] [i_3] [i_0])), ((short)-15))))))));
                            var_41 = ((/* implicit */unsigned char) min((((((/* implicit */int) min((((/* implicit */short) var_12)), (var_6)))) * (((/* implicit */int) arr_10 [(unsigned short)14] [(signed char)13] [i_2 - 1] [i_2] [(signed char)1])))), (((/* implicit */int) arr_31 [i_0] [i_2] [i_0] [i_12]))));
                            var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (-9223372036854775787LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_3))))))))));
                        }
                    } 
                } 
            }
        }
        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
        {
            var_43 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_21 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1])) ? (arr_21 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_25 [(_Bool)1] [i_14] [i_0] [(signed char)1])), (var_10))))))))));
            var_44 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-61)))));
        }
        var_45 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (short)0))))));
    }
}
