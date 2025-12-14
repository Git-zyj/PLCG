/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158378
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (signed char i_4 = 1; i_4 < 22; i_4 += 4) 
                            {
                                var_20 -= ((/* implicit */unsigned int) max((arr_1 [i_2] [(_Bool)1]), (max((((/* implicit */short) (_Bool)1)), ((short)3033)))));
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) min((arr_2 [i_1 + 2]), ((+(arr_2 [i_1]))))))));
                                arr_14 [i_0] [i_3] = ((/* implicit */signed char) ((arr_11 [i_0] [i_3] [i_2] [i_0]) / (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_2 + 1] [i_1 + 1]))))) * (max((arr_11 [i_0] [i_1] [i_3] [i_0]), (((/* implicit */unsigned long long int) arr_6 [i_4] [i_1 + 1] [i_2]))))))));
                            }
                            var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                            arr_15 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((max((max((arr_11 [13U] [13U] [i_2] [i_0]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))), (max((arr_11 [i_0] [i_2] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_10 [i_0])))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)-3041)), ((unsigned short)11824))))))))));
                            var_23 = ((/* implicit */signed char) ((((((arr_3 [i_0] [i_1]) / (arr_3 [i_0] [i_2]))) * (((/* implicit */long long int) (+(arr_2 [i_2 - 1])))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0])))))))))));
                        }
                    } 
                } 
                arr_16 [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
                /* LoopSeq 4 */
                for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 2) 
                {
                    arr_19 [i_0] [i_1] [i_0] = ((/* implicit */signed char) max((2251799813685247ULL), (2251799813685270ULL)));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            {
                                arr_27 [i_0] [i_1] [i_5 - 1] [i_6] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
                                var_24 -= ((/* implicit */_Bool) arr_3 [(_Bool)1] [i_5]);
                                var_25 = ((/* implicit */signed char) (~(18446744073709551615ULL)));
                            }
                        } 
                    } 
                }
                for (short i_8 = 4; i_8 < 22; i_8 += 2) /* same iter space */
                {
                    arr_30 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_2 [i_1]);
                    arr_31 [i_0] [i_1] [(signed char)10] [i_0] = ((/* implicit */unsigned int) arr_20 [i_8] [i_0] [i_0] [i_0]);
                    var_26 = ((/* implicit */short) ((((/* implicit */int) (short)-3009)) & ((~(((/* implicit */int) (unsigned short)54807))))));
                }
                for (short i_9 = 4; i_9 < 22; i_9 += 2) /* same iter space */
                {
                    arr_34 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_9 - 4] [(_Bool)1])) - (((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))))) * (((((/* implicit */long long int) arr_13 [i_0] [7U] [2U] [21U] [i_9 - 3])) / (arr_3 [i_1] [i_9]))))) < (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_9 - 1]))))))))));
                    arr_35 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_32 [i_0]);
                }
                for (short i_10 = 4; i_10 < 22; i_10 += 2) /* same iter space */
                {
                    var_27 -= ((/* implicit */unsigned int) arr_37 [i_0] [i_1] [i_1]);
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 1; i_11 < 21; i_11 += 4) 
                    {
                        for (short i_12 = 0; i_12 < 23; i_12 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (+((-(arr_29 [i_10]))))))));
                                var_29 -= ((/* implicit */short) (~(arr_32 [i_11])));
                                arr_46 [i_0] [i_0] [i_10] [i_12] = ((/* implicit */long long int) arr_12 [i_10 - 3] [i_10 - 2] [i_12]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 4) 
    {
        for (long long int i_14 = 1; i_14 < 19; i_14 += 2) 
        {
            for (unsigned int i_15 = 0; i_15 < 20; i_15 += 3) 
            {
                {
                    var_30 = ((/* implicit */_Bool) arr_49 [(signed char)11]);
                    var_31 = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_13]))))), ((~(((/* implicit */int) ((arr_48 [i_15]) == (((/* implicit */long long int) arr_28 [i_13])))))))));
                }
            } 
        } 
    } 
    var_32 = (!((((-(((/* implicit */int) (unsigned short)11)))) > (((/* implicit */int) min((var_10), (((/* implicit */unsigned short) (_Bool)0))))))));
    /* LoopNest 2 */
    for (unsigned short i_16 = 0; i_16 < 11; i_16 += 2) 
    {
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            {
                var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_51 [i_17] [i_16] [i_16])), (arr_6 [i_17] [i_17] [8U]))), (((/* implicit */long long int) (!(arr_7 [i_17] [(short)13] [i_16]))))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (short)3026)))))));
                arr_61 [i_16] [i_17] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [14U] [i_16])) / ((((((-(((/* implicit */int) arr_4 [i_17] [i_16])))) + (2147483647))) << (((((/* implicit */int) arr_60 [i_16] [i_17])) / (((/* implicit */int) arr_8 [i_17]))))))));
                var_34 = ((/* implicit */signed char) arr_51 [i_17] [(_Bool)1] [i_16]);
            }
        } 
    } 
}
