/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168311
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            var_12 = ((/* implicit */unsigned int) min((var_12), (((((((/* implicit */_Bool) min((((/* implicit */short) arr_2 [i_0] [(signed char)1])), (arr_1 [i_0])))) ? (var_1) : (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_1 - 3])) : (((/* implicit */int) arr_0 [i_1 - 3])))))))));
            var_13 = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
        }
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            arr_9 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0] [i_2] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 17284682173158605372ULL))))) : ((~((~(((/* implicit */int) (unsigned char)15))))))));
            var_14 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)242))) % (10948020440296647536ULL)));
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-10468)) && (((/* implicit */_Bool) (unsigned short)28124)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [i_0])) % (((/* implicit */int) arr_7 [(_Bool)1]))))) : (max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_5))))))) ? (max(((+(var_3))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 10948020440296647520ULL))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_0])))));
        }
        arr_10 [(unsigned short)0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (var_4))) & (((/* implicit */unsigned long long int) (~(var_8))))))) ? ((~(18446744073709551615ULL))) : ((~(((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) | (arr_4 [i_0] [i_0]))))))));
    }
    for (int i_3 = 1; i_3 < 7; i_3 += 3) 
    {
        arr_14 [i_3] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_12 [(short)8] [i_3])) ? (7498723633412904095ULL) : (arr_12 [i_3] [i_3]))) << ((((~(var_4))) - (1049380647264095656ULL))))) * (((/* implicit */unsigned long long int) (~(705640245))))));
        var_17 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)-32750)))) ? (((long long int) arr_13 [i_3 - 1])) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3 - 1]))))))));
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 1283696114))));
    }
    for (unsigned char i_4 = 1; i_4 < 13; i_4 += 2) 
    {
        var_19 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((~(var_2))) : (((/* implicit */int) arr_15 [10]))))) ? (((((/* implicit */_Bool) arr_15 [6])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) / (arr_18 [2])))) : (arr_16 [6LL]))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [(signed char)0]))) - ((-(arr_18 [0ULL]))))))));
        /* LoopSeq 1 */
        for (signed char i_5 = 2; i_5 < 13; i_5 += 2) 
        {
            var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
            /* LoopSeq 1 */
            for (unsigned short i_6 = 1; i_6 < 13; i_6 += 4) 
            {
                var_21 = ((/* implicit */int) min((((/* implicit */long long int) ((short) (-(((/* implicit */int) (unsigned short)65535)))))), (((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6))))))));
                arr_26 [i_4] [i_5 - 1] [i_5 - 1] [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)102))));
            }
            arr_27 [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) max((((long long int) arr_24 [i_5] [i_4 + 1] [i_5 + 1])), (((long long int) (~(var_9))))));
            var_22 += ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 18446744073709551596ULL)))) ^ ((~(arr_25 [i_5] [i_5 - 2] [i_5 + 1] [i_5 - 2]))))) >> (((((/* implicit */int) var_0)) - (33)))));
        }
        arr_28 [i_4] [i_4] = ((/* implicit */signed char) arr_19 [(_Bool)1]);
    }
    for (signed char i_7 = 1; i_7 < 20; i_7 += 3) 
    {
        var_23 = max((max(((-(((/* implicit */int) var_6)))), (((/* implicit */int) arr_30 [i_7 - 1] [i_7 + 2])))), ((((+(((/* implicit */int) (unsigned char)249)))) * (((/* implicit */int) ((_Bool) arr_29 [i_7 - 1]))))));
        var_24 = ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
    }
    var_25 &= ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? ((+(var_3))) : ((+(var_3))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_3)))) ? (min((var_1), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) - (195U)))));
    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7)))))) && (((/* implicit */_Bool) ((((_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_2)))))))))));
}
