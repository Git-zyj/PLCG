/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109981
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
    var_14 = ((/* implicit */int) var_13);
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1484205477966170585LL)) && (((/* implicit */_Bool) -1484205477966170585LL))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */long long int) max((var_16), (((min((((-1484205477966170585LL) ^ (-1484205477966170601LL))), (1484205477966170584LL))) / (((/* implicit */long long int) max((arr_1 [(short)8] [i_0]), (arr_1 [0] [i_0]))))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_17 = ((((/* implicit */long long int) var_7)) ^ (((arr_10 [i_3] [i_2] [i_1] [i_0]) ^ (var_0))));
                        var_18 = ((/* implicit */int) max((((unsigned long long int) arr_7 [i_0] [i_1 + 1] [i_2] [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [3] [i_1 + 2] [i_2] [i_0])) == (((/* implicit */int) var_1)))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */short) arr_2 [i_0]);
    }
    for (int i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            var_19 = min((min((var_5), (((/* implicit */int) ((short) var_4))))), (((/* implicit */int) ((0LL) < (((/* implicit */long long int) arr_13 [i_5]))))));
            var_20 = ((/* implicit */short) arr_16 [i_5] [i_4]);
            arr_17 [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_15 [i_4] [i_4] [i_4])))) && (((/* implicit */_Bool) ((arr_13 [i_5]) % (arr_16 [i_5] [i_5]))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            var_21 = arr_19 [i_4] [i_6] [i_6];
            var_22 = ((/* implicit */int) arr_13 [i_6]);
            arr_20 [3] [3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)-16313)))) | (((arr_14 [i_4] [i_4]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_6)) + (arr_15 [i_6] [11LL] [11LL]))))))));
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((-1LL) == (((/* implicit */long long int) 0)))))));
        }
        var_24 = ((/* implicit */unsigned int) ((var_3) * (((/* implicit */unsigned long long int) ((var_12) ^ (arr_15 [i_4] [i_4] [3LL]))))));
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
        {
            for (unsigned long long int i_8 = 4; i_8 < 11; i_8 += 4) 
            {
                for (int i_9 = 0; i_9 < 12; i_9 += 2) 
                {
                    {
                        var_25 = ((long long int) ((_Bool) arr_26 [i_7]));
                        var_26 = ((((/* implicit */long long int) ((/* implicit */int) ((arr_23 [i_8] [i_8] [i_8 - 2]) != (arr_15 [i_7] [i_8] [i_8 - 3]))))) | (((arr_15 [7LL] [7LL] [i_8 - 4]) | (arr_15 [i_4] [i_7] [i_8 - 3]))));
                        var_27 ^= ((/* implicit */unsigned int) min((-1484205477966170598LL), (-1LL)));
                        arr_27 [i_7] [i_7] = ((/* implicit */unsigned long long int) var_12);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_10 = 2; i_10 < 11; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                for (unsigned long long int i_12 = 1; i_12 < 11; i_12 += 1) 
                {
                    {
                        arr_36 [i_4] [i_10] [i_10] [i_4] [i_4] = ((/* implicit */unsigned long long int) max((arr_18 [i_10] [i_12 + 1] [i_10 - 2]), (((/* implicit */short) ((_Bool) arr_18 [i_4] [i_12 - 1] [i_10 - 1])))));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_24 [i_11]) <= (((/* implicit */long long int) ((/* implicit */int) var_1))))))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_12 + 1] [i_12] [i_4]))) + (arr_16 [i_10] [i_11])))));
                    }
                } 
            } 
        } 
    }
    var_29 += ((/* implicit */unsigned long long int) var_10);
}
