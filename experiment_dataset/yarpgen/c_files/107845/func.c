/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107845
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
    var_15 *= ((/* implicit */unsigned short) var_14);
    var_16 = ((/* implicit */signed char) (_Bool)0);
    var_17 = ((signed char) var_4);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_18 = (unsigned char)60;
                                var_19 = ((/* implicit */unsigned char) -1);
                                var_20 = ((/* implicit */signed char) (~(-1)));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_0 [i_2 - 1])))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_5 [i_2]))) ? (((/* implicit */int) arr_1 [i_0] [(unsigned char)1])) : (((/* implicit */int) ((short) (_Bool)1)))))) : (max((((arr_7 [i_0] [i_1] [i_2] [i_2 - 2] [i_2]) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)205)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 1; i_6 < 8; i_6 += 4) 
                        {
                            {
                                var_22 &= ((/* implicit */_Bool) arr_4 [i_0] [i_0]);
                                var_23 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [4ULL] [i_6 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_17 [i_0] [i_1] [i_1] [i_0])))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_1] [i_1]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_5] [i_5] [(_Bool)1] [i_5] [i_5] [i_5])) || (arr_7 [(short)6] [(short)6] [i_2] [i_2] [i_2]))))))), (((unsigned long long int) (+((-2147483647 - 1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
