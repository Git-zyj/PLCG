/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108606
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
    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((var_0) << (((((/* implicit */int) (unsigned short)65535)) - (65495))))), (((/* implicit */unsigned long long int) var_10)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0]))));
                        arr_9 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_3 [i_1] [(signed char)8]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 4; i_6 < 11; i_6 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_4 [i_6 + 3] [i_5] [i_0])) ^ (var_7)));
                            arr_20 [i_0] [i_1] [i_4] [i_1] [12] = ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [0LL])) ? (arr_4 [i_0] [i_1] [i_5]) : (((/* implicit */unsigned int) arr_7 [(_Bool)1] [i_1] [i_1] [i_1] [i_1])));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 4) 
        {
            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((var_3) > (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0] [i_7] [i_7])))))));
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    {
                        arr_29 [i_9] [i_7] [i_7] [i_7] [i_9] [i_7] = ((/* implicit */short) ((unsigned char) arr_19 [i_0] [11U] [i_7] [i_8] [(_Bool)1] [i_8] [i_0]));
                        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (~(((((/* implicit */_Bool) var_11)) ? (arr_18 [(unsigned short)11] [2U] [i_7] [6ULL] [i_9]) : (arr_18 [i_9] [i_9] [i_8] [i_7] [i_0]))))))));
                        var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_9]))))) - (((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                    }
                } 
            } 
        }
        arr_30 [i_0] = ((/* implicit */_Bool) arr_5 [i_0] [11] [6LL]);
        arr_31 [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [7LL])))) || (((/* implicit */_Bool) 1073741823LL))));
        var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_12 [(unsigned char)8] [i_0])) ? (arr_22 [i_0]) : (((/* implicit */long long int) 2147483392U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0])))));
    }
    for (int i_10 = 0; i_10 < 12; i_10 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) arr_4 [i_10] [i_10] [i_10]);
        arr_34 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_10] [i_10])) ? (arr_15 [i_10] [i_10] [i_10] [8LL]) : (((/* implicit */unsigned int) -759932250))))) ? (arr_25 [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_10] [i_10] [(short)10] [i_10])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_18 [1ULL] [i_10] [i_10] [i_10] [1ULL])))) ? (arr_33 [i_10]) : (((/* implicit */int) (unsigned short)65521))))) : (var_11)));
        arr_35 [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_10])) ? (var_0) : (var_0))) % (((/* implicit */unsigned long long int) var_3))))) ? (max(((~(var_5))), (((((/* implicit */_Bool) arr_13 [i_10] [i_10])) ? (arr_15 [i_10] [i_10] [i_10] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_22 [i_10]) != (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_10] [i_10])))))))));
    }
    var_21 = ((/* implicit */short) ((unsigned long long int) var_3));
}
