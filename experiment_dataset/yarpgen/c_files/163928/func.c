/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163928
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
    var_13 = ((/* implicit */unsigned short) ((var_10) | (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))))));
    var_14 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) && (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) && (arr_4 [i_0] [i_0])))));
                arr_7 [(unsigned char)2] [i_0] = ((/* implicit */long long int) (_Bool)1);
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) max((var_7), (((/* implicit */unsigned int) arr_11 [i_0]))))))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                            {
                                arr_16 [i_0] = ((/* implicit */unsigned short) 16777215ULL);
                                arr_17 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_2 + 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (var_9))))));
                                arr_18 [i_0] [i_0] [i_0] [i_2] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)30241)) && (((/* implicit */_Bool) arr_12 [14U] [(unsigned short)2] [i_0] [i_4] [i_0] [(unsigned char)10])))) ? (((((/* implicit */_Bool) (unsigned short)35294)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))) : (var_10)));
                            }
                            /* vectorizable */
                            for (short i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
                            {
                                arr_23 [i_0] = ((/* implicit */unsigned int) ((arr_15 [i_2 - 2] [i_2] [i_2 + 2] [i_2 - 1] [i_2 - 2]) | (((/* implicit */int) (_Bool)0))));
                                arr_24 [(unsigned char)8] [i_0] [i_2] [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_21 [(signed char)8] [i_2 - 2] [i_2 + 2] [i_0])) | (((/* implicit */int) arr_21 [i_2] [i_2 - 2] [i_2 + 2] [i_0]))));
                                arr_25 [i_0] [(unsigned short)14] [i_2] [i_0] [(short)10] = var_9;
                            }
                            for (short i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                            {
                                arr_30 [i_0] [i_0] [i_0] [i_0] [6] [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2 + 1] [i_2 - 2] [i_2 - 1])) && (((/* implicit */_Bool) arr_10 [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 14)) && (((/* implicit */_Bool) arr_10 [i_2 - 1] [i_2 - 2] [i_2 - 2] [i_2 + 1]))))) : (((((/* implicit */int) var_2)) * (((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 2] [i_2 + 1] [i_2 - 2]))))));
                                arr_31 [i_0] [i_0] [i_0] [i_0] [0LL] [(_Bool)1] = ((/* implicit */int) arr_10 [9U] [9U] [i_2] [9U]);
                                arr_32 [i_0] = ((/* implicit */short) ((unsigned long long int) (_Bool)1));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
