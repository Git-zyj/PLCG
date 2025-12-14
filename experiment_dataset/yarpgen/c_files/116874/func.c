/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116874
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        arr_11 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((2084616484) | (((/* implicit */int) (unsigned short)4818))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_2 + 1]))))) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_10 [i_0] [i_0] [i_0] [i_3]) : (((/* implicit */int) var_3)))) : ((~(((/* implicit */int) arr_7 [i_2 + 1] [(unsigned short)8] [(unsigned short)8] [i_2 - 1] [i_2])))))) : (((((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_2 + 2] [i_2 - 1] [i_2])) & (((/* implicit */int) arr_9 [i_2] [(unsigned short)8] [i_2 + 2] [i_2 + 2] [i_2 - 1] [i_2]))))));
                        arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_5 [i_0] [(unsigned char)7] [i_2 - 1]), (arr_5 [i_0] [i_2 + 2] [i_3])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [5])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2 + 2])) : (((/* implicit */int) arr_5 [i_2] [i_1] [i_1])))))));
                        var_19 = ((/* implicit */unsigned short) ((unsigned long long int) arr_9 [i_0] [(short)9] [i_1] [5LL] [i_2] [i_2]));
                    }
                    for (int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        var_20 = ((signed char) arr_2 [i_2] [i_0]);
                        var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (((~(-2084616505))) >= (((/* implicit */int) arr_13 [i_2 + 2]))))), ((~(((/* implicit */int) ((unsigned short) arr_1 [(unsigned short)2])))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 2; i_5 < 10; i_5 += 3) 
                        {
                            var_22 += ((/* implicit */long long int) ((_Bool) ((((((/* implicit */int) arr_1 [(unsigned char)8])) >> ((((((-2147483647 - 1)) - (-2147483646))) + (9))))) / (((/* implicit */int) arr_3 [i_0] [(unsigned char)7] [(unsigned char)7])))));
                            var_23 ^= ((/* implicit */signed char) ((unsigned short) ((arr_10 [i_0] [i_1] [i_2] [i_4]) << (((arr_14 [i_0] [(short)9] [i_4] [(_Bool)1]) - (1529959538))))));
                            var_24 = ((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_0] [i_1]);
                        }
                        arr_18 [i_2] [i_2 + 1] [i_2] [(signed char)9] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_2 + 2] [i_4] [i_4]))))) ? (((((/* implicit */_Bool) arr_5 [i_2 + 2] [(unsigned char)4] [i_2 + 2])) ? (((/* implicit */int) arr_5 [i_2 + 1] [(short)7] [i_2])) : (((/* implicit */int) arr_5 [i_2 + 2] [1] [i_4])))) : ((-(((/* implicit */int) var_8))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? ((+(((/* implicit */int) var_6)))) : ((+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_16 [i_0] [i_2] [i_1] [i_0]))))))));
                        arr_21 [i_2] [i_2] [i_2 - 1] [i_2] [i_2] = ((/* implicit */long long int) arr_13 [10]);
                        var_26 += (+(((((/* implicit */_Bool) (unsigned short)4818)) ? (((/* implicit */int) ((unsigned char) 0ULL))) : (((/* implicit */int) (unsigned char)255)))));
                        arr_22 [i_2] = ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) ((int) var_11))))));
                        arr_23 [i_2] = ((/* implicit */short) var_15);
                    }
                    arr_24 [i_2] = ((/* implicit */short) ((int) ((long long int) arr_7 [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_2 - 1] [i_2 + 1])));
                    arr_25 [i_2] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_7))) == (((((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2])) & (((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        for (short i_8 = 0; i_8 < 12; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                {
                    arr_32 [i_8] = ((/* implicit */unsigned char) ((((int) (+(-1617009105)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_7] [i_8] [i_9])))))));
                    arr_33 [i_9] [(_Bool)1] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_28 [i_9] [i_8] [i_9]))));
                }
            } 
        } 
    } 
}
