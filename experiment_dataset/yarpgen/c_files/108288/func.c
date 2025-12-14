/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108288
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)199))) || (((/* implicit */_Bool) (~((-(((/* implicit */int) var_11))))))))))));
    var_13 &= ((/* implicit */short) (!(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (var_1)))) || (((/* implicit */_Bool) var_4))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_4 [2U] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))), (max((((7116282933914948211ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_0 [i_0])), (var_4))))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) (-((((+(arr_1 [i_0] [i_0]))) | (((/* implicit */unsigned long long int) ((arr_0 [i_0]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_0])))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_7 [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))))) ? ((~(var_8))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_7 [i_1])))));
        arr_10 [i_1] &= ((/* implicit */signed char) var_9);
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) max((((/* implicit */unsigned int) var_6)), (arr_8 [10ULL])))))));
    }
    /* LoopSeq 2 */
    for (short i_2 = 2; i_2 < 17; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (signed char i_4 = 3; i_4 < 18; i_4 += 4) 
            {
                for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        var_14 *= ((/* implicit */_Bool) (~((-(((/* implicit */int) var_10))))));
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_17 [i_2 + 1] [i_2] [i_2] [i_2 - 2]))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    {
                        var_16 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) var_6)), (min((var_8), (((/* implicit */unsigned long long int) arr_21 [i_8] [i_6] [i_6] [i_2])))))), (max((((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_25 [i_6] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2 + 1] [(unsigned char)2]))))))))));
                        var_17 = ((/* implicit */unsigned int) arr_22 [i_2] [i_8]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((unsigned int) var_7))) | (var_3)));
        var_19 *= ((/* implicit */unsigned int) var_9);
        var_20 ^= ((/* implicit */short) (~(((/* implicit */int) ((arr_27 [i_9] [i_9]) >= (((/* implicit */unsigned long long int) var_7)))))));
        arr_32 [i_9] = ((/* implicit */short) arr_15 [i_9] [i_9]);
    }
}
