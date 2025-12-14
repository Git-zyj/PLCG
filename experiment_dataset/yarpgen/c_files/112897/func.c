/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112897
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
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        var_19 = ((/* implicit */int) max((((/* implicit */long long int) arr_1 [i_0])), (((((/* implicit */_Bool) -2797076422430600467LL)) ? (((/* implicit */long long int) (-(var_18)))) : (((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) / (2797076422430600467LL)))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_9 [i_0 - 1] [i_1] [i_2] [i_1] [i_2] [14] = ((/* implicit */int) var_16);
                        /* LoopSeq 1 */
                        for (int i_4 = 2; i_4 < 22; i_4 += 1) 
                        {
                            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) (-(arr_5 [i_0] [i_0] [i_0 + 2] [i_0])))))), ((!(((/* implicit */_Bool) arr_1 [i_4 - 1]))))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) max((2797076422430600467LL), (2797076422430600467LL))))))) ? (max((((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */long long int) arr_3 [(short)6] [i_4])) : (473317777430969110LL))), (((-2797076422430600474LL) + (-4965430103791008747LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(-2147483645)))) <= (((((/* implicit */_Bool) 2147483648U)) ? (2305772640469516288ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_2])))))))))));
                            arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_14))));
                        }
                    }
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        var_21 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 2797076422430600467LL)) ? (-2797076422430600468LL) : (2797076422430600471LL)))));
                        arr_16 [(short)22] [i_1] [(unsigned char)19] [i_1] [(short)23] [i_2] = var_6;
                        /* LoopSeq 3 */
                        for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_10 [i_0 - 3] [i_0] [i_0] [i_0] [i_0] [13LL] [i_0]), (((/* implicit */unsigned long long int) ((arr_8 [i_1] [i_1] [i_2] [22]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16))))))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) var_17)) : (var_4)))), (((2797076422430600467LL) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [(signed char)23] [(unsigned short)8] [i_5] [i_6]))))))) : (min((min((((/* implicit */long long int) arr_4 [i_6] [i_1] [(signed char)17])), (-2797076422430600459LL))), (((/* implicit */long long int) arr_0 [i_2]))))));
                            arr_19 [i_1] [i_5] = ((/* implicit */unsigned int) (+(2797076422430600467LL)));
                            arr_20 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_5] [i_6] [i_5] [i_5] [i_5] [i_0 + 1] [i_0 + 2])) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)12817)), (((((/* implicit */_Bool) 2797076422430600467LL)) ? (((/* implicit */int) (unsigned short)30970)) : (((/* implicit */int) (short)0))))))) : (((((/* implicit */_Bool) ((arr_5 [i_5] [i_0 + 3] [i_1] [i_5]) - (((/* implicit */int) (short)-24984))))) ? (((/* implicit */unsigned long long int) (+(4294967275U)))) : (arr_17 [i_0] [i_1] [i_2] [11LL])))));
                            arr_21 [i_1] [i_0 + 2] [i_2] [i_5] [i_6] = ((/* implicit */unsigned short) -2797076422430600467LL);
                            arr_22 [i_0] [i_1] [i_1] [0ULL] [i_0] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) 731831992)) : (-2797076422430600467LL)));
                        }
                        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (+(((/* implicit */int) (short)22368))))) ? (min((arr_5 [i_0] [i_1] [i_5] [i_7]), (var_17))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)3633)))))))))));
                            var_24 ^= ((/* implicit */unsigned char) var_6);
                            var_25 *= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)16)) - (((/* implicit */int) (!(((10100202056812182120ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_7]))))))))));
                            arr_25 [i_1] [i_1] = ((/* implicit */int) var_11);
                        }
                        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
                        {
                            arr_29 [i_0] [i_0 + 2] [i_0] [i_1] [i_0 + 2] = ((/* implicit */int) max((((arr_10 [i_0] [i_1] [i_1] [i_2] [i_2] [i_2] [i_8]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))))), (((/* implicit */unsigned long long int) var_15))));
                            arr_30 [i_0] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_0] [10] [i_8])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (signed char)124)))))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2797076422430600458LL)) ? (2147483648U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)124)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [0U] [i_1] [(signed char)10] [i_1] [i_8]))))) : (((/* implicit */int) (short)-18080))))));
                            var_26 = ((/* implicit */unsigned short) (-(((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)57536))) / (-2797076422430600453LL))) / (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) - (8804166024935276888LL)))))));
                        }
                        arr_31 [i_0] [i_1] [i_2] [i_0] [10] = ((/* implicit */signed char) max(((+(min((arr_5 [i_0] [i_2] [i_2] [(_Bool)1]), (((/* implicit */int) var_5)))))), (((/* implicit */int) arr_1 [i_0 + 1]))));
                        var_27 = ((/* implicit */signed char) arr_6 [i_0] [17] [i_0]);
                    }
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
                    {
                        arr_35 [i_1] [1U] [i_1] [i_1] = ((/* implicit */unsigned int) (short)-8659);
                        arr_36 [(unsigned short)14] [i_1] [i_2] [i_1] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_9] [i_1] [(short)21] [i_1] [i_0])) ? (arr_26 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_10 = 0; i_10 < 24; i_10 += 4) 
                    {
                        var_28 = ((/* implicit */unsigned short) ((arr_5 [i_0 + 3] [i_0 - 3] [i_0 - 2] [i_0 + 1]) + (arr_5 [i_0 + 1] [i_0 - 1] [i_0 - 3] [i_0 + 1])));
                        /* LoopSeq 1 */
                        for (long long int i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned int) (-((~(-1)))));
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((var_18) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_11] [i_10] [i_10] [i_0 - 2] [i_0] [i_0]))))))));
                            arr_43 [i_1] [i_1] [i_2] [i_10] [i_11] = ((((/* implicit */_Bool) 2797076422430600445LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15848))) : (2797076422430600467LL));
                            var_31 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_3 [6] [i_1])) / (7687240885417370369LL)))) / ((-(arr_17 [i_0] [i_10] [i_0] [i_0])))));
                        }
                        arr_44 [i_2] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_37 [i_0 + 2] [i_1] [i_1] [i_10]);
                    }
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) (((-(((/* implicit */int) (unsigned short)65535)))) <= (arr_5 [5LL] [i_1] [i_1] [i_0]))))));
                    var_33 *= ((((-2797076422430600459LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62187))))) ? (((((/* implicit */_Bool) -1573722662)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-4096))) : (2147483647U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 2])))))));
                }
            } 
        } 
        var_34 ^= ((/* implicit */unsigned short) ((1351769896823800613LL) - (((/* implicit */long long int) 1871710807))));
    }
    var_35 = var_15;
    var_36 = var_13;
    var_37 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
}
