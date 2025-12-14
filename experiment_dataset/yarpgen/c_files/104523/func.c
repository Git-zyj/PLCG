/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104523
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
    var_12 = ((/* implicit */signed char) ((var_2) / (((/* implicit */long long int) 1667085827U))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 6; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [i_2] [2ULL] [i_0] = ((/* implicit */short) var_0);
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
                            {
                                arr_14 [(signed char)9] [(signed char)9] [4ULL] [i_3] [i_3] [8ULL] [i_3] = ((((arr_2 [i_0 - 3]) - (2147483631))) != ((+(((/* implicit */int) arr_13 [i_0] [0] [i_2] [i_3] [i_4])))));
                                arr_15 [i_0] [i_0] [8U] [i_4] [i_4] [4ULL] [i_2] = ((/* implicit */short) (+(min((arr_5 [i_0 + 4] [i_0] [i_0] [i_0 + 2]), (arr_5 [i_0 - 2] [i_0] [i_0] [i_0 + 1])))));
                            }
                        }
                    } 
                } 
                arr_16 [i_0] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) var_8))))))) : (((((/* implicit */_Bool) (-(var_3)))) ? (((((/* implicit */unsigned int) var_3)) * (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_8))))))));
                arr_17 [i_1] = ((/* implicit */unsigned short) var_5);
                arr_18 [i_1] = ((/* implicit */unsigned long long int) var_3);
            }
        } 
    } 
    var_13 = (((~(((/* implicit */int) var_1)))) & (((/* implicit */int) var_0)));
    /* LoopNest 2 */
    for (short i_5 = 4; i_5 < 13; i_5 += 2) 
    {
        for (long long int i_6 = 1; i_6 < 12; i_6 += 4) 
        {
            {
                arr_24 [i_5] = ((/* implicit */unsigned long long int) ((short) (unsigned short)29979));
                arr_25 [i_5] [i_6] [i_6] = ((/* implicit */unsigned char) ((int) max(((~(((/* implicit */int) arr_21 [i_5] [i_6])))), (((((/* implicit */int) (unsigned short)35557)) | (((/* implicit */int) arr_20 [i_5])))))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 13; i_8 += 1) 
                    {
                        {
                            arr_30 [i_8] [i_7] [i_5] [i_6] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_5])) ? (((int) ((arr_29 [i_7] [i_5] [(signed char)7]) >> (((/* implicit */int) arr_21 [i_6] [i_7]))))) : (((/* implicit */int) (_Bool)1))));
                            arr_31 [i_5] [i_6] [i_7] [i_7] [i_6 + 3] [i_6] = ((/* implicit */signed char) var_5);
                        }
                    } 
                } 
                arr_32 [(unsigned short)13] = ((/* implicit */long long int) min((((((/* implicit */int) max((arr_27 [i_6]), (((/* implicit */unsigned short) arr_21 [i_5] [i_6]))))) | (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_8))))))), (((((var_9) != (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))));
            }
        } 
    } 
}
