/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108358
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_20 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [15ULL] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [(unsigned char)13] [(unsigned char)13]))))));
        var_21 -= ((/* implicit */short) ((((/* implicit */int) ((arr_0 [i_0] [i_0]) < (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))))) / ((-(((((/* implicit */_Bool) arr_1 [i_0] [2U])) ? (arr_0 [i_0] [(unsigned short)6]) : (((/* implicit */int) var_13))))))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) / (min((((/* implicit */unsigned int) var_15)), (arr_4 [i_1] [i_1])))));
        var_23 = ((/* implicit */unsigned short) min((var_14), (((((/* implicit */unsigned int) var_0)) / (arr_3 [i_1])))));
    }
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) 144115188075855871LL))));
        var_25 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_6 [(unsigned short)5] [i_2])), (arr_1 [i_2] [i_2])))) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (arr_4 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2])))))) ? (min((arr_5 [i_2]), (arr_5 [i_2]))) : (arr_4 [i_2] [i_2])));
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((unsigned long long int) (-(((arr_5 [i_2]) / (((/* implicit */unsigned int) arr_0 [i_2] [i_2]))))))))));
    }
    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        var_27 = ((/* implicit */unsigned short) ((int) arr_8 [i_3] [i_3]));
        arr_11 [i_3] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((arr_4 [i_3] [13U]) / (arr_3 [i_3])))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_3])), (arr_1 [i_3] [i_3]))))))), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_3 [i_3])) ? (var_0) : (var_15)))))));
        arr_12 [i_3] = ((/* implicit */int) ((((((144115188075855871LL) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3]))))) < (((/* implicit */long long int) ((((((/* implicit */int) arr_2 [(_Bool)1] [i_3])) + (2147483647))) << (((var_14) - (136343211U)))))))) ? (((arr_4 [i_3] [i_3]) / (((/* implicit */unsigned int) ((/* implicit */int) min((arr_10 [10U]), (((/* implicit */signed char) var_9)))))))) : ((~(arr_9 [i_3])))));
    }
    var_28 &= var_14;
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
    {
        for (unsigned int i_5 = 1; i_5 < 23; i_5 += 1) 
        {
            {
                var_29 *= ((/* implicit */short) ((((/* implicit */_Bool) (~((+(arr_15 [i_4] [i_4] [i_4])))))) ? (((((((/* implicit */_Bool) arr_16 [i_4] [i_5 + 1] [i_4])) ? (arr_14 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4] [5LL] [(unsigned short)22]))))) ^ (((((/* implicit */_Bool) arr_16 [i_4] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4] [i_5] [i_4]))) : (arr_13 [i_4]))))) : (((((((/* implicit */_Bool) arr_16 [i_4] [i_4] [i_5])) ? (arr_14 [i_4]) : (arr_14 [i_4]))) >> (((((unsigned int) var_14)) - (136343190U)))))));
                var_30 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_10)) : (var_0))));
                var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((int) var_3))) / (((arr_15 [i_4] [20ULL] [i_5]) / (((/* implicit */unsigned long long int) arr_13 [i_4])))))))))));
                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) var_14))));
            }
        } 
    } 
}
