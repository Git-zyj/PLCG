/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152890
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
    var_12 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */unsigned int) max((8388576), (((/* implicit */int) (signed char)-94))))) & (((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned int) var_11))))))), (max((((/* implicit */long long int) (unsigned char)194)), (var_9)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_13 ^= ((/* implicit */unsigned short) var_7);
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_4 [i_1] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(8388578)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) (unsigned short)46030))))) : (min((((/* implicit */unsigned long long int) (short)-32754)), (4746627973126545162ULL)))))) ? ((+(((unsigned int) (unsigned char)201)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) min(((short)-26739), (((/* implicit */short) var_6))))))))));
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) (+(((((/* implicit */long long int) min((((/* implicit */int) arr_2 [i_0] [i_0])), (var_2)))) * (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_1)) : (var_9))))))))));
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_3 = 3; i_3 < 13; i_3 += 2) 
                {
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 2] [i_1] [i_1] [i_1] [i_0]))) : (3938213498U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_4] [i_1] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-81)))))));
                            var_16 = ((/* implicit */_Bool) 11019598919794887759ULL);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_5 = 0; i_5 < 14; i_5 += 3) /* same iter space */
                {
                    arr_15 [i_0] [i_0] &= ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_3)), (arr_13 [i_2] [(unsigned char)2] [i_1] [i_2])))) ? (min((6381730717860512475ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_1)))))));
                    arr_16 [i_1] [i_1] = ((/* implicit */unsigned short) ((int) min((((/* implicit */int) (_Bool)1)), ((~(865511773))))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_13 [i_2] [i_2] [i_1] [i_2]))))) ? (((11019598919794887747ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_2] [i_1] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_12 [i_2] [i_1] [i_1] [i_1] [i_2])), (arr_0 [i_5] [i_1]))))))))));
                }
                for (signed char i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_22 [(unsigned char)2] [i_0] [(unsigned char)2] [i_0] [i_0] &= ((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]))));
                        var_18 ^= ((/* implicit */unsigned char) (~(max((((((/* implicit */int) var_6)) % (((/* implicit */int) arr_11 [i_7] [i_2] [i_6] [i_2] [i_2] [i_0])))), (((/* implicit */int) max((arr_10 [i_7 - 1] [i_2] [i_2] [i_2] [i_1] [i_0]), (((/* implicit */unsigned short) var_6)))))))));
                        var_19 = (!(((((/* implicit */_Bool) (unsigned short)0)) && (((/* implicit */_Bool) 2650740349471065416LL)))));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned char) ((_Bool) ((short) (unsigned char)78)));
                        var_21 = 9223372036854775807LL;
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        arr_28 [i_9] [i_1] [i_2] [i_1] [(unsigned short)12] = ((/* implicit */unsigned long long int) (short)31744);
                        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)177))) : (var_9)));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
                    {
                        var_24 *= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (-(var_2))))))));
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_6] [i_2])) ^ (var_11)))) ? (var_2) : ((+(((((/* implicit */int) var_5)) & (((/* implicit */int) var_3))))))));
                        var_26 = ((/* implicit */unsigned long long int) var_4);
                        arr_31 [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(var_2)))), (((((/* implicit */_Bool) (signed char)122)) ? (var_1) : (((/* implicit */unsigned int) var_2))))))) ? (min((((0LL) + (0LL))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)115))))))) : (((/* implicit */long long int) ((/* implicit */int) ((var_2) <= (var_2)))))));
                        arr_32 [i_10] [i_1] [i_2] [i_2] [0U] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_25 [i_1] [i_6] [i_0] [i_0] [i_1] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) max(((short)-31744), (((/* implicit */short) (unsigned char)177))))))))) ? (max((((((/* implicit */_Bool) arr_20 [i_1] [i_6] [i_1] [i_2] [i_1] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_11)) : (arr_6 [i_1] [i_6] [i_2] [i_1]))), (((unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((arr_29 [i_1] [(signed char)4] [5LL] [(signed char)4] [i_1]), ((unsigned char)239))))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 3) /* same iter space */
                    {
                        var_27 ^= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (arr_5 [i_0]))) | (((/* implicit */unsigned long long int) (-(max((((/* implicit */int) (unsigned char)115)), (var_11))))))));
                        arr_35 [i_11] [i_6] [i_1] [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)31744))) >= (33554431LL)))) != (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_30 [i_11] [i_6] [i_1] [i_1] [i_1] [i_0])) : (((/* implicit */int) var_3))))));
                        var_28 = ((/* implicit */unsigned int) (-(((0ULL) * (0ULL)))));
                    }
                }
                arr_36 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) max((var_2), (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned char)11]))))))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 3; i_12 < 13; i_12 += 3) 
                {
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) (-(min(((+(((/* implicit */int) var_4)))), (1862868775)))));
                            arr_42 [(signed char)3] [i_1] [i_12] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */int) arr_1 [i_13 - 1] [i_12 - 2])) * (((/* implicit */int) (unsigned char)143))))));
                            var_30 = ((/* implicit */unsigned short) var_0);
                            arr_43 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((int) arr_1 [i_2] [(unsigned char)5]))) ? (((/* implicit */int) (signed char)-110)) : (((int) arr_21 [i_1] [(unsigned char)5] [i_2] [(unsigned char)5] [(unsigned char)5] [i_1]))))));
                            var_31 = ((/* implicit */_Bool) max(((+(9223372036854775801LL))), (((/* implicit */long long int) (~(((/* implicit */int) (short)-31737)))))));
                        }
                    } 
                } 
            }
            var_32 = ((/* implicit */_Bool) min(((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)31737))) : (6401035465447876523LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (858940873175430596LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1])))))))))));
        }
    }
}
