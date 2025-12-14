/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162916
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (max((var_8), (var_8))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_9) : (var_0))))))) | (((unsigned long long int) ((var_3) * (var_8))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] [i_0] = 899972317;
            var_11 = ((/* implicit */unsigned long long int) ((((var_8) | (((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (var_9)))))) + (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
        }
        for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
            {
                var_12 += ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_0]);
                var_13 &= ((/* implicit */unsigned short) arr_2 [i_0] [(unsigned short)5] [i_3]);
                arr_11 [i_0] [22ULL] [7ULL] = ((/* implicit */unsigned short) ((int) ((arr_8 [i_0] [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
            {
                var_14 &= max((9922392508040073334ULL), (((/* implicit */unsigned long long int) (_Bool)1)));
                var_15 &= ((/* implicit */unsigned long long int) var_8);
                var_16 = ((/* implicit */unsigned short) arr_10 [4] [i_2] [i_2] [i_4]);
                var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                var_18 = ((/* implicit */_Bool) var_0);
            }
            arr_15 [(unsigned short)7] [14ULL] [(short)9] = ((/* implicit */unsigned short) (-(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
            var_19 ^= ((/* implicit */short) arr_3 [i_0] [i_0] [i_2]);
            var_20 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_7 [i_2] [i_0])) & (var_2)))));
        }
        for (unsigned short i_5 = 2; i_5 < 22; i_5 += 2) 
        {
            var_21 = (+(((/* implicit */int) arr_2 [i_0] [i_0] [i_5])));
            var_22 ^= ((/* implicit */unsigned long long int) var_4);
            var_23 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
            arr_19 [i_0] [7ULL] [i_5] = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned short) arr_2 [i_5] [i_5 + 2] [i_5 + 1]))), (((int) var_6))));
        }
        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            arr_22 [(_Bool)1] [i_6] [i_0] = ((/* implicit */int) var_8);
            var_24 = ((/* implicit */int) var_7);
            arr_23 [i_0] &= ((/* implicit */unsigned int) (~((-((+(var_9)))))));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) min((var_9), (var_9))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))) | (arr_8 [i_0] [4U] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) max((var_7), ((unsigned short)47411))))))));
            var_26 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)67))));
        }
        arr_24 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((unsigned int) 3U)) / (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)140), (arr_3 [3] [3] [(_Bool)1])))))));
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned short)8191)) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-1087))))));
        arr_25 [i_0] = ((unsigned int) (unsigned char)249);
    }
}
