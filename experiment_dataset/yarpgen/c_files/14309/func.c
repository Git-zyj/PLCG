/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14309
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
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((var_12) & (((/* implicit */int) var_16)))) >= (arr_0 [i_0])));
                var_17 = ((/* implicit */unsigned char) 18446744073709551605ULL);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (short)-4759))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2])))))) : (var_2)));
        arr_10 [i_2] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)12288)) - (((/* implicit */int) var_13)))) - (((arr_1 [i_2]) | (max((((/* implicit */int) (unsigned short)12308)), (var_3)))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 0U)), (arr_12 [i_3] [i_3])))) ? ((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11))) : (arr_12 [i_3] [i_3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_11 [i_3] [i_3]) <= (((((/* implicit */_Bool) arr_12 [23U] [i_3])) ? (arr_11 [i_3] [3U]) : (arr_11 [i_3] [(short)21])))))))));
        /* LoopSeq 2 */
        for (unsigned char i_4 = 3; i_4 < 22; i_4 += 4) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3]))) % (((((/* implicit */unsigned int) (+(((/* implicit */int) arr_16 [i_4]))))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) - (arr_15 [i_3] [i_3] [i_4 + 1])))))));
            var_21 = ((/* implicit */int) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) & (arr_12 [i_3] [i_4]))) | (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-2147483647 - 1))) & (arr_15 [i_4 - 2] [i_4] [i_3]))))))));
        }
        for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_3])))))) : ((+(var_5))))) & (((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_3])) >> (((((/* implicit */int) (unsigned short)53234)) - (53231)))))) ? (((((/* implicit */unsigned long long int) arr_15 [i_3] [i_5] [i_5])) % (arr_11 [i_3] [i_5]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_3])) ? (arr_14 [i_3]) : (var_4))))))));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (signed char)11))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 4) 
        {
            for (unsigned char i_7 = 1; i_7 < 20; i_7 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) arr_11 [i_7] [i_7 - 1]);
                    var_25 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) var_2)) & (1609902961668232242ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6 + 1])))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (max((var_6), (((/* implicit */unsigned long long int) ((int) (unsigned short)20982))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)248)) & ((~(var_12))))))));
}
