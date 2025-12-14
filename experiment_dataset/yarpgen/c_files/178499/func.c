/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178499
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
    var_11 = ((/* implicit */long long int) (!(var_0)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (((+((+(var_6))))) % ((-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)196))) * (318119089U))))))))));
                    arr_7 [i_1] [i_1] [(signed char)22] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 930373527)) ? ((+(985194236U))) : (((/* implicit */unsigned int) var_7)))) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_0 [i_2 + 1]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 1; i_3 < 21; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        {
                            arr_19 [i_4] [i_4] [1ULL] = ((/* implicit */short) -1731148581);
                            arr_20 [(short)16] [i_5] [i_5] [i_3] &= ((/* implicit */long long int) ((unsigned short) ((var_1) ^ (var_1))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_7 = 2; i_7 < 21; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        for (signed char i_9 = 0; i_9 < 23; i_9 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) (+(var_10)));
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (((~(((/* implicit */int) var_3)))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) : ((((+(((/* implicit */int) arr_0 [i_3])))) - (((((/* implicit */_Bool) arr_9 [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)39644))))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_27 [i_3 + 2] [i_3 + 2] [i_4] [i_4 - 2] [i_3] [i_3 + 1])))) + (min((var_4), (((/* implicit */long long int) ((unsigned short) arr_14 [i_4] [i_4] [i_4 + 2])))))));
                /* LoopSeq 2 */
                for (unsigned char i_10 = 1; i_10 < 22; i_10 += 4) 
                {
                    var_16 = ((/* implicit */unsigned char) arr_22 [i_3] [i_4] [(unsigned short)0]);
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 23; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 3; i_12 < 21; i_12 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) var_1);
                                arr_37 [i_10] [i_3] [i_10] [(unsigned short)1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) ^ (max(((~(arr_9 [i_12]))), (((/* implicit */int) var_3))))));
                            }
                        } 
                    } 
                    arr_38 [i_3 + 1] [i_10 + 1] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned short)59079)), (1753618634)));
                    arr_39 [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [(unsigned char)16] [(unsigned char)16] [i_4] [i_3])) ? (((((/* implicit */long long int) 985194222U)) - (var_4))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                }
                for (unsigned long long int i_13 = 1; i_13 < 22; i_13 += 4) 
                {
                    var_18 = ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_26 [i_3] [i_4] [18] [18] [(signed char)14]), (((/* implicit */unsigned char) arr_24 [i_13 - 1] [i_4])))))) : (((((/* implicit */_Bool) -1449396550698170801LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3 + 1]))) : (var_6))));
                    var_19 = ((/* implicit */unsigned int) var_0);
                }
            }
        } 
    } 
}
