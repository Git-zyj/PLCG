/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180761
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((arr_3 [i_0] [(unsigned short)14] [i_1]), (((/* implicit */unsigned long long int) (short)-58)))), (((((/* implicit */_Bool) 15563264085548895723ULL)) ? (arr_3 [i_0] [i_1] [i_1]) : (arr_1 [i_0])))))) ? (max((max((arr_3 [i_0] [i_1] [i_0]), (arr_3 [i_0] [i_1] [4LL]))), (arr_1 [i_0]))) : ((-(var_4)))));
            arr_6 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) 9297888395903237185ULL);
        }
        for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0])), (536870880U)))) ? (min((((/* implicit */unsigned long long int) min((((/* implicit */short) var_3)), (arr_0 [i_0])))), (((arr_1 [i_0]) - (arr_1 [i_0]))))) : (max((((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */unsigned long long int) arr_7 [i_2] [i_0]))))));
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        {
                            var_14 ^= ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (var_3))))) - (arr_1 [i_2]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 1917047770)) >= (var_10))))));
                            arr_18 [i_0] [i_2] [(unsigned short)0] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_9 [i_0] [i_2] [i_0]), (((short) arr_5 [i_2] [i_2] [i_2])))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2] [i_3] [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))) ? (max((var_4), (((/* implicit */unsigned long long int) arr_5 [i_3] [i_3] [2ULL])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_3] [(unsigned char)5] [i_0])) ? (((/* implicit */int) arr_2 [i_5])) : (var_6))))))));
                            arr_19 [i_3] [i_2] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((short) arr_0 [i_0])))));
                            var_15 = ((/* implicit */unsigned short) ((signed char) ((((arr_4 [(signed char)12] [i_0] [i_4]) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_2] [i_0]))))))));
                        }
                    } 
                } 
            } 
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_2)), (var_9)))) ? ((~(var_9))) : (((/* implicit */int) arr_5 [3U] [(short)6] [i_0]))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0]))) & (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (18446744073709551589ULL)))))));
        }
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                for (short i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    {
                        arr_28 [i_8] [i_6] [i_7] [i_0] [i_6] [9ULL] = ((/* implicit */_Bool) var_10);
                        arr_29 [i_8] [i_0] [(short)1] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_8)) ? (arr_17 [0] [i_7] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [12U] [i_0]))))))), (((((/* implicit */int) arr_7 [i_7] [i_6])) * (((arr_24 [i_0] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))))));
                        arr_30 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(min((((var_0) | (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((var_0) & (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
                    }
                } 
            } 
            var_17 = ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) arr_25 [i_0]))), (((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */int) arr_27 [i_0] [i_0] [14ULL]))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) -6626345420943547110LL)) ? (178396281) : (((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((unsigned int) -6626345420943547094LL))));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_18 = ((/* implicit */signed char) (_Bool)1);
            var_19 = ((/* implicit */unsigned long long int) (signed char)52);
        }
        arr_34 [i_0] = arr_17 [i_0] [i_0] [i_0];
        arr_35 [i_0] = ((/* implicit */unsigned short) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            for (int i_11 = 0; i_11 < 21; i_11 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) arr_22 [i_11] [i_10] [i_10] [i_0]);
                    var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_10] [i_11])))))) <= (((((/* implicit */_Bool) var_4)) ? (var_4) : (var_4))))) || (((/* implicit */_Bool) ((arr_38 [i_0]) << (((((/* implicit */int) arr_12 [i_0])) + (104))))))));
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_11])))) / (arr_17 [i_0] [i_10] [i_11]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) arr_27 [i_0] [i_0] [i_11]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_32 [i_0] [i_10])))) : (((unsigned int) min((((/* implicit */long long int) var_6)), (arr_37 [i_10]))))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_11])) - (((/* implicit */int) arr_12 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((9223372036854775807ULL) > (((/* implicit */unsigned long long int) 4258748416U)))))))) : ((~(((unsigned int) var_3))))));
                        arr_43 [i_0] [i_0] [(_Bool)1] [i_12] = ((/* implicit */_Bool) ((unsigned char) (!(((var_1) < (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_0] [i_0]))))))));
                        arr_44 [i_12] [i_12] [i_11] [i_12] [i_0] |= ((/* implicit */_Bool) var_0);
                    }
                }
            } 
        } 
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_2 [i_13]))));
        /* LoopSeq 1 */
        for (long long int i_14 = 0; i_14 < 10; i_14 += 3) 
        {
            var_26 = ((/* implicit */short) ((signed char) ((arr_42 [i_13]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_13]))))));
            /* LoopSeq 2 */
            for (int i_15 = 0; i_15 < 10; i_15 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_16 = 0; i_16 < 10; i_16 += 3) 
                {
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((int) arr_39 [i_15]))) | (((unsigned long long int) arr_39 [i_16]))));
                    var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (signed char)15)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_13] [i_13] [i_13] [(unsigned char)16] [i_13])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))))));
                    var_29 |= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (arr_36 [(_Bool)1] [i_15]))) > (((min((var_4), (((/* implicit */unsigned long long int) var_1)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                    arr_54 [5LL] [i_16] [i_13] [i_13] [i_14] [i_13] = ((/* implicit */int) arr_47 [i_13] [i_13]);
                    var_30 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_21 [i_13] [i_15] [i_16]) : (arr_21 [i_13] [i_14] [i_14])))), (max((min((((/* implicit */unsigned long long int) arr_13 [i_16] [i_14] [i_15] [i_13] [i_13] [i_15])), (var_10))), (((/* implicit */unsigned long long int) arr_41 [i_13] [11LL] [i_15] [i_13]))))));
                }
                /* LoopSeq 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_31 &= ((/* implicit */int) arr_13 [i_13] [i_13] [i_14] [0U] [i_15] [i_17]);
                    var_32 ^= ((/* implicit */long long int) min((var_6), (((/* implicit */int) arr_10 [(unsigned short)0]))));
                    var_33 = ((/* implicit */signed char) arr_2 [i_13]);
                    arr_59 [i_13] [i_14] [(_Bool)1] |= ((/* implicit */unsigned short) min((max((arr_36 [(_Bool)1] [i_15]), (arr_36 [(unsigned short)0] [i_14]))), (((((/* implicit */_Bool) arr_36 [18] [i_13])) ? (arr_36 [18LL] [i_14]) : (arr_36 [20LL] [20LL])))));
                }
                for (unsigned short i_18 = 0; i_18 < 10; i_18 += 3) 
                {
                    var_34 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (-(var_4)))) ? (max((((/* implicit */long long int) arr_38 [i_13])), (arr_21 [i_13] [i_15] [i_18]))) : (((/* implicit */long long int) ((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_2 [i_13])))))))));
                    arr_64 [i_13] [i_14] [(unsigned short)8] [i_18] = ((/* implicit */unsigned long long int) var_8);
                    var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) 27ULL))));
                    var_36 = ((/* implicit */signed char) max(((-(min((arr_36 [i_13] [i_13]), (((/* implicit */unsigned long long int) arr_11 [i_13] [i_13] [i_13] [i_13])))))), (((/* implicit */unsigned long long int) var_5))));
                }
            }
            for (int i_19 = 0; i_19 < 10; i_19 += 3) /* same iter space */
            {
                var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_13])) ? (((/* implicit */int) ((unsigned char) arr_56 [i_13] [i_19] [i_19] [i_19] [i_13]))) : (((/* implicit */int) arr_55 [i_14]))));
                var_38 ^= ((/* implicit */signed char) arr_56 [i_13] [i_13] [i_14] [i_14] [6LL]);
                var_39 = ((/* implicit */long long int) var_1);
                var_40 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_56 [i_13] [i_14] [i_19] [i_14] [i_13])), (717839045992294731ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_13] [i_14] [i_14] [i_19])) ? (((/* implicit */int) arr_10 [i_13])) : (((/* implicit */int) var_2)))))));
            }
            arr_67 [i_13] [i_14] [i_13] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) arr_66 [i_14] [i_14] [i_13] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (arr_66 [i_13] [i_14] [i_14] [9LL]))));
            var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_57 [(signed char)8] [i_14])) : (((/* implicit */int) arr_26 [i_14]))))))))));
        }
        var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((((int) arr_49 [i_13] [2ULL])) == (((/* implicit */int) ((unsigned char) arr_3 [0ULL] [i_13] [0ULL]))))))));
    }
    var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((unsigned short) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))), (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (_Bool)0)))))))))));
}
