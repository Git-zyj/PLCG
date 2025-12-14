/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165436
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
    var_16 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_3))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2 - 3] = ((/* implicit */long long int) var_3);
                    var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_5), (var_2)))) && (((/* implicit */_Bool) max((arr_2 [i_1] [i_2]), (var_1))))))), (max((min((var_13), (((/* implicit */unsigned int) (unsigned char)118)))), (((/* implicit */unsigned int) arr_1 [i_1]))))));
                }
            } 
        } 
    } 
    var_18 = max((((/* implicit */unsigned int) (unsigned short)28608)), (3098000800U));
    /* LoopNest 2 */
    for (long long int i_3 = 4; i_3 < 12; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
        {
            {
                arr_13 [i_3] = ((/* implicit */unsigned char) 1196966506U);
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 3) 
                {
                    for (unsigned short i_6 = 1; i_6 < 12; i_6 += 1) 
                    {
                        {
                            arr_20 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */int) var_6)) ^ (((((/* implicit */_Bool) 1196966495U)) ? (((/* implicit */int) (unsigned short)36927)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
                            var_19 ^= var_0;
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    var_20 *= ((/* implicit */unsigned int) arr_11 [i_3 - 4] [i_3 - 4] [i_4]);
                    var_21 = ((/* implicit */unsigned short) ((3542805081U) <= (var_13)));
                    arr_23 [i_3] [i_3] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3])) && (((/* implicit */_Bool) var_9))))) / (((((/* implicit */_Bool) (unsigned short)28608)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-102))))));
                }
                /* vectorizable */
                for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    var_22 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_8] [i_3] [i_8]))));
                    arr_26 [i_3] [i_3] = (~(arr_22 [i_3] [i_3] [i_3 + 1]));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            {
                                arr_31 [i_3 - 4] [i_3] [i_8] [i_9] [i_10] [i_10] = ((unsigned int) var_14);
                                arr_32 [i_8] [i_8] [i_8] [i_8] [i_3] [i_8] = ((/* implicit */long long int) ((1196966486U) & (3098000787U)));
                                arr_33 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (~(((((/* implicit */long long int) arr_27 [i_3] [i_4] [i_8] [i_4] [i_10])) % (var_15)))));
                                var_23 -= ((/* implicit */signed char) (-(((/* implicit */int) arr_28 [i_9] [i_3 - 1] [i_3 - 1] [i_9]))));
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) (unsigned short)15567)) ? (((/* implicit */int) arr_25 [i_3] [i_3] [i_3 + 2] [i_3 + 2])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) >= (var_14)))))))));
                            }
                        } 
                    } 
                    arr_34 [i_8] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) 752162209U))));
                }
                var_26 *= ((/* implicit */unsigned short) (+((+((-(((/* implicit */int) (unsigned short)36927))))))));
            }
        } 
    } 
}
