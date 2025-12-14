/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162562
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
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) var_8))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
                    var_14 |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [4] [i_2 + 4] [i_0]))));
                }
            } 
        } 
    } 
    var_15 |= ((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) * (((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_1)))))));
    /* LoopSeq 1 */
    for (signed char i_3 = 1; i_3 < 21; i_3 += 2) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned long long int) var_3);
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) max((arr_9 [i_3 - 1]), (arr_9 [i_3 + 1])))) ^ (((/* implicit */int) arr_8 [i_3] [i_3 - 1])))))));
        var_17 ^= ((/* implicit */unsigned char) ((((((((/* implicit */int) arr_8 [i_3 + 1] [i_3 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_9 [i_3 + 1])) - (106))))) >> (((((/* implicit */int) arr_8 [i_3 - 1] [i_3 + 1])) / (((/* implicit */int) min((((/* implicit */short) var_3)), (arr_8 [13] [2U]))))))));
        /* LoopNest 3 */
        for (short i_4 = 1; i_4 < 21; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                {
                    {
                        arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) ((((((((/* implicit */int) arr_12 [i_3 + 1] [(short)19] [i_3 + 1])) < (((/* implicit */int) (short)-1)))) ? (((((/* implicit */_Bool) arr_10 [i_4] [i_6])) ? (((/* implicit */int) arr_8 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_9 [i_3])))) != (((/* implicit */int) min((((((/* implicit */_Bool) arr_9 [i_3])) || (((/* implicit */_Bool) arr_13 [i_4] [i_3])))), ((((_Bool)1) && (((/* implicit */_Bool) arr_18 [(unsigned char)2])))))))));
                        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_14 [i_5 - 1] [i_3]), (arr_14 [i_5 - 1] [i_4])))) / (((((/* implicit */int) min((((/* implicit */unsigned short) arr_15 [i_3 + 1] [i_3 + 1] [i_3 + 1])), (arr_10 [i_5] [i_5])))) + (((/* implicit */int) ((_Bool) arr_12 [i_4 - 1] [i_4 - 1] [i_4 - 1]))))))))));
                    }
                } 
            } 
        } 
        arr_22 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_12 [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_9 [i_3]))))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_16 [i_3] [i_3] [i_3] [i_3]))))))) ? ((-(arr_19 [i_3] [11] [i_3 + 1] [i_3] [(unsigned short)21]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
    }
    var_19 ^= ((/* implicit */signed char) min((var_6), (((/* implicit */unsigned int) (~((-(((/* implicit */int) var_9)))))))));
}
