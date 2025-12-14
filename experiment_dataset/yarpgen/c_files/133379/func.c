/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133379
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
    var_17 = ((/* implicit */int) var_3);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */long long int) ((min((10850794259188957847ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) << (((min((((/* implicit */long long int) (short)-4576)), (-4857951784440379363LL))) + (4857951784440379390LL)))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_0 [12LL] [i_0 + 1])) ? (arr_0 [i_0] [i_0 + 2]) : (arr_0 [i_0] [i_0 - 1])))));
        var_19 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 + 1])))) ? (((long long int) var_2)) : (((/* implicit */long long int) 0))));
        var_20 ^= ((((/* implicit */int) ((_Bool) -9007769947391733724LL))) & ((+(((/* implicit */int) (short)30310)))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_21 = ((/* implicit */int) arr_6 [i_1]);
        var_22 = ((/* implicit */_Bool) ((((arr_5 [i_1] [i_1]) + (2147483647))) << (((((((/* implicit */int) (short)-3878)) + (3901))) - (23)))));
        arr_8 [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_1]))));
        var_23 = ((/* implicit */int) ((short) arr_6 [i_1]));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_5 [i_2] [i_2]) & (arr_5 [14LL] [i_2]))))));
        var_24 = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-30311)))))))) != ((-(((/* implicit */int) (_Bool)0))))));
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            /* LoopSeq 3 */
            for (int i_4 = 1; i_4 < 16; i_4 += 1) 
            {
                var_25 = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_16 [i_4 + 1] [i_4 + 1])) ? (arr_16 [i_4 - 1] [i_4 + 1]) : (arr_16 [i_4 + 1] [i_4 + 1])))));
                var_26 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)0))))), (-9007769947391733724LL))), (((-9007769947391733747LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-1924)))))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                arr_22 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) (_Bool)0);
                arr_23 [1] [i_3] [i_3] = ((/* implicit */int) (!((_Bool)1)));
                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((((long long int) (~(((/* implicit */int) (short)27874))))) + (9223372036854775807LL))) << ((((((~(((/* implicit */int) arr_14 [i_2])))) + (48))) - (47))))))));
            }
            for (short i_6 = 0; i_6 < 17; i_6 += 3) 
            {
                var_28 = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_2])) << ((((+(((/* implicit */int) var_9)))) + (833)))));
                arr_28 [i_2] [i_6] = ((((((/* implicit */int) arr_6 [i_6])) / (((/* implicit */int) arr_15 [i_6] [i_6] [i_3] [i_2])))) ^ ((-(var_16))));
                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_16 [i_6] [i_2]), (((/* implicit */long long int) (_Bool)1))))) ? (((arr_16 [i_3] [i_6]) | (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_9 [i_2] [i_3]))))));
                var_30 = ((/* implicit */short) arr_25 [(unsigned short)7]);
                var_31 = min((arr_10 [i_6]), (((((/* implicit */int) arr_9 [i_2] [i_2])) / (((/* implicit */int) arr_9 [i_2] [i_3])))));
            }
            arr_29 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-4576)) ? (((/* implicit */int) (unsigned short)4092)) : (((/* implicit */int) (short)0)))) | (((((/* implicit */int) arr_9 [i_3] [15])) ^ (((/* implicit */int) arr_20 [i_2] [i_2] [i_3] [i_3])))))))));
        }
    }
}
