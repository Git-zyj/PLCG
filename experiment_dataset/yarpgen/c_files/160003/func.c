/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160003
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
    var_11 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-9))) <= (16818350952610079311ULL)))))), (var_6)));
    var_12 = ((/* implicit */unsigned char) ((((((/* implicit */long long int) (-(var_6)))) ^ ((-(var_9))))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_4)) > (-1647123169))))))));
    var_13 = ((/* implicit */signed char) (((((-(((/* implicit */int) (_Bool)1)))) | ((-2147483647 - 1)))) / (var_7)));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */int) var_5)) ^ (arr_0 [i_0])))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        arr_9 [i_3] [i_1] [i_1] = ((/* implicit */signed char) (unsigned short)16074);
                        arr_10 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_2] [i_3 + 1])) <= (var_2))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        var_14 = (-(2147483647));
                        arr_15 [i_1] [i_1] [i_1] [1ULL] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [(unsigned char)13]))))));
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        var_15 = ((/* implicit */signed char) var_3);
                        var_16 |= ((/* implicit */unsigned short) max((((((/* implicit */int) ((signed char) (-2147483647 - 1)))) < (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) (unsigned char)41))))))), (((((((/* implicit */unsigned long long int) 9223372036854775807LL)) | (var_0))) <= (((((/* implicit */unsigned long long int) -2961823738049046870LL)) + (var_2)))))));
                    }
                    var_17 = ((/* implicit */_Bool) (((-(arr_5 [i_1]))) >> ((((-(min((((/* implicit */unsigned long long int) (unsigned char)255)), (var_2))))) - (18446744073709551311ULL)))));
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (((-(var_0))) >> (((int) ((((/* implicit */long long int) var_6)) >= (var_3)))))))));
    }
}
