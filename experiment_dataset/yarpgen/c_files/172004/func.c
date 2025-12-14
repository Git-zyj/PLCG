/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172004
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
    for (long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            var_17 ^= max((((arr_2 [i_0 + 1]) * (var_9))), (((((/* implicit */_Bool) (signed char)10)) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 1]))));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                var_18 &= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-10)) : (((/* implicit */int) (signed char)10))))) ? (((/* implicit */long long int) arr_3 [i_0] [i_2])) : (arr_8 [i_0 - 1]))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0 - 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)91))) : (var_4))))))))));
                arr_10 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_5 [i_0] [i_0] [i_0]) >= (var_7))))))) <= ((~(min((arr_2 [6U]), (((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_0]))))))));
            }
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                var_19 = ((/* implicit */unsigned long long int) 2957546924U);
                var_20 = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [(unsigned char)14] [i_1] [i_3]))))));
            }
            arr_13 [i_0] [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_6 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0])) ? (((-1805087131114395908LL) + (((/* implicit */long long int) (-2147483647 - 1))))) : (arr_8 [i_0 + 1])))));
            var_21 = ((/* implicit */unsigned char) arr_7 [(_Bool)1] [i_0 - 1] [i_0] [i_1]);
            var_22 = ((/* implicit */long long int) min((2957546924U), ((-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21067))) | (arr_1 [i_0] [i_1])))))));
        }
        for (long long int i_4 = 3; i_4 < 15; i_4 += 3) 
        {
            arr_18 [16ULL] [i_0] = ((((((/* implicit */_Bool) (-(1337420371U)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)10))))) : ((-(8388352LL))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) max((939524096), (((/* implicit */int) arr_11 [i_0] [i_0] [i_4]))))) ? (((arr_6 [i_0] [i_4] [i_0 - 1] [i_4]) + (arr_16 [i_0]))) : (((((/* implicit */_Bool) 3089439016204167683LL)) ? (2957546924U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21067)))))))));
            var_23 ^= ((/* implicit */unsigned long long int) (unsigned char)63);
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                var_24 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 + 1] [i_4 - 3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)91))) : (-8388353LL))), (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_4 - 2])))))));
                arr_21 [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26))) : (arr_3 [i_0] [i_0]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_11 [i_0] [i_4] [i_4])))))))));
            }
        }
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0])))))));
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 3; i_7 < 16; i_7 += 4) 
            {
                for (long long int i_8 = 3; i_8 < 17; i_8 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 2; i_9 < 16; i_9 += 2) 
                        {
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((-67149747184386247LL) + (8388352LL))), (((/* implicit */long long int) ((-8388352LL) >= (-8388352LL))))))) ? (arr_2 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) arr_31 [i_0] [i_6] [i_7 - 3] [(unsigned char)12] [(signed char)17] [i_9])) : (((((/* implicit */_Bool) arr_19 [i_9])) ? (-8388352LL) : (((/* implicit */long long int) -1836337686))))))))))));
                            arr_34 [i_0] [i_6] = (-(((((/* implicit */_Bool) (unsigned short)28672)) ? (8388351LL) : (((/* implicit */long long int) arr_5 [i_8 - 1] [i_7 - 1] [i_0 + 1])))));
                            var_27 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)36))) : (var_8)))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 5426871386157526765LL)))))) <= ((~(var_14)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_6] [5])) ? (((/* implicit */unsigned long long int) arr_28 [i_0])) : (13892248429003207143ULL)))))))));
                            var_28 &= ((((/* implicit */_Bool) (-((-(var_13)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((((/* implicit */int) (unsigned char)91)) * (((/* implicit */int) arr_27 [(signed char)2] [i_6])))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_6] [i_9 + 2] [i_7] [i_8])) : (((/* implicit */int) arr_7 [i_0] [i_6] [i_9] [i_8]))))))) : (0U));
                            arr_35 [(signed char)8] [i_0] [i_8] [i_6] [i_6] [i_0] [i_0] = ((/* implicit */long long int) arr_5 [i_9] [i_8] [i_6]);
                        }
                        arr_36 [i_0] [i_0] [i_6] [i_7] [i_8] [i_0] = ((((/* implicit */_Bool) max((max((var_13), (771379743782175140ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8388352LL)) && (((/* implicit */_Bool) arr_33 [i_0] [i_7] [i_8])))))))) ? (((((/* implicit */_Bool) arr_31 [i_8] [i_8] [i_8] [i_8 + 1] [i_8] [i_8 + 1])) ? (1999802124229747450LL) : (((/* implicit */long long int) arr_29 [i_8] [0LL] [i_8] [i_8] [i_8] [i_8 + 1])))) : (((((/* implicit */_Bool) arr_25 [i_0 - 1])) ? (((((arr_23 [i_8] [i_7 - 3] [i_6]) + (9223372036854775807LL))) << (((arr_6 [i_0] [i_6] [i_0] [i_8 - 1]) - (2201039829U))))) : (((/* implicit */long long int) min((var_15), (var_5)))))));
                        var_29 = ((/* implicit */int) (+(((arr_33 [i_0 + 1] [i_0] [i_0]) << (((arr_33 [i_0 + 1] [i_0] [i_0]) - (382634805U)))))));
                        arr_37 [i_0] [i_6] [i_6] = ((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_5 [i_0] [i_6] [i_0]), (((/* implicit */unsigned int) (unsigned char)107))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [(short)3]))) : (2957546924U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_0]))) : (arr_33 [i_8] [(unsigned char)15] [i_7 - 3]))));
                        var_30 = ((((((/* implicit */long long int) arr_5 [i_0 - 1] [i_7] [i_8 - 2])) ^ (-8388352LL))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_0] [i_6] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)10))) : (arr_31 [i_0] [i_6] [i_0] [i_8 - 1] [i_6] [i_8 - 1])))) ? (((((/* implicit */_Bool) arr_24 [i_7])) ? (17592181850112LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-4096))))) : (((/* implicit */long long int) ((unsigned int) 0ULL))))));
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned long long int) max((min((9007199254740991LL), (-8388353LL))), (((/* implicit */long long int) var_15))));
    var_32 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-2)) && (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((signed char) 17379987133616768452ULL))))))));
    var_33 = ((/* implicit */unsigned int) (~(8388352LL)));
}
