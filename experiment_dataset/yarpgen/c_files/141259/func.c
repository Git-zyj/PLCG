/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141259
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
    var_12 = (+(((((/* implicit */_Bool) ((var_3) - (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (var_6) : (((/* implicit */long long int) (-(((/* implicit */int) (short)-2092))))))));
    var_13 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 15; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_3] [i_2 - 1] [i_2 - 1] [i_3] = ((/* implicit */unsigned char) var_8);
                            arr_13 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_8 [i_1] [i_1] [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2 + 1]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2091)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65532))) : (arr_8 [(unsigned short)3] [(unsigned char)6] [(unsigned char)6])))) ? (((/* implicit */int) max((((/* implicit */short) var_7)), ((short)2092)))) : (((/* implicit */int) var_4))))));
                        }
                    } 
                } 
                arr_14 [i_0] [(short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) 1828502603838157143LL)))))) ? (((((/* implicit */_Bool) 4294967295U)) ? (6639899236636988034ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1828502603838157149LL)) ? (-3406804365826861233LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)85)))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0)))))));
                var_14 = ((/* implicit */unsigned char) (-((((-(((/* implicit */int) (unsigned short)13220)))) - ((-(((/* implicit */int) (unsigned char)249))))))));
                arr_15 [i_0] = var_1;
            }
        } 
    } 
}
