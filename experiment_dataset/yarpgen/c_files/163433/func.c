/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163433
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
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) max((var_9), (((/* implicit */short) var_16))))), ((~(((/* implicit */int) var_18)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) ((((var_17) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_3 [i_1] [i_1]), (((/* implicit */short) var_1))))))))));
                /* LoopSeq 4 */
                for (unsigned int i_2 = 4; i_2 < 14; i_2 += 2) 
                {
                    var_21 &= ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned char)59)), (11349221827206347798ULL)));
                    var_22 += ((/* implicit */int) arr_2 [i_1] [i_1 - 1]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                arr_11 [i_1] [i_4] = ((/* implicit */unsigned char) max((((signed char) 5289361979780443151ULL)), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1 - 1])))))));
                                var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((((/* implicit */short) arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1])), (var_11))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */unsigned long long int) ((786398146) >> (((18446726481523507200ULL) - (18446726481523507173ULL)))));
                }
                for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 1) 
                {
                    var_25 -= ((/* implicit */long long int) max(((unsigned short)32045), ((unsigned short)12609)));
                    arr_16 [7U] [7U] [(unsigned char)5] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((max((arr_5 [8U] [8U] [i_1] [8U]), (((/* implicit */short) arr_7 [i_1] [(short)1] [i_1] [i_1])))), (((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1]))))))))));
                }
                for (signed char i_6 = 4; i_6 < 15; i_6 += 2) 
                {
                    var_26 = ((/* implicit */unsigned char) arr_7 [i_0] [i_0] [i_0] [i_1]);
                    var_27 = ((/* implicit */unsigned int) max((var_0), (((/* implicit */int) arr_8 [i_0] [i_0] [4ULL] [i_0] [i_0 + 1] [i_0]))));
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (~(((((/* implicit */_Bool) arr_15 [i_0 + 1] [i_0 + 1] [i_6] [i_6])) ? (((/* implicit */int) arr_5 [i_0 + 2] [i_1 - 1] [i_1 - 1] [i_0 + 2])) : (((/* implicit */int) arr_5 [i_0 - 4] [i_1] [i_1] [i_1])))))))));
                }
                for (unsigned int i_7 = 1; i_7 < 15; i_7 += 4) 
                {
                    var_29 = ((/* implicit */_Bool) max((var_29), ((!(((/* implicit */_Bool) ((((/* implicit */int) max((var_3), (var_6)))) * (((/* implicit */int) var_3)))))))));
                    arr_22 [i_1] = ((/* implicit */long long int) var_11);
                    var_30 = ((/* implicit */long long int) max((7097522246503203818ULL), (3146808726671541309ULL)));
                }
                /* LoopNest 3 */
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    for (short i_9 = 3; i_9 < 15; i_9 += 3) 
                    {
                        for (signed char i_10 = 1; i_10 < 14; i_10 += 2) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_3 [i_1] [i_1]))))), (arr_19 [i_1] [i_1] [i_1])));
                                arr_30 [i_0 + 1] [10U] [(_Bool)0] [i_8] [10U] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_7)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))))) : (((arr_23 [8ULL] [8ULL]) ? (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_28 [i_0 - 4] [i_1 - 1] [i_1] [i_8] [i_0] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_8] [(signed char)8])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 3 */
    for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 3) 
    {
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
        {
            for (unsigned char i_13 = 0; i_13 < 15; i_13 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_14 = 3; i_14 < 14; i_14 += 4) 
                    {
                        for (int i_15 = 3; i_15 < 13; i_15 += 3) 
                        {
                            {
                                arr_43 [i_11] [i_12] [8ULL] [8ULL] [i_11] = ((/* implicit */int) max((arr_8 [i_15 - 2] [(unsigned short)11] [i_15] [i_14 + 1] [i_12 + 1] [i_12 + 1]), (max((arr_8 [i_15 - 1] [i_14 - 1] [i_14 + 1] [i_14 + 1] [i_12 + 1] [i_12 + 1]), (arr_8 [i_15 + 2] [i_12 + 1] [i_15 - 2] [i_14 - 3] [i_12 + 1] [i_12 + 1])))));
                                var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) max((max((arr_12 [i_14 - 3] [i_15 + 2]), (arr_12 [i_14 - 1] [i_15 + 1]))), (((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) var_9)))))))))));
                            }
                        } 
                    } 
                    var_34 *= ((/* implicit */short) ((int) max((arr_23 [i_12 + 1] [i_12 + 1]), (arr_23 [i_12 + 1] [i_12 + 1]))));
                }
            } 
        } 
    } 
}
