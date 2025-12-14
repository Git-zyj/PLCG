/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165827
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 += ((/* implicit */signed char) ((var_7) ^ (((/* implicit */unsigned long long int) arr_1 [i_0 - 1]))));
        var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_12)))) ? ((+(var_5))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [(short)9])) : (((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_1 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_0 [i_0] [i_1]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) < (arr_1 [i_1]))))) : (((((/* implicit */_Bool) var_17)) ? (arr_1 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
            arr_7 [i_0] = ((/* implicit */unsigned char) ((unsigned int) arr_1 [i_0 - 1]));
        }
        for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            /* LoopSeq 4 */
            for (short i_3 = 3; i_3 < 10; i_3 += 1) 
            {
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [i_0]) >> (((arr_10 [i_0]) - (7037483449607368812ULL)))))) ? (arr_1 [i_0 - 1]) : (((/* implicit */unsigned int) arr_5 [i_3 + 1]))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (signed char i_5 = 3; i_5 < 11; i_5 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_12 [i_0])))) ? (var_16) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))));
                            arr_18 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (arr_1 [i_2]) : (((/* implicit */unsigned int) arr_5 [i_0])))) % (((/* implicit */unsigned int) var_11))));
                            var_24 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) var_4))))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 2) 
            {
                var_25 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_16 [i_0] [1ULL] [i_2] [i_0] [1] [i_2] [1ULL])) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0])))))));
                var_26 *= (~((~(arr_15 [9] [9]))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_7] [i_0] [i_7]))));
                var_28 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_1))));
            }
            for (long long int i_8 = 2; i_8 < 11; i_8 += 2) 
            {
                var_29 = ((/* implicit */short) max((var_29), (var_17)));
                arr_28 [i_0] [i_0] [6ULL] [i_8] |= ((/* implicit */short) (((-(((/* implicit */int) arr_3 [i_0] [i_2] [i_0])))) <= (((/* implicit */int) ((arr_5 [i_2]) != (((/* implicit */int) var_9)))))));
                var_30 = ((/* implicit */int) arr_12 [i_0]);
            }
            var_31 = ((((/* implicit */_Bool) arr_21 [i_0] [i_0 - 1])) && (((/* implicit */_Bool) arr_21 [i_0] [i_0 - 1])));
        }
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
    {
        var_32 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_9])) & (((/* implicit */int) var_14))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_8)))))));
        var_33 = ((/* implicit */_Bool) (((+(arr_30 [i_9]))) ^ ((+(arr_30 [i_9])))));
        var_34 = ((/* implicit */signed char) (-(arr_30 [i_9])));
        arr_31 [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_30 [i_9]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) arr_30 [i_9])) ? (arr_30 [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_30 [i_9])))));
        /* LoopSeq 1 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
            var_36 |= ((/* implicit */int) var_1);
            var_37 = ((/* implicit */unsigned char) ((int) var_13));
        }
    }
    var_38 = var_5;
    var_39 = ((/* implicit */int) var_3);
    var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) min((((/* implicit */unsigned long long int) var_14)), (var_10))))) ? (((((((/* implicit */int) var_17)) + (2147483647))) << (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_5)) : (var_18))) - (18446744071934339399ULL))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))));
    var_41 |= ((/* implicit */signed char) var_13);
}
