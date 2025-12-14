/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183627
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
    /* LoopNest 3 */
    for (long long int i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) max((min((arr_3 [i_0] [i_0]), (((/* implicit */long long int) var_1)))), (arr_3 [i_2] [i_0])))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (arr_5 [i_0] [i_0] [i_2]) : (arr_5 [i_0] [i_0] [i_2]))) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81))) : (3498712065U)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) max((((/* implicit */unsigned int) max((min((((/* implicit */int) arr_4 [i_0 - 4] [i_4] [i_2])), (arr_8 [i_0 - 4] [i_1] [(unsigned short)0]))), (((/* implicit */int) ((274877906943LL) >= (((/* implicit */long long int) ((/* implicit */int) var_0))))))))), (max((arr_5 [i_0 - 4] [i_1] [i_0 - 2]), (796255231U))))))));
                                var_14 = ((/* implicit */unsigned long long int) max((((arr_3 [i_0] [i_0]) + (((/* implicit */long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_4))))))), (min((((/* implicit */long long int) min((var_5), (((/* implicit */unsigned int) arr_8 [i_4] [i_0] [i_4]))))), (max((arr_3 [i_0] [i_0]), (((/* implicit */long long int) arr_5 [i_2] [i_0] [i_4]))))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */signed char) arr_2 [i_0]);
                    var_16 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned short)8] [i_1] [i_2] [i_1]))) / (min((((/* implicit */long long int) min((arr_0 [i_0]), (var_8)))), (arr_3 [i_0 - 1] [i_1])))));
                    arr_10 [i_0] [i_1] [(_Bool)1] = ((/* implicit */_Bool) max((arr_8 [13ULL] [i_0] [i_2]), (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_2] [i_1])) : (((/* implicit */int) (signed char)104))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 3; i_5 < 13; i_5 += 2) 
    {
        for (long long int i_6 = 3; i_6 < 13; i_6 += 3) 
        {
            {
                arr_17 [i_5] [i_6] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned int) arr_15 [i_5]))), (max((((/* implicit */unsigned long long int) arr_7 [i_5] [i_5] [i_6] [i_6 + 1])), (min((((/* implicit */unsigned long long int) var_11)), (arr_1 [i_5] [i_6 + 3])))))));
                arr_18 [i_5] = ((/* implicit */unsigned char) ((arr_14 [i_5]) % (((unsigned long long int) (signed char)77))));
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_12 [i_5 - 2] [8LL])) != (max((((/* implicit */unsigned long long int) (signed char)-81)), (11072982729337422647ULL))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_7 = 1; i_7 < 16; i_7 += 4) 
    {
        for (unsigned int i_8 = 2; i_8 < 16; i_8 += 3) 
        {
            for (unsigned short i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((signed char) arr_19 [i_7] [i_8 + 1]))), (min((arr_21 [i_7]), (arr_22 [i_7])))))), (min((((((/* implicit */_Bool) arr_20 [i_7])) ? (arr_19 [i_7] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7] [i_7] [i_9]))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)-81)), (arr_24 [i_7] [i_7] [i_9]))))))));
                    var_19 &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) 1491381160)) ? (((/* implicit */unsigned long long int) -1)) : (16083667622427400358ULL))), (((/* implicit */unsigned long long int) (-(min((((/* implicit */int) arr_22 [i_9])), (arr_20 [i_9]))))))));
                    arr_26 [(unsigned short)7] [i_7] [i_9] [4] = ((/* implicit */long long int) (-(arr_20 [i_7])));
                    var_20 = ((/* implicit */signed char) arr_22 [i_7]);
                    arr_27 [i_7] [i_7] [i_7] = ((/* implicit */signed char) var_9);
                }
            } 
        } 
    } 
}
