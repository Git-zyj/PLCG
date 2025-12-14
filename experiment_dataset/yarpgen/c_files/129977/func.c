/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129977
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */int) var_13)), (max((((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_16)))), (((/* implicit */int) ((var_12) == (((/* implicit */long long int) ((/* implicit */int) var_7))))))))));
                    arr_9 [i_0] [i_0] [i_0] = var_15;
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_17);
                    var_18 = ((/* implicit */long long int) var_16);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (short i_7 = 1; i_7 < 8; i_7 += 1) 
                        {
                            {
                                arr_23 [i_3] [i_6] [i_3] [i_6] [i_3] = ((/* implicit */_Bool) var_5);
                                arr_24 [i_3] [i_3] [i_3] [i_6] [i_3] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_16)))))))) == (((((((/* implicit */long long int) var_8)) ^ (var_6))) ^ (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        var_19 |= var_1;
                        var_20 |= ((/* implicit */_Bool) max((((/* implicit */short) var_0)), (min((((/* implicit */short) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_13))))), (var_5)))));
                        arr_29 [i_3] [i_3] [i_8] [i_3] = ((/* implicit */short) ((((((/* implicit */int) var_9)) ^ (((/* implicit */int) max((var_1), (var_1)))))) == (((((((/* implicit */int) var_5)) / (((/* implicit */int) var_16)))) / (((/* implicit */int) min((var_15), (((/* implicit */unsigned short) var_0)))))))));
                    }
                    var_21 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_0))) == (max((((/* implicit */long long int) var_3)), (((var_6) ^ (var_6)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) max((min((min((var_3), (var_3))), (((/* implicit */signed char) var_17)))), (((/* implicit */signed char) ((min((var_4), (((/* implicit */unsigned long long int) var_8)))) >= (((/* implicit */unsigned long long int) var_8)))))));
    var_23 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) max((max((((/* implicit */unsigned short) var_0)), (var_15))), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) == (var_8)))))))) ^ (var_14)));
}
