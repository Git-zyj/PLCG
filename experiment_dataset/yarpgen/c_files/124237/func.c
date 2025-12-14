/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124237
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
    var_10 = ((/* implicit */int) 9223372036854775791LL);
    var_11 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) (unsigned char)93)))) : (((/* implicit */int) var_6)))) >= (var_3)));
    var_12 = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) (short)-10393)) ? (((/* implicit */long long int) var_4)) : (-9223372036854775803LL))), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) var_9))));
    var_13 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        arr_9 [i_2] [i_2] [i_1 + 1] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)55021))))) ? (((((/* implicit */int) arr_5 [i_0 + 1] [i_1 + 2] [i_2 - 1] [i_2 - 1])) * (((/* implicit */int) arr_5 [i_0 + 1] [i_1 + 2] [i_2 + 2] [i_2 - 1])))) : (((/* implicit */int) max((arr_5 [i_0 + 1] [i_1 + 1] [i_2 - 1] [i_2 + 3]), (arr_5 [i_0 + 1] [i_1 + 2] [i_2 + 3] [i_2 + 1]))))));
                        var_14 = (unsigned short)12288;
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_4 = 1; i_4 < 19; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((arr_10 [i_5]), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) arr_11 [i_0 + 1])), (arr_17 [(signed char)10] [i_4] [i_0 + 1] [13U]))))));
                        arr_21 [i_6] [i_4] [i_5] [(unsigned char)0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_11 [i_0])) ? (((/* implicit */unsigned long long int) 1630244543U)) : (arr_10 [1]))), (min((arr_19 [12U] [i_5] [2ULL]), (((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_0 + 1] [i_5] [i_5]))))))) ? ((+(arr_12 [i_0] [i_5] [i_5]))) : (((((/* implicit */_Bool) (+(arr_16 [i_0] [i_4 + 2] [3LL] [i_0] [i_6])))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)54))))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_18 [i_0] [(signed char)2] [i_5])))))));
                        arr_22 [i_6] [i_4] [i_5] [i_6] |= ((/* implicit */unsigned int) arr_11 [i_0 + 1]);
                    }
                    var_15 ^= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4] [i_4] [i_5])) ? (((((/* implicit */_Bool) (unsigned short)10504)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))) : (((/* implicit */long long int) 1630244516U)))))));
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((4064U) ^ (((/* implicit */unsigned int) ((((arr_16 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] [i_0]) + (2147483647))) << (((((/* implicit */int) arr_5 [i_0] [i_0 + 1] [12] [i_0])) - (16669)))))))))));
        arr_23 [i_0] = ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */long long int) ((/* implicit */int) (short)17912))) : ((-(-6344808450695638943LL))));
    }
}
