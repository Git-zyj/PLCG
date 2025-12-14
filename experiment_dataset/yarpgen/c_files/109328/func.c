/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109328
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
    var_17 &= ((/* implicit */long long int) (!(var_12)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */long long int) 1897850586)) >= (max((((/* implicit */long long int) -1)), (-1LL)))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [11LL] [i_1])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [(signed char)1])))));
                        arr_12 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_14)) ? (arr_8 [i_0] [i_2] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) / (var_1)));
                        var_20 = ((/* implicit */int) arr_6 [i_1] [i_0]);
                        arr_13 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) var_1);
                    }
                    /* vectorizable */
                    for (short i_4 = 2; i_4 < 16; i_4 += 4) 
                    {
                        var_21 += ((/* implicit */signed char) arr_4 [i_2] [i_0]);
                        arr_16 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) - (var_8)));
                        arr_17 [(unsigned short)2] [i_0] = ((/* implicit */int) var_16);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        arr_21 [i_5] [i_5] [15] [i_0] [i_0] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)12368)) << (((-2238924071231743233LL) + (2238924071231743243LL)))));
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) + (arr_2 [i_0] [i_1])))));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) <= (((((/* implicit */_Bool) arr_3 [(signed char)12])) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_18 [i_5] [(short)6] [7] [i_0]))))));
                        arr_22 [i_2] [i_2] [i_0] [(signed char)11] = ((/* implicit */signed char) (~(arr_3 [i_1])));
                    }
                }
                var_24 = ((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))))) ? ((((_Bool)1) ? (-4214094336362475357LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)31))))) : (arr_8 [i_0] [i_1] [13U] [6ULL]));
                arr_23 [i_1] [i_0] [i_1] = ((/* implicit */signed char) arr_0 [i_0]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) 
    {
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_0))))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
        {
            arr_29 [i_6] [i_6] [i_6] = ((/* implicit */int) ((arr_24 [i_7]) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_27 [i_7])))))));
            arr_30 [i_6] [i_7] [i_6] = ((/* implicit */signed char) var_11);
        }
        for (short i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)44)) > (((/* implicit */int) (signed char)81)))) ? (((((/* implicit */_Bool) arr_28 [i_6] [i_6])) ? (arr_28 [i_6] [i_8]) : (arr_28 [i_6] [i_6]))) : ((~(arr_28 [i_6] [i_6])))));
            arr_33 [i_6] = ((/* implicit */unsigned char) var_12);
        }
        /* vectorizable */
        for (short i_9 = 0; i_9 < 20; i_9 += 1) /* same iter space */
        {
            var_27 = ((/* implicit */long long int) var_10);
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_24 [(unsigned char)6]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) arr_28 [i_6] [i_6])) : (arr_25 [i_9])));
        }
        for (short i_10 = 0; i_10 < 20; i_10 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */short) arr_26 [i_6]);
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                for (signed char i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    {
                        var_30 -= ((/* implicit */unsigned int) var_7);
                        arr_43 [(unsigned char)10] [i_6] [(signed char)5] [i_11] [(signed char)5] = ((/* implicit */signed char) var_5);
                    }
                } 
            } 
            var_31 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) != (arr_28 [i_10] [(_Bool)1])));
        }
    }
    var_32 = ((/* implicit */signed char) max((((/* implicit */long long int) var_15)), (var_1)));
}
