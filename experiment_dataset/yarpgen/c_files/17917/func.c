/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17917
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
    var_11 = ((/* implicit */short) var_10);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 19; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = (((~((+(0U))))) <= ((-((-(var_3))))));
                                var_13 = ((/* implicit */unsigned short) var_4);
                                var_14 += ((/* implicit */long long int) ((unsigned short) (-((-(((/* implicit */int) arr_7 [i_0])))))));
                                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)216))) : (var_4)))) ? (((/* implicit */int) ((unsigned char) (unsigned char)59))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_1)))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3 - 2]))) : (((long long int) (~(var_10))))));
                            }
                        } 
                    } 
                    arr_13 [i_0 - 1] [i_0] [i_0 - 3] [(unsigned char)19] = ((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_1]);
                    arr_14 [i_2] [i_1] [i_0 - 3] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)40)) % (arr_4 [i_0])));
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned int) var_10)), (arr_12 [i_1] [i_1]))), (((/* implicit */unsigned int) (unsigned char)229))))) ? (((arr_10 [12LL] [i_1] [i_2] [12LL] [i_1] [i_0] [12LL]) & (((/* implicit */long long int) ((/* implicit */int) min((arr_8 [i_0] [i_1] [i_1] [i_2]), (arr_2 [i_1] [i_1]))))))) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                }
            } 
        } 
        var_17 = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0 - 3]))))), (min((arr_0 [i_0 - 3]), (((/* implicit */long long int) var_10))))));
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
        {
            for (unsigned char i_6 = 3; i_6 < 16; i_6 += 4) 
            {
                for (int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? ((+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (arr_0 [i_7]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [i_5]))) & (var_4))))))));
                        arr_23 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) max(((-(((((/* implicit */int) (unsigned char)229)) / (((/* implicit */int) var_6)))))), (((((/* implicit */int) arr_6 [i_0 - 3])) * (((/* implicit */int) arr_6 [i_0 - 1]))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_8 = 1; i_8 < 23; i_8 += 3) 
    {
        var_19 = (~(var_10));
        arr_26 [(unsigned char)18] &= ((/* implicit */unsigned short) var_0);
    }
    for (long long int i_9 = 3; i_9 < 10; i_9 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                {
                    arr_36 [(unsigned short)3] [i_10] [i_9] = ((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))), (((arr_20 [i_11] [i_10] [i_10]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_10]))))))));
                    arr_37 [i_9 - 3] [i_10] [i_11] [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) var_10)))));
                }
            } 
        } 
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)207)) ? (arr_30 [i_9 - 3]) : (arr_30 [i_9 - 3])))) && (((/* implicit */_Bool) ((arr_30 [i_9 - 2]) - (arr_30 [i_9 - 2]))))));
        var_21 += ((/* implicit */_Bool) (+(((((/* implicit */int) arr_17 [i_9 - 3] [i_9 - 3] [(signed char)13])) * (arr_22 [(unsigned char)10])))));
        /* LoopNest 2 */
        for (long long int i_12 = 0; i_12 < 11; i_12 += 3) 
        {
            for (long long int i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 11; i_14 += 2) 
                    {
                        for (long long int i_15 = 0; i_15 < 11; i_15 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_9])) ? (((/* implicit */int) arr_19 [i_13] [i_13] [i_9])) : (((/* implicit */int) arr_34 [i_9 - 2] [i_9] [i_9 + 1] [i_9]))))) ? (min((arr_18 [i_12] [i_12]), (3604554889854538185LL))) : (((arr_0 [i_9]) / (arr_42 [3LL] [i_13] [i_15])))))) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)8675)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)234)))) * (((/* implicit */int) ((unsigned char) var_9)))))) : (max(((((_Bool)0) ? (arr_42 [(unsigned char)8] [i_12] [i_9]) : (3604554889854538185LL))), (arr_18 [i_12] [i_9 - 2])))));
                                arr_48 [i_9] [i_9 - 3] [i_12] [i_12] [i_9 - 3] = ((/* implicit */_Bool) (-(var_3)));
                            }
                        } 
                    } 
                    arr_49 [i_12] = ((/* implicit */long long int) min((((/* implicit */int) min((var_2), (((/* implicit */short) arr_35 [i_9 - 1] [i_9] [i_9 + 1]))))), (((((/* implicit */_Bool) arr_2 [i_13] [i_12])) ? (((/* implicit */int) arr_2 [(short)5] [i_12])) : (((/* implicit */int) arr_19 [i_9 - 3] [i_9 - 2] [i_9 - 2]))))));
                    arr_50 [i_9] [i_12] [7LL] [(short)8] = ((/* implicit */unsigned int) ((arr_45 [(unsigned short)0] [i_12] [i_12] [i_12] [i_12]) ^ (((/* implicit */int) ((unsigned char) var_0)))));
                }
            } 
        } 
    }
    for (long long int i_16 = 3; i_16 < 10; i_16 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_17 = 0; i_17 < 11; i_17 += 2) 
        {
            for (signed char i_18 = 0; i_18 < 11; i_18 += 3) 
            {
                {
                    arr_59 [(unsigned short)10] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned short)62800)), (-6871815238152494338LL)));
                    arr_60 [(unsigned char)4] [i_17] = ((/* implicit */int) (~(-6871815238152494349LL)));
                    arr_61 [i_16] [i_17] [i_18] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((3604554889854538191LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)212)))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64)))))));
                }
            } 
        } 
        var_23 += ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (arr_54 [i_16 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? ((-(arr_18 [(_Bool)1] [i_16]))) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_16 - 2] [i_16 - 1] [i_16 - 1]))))));
        var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)27)) || (((/* implicit */_Bool) -6224421795661886090LL)))) ? (((((/* implicit */_Bool) arr_8 [i_16] [i_16 + 1] [i_16 - 1] [i_16])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_16] [i_16 - 2] [10LL] [i_16 - 2])) < (((/* implicit */int) arr_8 [i_16] [i_16 - 3] [i_16] [i_16]))))))));
    }
    var_25 = ((/* implicit */unsigned char) (-(max((var_8), (((/* implicit */long long int) var_6))))));
    var_26 = ((/* implicit */int) var_2);
}
