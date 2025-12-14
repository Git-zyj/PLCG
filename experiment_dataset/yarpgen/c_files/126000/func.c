/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126000
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
    var_19 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_2 [7] [i_0] = ((/* implicit */_Bool) arr_0 [(signed char)13]);
        var_20 *= ((/* implicit */unsigned int) (-(((/* implicit */int) var_16))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_2 = 2; i_2 < 19; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)236)) >= (((/* implicit */int) ((short) var_4)))));
            arr_7 [i_1] [i_2 + 1] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (1221747904906243419ULL) : (var_4)))) ? (((/* implicit */long long int) arr_0 [i_2 + 2])) : (((((/* implicit */long long int) ((/* implicit */int) var_14))) / (var_0)))));
            var_22 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
            arr_8 [16LL] [i_2 + 3] = ((/* implicit */short) (-(((/* implicit */int) arr_6 [(unsigned char)16] [i_2 + 2] [i_2 + 1]))));
            arr_9 [i_2 - 1] &= ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_2 + 2] [i_2 + 1] [i_2 + 1])) << (((((/* implicit */int) arr_6 [i_2 - 2] [i_2 + 3] [i_2 + 3])) - (189)))));
        }
        var_23 = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_17)) : (-1432676748))) << (((((1432676748) / (-1432676748))) + (22)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 3; i_3 < 20; i_3 += 4) 
        {
            var_24 |= ((/* implicit */int) ((_Bool) ((arr_10 [(unsigned short)5]) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) var_2)))));
            var_25 *= ((/* implicit */unsigned char) (((-(((/* implicit */int) var_6)))) >= (((/* implicit */int) arr_6 [i_3] [i_3 - 3] [i_3 + 1]))));
            arr_12 [(unsigned short)20] [(_Bool)1] [i_3 - 3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_3 + 2])) ? (((/* implicit */unsigned long long int) arr_5 [i_3 + 2] [i_3 - 2])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3 + 2] [i_3] [i_3]))) : (var_4)))));
            var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((16003296687432992816ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))))))));
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) arr_10 [i_3 + 1]))));
        }
        arr_13 [i_1] = ((/* implicit */long long int) (signed char)-6);
        arr_14 [i_1] [i_1] = ((/* implicit */long long int) arr_10 [i_1]);
    }
    for (short i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) / (min((((((/* implicit */_Bool) (short)-263)) ? (arr_3 [i_4]) : (arr_5 [i_4] [i_4]))), (max((((/* implicit */long long int) arr_16 [i_4] [i_4])), (arr_5 [i_4] [i_4])))))));
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((-562532705) / (((/* implicit */int) arr_15 [i_4]))))))) ? (min((2443447386276558799ULL), (((/* implicit */unsigned long long int) ((-1432676748) + (-647155124)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4]))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23025))) / (var_18)))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_5 = 1; i_5 < 11; i_5 += 3) 
    {
        for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            {
                var_30 = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_5])), (((((/* implicit */_Bool) arr_3 [i_5 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_11 [i_6] [i_6])))))), (arr_3 [i_6])));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (short i_8 = 1; i_8 < 10; i_8 += 2) 
                    {
                        {
                            arr_29 [i_7] [i_7] [i_8] [i_7] [i_7] [(unsigned char)4] = ((/* implicit */short) max(((+(((/* implicit */int) arr_10 [i_5])))), ((-(((((/* implicit */_Bool) -1432676736)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) arr_23 [i_5 + 1]))))))));
                            arr_30 [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_26 [i_5] [i_5 - 1] [i_7] [i_8 + 2])))) ? (((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)10052))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [9LL] [12ULL])) ? (6664643618711948187LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_5])))))) : (((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_5 - 1])))));
                            var_31 *= ((/* implicit */short) ((((((/* implicit */int) max((arr_24 [i_5] [i_8 + 1] [i_7] [i_5 - 1]), (arr_24 [i_8] [i_8 + 1] [i_6] [i_5 - 1])))) + (2147483647))) << (((((/* implicit */int) min((arr_24 [i_5] [i_8 + 1] [i_7] [i_5 - 1]), (((/* implicit */short) (unsigned char)96))))) + (5642)))));
                            var_32 = ((/* implicit */unsigned int) (unsigned short)4356);
                            var_33 = ((/* implicit */long long int) min((var_33), (max((((((/* implicit */_Bool) var_3)) ? (arr_18 [i_8 + 1]) : (arr_18 [i_8 - 1]))), (6664643618711948174LL)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */int) var_15)) << (((((/* implicit */int) var_17)) - (25))))))));
}
