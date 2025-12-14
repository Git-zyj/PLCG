/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138754
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
    var_12 = var_0;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    arr_10 [(signed char)14] [i_1 + 1] [i_2] &= ((/* implicit */long long int) ((((/* implicit */int) var_8)) << (((((/* implicit */int) max((var_4), (var_4)))) - (181)))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_1] [(_Bool)1] = ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) var_6)) >= (((/* implicit */int) var_8))))), (min((var_9), (var_9)))));
                                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_5))));
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_3] [i_4] [i_1] = ((/* implicit */_Bool) var_10);
                                arr_17 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) min((((int) var_8)), (((((/* implicit */int) var_8)) | (((/* implicit */int) var_5)))))));
                                var_14 = ((min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))), (min((((/* implicit */int) var_8)), (var_10))))) != (((/* implicit */int) var_2)));
                            }
                        } 
                    } 
                    arr_18 [i_0] [i_1] = ((/* implicit */long long int) var_10);
                }
                for (long long int i_5 = 3; i_5 < 17; i_5 += 1) /* same iter space */
                {
                    var_15 = ((/* implicit */unsigned char) ((min((var_1), (((/* implicit */long long int) var_10)))) == (((/* implicit */long long int) ((((/* implicit */int) var_9)) << (((var_3) + (1264433819))))))));
                    arr_22 [i_1] = ((/* implicit */short) max((((unsigned char) min((((/* implicit */int) var_5)), (var_7)))), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (var_7)))) || (((/* implicit */_Bool) var_2)))))));
                    arr_23 [i_1] [i_5] [i_1 + 1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) var_6)) == (((/* implicit */int) var_4)))) || (((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (var_1))))));
                    arr_24 [(_Bool)1] [i_1] [i_5] [i_1] = ((/* implicit */_Bool) min((min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */int) var_8)))))), (((((((/* implicit */int) var_2)) + (2147483647))) << (((((var_3) + (1264433828))) - (24)))))));
                }
                /* vectorizable */
                for (long long int i_6 = 3; i_6 < 17; i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 4) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) >= (var_1))))));
                                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */int) ((((/* implicit */int) var_9)) >= (var_3))))));
                            }
                        } 
                    } 
                    arr_31 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */short) ((_Bool) var_1));
                }
                /* LoopNest 3 */
                for (int i_9 = 1; i_9 < 18; i_9 += 4) 
                {
                    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 4) 
                    {
                        for (int i_11 = 0; i_11 < 21; i_11 += 4) 
                        {
                            {
                                arr_43 [i_11] [i_1] [i_11] = ((/* implicit */unsigned char) max((((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_0))))), (((unsigned char) var_9))))), (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8)))) : (min((var_7), (((/* implicit */int) var_11))))))));
                                var_18 -= ((/* implicit */long long int) ((unsigned char) ((((var_7) >= (((/* implicit */int) var_2)))) ? (((/* implicit */int) var_6)) : (min((var_3), (var_10))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
