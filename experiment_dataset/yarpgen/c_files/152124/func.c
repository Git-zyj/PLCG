/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152124
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (int i_4 = 1; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_18 += ((/* implicit */_Bool) ((signed char) ((unsigned int) arr_10 [i_3] [i_3] [i_3])));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) arr_6 [i_4] [i_2] [i_0] [i_0]))));
                            }
                        } 
                    } 
                } 
                arr_12 [i_0] [i_1] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (arr_1 [i_0]))), (max((max((arr_11 [i_1] [12] [(signed char)4] [i_0] [i_0]), (arr_2 [(unsigned char)6]))), (((/* implicit */unsigned long long int) arr_5 [(_Bool)1] [i_1]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((var_20), (((_Bool) min((var_0), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)114))))))));
    /* LoopSeq 2 */
    for (long long int i_5 = 1; i_5 < 11; i_5 += 2) 
    {
        var_21 *= max((((unsigned long long int) min((arr_10 [(_Bool)1] [(_Bool)1] [i_5]), (((/* implicit */unsigned long long int) arr_13 [i_5]))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483645)) ? (((/* implicit */int) (_Bool)1)) : (-1232657397)))), (15122969707470806539ULL))));
        var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [(unsigned char)15] [i_5] [i_5 - 1])) ? (((/* implicit */int) arr_9 [i_5] [i_5] [i_5 - 1])) : (((/* implicit */int) arr_9 [i_5] [i_5] [i_5 + 1]))))), (min((((((/* implicit */_Bool) arr_13 [i_5])) ? (arr_1 [3]) : (((/* implicit */unsigned long long int) arr_8 [6])))), (arr_1 [i_5 - 1])))));
        arr_17 [i_5] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_5 - 1]))))), (arr_10 [0ULL] [0ULL] [i_5])));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 1; i_6 < 11; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                {
                    arr_24 [8U] [(unsigned char)7] [i_5] [i_5] = ((unsigned long long int) (+(min((arr_8 [i_7]), (arr_8 [i_7])))));
                    var_23 ^= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_18 [i_5] [i_6])), (arr_1 [i_6])))) ? (((((/* implicit */_Bool) arr_10 [i_7] [8ULL] [i_7])) ? (((/* implicit */unsigned long long int) arr_16 [i_5] [i_5])) : (arr_15 [0LL] [8U]))) : (min((arr_15 [i_7] [i_5]), (((/* implicit */unsigned long long int) arr_13 [i_7])))))), (((/* implicit */unsigned long long int) arr_13 [i_5]))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 11; i_8 += 1) 
                    {
                        for (signed char i_9 = 1; i_9 < 10; i_9 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_23 [i_6] [i_6] [i_9]))))), (((((/* implicit */_Bool) arr_22 [i_9] [i_5] [i_5])) ? (arr_25 [i_5] [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned long long int) arr_26 [i_5] [3] [i_7] [i_5] [i_9])))))), (((unsigned long long int) ((((/* implicit */_Bool) 4055764346365150581LL)) ? (((/* implicit */unsigned long long int) 3184231100U)) : (2199023255551ULL)))))))));
                                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) max((((/* implicit */long long int) ((signed char) max(((unsigned short)2963), (((/* implicit */unsigned short) (_Bool)1)))))), ((~(min((((/* implicit */long long int) (signed char)14)), (-4055764346365150573LL))))))))));
                                arr_29 [i_5] [i_6] [i_5] [i_6] [i_5 + 1] = ((signed char) ((((/* implicit */_Bool) arr_28 [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5])) ? (min((4114252985679854949ULL), (15727726695159114315ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)0)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_10 = 0; i_10 < 17; i_10 += 2) 
    {
        var_26 ^= ((/* implicit */unsigned short) arr_7 [i_10] [0ULL] [i_10] [0ULL]);
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 3) 
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 17; i_12 += 3) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_27 *= (+(((/* implicit */int) ((_Bool) arr_9 [i_10] [i_10] [i_13]))));
                        var_28 += ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_3 [i_11])) ? (arr_7 [i_10] [i_10] [i_10] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_32 [i_11] [i_11]), (((/* implicit */unsigned char) arr_33 [i_11] [i_11] [i_11])))))))), (((/* implicit */unsigned long long int) arr_35 [i_10] [i_13]))));
                    }
                } 
            } 
            arr_39 [i_11] [i_10] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) arr_31 [i_10] [(signed char)5]))))))));
        }
        for (int i_14 = 2; i_14 < 16; i_14 += 1) 
        {
            var_29 = ((((/* implicit */_Bool) max((arr_0 [i_14 - 1]), (arr_0 [i_14 - 1])))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_14 + 1]))) : (((/* implicit */int) min((arr_0 [i_14 - 2]), (arr_0 [i_14 - 1])))));
            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((arr_42 [i_14] [i_10] [i_10]), (arr_2 [i_10]))), (((/* implicit */unsigned long long int) arr_32 [i_14 - 2] [i_14 + 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((min((((/* implicit */signed char) arr_33 [i_10] [i_10] [i_10])), (arr_38 [i_10] [i_10] [i_14]))), (((/* implicit */signed char) ((_Bool) arr_38 [i_10] [i_10] [i_10]))))))) : (min((arr_5 [i_10] [i_14 + 1]), (arr_5 [i_10] [i_14 - 2]))))))));
            arr_43 [i_14] = ((/* implicit */unsigned long long int) ((unsigned char) min((arr_41 [i_14 - 2] [i_14]), (arr_41 [i_14 - 2] [i_14]))));
        }
    }
    var_31 = ((/* implicit */int) ((_Bool) ((int) var_9)));
}
