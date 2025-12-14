/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181907
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    var_17 ^= ((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)-11983)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)62817))))) : (((int) max((((/* implicit */unsigned short) (short)11982)), ((unsigned short)56117))))));
                    var_18 = (unsigned short)18754;
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) (short)11986))));
    var_20 |= ((/* implicit */signed char) ((var_5) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4619))) : (var_1)));
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            arr_11 [i_3] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15266)) ? ((+(((/* implicit */int) (short)11)))) : ((~(((/* implicit */int) var_6))))));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_3])) && (((/* implicit */_Bool) arr_7 [i_4]))));
        }
        for (long long int i_5 = 1; i_5 < 18; i_5 += 4) 
        {
            arr_15 [i_3] = min((((/* implicit */long long int) (+(((int) arr_8 [i_3]))))), (2951785349735656857LL));
            var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_8 [i_3]))))))) ? (((int) min((((/* implicit */long long int) (short)11)), (2951785349735656875LL)))) : (((/* implicit */int) ((unsigned short) (-2147483647 - 1))))));
            arr_16 [i_3] [i_5 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_16) + (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5]))))) / (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5 + 1])))))) ? (((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) arr_13 [(unsigned short)6])), (var_2)))) == ((~(((/* implicit */int) (short)-4604))))))) : (((((/* implicit */_Bool) (short)4621)) ? (((/* implicit */int) (_Bool)1)) : (-2137003713)))));
            var_23 = ((/* implicit */long long int) max((var_23), (((((/* implicit */_Bool) (unsigned short)2661)) ? (((/* implicit */long long int) ((/* implicit */int) (short)11982))) : (((((-7004004953505262001LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)46519)) - (46493)))))))));
            /* LoopSeq 2 */
            for (short i_6 = 2; i_6 < 19; i_6 += 2) 
            {
                arr_19 [i_3] [(_Bool)1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_5])) * (((/* implicit */int) arr_14 [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_6 + 1]))) : (max((0LL), (((/* implicit */long long int) (signed char)14))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5 - 1]))) : (max((((/* implicit */long long int) (+(2137003706)))), (var_16)))));
                /* LoopNest 2 */
                for (signed char i_7 = 3; i_7 < 18; i_7 += 1) 
                {
                    for (short i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) min((arr_18 [i_5] [i_6] [(short)13]), (((/* implicit */unsigned short) (unsigned char)114)))))) ^ (((((/* implicit */int) arr_8 [i_3])) & (((/* implicit */int) arr_20 [i_5] [i_5] [i_5] [i_5 + 2] [i_7 + 2] [i_5 + 2]))))));
                            var_25 = ((/* implicit */signed char) max((((((/* implicit */int) (short)-16)) - (((/* implicit */int) (unsigned short)11109)))), (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))));
                            var_26 += (+(((min((1010648307631870593LL), (((/* implicit */long long int) var_3)))) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-44))))));
                            arr_25 [i_3] [i_7] = ((((/* implicit */int) (unsigned short)62874)) | (((/* implicit */int) ((signed char) -8LL))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned short) min((8LL), (((/* implicit */long long int) (unsigned short)3014))));
                /* LoopSeq 1 */
                for (int i_9 = 1; i_9 < 20; i_9 += 4) 
                {
                    arr_30 [i_3] [i_3] [i_6 - 1] [i_9] [i_9] = ((/* implicit */short) min(((((+(0LL))) % (((((/* implicit */_Bool) (unsigned short)39853)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-19186))) : (var_1))))), (((/* implicit */long long int) (signed char)-5))));
                    arr_31 [i_9] [i_9] [i_5] [i_9] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_13 [i_5])), (var_15)));
                    var_28 = ((/* implicit */int) min((var_28), (((((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_5] [i_5] [i_6]))))) || (((var_12) == (((/* implicit */int) (signed char)2)))))) ? (((((/* implicit */_Bool) min((var_3), (var_14)))) ? (-879959868) : (((/* implicit */int) (unsigned short)55121)))) : (((/* implicit */int) ((unsigned char) (signed char)8)))))));
                    arr_32 [i_3] [i_3] [i_9] [i_6 + 1] [(_Bool)1] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned short)16114)))) >= (((((/* implicit */int) (unsigned short)6)) | (1074074657)))));
                }
            }
            for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                var_29 = ((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned short)10128)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_34 [i_5 + 2] [i_5 + 2] [i_5 + 1]))))) : (max((((long long int) -5742068466344115443LL)), (-2114047476595468026LL)))));
                var_30 = ((/* implicit */int) arr_22 [i_3] [i_5] [i_5] [i_5] [i_10]);
                /* LoopSeq 2 */
                for (short i_11 = 0; i_11 < 21; i_11 += 1) 
                {
                    var_31 *= ((/* implicit */signed char) min((((/* implicit */int) (short)19915)), (-1088492415)));
                    arr_38 [i_3] [(unsigned short)4] [i_11] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_3] [i_3] [i_10] [i_11] [i_3])) ? (((/* implicit */int) arr_23 [i_3] [i_5 - 1] [i_10] [i_10] [i_11])) : (((/* implicit */int) (signed char)5))))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)15605)) ^ (((/* implicit */int) var_11)))))));
                    var_32 = ((/* implicit */short) var_1);
                }
                for (unsigned char i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    var_33 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_10] [i_10] [i_5 - 1] [i_5] [i_5]))) < (max((((/* implicit */long long int) (signed char)0)), (-1010648307631870593LL))))))));
                    arr_42 [i_3] [i_3] [i_10] = ((/* implicit */unsigned short) ((int) (+((+(((/* implicit */int) (signed char)-57)))))));
                    var_34 &= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3]))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1010648307631870593LL)) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) (signed char)30))))) ? (3351926902312574262LL) : (arr_26 [i_3] [i_3] [i_3] [i_3])))));
                    arr_43 [i_3] [i_3] [i_10] [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((int) -1010648307631870594LL))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_23 [i_3] [i_5] [i_10] [i_10] [11])))))))) : (((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) (unsigned char)95)) : (min((arr_28 [2LL] [i_5 + 1]), (((/* implicit */int) var_9))))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_13 = 1; i_13 < 20; i_13 += 3) 
                {
                    arr_47 [i_13] [i_10] [i_5] [i_3] = ((/* implicit */long long int) ((arr_9 [i_3] [i_5] [i_5 - 1]) / (arr_9 [i_3] [i_5] [i_5 - 1])));
                    var_35 += ((/* implicit */unsigned char) ((((((/* implicit */int) var_9)) + (2147483647))) << (((((arr_21 [i_3] [i_3] [1LL] [i_3]) + (6277611842172993102LL))) - (26LL)))));
                    arr_48 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) arr_29 [i_3] [i_13 - 1] [10LL] [(unsigned short)6] [i_5 + 3]))));
                }
            }
        }
        arr_49 [i_3] [i_3] = ((/* implicit */int) min((min((var_2), (((/* implicit */short) arr_35 [i_3])))), (((/* implicit */short) var_10))));
    }
    var_36 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((signed char) var_15))) : (((/* implicit */int) ((signed char) (signed char)-13)))))));
}
