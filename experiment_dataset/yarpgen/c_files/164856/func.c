/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164856
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (max((((/* implicit */unsigned long long int) arr_4 [(unsigned char)10])), (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 - 1])))))) ? (min(((~(arr_3 [i_2] [i_0]))), (((((/* implicit */_Bool) arr_6 [5])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_7 [i_0])))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                    arr_8 [i_0] [i_1] [i_0] &= ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_6 [i_1])))), (((/* implicit */int) (_Bool)0))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -390633293)) ? (((/* implicit */int) ((((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) (unsigned char)190)))) && ((!(((/* implicit */_Bool) var_4))))))) : (((((/* implicit */_Bool) arr_3 [i_1 + 3] [i_1 - 1])) ? ((((_Bool)0) ? (-1213846312) : (((/* implicit */int) var_5)))) : (((/* implicit */int) min(((unsigned char)1), (arr_5 [i_0] [i_0] [(unsigned short)11] [i_0]))))))));
                    arr_9 [i_2] [i_1 + 3] [i_2] = arr_0 [i_1];
                }
                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned char)252))) ? ((-((~(var_10))))) : (((/* implicit */int) arr_5 [i_1 - 2] [i_1] [i_0] [i_0]))));
                var_24 ^= 2147483647;
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 10; i_3 += 2) 
    {
        for (unsigned int i_4 = 3; i_4 < 8; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 11; i_7 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_3 - 1])) ? (((/* implicit */int) arr_15 [i_3 - 1] [i_4 - 2])) : (-311237493)))) ? (((arr_18 [i_3 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3 - 1] [i_4 - 2]))))) : (((((/* implicit */_Bool) arr_15 [i_3 - 1] [i_4 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3 - 1] [i_4 - 2]))) : (arr_18 [i_3 - 1]))))))));
                                var_26 = ((/* implicit */_Bool) arr_26 [i_3] [i_3] [i_3 - 1]);
                                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                    var_28 ^= ((/* implicit */short) (-((+(((-2147483641) & (((/* implicit */int) var_19))))))));
                    var_29 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)46348))));
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(255502700)))) ? (((/* implicit */long long int) (~(arr_17 [i_4 - 3] [i_4] [i_4 - 3])))) : (((((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)179))) : (arr_19 [i_4]))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_3 - 1] [i_3 - 1] [i_4])) ? (((/* implicit */int) (unsigned char)59)) : (2147483647))))))));
                }
            } 
        } 
    } 
    var_31 = var_10;
}
