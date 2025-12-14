/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102604
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) var_16)) + (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_3))))), (((/* implicit */unsigned long long int) min((var_13), (var_2))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 4) 
                {
                    arr_9 [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) < (var_13)));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((((/* implicit */int) var_4)) - (115)))))) ? (((/* implicit */unsigned int) var_14)) : (var_5)));
                }
                /* vectorizable */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (short i_5 = 3; i_5 < 21; i_5 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_5] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((var_11) / (((/* implicit */unsigned int) var_13))));
                                arr_17 [i_0] [i_5] [i_3 - 1] [i_4] [i_5] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4294967274U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                                var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_2)) : (var_16)));
                            }
                        } 
                    } 
                    var_21 ^= ((/* implicit */signed char) var_17);
                    var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_9))) | (var_6)));
                    var_23 = ((((/* implicit */unsigned long long int) var_14)) == (var_3));
                }
            }
        } 
    } 
    var_24 = ((/* implicit */int) var_12);
    var_25 = ((/* implicit */unsigned long long int) var_13);
    /* LoopNest 3 */
    for (int i_6 = 2; i_6 < 17; i_6 += 3) 
    {
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            for (unsigned int i_8 = 1; i_8 < 18; i_8 += 2) 
            {
                {
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_0)), (var_3))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_11)), (var_10))))))) ? (((/* implicit */long long int) min((((/* implicit */int) var_0)), (var_13)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min((((/* implicit */long long int) var_1)), (var_6)))))));
                    var_27 = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) var_12)), (var_2))) / (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-49))))));
                }
            } 
        } 
    } 
}
