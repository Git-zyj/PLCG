/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148977
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (var_8) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))))))));
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (+((~(arr_0 [i_0] [i_0]))))))));
    }
    var_20 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) - (((((/* implicit */unsigned long long int) (+(var_0)))) / (var_11)))));
    /* LoopSeq 2 */
    for (unsigned short i_1 = 2; i_1 < 9; i_1 += 2) 
    {
        var_21 -= ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) arr_4 [i_1 + 3])))));
        arr_5 [i_1 + 1] [i_1 + 2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((1894642649U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))) == ((~(((/* implicit */int) arr_3 [i_1])))))))) | ((((-(arr_2 [i_1] [i_1 - 2]))) << (((arr_1 [i_1]) - (3056686409U)))))));
        var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_4 [i_1 - 2])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_2 [i_1 + 1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (((124841255U) + (4170126041U)))))));
        var_23 = ((/* implicit */_Bool) 124841255U);
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_1 + 3] [i_1 - 2]) % (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_4 [i_1 + 1])))))) : (arr_2 [i_1] [i_1])));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 10; i_3 += 2) 
        {
            for (unsigned int i_4 = 3; i_4 < 12; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 3; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_3 + 1] [i_3 + 1])) < (((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 1]))));
                                arr_22 [i_4] [i_5 - 3] = var_16;
                            }
                        } 
                    } 
                    var_26 ^= var_11;
                    arr_23 [i_2] [i_4] [i_2] [i_2] = ((/* implicit */unsigned int) (((-(arr_18 [i_4] [i_2] [i_4] [i_3] [i_2] [i_2]))) * (((/* implicit */unsigned long long int) ((var_12) ^ (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_3] [i_3] [i_3 + 1]))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 13; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
            {
                {
                    var_27 = ((/* implicit */_Bool) arr_11 [i_2] [i_8]);
                    var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_24 [i_2] [6U] [(_Bool)1])) ? (var_14) : (arr_8 [i_7] [i_2]))) >= (((/* implicit */unsigned int) (-(((/* implicit */int) var_13)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_9 = 0; i_9 < 13; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 3; i_10 < 12; i_10 += 2) 
            {
                for (unsigned short i_11 = 1; i_11 < 12; i_11 += 4) 
                {
                    {
                        var_29 = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_6 [i_2]))))));
                        var_30 = ((/* implicit */unsigned short) ((long long int) arr_1 [i_10 - 3]));
                        var_31 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_10)))))));
                        var_32 ^= (~(arr_2 [i_11 + 1] [i_11 + 1]));
                    }
                } 
            } 
        } 
    }
}
