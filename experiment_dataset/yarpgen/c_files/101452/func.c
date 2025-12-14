/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101452
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
    var_16 &= ((/* implicit */int) max(((+(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_10) : (511ULL))))), (((/* implicit */unsigned long long int) ((var_0) ? (var_4) : (((((/* implicit */int) (_Bool)1)) << (((var_15) + (9039162033123678216LL))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] = ((/* implicit */signed char) var_5);
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        arr_12 [(unsigned char)9] [i_1] [i_1] [i_1 - 1] = ((/* implicit */unsigned char) var_7);
                        arr_13 [i_0] [i_1] [i_0] [i_2] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_2 [i_0] [i_0 - 1]))))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 2) 
            {
                {
                    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_1 [i_4]))));
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_4] [i_5 - 2]))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) : (((((/* implicit */_Bool) var_8)) ? (arr_21 [18] [i_6]) : (((/* implicit */long long int) var_8))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)31053))));
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 23; i_8 += 4) 
            {
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_22 [i_6] [i_6])) : (((/* implicit */int) (unsigned short)22618))));
                var_22 -= ((/* implicit */int) var_12);
                var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_13))));
                arr_27 [i_7] [i_7] [i_7] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (var_3)))) : (((/* implicit */int) arr_20 [i_6])));
            }
            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 2147483647)) ? (arr_21 [i_6] [i_7]) : (((/* implicit */long long int) arr_19 [i_6])))))))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
        {
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_6] [i_6])) ? (3301919405U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (arr_26 [(short)6]) : (((/* implicit */long long int) (((_Bool)1) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31839)))))))))));
            arr_30 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_9])) ? (arr_26 [i_9]) : (arr_26 [i_9])));
        }
        var_26 = ((/* implicit */unsigned long long int) arr_20 [i_6]);
    }
}
