/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106455
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
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_10 [i_1] [11ULL] = (!(((/* implicit */_Bool) var_12)));
                    arr_11 [i_1] [i_1] [i_2] = min((((((/* implicit */_Bool) min((arr_9 [i_2 + 1] [i_2] [i_2] [1ULL]), (((/* implicit */unsigned short) var_2))))) ? (((var_11) / (((/* implicit */int) arr_9 [7] [i_1] [i_1] [i_1])))) : (((/* implicit */int) (short)32767)))), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_7 [i_0 - 1]))))));
                    arr_12 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_9)))), (((((/* implicit */int) var_8)) & (var_10)))))) ? (((((/* implicit */_Bool) arr_8 [i_0 + 2] [i_2 - 1] [i_2 + 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((arr_3 [i_0] [i_0]) / (((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_0] [12ULL]))))) : (arr_4 [i_2]))) : (((/* implicit */unsigned long long int) min((var_10), (((((/* implicit */_Bool) 1361870837U)) ? (((/* implicit */int) (unsigned char)69)) : (var_11))))))));
                    var_13 = ((/* implicit */unsigned short) var_11);
                }
            } 
        } 
        var_14 += var_3;
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 2) /* same iter space */
        {
            arr_15 [22] [i_0 + 4] [i_0] = ((/* implicit */short) min((var_10), ((+(var_11)))));
            var_15 ^= (-(1846975417));
        }
        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    {
                        var_16 = ((/* implicit */unsigned int) (unsigned char)69);
                        arr_24 [i_4 + 1] [i_5] = ((/* implicit */int) var_8);
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned long long int) (unsigned short)40123);
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (16U)))) ? (((/* implicit */int) arr_17 [i_0 - 2] [(short)7])) : (((/* implicit */int) (unsigned char)199))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_17 [i_4] [i_0])) < (var_6))))))) : (min(((-(11ULL))), (((/* implicit */unsigned long long int) (unsigned char)194))))));
        }
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 11; i_7 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [(short)9] [i_7] [i_7])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_7] [i_7]))))) : (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551608ULL)) && (((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_7] [i_7])))))));
        var_20 = ((/* implicit */int) arr_21 [i_7] [i_7] [i_7] [i_7]);
    }
    for (unsigned short i_8 = 2; i_8 < 8; i_8 += 3) 
    {
        arr_30 [i_8] = ((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned short)41086)))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) > (18446744073709551612ULL))))));
        arr_31 [i_8] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_11)))) ? (18446744073709551612ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    }
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (unsigned char)219))));
}
