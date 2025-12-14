/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121241
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((unsigned int) var_10))) ^ (((((/* implicit */unsigned long long int) max((68821701U), (((/* implicit */unsigned int) var_9))))) + (max((var_6), (((/* implicit */unsigned long long int) (short)4467))))))));
    var_12 = min((var_2), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-32755))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_4]))))) ? (((((/* implicit */_Bool) (unsigned short)15)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) (((_Bool)0) ? (arr_15 [i_0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0 - 3])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)130))) >= (16264413574473394384ULL))))))))))));
                                var_14 = ((/* implicit */signed char) arr_2 [i_0 + 2] [i_0 + 2]);
                            }
                        } 
                    } 
                } 
                var_15 &= ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) / (((((/* implicit */_Bool) 68821701U)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))), (((/* implicit */unsigned long long int) arr_4 [i_1 - 2] [i_1]))));
                var_16 = ((/* implicit */unsigned short) (_Bool)1);
                /* LoopNest 3 */
                for (unsigned int i_5 = 2; i_5 < 13; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        for (signed char i_7 = 3; i_7 < 13; i_7 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) min((((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (1081766676) : (((/* implicit */int) arr_0 [i_0 - 3])))))))), ((short)0)));
                                arr_25 [i_0] [i_0 - 2] [i_0 + 1] [i_6] [i_0 - 3] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_4))));
                                arr_26 [i_5] [i_1] [i_1] [i_6] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_2))));
                            }
                        } 
                    } 
                } 
                var_18 ^= ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) var_2)))));
            }
        } 
    } 
}
