/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182693
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
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned short) var_4);
                    var_12 = ((/* implicit */int) var_7);
                    arr_10 [i_0] [i_2] [2ULL] = ((/* implicit */_Bool) var_3);
                    arr_11 [i_0] [i_1] [i_2] = (+(((/* implicit */int) ((((/* implicit */unsigned int) var_4)) >= (arr_5 [i_0 - 2])))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 18; i_4 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
                    {
                        var_13 = ((/* implicit */_Bool) ((((_Bool) var_9)) ? (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */long long int) arr_3 [i_4] [14U])))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5])))));
                        var_14 = ((/* implicit */int) ((unsigned char) var_3));
                    }
                    for (signed char i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            var_15 ^= ((/* implicit */unsigned int) (+(((arr_14 [i_0] [i_7]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                            arr_25 [i_7] [i_6] [i_4 - 1] [i_3] [i_0] = ((int) ((long long int) var_9));
                        }
                        var_16 = ((/* implicit */short) (+(max((((/* implicit */long long int) var_7)), (var_9)))));
                        var_17 = ((/* implicit */short) (~((~(((/* implicit */int) arr_6 [i_4 - 1] [i_0 + 2]))))));
                    }
                    for (signed char i_8 = 0; i_8 < 19; i_8 += 1) /* same iter space */
                    {
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) arr_19 [i_0 - 1] [i_4 + 1] [i_4 + 1] [i_8]))))))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_5)), (var_9))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_0] [i_3] [i_4] [i_8])) ? (var_1) : (((/* implicit */unsigned int) var_4)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (max((min((((/* implicit */unsigned long long int) var_0)), (var_3))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) var_6)) : (var_3)))))));
                    }
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ? (var_10) : (((/* implicit */unsigned long long int) var_1))))) ? ((+(arr_5 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) arr_27 [(short)2] [i_3] [i_3] [i_3])) ? (arr_27 [4] [(signed char)12] [i_4 + 1] [i_4 + 1]) : (arr_27 [(short)14] [i_4] [i_4 + 1] [i_4]))) : (var_3)));
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 1; i_9 < 16; i_9 += 4) 
                    {
                        for (unsigned char i_10 = 3; i_10 < 17; i_10 += 1) 
                        {
                            {
                                var_21 = (((+((+(((/* implicit */int) arr_28 [i_10] [i_9] [i_9] [i_4] [i_3] [i_0])))))) + ((+(((/* implicit */int) arr_4 [i_0 - 3] [i_4 - 1])))));
                                var_22 = min((((/* implicit */unsigned long long int) ((signed char) ((var_3) ^ (((/* implicit */unsigned long long int) var_2)))))), (var_3));
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (arr_29 [i_0 - 1] [i_0] [i_0] [i_0 + 2] [16U] [i_0 - 1]) : (((/* implicit */unsigned long long int) max((arr_5 [i_4 - 1]), (((/* implicit */unsigned int) var_5)))))));
                            }
                        } 
                    } 
                    arr_34 [1U] [i_3] [i_4] = ((/* implicit */unsigned char) ((signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))), (var_6))));
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (+(((/* implicit */int) var_7)))))));
                }
            } 
        } 
    }
    var_25 ^= ((/* implicit */signed char) ((_Bool) ((long long int) var_7)));
}
