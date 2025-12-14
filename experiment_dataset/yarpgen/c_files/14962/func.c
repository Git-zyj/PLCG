/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14962
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
    var_20 *= ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
    var_21 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned char) max((var_3), (((/* implicit */unsigned long long int) max((max((6821342157910570357LL), (((/* implicit */long long int) (signed char)-66)))), (((/* implicit */long long int) arr_2 [i_1])))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) arr_6 [i_1]);
                                arr_14 [(unsigned char)3] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) var_0))), (arr_12 [i_1] [i_4] [i_3] [i_2] [i_2] [i_1] [i_0])));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                var_23 &= ((/* implicit */short) (+(arr_13 [10U] [i_6] [i_5] [i_5] [i_1] [5LL])));
                                var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6] [i_1] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) var_8)))))))));
                                var_25 |= ((/* implicit */unsigned short) var_8);
                                arr_23 [i_7] [i_6] [i_5] [i_1] [i_0] = ((/* implicit */unsigned long long int) (short)-32017);
                                var_26 = ((/* implicit */unsigned long long int) min((var_26), (arr_13 [i_0] [i_1] [i_1] [(unsigned short)10] [i_0] [i_7])));
                            }
                        } 
                    } 
                    var_27 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
                    /* LoopSeq 3 */
                    for (signed char i_8 = 3; i_8 < 9; i_8 += 4) 
                    {
                        arr_27 [(signed char)0] [i_1] [(unsigned char)5] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)29071))));
                        arr_28 [8U] [i_0] [0ULL] [i_0] |= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_5])))))));
                        var_28 = ((min((((/* implicit */long long int) arr_22 [i_0] [i_8 - 2] [i_5] [i_8 - 3] [i_1] [i_8] [i_0])), (var_18))) % (((/* implicit */long long int) arr_15 [i_0] [i_8 - 3] [i_5] [i_8 - 1])));
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            arr_33 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [4U] = ((/* implicit */signed char) max(((-(((/* implicit */int) (short)15640)))), (((/* implicit */int) ((unsigned char) arr_26 [i_8] [i_8 + 2] [i_8 - 3] [i_8 + 2] [i_1])))));
                            var_29 = ((/* implicit */unsigned short) min((min((arr_6 [i_8]), (((/* implicit */unsigned long long int) (short)-32017)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_12 [(short)5] [i_8 + 2] [i_9] [i_8] [i_8] [i_8] [i_8 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_8] [i_8 - 2] [i_8] [i_8 - 2]))))))));
                            var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) min((min(((short)-29081), ((short)32017))), ((short)32017))))));
                        }
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_36 [i_1] [i_10] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_17 [i_10] [i_5] [i_0])) ? (-6787809834540851006LL) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_10] [i_5] [i_10] [i_5] [i_1] [i_0] [i_0]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_34 [i_0] [i_0] [(signed char)10] [i_0] [i_0])) ? (((/* implicit */int) (short)32015)) : (((/* implicit */int) arr_20 [i_0] [i_0] [0] [(unsigned char)8] [i_0] [i_0] [i_0]))))))))));
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-32017)))))));
                        var_32 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((arr_12 [(short)0] [i_5] [i_1] [i_1] [i_1] [i_0] [i_0]) - (var_1)))))) * (max((arr_31 [i_5] [i_5]), (((/* implicit */unsigned int) arr_10 [i_10] [i_5] [i_1] [i_0]))))));
                        var_33 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_21 [i_0]))))));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-29087))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (var_2)))) : (((/* implicit */int) min((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_0 [i_11] [i_11]))))));
                        arr_39 [i_11] [1] [1] [i_1] [i_1] [i_0] = ((/* implicit */int) var_19);
                    }
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        for (unsigned short i_13 = 0; i_13 < 11; i_13 += 4) 
        {
            for (long long int i_14 = 0; i_14 < 11; i_14 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 11; i_16 += 4) 
                        {
                            {
                                arr_52 [i_16] [(unsigned char)2] [(unsigned char)2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) (short)-32017)), ((-(((/* implicit */int) var_17)))))))));
                                var_35 = ((/* implicit */int) (((!(arr_25 [i_12] [i_13]))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_14] [i_12]))) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_25 [i_12] [i_12])), (var_12)))))));
                            }
                        } 
                    } 
                    arr_53 [i_12] [i_12] [i_14] [i_14] = ((/* implicit */signed char) ((_Bool) (unsigned char)68));
                }
            } 
        } 
    } 
}
