/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147436
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) ((((long long int) arr_1 [i_0])) < (((/* implicit */long long int) 1854859896U))));
        var_12 = ((/* implicit */_Bool) (+(min((((((/* implicit */_Bool) (unsigned short)48147)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) (+(arr_0 [i_0] [i_0]))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (var_10)))), (max((((/* implicit */long long int) (signed char)98)), (arr_0 [i_0] [(short)13]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (min((var_7), (((/* implicit */int) var_9)))))))));
        /* LoopNest 3 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((arr_1 [i_0]) > (var_2))))));
                        var_13 = ((/* implicit */short) max((var_10), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [(short)9])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 13; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 3; i_6 < 13; i_6 += 1) 
                {
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_4 - 2] [i_0])) != (((/* implicit */int) arr_8 [i_4 - 2] [i_0]))));
                        /* LoopSeq 3 */
                        for (int i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            arr_24 [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(-588911373)));
                            var_14 = ((/* implicit */long long int) (-2147483647 - 1));
                        }
                        for (long long int i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            var_15 *= ((/* implicit */unsigned long long int) arr_4 [i_0]);
                            arr_27 [1] [i_0] [(signed char)13] [1] [i_6] [i_0] [i_6] = ((((/* implicit */unsigned long long int) arr_9 [i_8] [13ULL] [(unsigned short)3])) - (((10596049442300843364ULL) / (1890078156986046109ULL))));
                            var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_14 [i_0] [i_0])), (((unsigned int) max((((/* implicit */unsigned long long int) var_10)), (arr_25 [i_4] [i_4] [i_4 - 2] [4] [i_4] [(signed char)0]))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            arr_30 [i_0] [i_0] [i_5] [i_0] [i_9] = ((/* implicit */unsigned int) var_5);
                            arr_31 [i_0] [i_0] [4LL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_2);
                            var_17 += ((/* implicit */int) arr_22 [i_9]);
                        }
                        var_18 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_11 [i_0] [i_4 - 1] [i_4 - 1] [(unsigned char)10])) ? (arr_12 [i_0] [i_4] [i_5] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0])))))))) ? (((((/* implicit */_Bool) arr_11 [i_6] [i_6 - 3] [5LL] [i_6 - 1])) ? (arr_5 [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) arr_4 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_5] [i_6])) >= (((/* implicit */int) (unsigned char)63))))) : (((/* implicit */int) ((var_10) > (((/* implicit */int) var_5))))))))));
                        arr_32 [i_0] [i_4] [(unsigned char)10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1172561061U)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44221)))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
    {
        arr_36 [i_10] = arr_35 [i_10];
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((int) var_2))) < (((((/* implicit */unsigned int) arr_33 [i_10] [i_10])) - (1172561061U))))))));
    }
    var_20 += ((/* implicit */unsigned long long int) var_5);
    var_21 = ((/* implicit */unsigned int) min((var_7), (var_6)));
}
