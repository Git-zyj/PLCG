/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123824
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
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((arr_6 [i_0] [i_1] [i_2]), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((int) var_19)))))) || (((/* implicit */_Bool) arr_5 [i_0] [i_0]))));
                    arr_8 [i_0] [i_0] = ((/* implicit */int) var_14);
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_21 ^= ((/* implicit */int) var_10);
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_10))));
                                var_23 = ((/* implicit */int) min((((short) max((((/* implicit */int) var_4)), (arr_12 [i_0] [(unsigned short)7] [i_2] [i_4 + 1])))), (((/* implicit */short) ((unsigned char) var_6)))));
                                arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) arr_4 [i_1])), (var_2)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) ((var_2) / (((/* implicit */long long int) min((((/* implicit */int) max((var_11), (((/* implicit */unsigned char) var_3))))), (((((/* implicit */int) var_15)) - (((/* implicit */int) var_12)))))))));
    /* LoopNest 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) ((short) var_3))) < (((/* implicit */int) ((signed char) var_0)))))) - (((((/* implicit */_Bool) var_17)) ? (((var_5) ? (var_18) : (((/* implicit */int) var_15)))) : (((/* implicit */int) var_1))))));
                                var_26 = ((/* implicit */unsigned short) min((var_26), (max((min((((/* implicit */unsigned short) var_5)), (max((((/* implicit */unsigned short) var_8)), (var_17))))), (((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_8))))))))));
                                var_27 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned char) var_16))))) ? (((int) var_12)) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)128))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) var_5))));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */short) var_9);
}
