/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130767
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_16)), (var_1)))) ? (((/* implicit */long long int) var_17)) : (min((var_13), (((/* implicit */long long int) var_3))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */signed char) var_0);
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (min((((/* implicit */long long int) var_16)), (var_13)))))) ? (max((((/* implicit */long long int) var_8)), (var_1))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), (min((((/* implicit */unsigned int) var_14)), (var_5))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 20; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_5 = 3; i_5 < 20; i_5 += 1) 
                    {
                        arr_17 [i_2] = ((/* implicit */int) var_9);
                        arr_18 [i_5] [i_2] [(signed char)1] [i_3] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((var_1), (((/* implicit */long long int) var_11)))), (max((var_13), (((/* implicit */long long int) var_2))))))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_3)), (var_9))))));
                    }
                    arr_19 [i_2] [i_2] [15] [i_2] = ((/* implicit */signed char) var_10);
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 2) 
                    {
                        for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_7)) ? (var_17) : (((/* implicit */int) var_10)))), (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) var_17)) : (var_1))))))));
                                arr_26 [i_7] [i_2] [(unsigned short)12] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_17)), (var_4)))) ? (((/* implicit */int) var_14)) : ((-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_9))))))));
                            }
                        } 
                    } 
                    var_21 = min((((/* implicit */long long int) var_14)), (var_4));
                    arr_27 [i_2] [i_4] [(short)4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (var_13)))) ? (var_13) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_16)), (var_11))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_8 = 0; i_8 < 18; i_8 += 4) 
    {
        for (short i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) 
            {
                {
                    arr_36 [i_8] [i_9] [i_10] [i_9] = ((/* implicit */unsigned char) var_4);
                    arr_37 [(_Bool)1] [(signed char)6] [(unsigned char)8] [(signed char)6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) var_15)) : (min((var_11), (((/* implicit */unsigned int) var_9))))))) ? (((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10)))))))));
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */signed char) min((((/* implicit */long long int) var_12)), (min((((/* implicit */long long int) (+(((/* implicit */int) var_7))))), (min((var_1), (((/* implicit */long long int) var_8))))))));
}
