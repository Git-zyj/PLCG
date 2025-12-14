/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18460
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) arr_0 [(unsigned short)19]);
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [10LL])) ? (((/* implicit */int) max((var_1), (arr_1 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)2)) == (((/* implicit */int) var_8))))) != (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))))))));
        var_12 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) % (((/* implicit */int) arr_0 [i_0]))))) && (((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) var_1))))))))));
    }
    for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        arr_7 [(unsigned short)1] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_1 [i_1] [i_1])))));
        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_1] [i_1])))))));
    }
    for (unsigned short i_2 = 2; i_2 < 19; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned short) var_4);
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65518)) * (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_2 + 1] [i_2 + 1])) == (((/* implicit */int) (signed char)-70)))))) : ((+(arr_8 [i_2 - 2])))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 16; i_3 += 4) 
        {
            for (signed char i_4 = 4; i_4 < 19; i_4 += 3) 
            {
                {
                    var_15 = min((((unsigned short) arr_8 [i_3 + 4])), (var_2));
                    arr_15 [(unsigned short)9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_8 [i_2 - 1]) + (9223372036854775807LL))) << (((((((/* implicit */int) var_0)) + (59))) - (21)))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 - 1] [(unsigned char)13]))) : (arr_8 [i_2 - 2]))) : (((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_2 + 1])) ? (arr_8 [i_2 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                }
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        for (unsigned short i_6 = 1; i_6 < 20; i_6 += 1) 
        {
            {
                arr_20 [i_5] [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */int) var_1)) <= (((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned short)3)))) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) var_9))))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 4; i_7 < 17; i_7 += 4) 
                {
                    for (signed char i_8 = 0; i_8 < 21; i_8 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_0)), (arr_22 [(unsigned short)20] [i_6 - 1] [i_7] [i_7 - 4]))))));
                            var_18 = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) var_7)) / (((/* implicit */int) arr_24 [i_6 + 1] [i_6 - 1] [i_7 + 2] [i_7 - 1])))));
                        }
                    } 
                } 
                arr_27 [i_5] [(unsigned short)3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_23 [i_6] [i_6 + 1] [i_6] [i_6 + 1])) + (2147483647))) >> (((/* implicit */int) var_9))))) ? ((+(((/* implicit */int) (unsigned short)65517)))) : ((+(((/* implicit */int) (unsigned short)17845))))));
            }
        } 
    } 
}
