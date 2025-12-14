/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167044
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_12 += ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))), (-1)));
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)37)) ? (((unsigned long long int) (unsigned char)43)) : (((/* implicit */unsigned long long int) (-(var_0)))))), (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_2 [(signed char)0] [(signed char)0]) : (((/* implicit */unsigned int) -666750550))))))))));
                                arr_12 [(unsigned short)2] [i_1] [1LL] &= ((/* implicit */unsigned long long int) ((signed char) arr_3 [i_4 - 2] [i_4 - 3]));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_5 = 4; i_5 < 10; i_5 += 3) 
                {
                    for (short i_6 = 3; i_6 < 10; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_6] [i_1] [i_7] = ((/* implicit */signed char) min((((/* implicit */int) ((_Bool) var_9))), (max(((~(((/* implicit */int) arr_10 [i_6])))), (((/* implicit */int) (_Bool)0))))));
                                arr_22 [i_0] [i_0] [i_7] [i_6] [i_6] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) -666750550));
                                arr_23 [i_6] [i_6] = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 1) 
    {
        arr_26 [i_8] = ((/* implicit */short) ((((/* implicit */int) var_10)) & ((((_Bool)1) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (_Bool)1))))));
        arr_27 [i_8] = ((((min((((/* implicit */long long int) var_10)), (var_6))) < ((~(var_6))))) && (((/* implicit */_Bool) ((unsigned int) ((int) var_10)))));
        /* LoopSeq 1 */
        for (int i_9 = 2; i_9 < 9; i_9 += 3) 
        {
            arr_31 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_20 [5LL] [i_8] [i_8] [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_9 + 2]), (((/* implicit */int) (_Bool)1))))) ? (arr_20 [i_8] [i_8] [i_8] [i_9 - 2] [i_9 - 2] [i_9 - 2] [i_9 - 2]) : (max((((/* implicit */int) (short)7215)), (arr_20 [i_8] [i_8] [i_8] [i_9 - 2] [i_9 - 2] [i_9 - 2] [0LL])))));
            arr_32 [i_8] = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) arr_14 [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1])))));
            arr_33 [i_9 - 2] [i_8] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */int) (short)-8595)) * (((/* implicit */int) (short)30442))))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((((/* implicit */_Bool) arr_7 [(unsigned short)2])) ? (((/* implicit */int) arr_16 [i_8] [i_9] [i_9 - 2] [i_8])) : (((/* implicit */int) arr_18 [i_8] [i_8] [i_9] [i_8] [i_9]))))))));
            arr_34 [i_8] [(_Bool)1] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_25 [(unsigned short)2] [4ULL]))));
        }
    }
}
