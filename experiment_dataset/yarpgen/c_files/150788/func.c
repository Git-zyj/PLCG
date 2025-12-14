/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150788
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
    var_18 = ((((/* implicit */unsigned long long int) var_4)) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))) : (max((((/* implicit */unsigned long long int) var_0)), (var_16))))));
    var_19 = var_14;
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] = min(((~(var_4))), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_17)), (var_6)))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_3)))) < (((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_14)))))));
    }
    for (unsigned short i_1 = 2; i_1 < 10; i_1 += 3) 
    {
        arr_10 [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)48)) >= (((/* implicit */int) (signed char)(-127 - 1)))))) : (((/* implicit */int) var_3))))));
        var_20 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_1)) : (var_8)))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 10; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    arr_17 [i_2] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_11)))) <= (max((((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-25)))), (((var_7) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_5))))))));
                    var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((var_0) < (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), ((!(((/* implicit */_Bool) var_8))))))), (var_8)));
                    arr_18 [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_2)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_14)), (var_13))))))) ? (((/* implicit */int) (((+(((/* implicit */int) var_17)))) < (((/* implicit */int) ((var_8) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))) : ((-((~(((/* implicit */int) var_12))))))));
                    arr_19 [i_1 + 1] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)21)))))));
                }
            } 
        } 
        arr_20 [i_1] = ((/* implicit */int) var_15);
    }
    /* vectorizable */
    for (unsigned int i_4 = 2; i_4 < 16; i_4 += 3) 
    {
        var_22 = (+(var_0));
        /* LoopNest 2 */
        for (unsigned short i_5 = 3; i_5 < 13; i_5 += 3) 
        {
            for (unsigned short i_6 = 2; i_6 < 16; i_6 += 2) 
            {
                {
                    arr_29 [i_4] [i_4] [i_5] = ((/* implicit */unsigned long long int) (+(var_10)));
                    var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) <= (var_8)));
                }
            } 
        } 
        arr_30 [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)36186))));
        arr_31 [i_4] [i_4] = ((/* implicit */short) (~(((/* implicit */int) (signed char)-82))));
    }
}
