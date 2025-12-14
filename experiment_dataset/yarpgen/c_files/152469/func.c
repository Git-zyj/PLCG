/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152469
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1477119940848188932ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-21300))) < (4937138252685192214LL)))))))) ? (((unsigned int) (-(((/* implicit */int) var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */_Bool) var_11);
                        var_16 = ((((/* implicit */_Bool) arr_7 [i_3 + 4] [i_3 + 4] [i_3] [i_3 + 3])) || (((/* implicit */_Bool) min((arr_7 [i_3 + 4] [i_3 + 4] [i_3 + 4] [i_3 + 3]), (((/* implicit */long long int) arr_10 [i_3 + 4] [i_3 + 4] [i_0] [i_3 + 3] [i_3 - 1]))))));
                        var_17 |= ((/* implicit */unsigned char) (((-(min((((/* implicit */unsigned long long int) (unsigned short)511)), (var_0))))) < (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [6LL] [(short)4] [i_3 - 1]))));
                    }
                    for (short i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [18LL] [i_2] [i_4])), ((-(min((var_9), (((/* implicit */unsigned long long int) (unsigned short)65014)))))))))));
                        arr_15 [i_0] [i_0] [i_1] [i_2] [i_0] [(_Bool)0] = ((/* implicit */_Bool) var_8);
                        arr_16 [i_0] [5] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_11))) - (arr_7 [i_0] [i_1] [i_2] [i_4]))) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))) - (arr_1 [i_0] [i_0])));
                    }
                    var_19 = ((/* implicit */_Bool) (short)32767);
                    var_20 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [(short)20] [i_0]))) : (arr_12 [i_0] [i_1] [i_1] [i_0])))));
                    arr_17 [i_2] [i_0] [i_2] [(short)21] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_9 [i_0] [i_0] [i_2]) : (var_7))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_5 = 3; i_5 < 21; i_5 += 2) 
        {
            arr_20 [i_0] [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-12261)) ? (min((((((/* implicit */_Bool) arr_2 [i_5])) ? (arr_7 [i_0] [i_0] [i_5] [i_5 + 2]) : (((/* implicit */long long int) arr_9 [i_0] [i_0] [i_5])))), (((/* implicit */long long int) arr_14 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_5] [i_5 - 2])))));
            /* LoopNest 2 */
            for (unsigned int i_6 = 4; i_6 < 19; i_6 += 2) 
            {
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0] [i_5 + 1] [i_6 - 2] [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (short)842)))) : (((arr_7 [i_0] [i_5 - 3] [i_6 + 1] [i_7]) & (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_5 + 1] [i_6 - 4] [i_6 + 4])))))));
                        arr_28 [i_0] [i_5] [i_6] [i_0] = ((/* implicit */unsigned char) arr_1 [i_7] [(short)20]);
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 12; i_8 += 3) 
    {
        var_22 = ((/* implicit */long long int) (-(arr_12 [i_8] [i_8 + 1] [i_8 - 2] [(signed char)22])));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_21 [i_8] [16] [i_8 + 1] [16]) + (((/* implicit */long long int) var_12))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) - (((/* implicit */int) (unsigned short)65047))))) : (var_9))))));
    }
    for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 12; i_10 += 4) 
        {
            for (int i_11 = 0; i_11 < 12; i_11 += 1) 
            {
                {
                    arr_38 [3LL] [i_10] = var_12;
                    arr_39 [i_9] [i_10] [i_11] = min((var_0), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_1 [i_9] [17LL])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)70))))), (((/* implicit */unsigned int) arr_25 [(unsigned char)0] [i_10] [i_11] [9]))))));
                    arr_40 [i_9] [i_9] [i_9] [(unsigned short)1] = (short)842;
                    var_24 = ((/* implicit */_Bool) min((min((arr_2 [i_9]), (arr_2 [i_10]))), (((/* implicit */unsigned int) (_Bool)0))));
                }
            } 
        } 
        var_25 = ((/* implicit */int) (((((!(((/* implicit */_Bool) var_9)))) || ((!(((/* implicit */_Bool) arr_31 [i_9] [i_9])))))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_9] [i_9] [i_9] [i_9]))))))));
        var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_9] [8ULL])) ? (arr_9 [i_9] [i_9] [i_9]) : (((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */int) (unsigned short)65014)) != (((/* implicit */int) var_5))))), ((-(((/* implicit */int) arr_29 [i_9] [(short)3])))))))));
    }
}
