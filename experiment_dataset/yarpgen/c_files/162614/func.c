/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162614
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
    var_20 = ((/* implicit */unsigned char) var_15);
    var_21 = ((/* implicit */signed char) var_13);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_22 *= ((/* implicit */unsigned char) ((((arr_0 [i_1]) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)38269)) || (((/* implicit */_Bool) var_8))))))) >> (((((/* implicit */int) ((unsigned char) (unsigned short)27267))) - (128)))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) (unsigned short)42396);
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_5)))))) < ((-(arr_7 [i_0] [i_2] [i_2] [i_2])))))))))));
                }
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1]))) | (var_14)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (var_6) : (((/* implicit */int) arr_3 [i_0]))))), (((unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_8))))) ^ (((((/* implicit */_Bool) (unsigned char)2)) ? (var_15) : (arr_5 [i_1])))))))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))) / (-1LL))), (((/* implicit */long long int) var_4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (((/* implicit */int) var_17))))) : (3285941390936788844ULL)));
    /* LoopSeq 1 */
    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (+(((/* implicit */int) var_5)))))));
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((var_19) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_19))) - (127LL)))))) ? (((/* implicit */int) arr_11 [i_4] [i_4] [i_4])) : ((-(((/* implicit */int) arr_11 [i_3] [i_4] [i_5]))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 18; i_6 += 4) 
                    {
                        var_28 *= ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_3] [i_4]) <= (arr_9 [i_3] [i_5]))))) : (((((/* implicit */_Bool) var_14)) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
                        var_29 = ((/* implicit */long long int) var_0);
                        arr_18 [i_5] [i_5] [i_4] [i_5] = ((((((/* implicit */long long int) ((/* implicit */int) var_16))) > (((((/* implicit */_Bool) arr_12 [i_3] [i_5] [i_6])) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))) ? (((((/* implicit */unsigned long long int) ((int) var_8))) | (var_14))) : (((unsigned long long int) min((((/* implicit */long long int) (signed char)-115)), (arr_10 [i_4] [i_5])))));
                        var_30 = ((/* implicit */int) min((arr_16 [i_6 + 2] [i_6 + 2] [i_6 + 1] [i_6 + 1]), (((((/* implicit */_Bool) arr_16 [i_6 + 3] [i_6 + 3] [i_6 + 3] [i_6 - 1])) ? (arr_16 [i_6 + 3] [i_6] [i_6 - 1] [i_6 - 1]) : (arr_16 [i_6 - 1] [i_6 - 1] [i_6 + 3] [i_6 - 1])))));
                    }
                    for (unsigned short i_7 = 3; i_7 < 19; i_7 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_3] [i_4] [i_7 - 1] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_13 [i_7 - 2])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_21 [i_7 - 2] [i_5] [i_4] [i_3])) ? (((/* implicit */int) (unsigned char)2)) : (arr_19 [i_3] [i_3] [i_4] [i_5] [i_7]))) == ((+(var_0))))))) : ((+(((var_15) / (arr_16 [i_3] [i_4] [i_5] [i_7])))))));
                        arr_22 [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) (unsigned short)42406))))) ? (((long long int) 18446744073709551615ULL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)25)) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) (unsigned char)5)))))))) ? (((min((22ULL), (((/* implicit */unsigned long long int) arr_15 [i_4] [i_5] [i_7 + 1])))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_3])) ? (var_19) : (((/* implicit */long long int) var_6))))))) : (((((/* implicit */_Bool) ((var_14) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (min((arr_13 [i_3]), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) var_6))))));
                        arr_23 [i_3] [i_4] [i_3] [i_3] &= ((/* implicit */unsigned long long int) (+((+(arr_16 [i_3] [i_4] [i_5] [i_7 - 1])))));
                        var_32 = ((/* implicit */unsigned short) ((15096594271379259000ULL) ^ (13957577010305272852ULL)));
                    }
                }
            } 
        } 
        var_33 = ((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_3] [i_3] [i_3])) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_3] [i_3])))))));
        var_34 += ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) & (((((/* implicit */_Bool) arr_17 [i_3])) ? (((/* implicit */int) (unsigned short)41905)) : (((/* implicit */int) (unsigned char)3))))));
        var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) ((int) ((unsigned char) max((((/* implicit */unsigned long long int) arr_10 [i_3] [i_3])), (arr_20 [i_3] [i_3] [i_3] [i_3] [i_3]))))))));
    }
}
