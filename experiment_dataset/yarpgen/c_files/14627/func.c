/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14627
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
    var_10 += ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((signed char) var_1))), (min((((/* implicit */unsigned long long int) var_2)), (4794235856004105919ULL))))) < (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))), (var_6))))));
    var_11 = ((/* implicit */unsigned char) var_5);
    var_12 = ((/* implicit */int) ((long long int) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-1291)) : (((/* implicit */int) var_0))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 7; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                            {
                                var_13 = ((/* implicit */short) ((_Bool) min((arr_6 [i_0] [i_0] [i_2] [i_2]), (((/* implicit */short) var_3)))));
                                var_14 = ((/* implicit */long long int) arr_11 [i_0] [i_1] [i_2] [(unsigned short)7] [i_3] [i_3] [i_3]);
                            }
                            /* LoopSeq 1 */
                            for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                            {
                                arr_15 [i_0] [i_0 - 2] [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) var_4);
                                arr_16 [i_0] [i_0] [i_0] [6LL] [i_0] [i_5] [6LL] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) ((var_6) / (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) != (((long long int) arr_14 [i_0] [i_2] [(signed char)1] [i_3] [i_0])))));
                                var_15 = ((/* implicit */unsigned int) (-(((((/* implicit */long long int) arr_2 [i_0])) | (arr_3 [i_0 - 1])))));
                                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_7 [i_1])), (var_1))))))))))));
                            }
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) (+(((unsigned int) ((125829120) == (((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (short i_6 = 2; i_6 < 9; i_6 += 3) 
                {
                    for (unsigned int i_7 = 1; i_7 < 8; i_7 += 3) 
                    {
                        {
                            arr_22 [i_0] [i_0] [i_6 - 2] [i_0] [i_7 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_21 [i_0 - 2] [i_1] [i_6] [i_7])) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [(_Bool)1] [i_7 + 2] [5] [i_1 + 1])) : (((int) var_3)))) / (((/* implicit */int) var_0))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
                            {
                                var_18 = ((/* implicit */_Bool) (-(((unsigned long long int) var_4))));
                                arr_25 [i_0] [i_8] [i_7 - 1] [i_7] [i_6] [i_1 + 1] [i_0] = ((arr_20 [i_0] [i_1]) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [(_Bool)1] [i_1 + 3] [i_1] [(_Bool)1] [i_1 + 1])) ? (((/* implicit */int) (unsigned char)154)) : (var_1)))));
                                var_19 = ((/* implicit */int) (((+(((/* implicit */int) var_7)))) != (((/* implicit */int) ((((/* implicit */long long int) arr_4 [i_0])) < (7344434277163763896LL))))));
                                arr_26 [i_1] [i_1 + 1] [i_6] [i_7] [i_1 + 1] |= ((/* implicit */int) ((((/* implicit */int) arr_23 [i_0] [i_6 - 2] [i_1])) <= (((/* implicit */int) arr_6 [i_1] [i_0 - 2] [i_1 - 4] [i_7 - 1]))));
                            }
                            arr_27 [i_0] [i_0] = (((!(((/* implicit */_Bool) ((int) arr_0 [i_0]))))) ? ((-(((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) arr_5 [(unsigned char)0] [(_Bool)1] [i_0] [i_7]))))))) : (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (var_2))), (((/* implicit */int) arr_6 [i_0] [2U] [i_6] [i_7])))));
                            arr_28 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (((max((((/* implicit */int) arr_10 [i_7] [i_0] [i_0] [i_0])), (var_4))) | (min((1913149469), (((/* implicit */int) var_7))))))));
                            arr_29 [i_0] [i_1] [(unsigned char)4] [i_0] [i_7 - 1] = ((/* implicit */unsigned long long int) ((unsigned int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (arr_20 [i_0] [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
