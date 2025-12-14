/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142539
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) != (max((arr_4 [i_0]), (((/* implicit */long long int) var_7))))))), (var_13)));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */short) ((((((arr_4 [i_0]) & (arr_4 [i_0]))) + (9223372036854775807LL))) << (((((/* implicit */int) ((unsigned short) arr_4 [i_0]))) - (61591)))))) : (((/* implicit */short) ((((((((arr_4 [i_0]) & (arr_4 [i_0]))) - (9223372036854775807LL))) + (9223372036854775807LL))) << (((((((((/* implicit */int) ((unsigned short) arr_4 [i_0]))) - (61591))) + (51713))) - (54))))));
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((((arr_4 [i_0]) / (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */long long int) arr_7 [i_0])) : ((-(min((((/* implicit */long long int) arr_1 [i_0])), (var_14)))))));
                    var_21 = ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (arr_3 [i_0] [i_0] [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 1; i_3 < 19; i_3 += 1) 
    {
        for (short i_4 = 3; i_4 < 19; i_4 += 1) 
        {
            {
                arr_15 [i_3] [(unsigned short)13] [i_3 + 2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_3 [(_Bool)1] [(_Bool)1] [(_Bool)1])) > (var_12)));
                var_22 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) 2080374784)))));
                /* LoopNest 3 */
                for (short i_5 = 2; i_5 < 19; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (int i_7 = 1; i_7 < 20; i_7 += 1) 
                        {
                            {
                                arr_24 [i_5 + 3] [i_6] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -52078764)) ? (((/* implicit */int) var_7)) : (52078764)))) ? ((+(((/* implicit */int) arr_2 [i_6])))) : (((((/* implicit */int) (short)-21878)) | (((/* implicit */int) (signed char)-95))))))));
                                arr_25 [i_6] [i_7 - 1] [i_7 + 2] [i_7] [i_6] = ((/* implicit */_Bool) var_4);
                                var_23 = ((/* implicit */unsigned long long int) (+(arr_20 [i_3] [i_4] [i_4] [i_5 + 3] [i_3] [i_7])));
                            }
                        } 
                    } 
                } 
                arr_26 [i_3] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((short) arr_4 [2U]))), (arr_4 [(short)10])));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) > ((-(((/* implicit */int) (unsigned char)57)))))) ? ((((-(4294967295U))) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned short) var_7)), (var_13))))))));
    var_25 = ((/* implicit */long long int) var_3);
}
