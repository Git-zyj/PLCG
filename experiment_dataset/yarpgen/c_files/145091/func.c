/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145091
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
    for (int i_0 = 0; i_0 < 19; i_0 += 3) /* same iter space */
    {
        arr_3 [(unsigned char)9] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_4)))) ? (((int) arr_2 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))) % ((-(arr_1 [i_0])))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)41999)) ? (1233518167) : (((/* implicit */int) (unsigned short)65535))));
        var_15 = (-(((/* implicit */int) var_0)));
        var_16 = ((/* implicit */int) ((short) max((((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0]) : (arr_1 [i_0]))), (arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */_Bool) ((((var_7) >= (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) ? (((/* implicit */int) ((short) arr_4 [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_1 [(signed char)2]) : (arr_2 [i_1])))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 16; i_2 += 1) 
        {
            for (signed char i_3 = 3; i_3 < 18; i_3 += 3) 
            {
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(short)17] [i_2 + 3] [(unsigned short)7])) ? (arr_10 [i_1] [8] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3] [(_Bool)1] [i_1])))))) ? (((/* implicit */int) var_5)) : (((((/* implicit */int) arr_8 [i_2] [i_2] [15ULL])) / (var_3)))))) ? (min((((/* implicit */unsigned int) ((arr_4 [i_1] [16LL]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [1])))))), ((+(arr_4 [(signed char)12] [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3 + 1] [i_2 + 2] [i_2 + 1])))));
                    arr_16 [i_3] = ((/* implicit */unsigned short) (~(((var_7) | (((/* implicit */unsigned int) var_12))))));
                }
            } 
        } 
        arr_17 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(arr_4 [i_1] [i_1])))))) ? (((((/* implicit */long long int) ((int) arr_13 [i_1] [i_1]))) - (((((/* implicit */_Bool) arr_5 [i_1] [(signed char)11])) ? (((/* implicit */long long int) var_11)) : (arr_9 [i_1] [i_1]))))) : (((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) var_11))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_6 [i_1] [(signed char)7])) : (arr_0 [i_1]))))))));
    }
    var_18 = ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (var_11))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))), (((/* implicit */int) var_10))));
    var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5)) ? (((/* implicit */int) (short)-21900)) : (((/* implicit */int) (unsigned char)67))))) ? (((/* implicit */int) ((unsigned short) var_12))) : (((/* implicit */int) ((((/* implicit */int) var_5)) < (var_1))))))));
}
