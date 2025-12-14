/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139559
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
    var_11 = ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) (unsigned char)126)))));
    var_12 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_9))))) || (((/* implicit */_Bool) var_1))))), (((((/* implicit */unsigned int) max((((/* implicit */int) (short)-26105)), (var_2)))) & (max((3152376023U), (3087422101U)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((arr_8 [i_0] [i_0] [i_0] [(signed char)10]), (((/* implicit */long long int) arr_6 [i_1] [i_1] [i_1]))))) ? (((/* implicit */long long int) (-(var_2)))) : (((288230376151711743LL) / (((/* implicit */long long int) ((/* implicit */int) var_9))))))) << (((((((/* implicit */unsigned long long int) (~(arr_2 [i_1])))) | ((~(var_0))))) - (9717046001600026591ULL)))));
                            var_14 &= ((/* implicit */short) ((unsigned int) (~(((arr_2 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [(short)14]))))))));
                        }
                    } 
                } 
                var_15 ^= ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_1])) + (((/* implicit */int) arr_9 [i_0] [i_0] [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 3; i_4 < 16; i_4 += 1) 
    {
        for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 4) 
                {
                    for (unsigned int i_7 = 2; i_7 < 14; i_7 += 4) 
                    {
                        for (int i_8 = 0; i_8 < 17; i_8 += 4) 
                        {
                            {
                                var_16 *= ((/* implicit */signed char) max((((/* implicit */int) max(((short)3819), ((short)9061)))), (((((/* implicit */int) max((var_10), (arr_13 [i_8] [i_8])))) & (((/* implicit */int) ((unsigned char) arr_6 [i_8] [i_6] [i_5])))))));
                                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [8LL] [i_5])) / (((/* implicit */int) (short)16240))))) ? (((/* implicit */int) arr_4 [i_7 + 3] [i_6 - 2])) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_16 [(short)3] [i_7] [i_4])), (arr_10 [i_5] [i_5] [i_7])))))))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) arr_20 [i_4 + 1] [i_4] [i_4 - 2] [i_4 + 1] [i_4 - 3])) + (((/* implicit */int) ((unsigned char) arr_7 [i_4] [i_5]))))));
                arr_25 [i_4] = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-28633)) > (var_2))))) : (min((var_7), (((/* implicit */unsigned int) arr_20 [(short)6] [i_5] [i_5] [i_5] [15U])))))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_7 [i_4] [i_4 - 1]) <= (((/* implicit */int) (short)-26109))))))))));
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_5] [i_4] [i_4])) & ((((-(var_2))) & (((/* implicit */int) ((signed char) (short)-28645))))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_9 = 1; i_9 < 9; i_9 += 3) 
    {
        for (short i_10 = 0; i_10 < 11; i_10 += 4) 
        {
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */signed char) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_11] [i_11] [9] [i_9 - 1] [i_9])))))), (arr_31 [i_9 + 1] [i_9 + 2] [i_9 + 2] [i_9 + 2])))) * (((/* implicit */int) (((!(((/* implicit */_Bool) 2236115726U)))) && (((/* implicit */_Bool) ((unsigned short) var_2)))))))))));
                    arr_33 [i_11] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) ((long long int) max((((((/* implicit */_Bool) (short)28615)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_9] [10U] [i_10] [i_11]))) : (var_0))), (((/* implicit */unsigned long long int) (+(arr_12 [i_10] [i_11])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 1) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */short) var_3);
                                var_22 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)26058)), (4294967274U)));
                                var_23 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_34 [i_13] [i_10] [i_10] [i_9 + 1]), (var_5)))) ? (((/* implicit */int) (unsigned short)26051)) : (((((/* implicit */int) var_4)) << (((var_5) - (1068518450)))))))) % (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-28636))))) | (min((11832672888735121635ULL), (((/* implicit */unsigned long long int) arr_3 [i_11] [i_12]))))))));
                            }
                        } 
                    } 
                    var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_9 + 2]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (signed char)-70)) || (((/* implicit */_Bool) (signed char)-118)))))) : (min((6614071184974429985ULL), (((/* implicit */unsigned long long int) arr_4 [i_9] [(signed char)8]))))));
                }
            } 
        } 
    } 
}
