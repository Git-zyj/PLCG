/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161152
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_8) > (var_8))))) % (var_3)))) ? (((/* implicit */int) ((signed char) min((4151133164U), (((/* implicit */unsigned int) (short)-15590)))))) : (((/* implicit */int) var_5))));
    var_11 = ((/* implicit */unsigned char) var_8);
    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((unsigned char) (unsigned short)7764)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-120)) | (((/* implicit */int) (signed char)32)))) | (((/* implicit */int) arr_0 [i_0] [10ULL]))))) ? (((((/* implicit */int) var_6)) | (((/* implicit */int) arr_0 [i_0 - 1] [(unsigned short)4])))) : (((/* implicit */int) (unsigned short)39704)))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (unsigned char)231))));
            var_15 = arr_3 [i_1] [13U];
            var_16 ^= ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]);
            arr_6 [i_0] [i_0] = ((((/* implicit */int) (signed char)53)) != (((/* implicit */int) (signed char)-54)));
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0 - 1])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_18 = ((/* implicit */signed char) min((((((/* implicit */_Bool) 0ULL)) ? (1174247519781335082ULL) : (0ULL))), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
            var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((unsigned long long int) arr_8 [(unsigned short)4] [i_2] [i_2])) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_0])))))) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_7), (((/* implicit */unsigned short) arr_3 [i_0] [i_2])))))) == (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26))) : (var_3))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */long long int) ((unsigned long long int) arr_5 [i_0 - 1] [i_3] [i_0 - 1]));
            var_21 += arr_11 [(signed char)4] [i_3] [i_3];
            var_22 = ((unsigned short) var_4);
            var_23 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))) > (((((/* implicit */int) arr_7 [i_0] [i_3])) >> (((((/* implicit */int) var_2)) + (32)))))));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
        {
            var_24 ^= ((/* implicit */signed char) (-(((unsigned int) arr_8 [i_0] [i_4] [i_4]))));
            arr_14 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_0]);
        }
        /* LoopSeq 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((unsigned int) (-(18446744073709551615ULL))));
            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54183))) != (18446744073709551615ULL)));
        }
        for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((unsigned char) var_4)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3521945539U)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_6]))) : (min((((unsigned long long int) 18446744073709551615ULL)), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */unsigned int) var_6)))))))));
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 3; i_9 < 15; i_9 += 2) 
                        {
                            var_28 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) arr_1 [i_6])) : (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_16 [i_6])), (arr_5 [i_7] [i_8] [i_7])))) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) (unsigned short)65535))))));
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) var_1))));
                            var_30 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_27 [(signed char)2] [(signed char)2] [(signed char)2] [i_8] [i_7]))) ? ((~(((/* implicit */int) arr_21 [i_9 - 1])))) : (((/* implicit */int) ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-93))) : (0ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)127)) ? (3296967201U) : (4294967295U)))))))));
                            var_31 = ((signed char) (+(((/* implicit */int) ((signed char) -6251539950206613899LL)))));
                        }
                        arr_28 [i_0] [i_0] [i_6] [(unsigned short)15] [i_0] [i_8] = var_4;
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((((/* implicit */long long int) arr_27 [i_0] [4ULL] [i_7] [i_8] [i_7])), (-2834932274273811409LL)))) ? (min((((/* implicit */unsigned long long int) (unsigned short)3225)), (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_6] [i_7] [i_7]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_6] [i_0] [i_6] [i_6] [i_0]))))))))))))));
                    }
                } 
            } 
            var_33 = ((/* implicit */_Bool) ((unsigned short) ((((((/* implicit */int) var_5)) >= (((/* implicit */int) var_7)))) ? ((-(((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) arr_26 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1])))));
        }
        for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
        {
            arr_32 [i_0 - 1] [i_0] = ((unsigned long long int) ((((4294967295U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0 - 1] [i_0]))))) ? (((((/* implicit */_Bool) var_2)) ? (3521945539U) : (0U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_10] [i_0])) * (((/* implicit */int) arr_13 [3U])))))));
            var_34 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)20)) | (((/* implicit */int) arr_20 [i_10] [i_0 - 1]))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_10] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)95))) : (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (min((arr_31 [(unsigned short)1] [i_10] [i_10]), (((/* implicit */unsigned int) arr_25 [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0]))))))));
            var_35 += ((/* implicit */short) arr_20 [i_10] [i_10]);
        }
        var_36 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1])) == (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1]))))), ((+(((long long int) var_9))))));
    }
    for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 4) 
        {
            for (signed char i_13 = 0; i_13 < 24; i_13 += 1) 
            {
                {
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_33 [(short)23]))))))) ? (((unsigned long long int) ((unsigned long long int) arr_38 [i_12]))) : (((((((/* implicit */int) arr_36 [i_11] [i_11])) <= (((/* implicit */int) var_9)))) ? (((((/* implicit */_Bool) var_4)) ? (6759855613778137505ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_11])) ? (((/* implicit */int) (short)-12397)) : (((/* implicit */int) var_7)))))))));
                    /* LoopNest 2 */
                    for (signed char i_14 = 4; i_14 < 23; i_14 += 1) 
                    {
                        for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                        {
                            {
                                var_38 += ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)75))))) ? (((((((/* implicit */int) arr_44 [i_11] [i_11] [(unsigned short)15] [(signed char)16] [i_11])) + (2147483647))) >> (((var_8) - (10086264982975060520ULL))))) : (((((/* implicit */int) arr_34 [i_11])) + (((/* implicit */int) (signed char)-1)))))));
                                var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)62310))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : ((+(((((/* implicit */_Bool) var_9)) ? (arr_38 [i_14]) : (arr_38 [6ULL]))))))))));
                                arr_45 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_44 [i_15 + 1] [i_14 + 1] [i_14 - 1] [i_14 + 1] [i_11])) ? (arr_38 [i_14 - 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_15 + 1] [i_15 + 1])))))));
                                var_40 = ((/* implicit */long long int) (unsigned short)26174);
                                var_41 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_6))) ? (((/* implicit */unsigned long long int) 1761646441U)) : (max((arr_37 [i_13] [i_12] [i_11]), (((/* implicit */unsigned long long int) arr_33 [i_11]))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [(unsigned short)20])))))) : (min((max((arr_38 [i_13]), (((/* implicit */unsigned long long int) (signed char)-72)))), (((/* implicit */unsigned long long int) (unsigned short)62311)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_42 = ((/* implicit */unsigned long long int) arr_43 [i_11] [i_11] [i_11] [i_11] [(signed char)7]);
        var_43 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-93))));
        var_44 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_42 [i_11] [i_11] [i_11] [(signed char)8] [i_11] [i_11])) >= (((/* implicit */int) ((((/* implicit */int) (unsigned short)45670)) != (((/* implicit */int) arr_36 [i_11] [i_11])))))));
    }
    var_45 = ((/* implicit */unsigned short) var_6);
}
