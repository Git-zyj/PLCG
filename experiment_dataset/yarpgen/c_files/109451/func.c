/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109451
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [3U] [i_0] [(unsigned short)11] = ((/* implicit */short) min((max((arr_2 [i_2] [i_0]), (arr_2 [i_2] [i_0]))), (((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)72))) : (arr_2 [i_0] [i_0])))));
                    arr_8 [(_Bool)1] [i_2] &= ((/* implicit */int) min((3477180647U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(arr_1 [4U])))))))));
                    var_17 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)28))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        for (int i_4 = 2; i_4 < 16; i_4 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    arr_18 [i_5] [i_4] [i_5] = -1;
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            {
                                arr_24 [i_3] [i_4] [(signed char)16] [i_5] [4ULL] [i_7] [i_7] |= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((36028797018963967LL) != (((/* implicit */long long int) ((/* implicit */int) (signed char)72))))))) / (((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42472))) : (-36028797018963967LL))))));
                                arr_25 [i_5] [i_4] [i_4] = ((/* implicit */int) ((((((arr_9 [i_4]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_3] [i_4]))))) || (((/* implicit */_Bool) arr_23 [i_5] [i_4] [i_3])))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (arr_19 [i_4 - 1] [i_6] [(_Bool)1] [i_7] [i_7] [i_7]) : (((((/* implicit */_Bool) arr_15 [(_Bool)1] [i_6] [i_7])) ? (arr_1 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [(short)4] [(short)15] [i_5] [1U] [i_5] [(unsigned char)3]))))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_3] [i_4] [i_4 + 1])))))));
                            }
                        } 
                    } 
                }
                for (int i_8 = 2; i_8 < 16; i_8 += 2) 
                {
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) min((max((13724530132065590560ULL), ((+(arr_30 [(short)11] [15] [15] [i_10]))))), (((/* implicit */unsigned long long int) ((unsigned char) 948810745)))));
                                var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_3 [i_9] [i_4] [i_10]), (arr_3 [i_9] [i_4] [i_8 - 1]))))) & (((((/* implicit */_Bool) ((1652606087) | (((/* implicit */int) arr_26 [i_8]))))) ? (max((((/* implicit */unsigned long long int) arr_23 [i_9] [i_9] [i_9])), (arr_28 [i_9] [i_9] [(short)4] [i_9]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -1LL))))))));
                                var_20 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned int) 0)) < (min((arr_23 [i_9] [(signed char)16] [(unsigned short)7]), (((/* implicit */unsigned int) (unsigned short)44528))))))), (max((-140737488355328LL), (((/* implicit */long long int) max((arr_29 [i_3] [16] [i_8] [2] [0U] [i_3]), (-1))))))));
                                var_21 *= ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) ((signed char) arr_23 [i_10] [i_10] [i_10]))), (min((((/* implicit */unsigned long long int) var_3)), (1820012054482161092ULL))))), (((/* implicit */unsigned long long int) arr_22 [i_8 + 1] [15]))));
                                arr_33 [i_9] [i_9] = ((/* implicit */signed char) max((((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_3] [i_4 - 1] [13]))))), (((((/* implicit */_Bool) arr_15 [i_8 - 2] [i_8 - 2] [i_8 + 1])) ? (arr_15 [i_8 + 1] [i_8 - 1] [i_8 - 1]) : (arr_15 [i_8 + 1] [i_8 - 2] [i_8 - 1])))));
                            }
                        } 
                    } 
                    arr_34 [3ULL] [13U] [i_4] [(unsigned char)4] = ((/* implicit */long long int) (~(197916823)));
                    var_22 = (-(max((min((((/* implicit */unsigned long long int) 475888489)), (arr_31 [i_3] [3ULL] [i_8] [(signed char)0] [i_4] [(unsigned char)6] [i_3]))), (((/* implicit */unsigned long long int) max((36028797018963967LL), (((/* implicit */long long int) (_Bool)1))))))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((arr_31 [i_3] [i_8] [i_8] [(unsigned char)10] [(unsigned short)16] [i_3] [(short)16]), (((/* implicit */unsigned long long int) var_2))))) && (((/* implicit */_Bool) ((short) -3174218509776989803LL))))))) <= (((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4 - 2] [(short)2]))) & (arr_15 [i_3] [i_8 + 1] [i_8])))));
                }
                for (long long int i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    var_24 = ((/* implicit */long long int) min((var_24), (max((((/* implicit */long long int) ((int) 575790405))), (36028797018963967LL)))));
                    /* LoopNest 2 */
                    for (signed char i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        for (int i_13 = 0; i_13 < 17; i_13 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((((((/* implicit */_Bool) -713033845)) ? (((/* implicit */int) (short)1712)) : (((/* implicit */int) arr_26 [i_13])))) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_3] [i_4] [(short)2]))))) ? (((int) arr_22 [i_3] [i_4])) : (((/* implicit */int) arr_35 [i_4 - 2]))))) : (min((arr_2 [i_4 + 1] [i_4]), (((/* implicit */unsigned int) arr_6 [(_Bool)0] [i_12] [i_12])))))))));
                                var_26 = ((/* implicit */_Bool) min((var_26), (((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_39 [i_13] [i_12] [(_Bool)1] [i_4 - 1] [i_3])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_40 [(signed char)0] [i_12] [i_13]))))))) <= (min((min((((/* implicit */unsigned long long int) (signed char)-44)), (arr_17 [i_13] [i_12] [i_11]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_11] [i_13] [i_4])) ? (((/* implicit */int) (short)-13690)) : (arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] [(_Bool)1]))))))))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_14 = 0; i_14 < 17; i_14 += 1) 
                {
                    /* LoopNest 2 */
                    for (signed char i_15 = 4; i_15 < 15; i_15 += 3) 
                    {
                        for (signed char i_16 = 4; i_16 < 15; i_16 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_41 [i_15] [i_15] [i_14] [i_16] [(_Bool)1] [(unsigned short)8] [i_16]), (((/* implicit */unsigned int) arr_11 [i_15 + 1] [i_15 - 3]))))) ? (min((arr_41 [i_3] [i_3] [i_14] [10] [i_14] [(short)11] [i_15]), (arr_41 [i_3] [i_15] [i_14] [i_15] [(unsigned char)0] [i_16] [i_16]))) : (max((((/* implicit */unsigned int) (signed char)98)), (arr_41 [(unsigned char)7] [13] [i_14] [(signed char)1] [i_15] [i_16] [i_16])))));
                                arr_52 [i_4] [(unsigned char)14] [(signed char)12] [i_15] [i_16] [i_14] [(unsigned char)14] |= ((/* implicit */int) ((max((((/* implicit */long long int) (+(((/* implicit */int) arr_11 [(signed char)2] [i_3]))))), (((-3174218509776989803LL) + (arr_50 [(unsigned short)4] [i_4] [(unsigned short)13] [i_4] [i_4] [i_4]))))) - (((/* implicit */long long int) ((((/* implicit */int) (short)-19423)) - (((((/* implicit */_Bool) (signed char)-1)) ? (arr_48 [i_3] [i_3] [i_3] [i_3]) : (((/* implicit */int) arr_11 [(unsigned char)8] [i_16])))))))));
                                arr_53 [5LL] [i_14] [(unsigned char)6] [i_15] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((arr_48 [i_3] [(signed char)6] [i_4] [(_Bool)1]) / (((/* implicit */int) arr_22 [i_4] [i_16])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_17 = 2; i_17 < 16; i_17 += 1) 
                    {
                        for (signed char i_18 = 0; i_18 < 17; i_18 += 2) 
                        {
                            {
                                arr_59 [i_3] [i_14] [9ULL] [(_Bool)0] [i_18] [(short)10] = min((((/* implicit */int) ((_Bool) arr_22 [i_4 - 2] [i_4]))), (((((/* implicit */int) arr_22 [i_4 - 2] [i_4])) - (((/* implicit */int) arr_22 [i_4 + 1] [i_4])))));
                                var_28 = ((/* implicit */long long int) (~(((arr_30 [i_4 - 1] [i_4] [i_17 - 1] [i_18]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_4 - 1] [i_18] [8U])))))));
                                arr_60 [i_14] [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((unsigned short) 7)))) ? (min((-1111767102), (((((/* implicit */_Bool) (short)-27981)) ? (-99867816) : (((/* implicit */int) (unsigned char)107)))))) : (arr_6 [i_14] [i_17] [i_14])));
                            }
                        } 
                    } 
                }
                var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) arr_38 [i_3] [(_Bool)1] [(unsigned char)8] [i_4]))));
            }
        } 
    } 
    var_30 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) min((-835811226), (310341430)))))))) ^ (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) ^ (10299741923687300922ULL))), (((/* implicit */unsigned long long int) min(((unsigned char)31), (((/* implicit */unsigned char) (signed char)60)))))))));
}
