/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149953
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
    for (long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_10 [(unsigned short)9] [i_1] [(unsigned short)9] [i_0] [i_1] [(unsigned short)19] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)28))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) : (((-5931566774653308030LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32)))))));
                            arr_11 [i_0 + 1] [i_0] [(unsigned short)11] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2] [i_0] [i_0])) + (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3])))) >= (((/* implicit */int) ((unsigned char) (short)2047)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) ((((int) var_0)) < (((((/* implicit */int) (unsigned short)0)) % (((/* implicit */int) arr_6 [i_0]))))))) : (((/* implicit */int) (((~(((/* implicit */int) var_1)))) == (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)15478))) < (2187917912465047300LL)))))))));
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_4])) ? ((+(((/* implicit */int) arr_0 [i_5])))) : (((/* implicit */int) ((signed char) 2LL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        {
                            arr_24 [i_7] [i_7] [i_7] [i_7] [i_0] = ((/* implicit */unsigned short) arr_19 [i_0] [(unsigned short)18] [i_1 + 3] [i_7]);
                            arr_25 [i_0] [(short)17] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [i_1] [i_1 + 3] [i_6] [i_1] [i_7] [i_0 + 1])) << (((min((((/* implicit */unsigned int) var_9)), (arr_13 [i_0] [i_1 + 3] [i_1 + 3]))) - (48995U)))));
                            arr_26 [i_0] [i_6] [14U] [i_7] &= ((/* implicit */int) 2187917912465047300LL);
                            arr_27 [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && (((/* implicit */_Bool) var_8))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 25; i_8 += 4) 
    {
        for (signed char i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
                {
                    for (int i_11 = 0; i_11 < 25; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 25; i_12 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_33 [i_9] [(signed char)4] [i_12]))))))));
                                var_20 = arr_33 [i_12] [(unsigned short)9] [i_8];
                                arr_39 [i_8] [i_12] [(_Bool)1] [i_11] [i_12] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_8])) + (((/* implicit */int) arr_29 [i_8])))))));
                                var_21 = ((/* implicit */unsigned short) var_16);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_13 = 1; i_13 < 23; i_13 += 4) 
                {
                    for (unsigned char i_14 = 0; i_14 < 25; i_14 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */int) ((arr_35 [i_13 + 1] [i_13 + 2] [i_14]) == (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)65530), (((/* implicit */unsigned short) var_11))))))))) - (((((/* implicit */_Bool) arr_36 [(unsigned short)21] [i_9] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) min((arr_41 [i_8]), (((/* implicit */unsigned short) arr_38 [i_8] [i_9] [i_13] [i_13] [i_13 + 1] [i_8] [i_8]))))) : (((/* implicit */int) arr_41 [i_8])))))))));
                            var_23 = ((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) var_14)))))) || (((/* implicit */_Bool) arr_36 [i_8] [i_9] [i_9] [i_13] [i_13 + 2] [i_14]))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_15 = 2; i_15 < 19; i_15 += 4) 
    {
        for (long long int i_16 = 0; i_16 < 20; i_16 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_17 = 0; i_17 < 20; i_17 += 2) 
                {
                    for (long long int i_18 = 0; i_18 < 20; i_18 += 4) 
                    {
                        for (unsigned short i_19 = 0; i_19 < 20; i_19 += 3) 
                        {
                            {
                                arr_56 [i_15] [i_15] [i_17] [i_17] &= ((/* implicit */long long int) ((((((/* implicit */int) arr_15 [i_15 - 1] [i_17] [i_15] [i_17])) >> (((/* implicit */int) (_Bool)1)))) | (((((/* implicit */int) arr_36 [i_15 - 1] [i_16] [i_15] [i_15] [i_19] [i_16])) << (((var_16) - (1961692552)))))));
                                var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_15] [i_15] [i_15])) && (((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (unsigned short)65534)) >= (((/* implicit */int) (unsigned short)21003))))))));
                                arr_57 [i_15] [i_18] [i_16] [i_16] [i_15] &= ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
                                var_25 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_15] [i_15] [i_18])) ? (min(((-(((/* implicit */int) var_13)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (arr_42 [(short)12] [(unsigned short)10] [i_15])))))) : (((/* implicit */int) (((-(((/* implicit */int) var_10)))) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) >= (8863792902741632182LL)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 20; i_20 += 4) 
                {
                    for (unsigned short i_21 = 0; i_21 < 20; i_21 += 3) 
                    {
                        {
                            arr_63 [i_15] [i_16] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_44 [i_21] [16LL] [(unsigned char)16] [i_21])) >= (((/* implicit */int) (signed char)-125))));
                            var_26 &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_19 [i_20] [i_15 + 1] [i_20] [4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_59 [i_15] [i_15 + 1] [i_15] [i_15]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_22 = 3; i_22 < 16; i_22 += 2) 
                {
                    for (signed char i_23 = 1; i_23 < 19; i_23 += 3) 
                    {
                        {
                            arr_69 [i_15] [i_15] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_11))));
                            var_27 &= (unsigned short)37343;
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_24 = 4; i_24 < 19; i_24 += 2) 
                {
                    for (unsigned char i_25 = 3; i_25 < 18; i_25 += 1) 
                    {
                        for (int i_26 = 1; i_26 < 19; i_26 += 4) 
                        {
                            {
                                var_28 = (short)7217;
                                arr_77 [0U] [0U] [0U] [i_25] [i_26] = ((/* implicit */short) arr_34 [i_16] [i_24 + 1] [i_25 - 3]);
                                var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [i_16] [i_24])) == (((((/* implicit */int) ((((/* implicit */int) arr_72 [i_15 - 2] [i_15] [i_15])) == (((/* implicit */int) arr_33 [i_16] [i_25 + 2] [i_16]))))) - (min((arr_42 [i_24 - 4] [i_24 - 4] [i_16]), (((/* implicit */int) var_14))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
