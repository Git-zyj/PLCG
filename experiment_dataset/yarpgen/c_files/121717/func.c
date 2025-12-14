/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121717
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 18; i_2 += 3) 
                {
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_5 [i_0] [16ULL] [i_0])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_5)))) * (((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) != ((+(((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))) : (((((/* implicit */_Bool) -5099857773173864770LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-63)))))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) 370496778U))) >> (((((/* implicit */int) (short)32751)) - (32733)))));
                        arr_9 [i_0] [i_0] [i_2] [i_3 + 2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_3])) && (((/* implicit */_Bool) arr_0 [4LL] [i_3]))));
                        var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? (((/* implicit */int) (signed char)14)) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((short) (unsigned char)0)))))));
                    }
                    for (short i_4 = 1; i_4 < 18; i_4 += 4) 
                    {
                        var_18 ^= ((/* implicit */signed char) (-((-(((/* implicit */int) (short)30146))))));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775799LL)) ? (((/* implicit */int) arr_0 [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_0 [i_2 - 1] [i_2 + 3]))))) ? (((/* implicit */int) ((((/* implicit */int) ((short) var_6))) <= ((-(((/* implicit */int) var_6))))))) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_2] [i_4 - 1]))));
                    }
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) 370496788U))));
                        /* LoopSeq 2 */
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            arr_18 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) (signed char)17))));
                            arr_19 [i_0] [i_1] [i_2 - 1] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)26))));
                            var_21 = (signed char)-20;
                        }
                        for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)91)) ? (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [(signed char)8] [i_1] [i_1] [i_5]))))), (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [(short)14]))))))));
                            arr_22 [i_7] [i_1] [i_5] [2U] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_1] [i_2] [i_2 + 3] [i_2 - 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)28672))))) ? (((/* implicit */long long int) ((/* implicit */int) (((-(((/* implicit */int) var_5)))) <= (((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) (short)-28689)) : (((/* implicit */int) (short)32453)))))))) : (var_13)));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((((/* implicit */int) var_14)), ((+(((/* implicit */int) var_9)))))))));
                        }
                        var_24 = ((/* implicit */signed char) (unsigned char)38);
                    }
                    var_25 = ((/* implicit */long long int) max((var_25), (((((/* implicit */_Bool) arr_2 [i_1] [i_0] [i_1])) ? (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_1])) : (var_11)))));
                }
                var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_9))));
                var_27 ^= ((/* implicit */short) var_13);
            }
        } 
    } 
    var_28 = ((/* implicit */short) ((long long int) min(((+(((/* implicit */int) var_7)))), (((/* implicit */int) (signed char)-63)))));
    var_29 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((short) 9096818063071469989LL))), (0ULL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) 
    {
        var_30 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-122))));
        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((arr_25 [2LL]) ^ (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
        var_32 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)15881)) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (short)-18556))));
    }
}
