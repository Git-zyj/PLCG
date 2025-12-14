/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186182
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
    var_13 = ((/* implicit */unsigned short) var_2);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [14] [i_1] [i_0] [i_3] [i_4] = ((/* implicit */signed char) -5576304335698579834LL);
                                arr_13 [i_0] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_3 + 1]))))), (((((/* implicit */_Bool) arr_0 [i_3 + 2])) ? (arr_0 [i_3 + 2]) : (((/* implicit */unsigned long long int) 5608521576871696529LL))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                var_14 += ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) var_11)) : ((~(min((3189688520U), (var_4)))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) 5576304335698579841LL)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32023))) - (5608521576871696529LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31)))))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 3; i_7 < 23; i_7 += 1) 
                    {
                        for (long long int i_8 = 1; i_8 < 24; i_8 += 3) 
                        {
                            {
                                arr_24 [i_0] [i_0] [i_0] [i_7] [i_8 - 1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((718341081797167793ULL), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) var_9)))), ((+(((/* implicit */int) arr_22 [i_8] [i_8] [i_8 - 1] [i_7] [i_7 + 2]))))));
                                var_17 -= ((/* implicit */signed char) ((((arr_10 [i_0] [i_0] [i_2] [i_7 - 3] [i_1]) > (arr_10 [i_0] [i_1] [i_2] [i_7 - 1] [i_8]))) ? (((arr_14 [i_7 + 1] [i_7]) >> (((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)60106))) | (-5576304335698579834LL))) + (5576304335698530628LL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5576304335698579841LL)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_0 [i_7])))) ? (arr_8 [i_7 - 1] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 1]) : (((int) (unsigned char)149)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_9 = 2; i_9 < 23; i_9 += 1) 
    {
        for (short i_10 = 0; i_10 < 25; i_10 += 3) 
        {
            for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        for (unsigned char i_13 = 0; i_13 < 25; i_13 += 3) 
                        {
                            {
                                var_18 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (var_11)))) ? (min((((/* implicit */long long int) (unsigned short)46971)), (5608521576871696529LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) arr_1 [(signed char)1])))))))) ? (((/* implicit */long long int) ((arr_8 [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9] [i_9 + 1]) & ((~(((/* implicit */int) (unsigned short)0))))))) : (((((/* implicit */_Bool) 8646911284551352320LL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_9 - 2] [i_9 - 2] [i_11] [i_11] [i_13] [i_10])) != (arr_41 [i_9 + 2] [i_10] [i_11] [i_12] [i_13] [4LL] [4LL])))))))));
                                arr_43 [i_9] [i_9] [i_11] [i_10] [i_11] = var_12;
                                arr_44 [i_10] [i_10] [i_11] [i_12] [i_9] = ((/* implicit */signed char) arr_37 [i_9] [i_11] [i_10] [i_11]);
                            }
                        } 
                    } 
                    arr_45 [i_10] [i_10] [i_10] [i_11] = arr_19 [i_9] [i_9 + 2];
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 25; i_15 += 3) 
                        {
                            {
                                arr_50 [i_10] = ((/* implicit */unsigned long long int) ((long long int) ((unsigned int) (-(((/* implicit */int) (unsigned char)38))))));
                                arr_51 [i_9] [i_15] [15LL] [i_14] [i_11] [i_10] [i_10] = ((/* implicit */long long int) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)22)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) var_6)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_11] [13LL] [i_11] [i_14] [i_15] [i_10] [i_15])))))))), (4194304U)));
                                var_19 = ((/* implicit */short) arr_49 [i_9] [i_14] [i_11] [i_14] [i_10] [i_14] [i_11]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_11) % (((/* implicit */int) var_1))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */int) var_7))))), ((+(-4769157992008269011LL))))) : (((/* implicit */long long int) var_4))));
}
