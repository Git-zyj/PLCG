/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100282
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        {
                            arr_11 [i_0] [0U] [11U] [i_3] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((int) (signed char)-117))) & (((((/* implicit */_Bool) (signed char)116)) ? (arr_7 [(short)0] [i_1] [i_2 + 1] [i_0]) : (2922125274U)))));
                            arr_12 [i_0] [i_1] [i_0] [i_0] [i_3] = ((/* implicit */short) 528482304U);
                            var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))) ? ((~(((var_4) / (var_4))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-117)) != (var_4)))) == (((/* implicit */int) var_7))))))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) var_11))));
                /* LoopNest 3 */
                for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                {
                    for (signed char i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        for (int i_6 = 2; i_6 < 16; i_6 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(1372842034U)))))))));
                                var_15 = ((/* implicit */long long int) var_8);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    for (short i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        {
                            arr_26 [i_0] [i_0] [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */short) (signed char)-31)), (arr_21 [i_0] [i_1] [14U] [i_8] [i_1] [i_1] [i_1]))))));
                            var_16 = ((/* implicit */short) (-(((/* implicit */int) var_1))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_9 = 3; i_9 < 17; i_9 += 3) 
                {
                    for (unsigned int i_10 = 3; i_10 < 15; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 18; i_11 += 1) 
                        {
                            {
                                arr_35 [i_0] [i_1] [i_9] [i_0] [i_11] [i_1] [13LL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) ? (((((/* implicit */long long int) (-(((/* implicit */int) var_6))))) | (max((-6937861262174881195LL), (((/* implicit */long long int) var_6)))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) var_4)) | (2895460950U))))));
                                var_18 *= ((/* implicit */signed char) arr_16 [i_1] [(signed char)16] [i_1]);
                                arr_36 [i_0] [i_1] [i_1] [(signed char)1] [(signed char)11] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (((var_2) * (((/* implicit */long long int) 0U))))));
                                arr_37 [i_0] = ((/* implicit */unsigned int) (signed char)26);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        for (short i_13 = 0; i_13 < 14; i_13 += 2) 
        {
            for (signed char i_14 = 0; i_14 < 14; i_14 += 4) 
            {
                {
                    arr_48 [i_14] [i_14] [i_14] = ((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_6)) ? (arr_7 [i_12] [i_13] [i_14] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) var_7)))) ^ (var_5)));
                    arr_49 [i_12] [(signed char)2] = ((/* implicit */signed char) (+(((unsigned int) min((var_6), (var_9))))));
                }
            } 
        } 
    } 
}
