/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157048
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
    var_13 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((var_10) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_4)))) && (((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_11)))))))) : (max((((var_11) - (var_7))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3)))))))));
    var_14 = ((/* implicit */unsigned long long int) (-(var_7)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) ((var_5) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((-(((((/* implicit */long long int) var_1)) + (var_7)))))));
                                arr_15 [i_0] [i_3] [i_2] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((var_5) ? (((/* implicit */unsigned long long int) var_1)) : (var_6)))) ? (((11920482995245876423ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8192))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_11)))))), (((/* implicit */unsigned long long int) var_1))));
                                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) >= (var_9))) ? (arr_5 [0ULL] [0ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || ((_Bool)1))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_2] [i_4] [i_1] [(_Bool)1] [(short)8])) ? (((/* implicit */int) arr_13 [i_3] [i_3] [i_4] [i_4 + 1] [i_4] [(short)12] [i_4])) : (((/* implicit */int) var_3))))))))));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4] [i_2] [5ULL] [i_2] [11LL])) ? (((/* implicit */long long int) ((unsigned int) arr_9 [9LL] [i_1] [i_2]))) : (((var_11) + (((/* implicit */long long int) var_1))))))) && (arr_9 [i_1] [15LL] [i_4])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    for (short i_6 = 2; i_6 < 16; i_6 += 4) 
                    {
                        for (short i_7 = 1; i_7 < 15; i_7 += 3) 
                        {
                            {
                                arr_24 [(short)11] [i_1] [i_1] [i_1] [i_0] [i_1 + 1] [i_1 - 1] = ((/* implicit */signed char) arr_5 [i_0] [i_0]);
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) ? (var_11) : (var_7)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) > (var_11)))) : (((/* implicit */int) ((unsigned short) var_2)))))) ? (((((/* implicit */int) ((_Bool) var_12))) + (((((/* implicit */int) arr_2 [i_0])) | (((/* implicit */int) var_4)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))));
                            }
                        } 
                    } 
                } 
                arr_25 [i_0] = ((/* implicit */signed char) (-(9223372036854775807ULL)));
            }
        } 
    } 
}
