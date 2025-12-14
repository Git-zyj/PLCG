/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150351
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
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        arr_4 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0 - 3]);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            var_18 = ((/* implicit */signed char) ((((((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])) - (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) && (((/* implicit */_Bool) arr_6 [i_0] [i_0]))))))) < (((/* implicit */int) arr_2 [i_0] [i_1]))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_0 [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1] [6ULL])))));
            arr_9 [i_0 - 1] |= ((/* implicit */unsigned int) arr_6 [i_0 + 1] [i_0 + 1]);
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_0 - 3] [i_1] [(short)0])) / (((((/* implicit */int) ((arr_7 [i_1]) < (arr_0 [7ULL])))) ^ (((/* implicit */int) ((arr_0 [i_0]) <= (arr_6 [i_0 - 4] [i_1]))))))));
            arr_10 [i_0 - 2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 4])) && (arr_3 [i_0] [i_0])))) << (((((/* implicit */int) arr_3 [i_1] [i_0])) >> (((arr_1 [2U]) + (5262860355197122930LL)))))))) > (arr_7 [i_0])));
        }
        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_0 - 4]) + (arr_6 [i_0] [i_0 + 1])))) || (((/* implicit */_Bool) arr_1 [i_0 - 2]))));
    }
    for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_21 |= ((/* implicit */unsigned long long int) arr_12 [i_2]);
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned short i_5 = 1; i_5 < 21; i_5 += 1) 
                {
                    {
                        var_22 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_5 + 2])) == (((/* implicit */int) ((((/* implicit */_Bool) ((arr_16 [i_3] [i_3]) / (((/* implicit */long long int) arr_11 [i_4]))))) && (((/* implicit */_Bool) arr_13 [i_2] [i_3])))))));
                        var_23 = (i_4 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((arr_21 [11U] [i_4] [i_4] [i_2] [i_4] [i_5 - 1]) / (arr_21 [i_2] [i_4] [i_4] [i_5 + 2] [i_5 - 1] [i_2]))) << (((((arr_21 [i_5 + 1] [i_4] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_3] [i_5 + 1] [i_5 - 1]))))) - (95042812U)))))) : (((/* implicit */unsigned long long int) ((((arr_21 [11U] [i_4] [i_4] [i_2] [i_4] [i_5 - 1]) / (arr_21 [i_2] [i_4] [i_4] [i_5 + 2] [i_5 - 1] [i_2]))) << (((((((arr_21 [i_5 + 1] [i_4] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_3] [i_5 + 1] [i_5 - 1]))))) - (95042812U))) - (4249638392U))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            for (unsigned short i_7 = 1; i_7 < 21; i_7 += 3) 
            {
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_6] [i_6]))) == (arr_16 [i_6] [i_6]))))) - (arr_16 [i_6] [i_6])));
                    var_25 = ((/* implicit */int) arr_18 [i_2] [i_2] [i_6]);
                }
            } 
        } 
        var_26 = ((arr_19 [(unsigned char)12] [i_2] [(unsigned char)12] [i_2]) & (((/* implicit */unsigned long long int) arr_16 [(unsigned char)16] [4U])));
    }
    for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 2) 
    {
        arr_29 [i_8 - 1] |= ((/* implicit */unsigned char) ((((arr_16 [(unsigned char)18] [i_8 - 1]) / (arr_16 [(_Bool)1] [i_8 - 1]))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_25 [0LL] [i_8 - 1] [0LL] [i_8])))));
        var_27 = ((/* implicit */unsigned char) ((arr_19 [12ULL] [i_8] [i_8 - 1] [12ULL]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_8] [i_8] [i_8 + 1] [i_8])))));
        arr_30 [i_8 - 1] = ((/* implicit */long long int) arr_17 [i_8] [i_8] [i_8] [i_8 - 1]);
        var_28 = ((/* implicit */int) arr_12 [i_8 - 1]);
        arr_31 [i_8 - 1] [i_8] = ((/* implicit */short) ((((/* implicit */unsigned long long int) arr_17 [(unsigned char)21] [(unsigned char)21] [i_8 - 1] [i_8])) - (arr_13 [i_8] [i_8])));
    }
    var_29 &= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) < (var_13)));
    var_30 = ((/* implicit */short) var_0);
}
