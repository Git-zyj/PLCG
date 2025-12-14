/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109408
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) arr_0 [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)126)), (arr_0 [i_0 - 1]))))) : (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (var_6) : (13225890825249838923ULL)))));
                var_12 |= ((/* implicit */signed char) max(((~(arr_6 [i_0] [i_0 - 1] [i_0]))), (((/* implicit */long long int) min((var_3), (((/* implicit */short) (signed char)34)))))));
                arr_8 [i_0] [i_0] = (((((+(var_1))) / (((unsigned int) (unsigned short)2047)))) == (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 3; i_2 < 16; i_2 += 4) 
    {
        for (short i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            {
                arr_13 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) var_6);
                var_13 = ((/* implicit */signed char) max((max((arr_11 [i_2 - 1] [i_3]), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_2 - 1] [i_2])) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) arr_12 [i_2 - 1] [i_2])))))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        {
                            arr_21 [i_2] = ((/* implicit */_Bool) (-(((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4])))))));
                            var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) 13225890825249838918ULL)))));
                            var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_18 [i_4] [i_4] [i_2 - 3] [i_2] [i_2] [i_2])), (var_5)))) / (((unsigned long long int) arr_14 [i_2] [i_2 - 3] [i_2 + 2] [i_2 - 2]))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */long long int) ((((((/* implicit */int) ((unsigned char) var_10))) <= (((((/* implicit */int) arr_20 [i_2] [i_2] [i_2] [i_3] [i_3])) + (((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */short) var_9)), (var_3))), (arr_17 [i_3]))))) : ((+(max((arr_11 [i_2] [i_3]), (((/* implicit */unsigned long long int) var_7))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        for (unsigned long long int i_7 = 2; i_7 < 9; i_7 += 2) 
        {
            {
                arr_27 [i_6] = ((/* implicit */signed char) (unsigned char)139);
                arr_28 [i_6] = ((/* implicit */unsigned char) var_6);
                var_18 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_10 [i_7 + 2])) ? (((/* implicit */int) arr_10 [i_7 - 1])) : (((/* implicit */int) arr_10 [i_7 - 2])))) * (((((((/* implicit */_Bool) arr_11 [i_6] [i_7])) && (((/* implicit */_Bool) var_10)))) ? (5) : (max((((/* implicit */int) (unsigned char)116)), (var_5)))))));
                arr_29 [i_6] [i_7] [i_7] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((max((var_10), ((unsigned char)127))), (arr_22 [i_7 + 1] [i_7 - 1])))), (min((((/* implicit */unsigned long long int) var_9)), (arr_11 [i_7 - 1] [i_7])))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) var_5);
}
