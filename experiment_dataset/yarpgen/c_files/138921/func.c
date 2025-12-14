/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138921
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
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */int) ((((/* implicit */unsigned int) (+(665333418)))) ^ (4294967295U)));
                var_15 = ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned int) ((arr_0 [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_1])))))), (((((/* implicit */_Bool) (short)12454)) ? (((/* implicit */unsigned int) 2147483647)) : (4294967292U))))));
                arr_4 [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) (+(arr_1 [i_0])))) : (min((var_0), (((/* implicit */long long int) var_9))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            arr_10 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) var_13)))));
            arr_11 [i_3] [i_2] [(unsigned short)16] = ((/* implicit */int) ((unsigned int) arr_9 [0U] [i_3] [(unsigned short)4]));
            arr_12 [i_2] [i_2] [i_2] = (~(arr_5 [i_2]));
            /* LoopSeq 1 */
            for (long long int i_4 = 1; i_4 < 19; i_4 += 2) 
            {
                arr_17 [i_2] [i_2] [5] [i_2] = ((/* implicit */unsigned char) (+(arr_13 [i_4 + 3] [i_4] [i_4 - 1])));
                arr_18 [i_2] [i_2] [i_2] [i_4] = ((/* implicit */int) ((arr_13 [i_4 + 1] [i_4 + 3] [i_4 + 1]) * (arr_13 [i_4 - 1] [i_4 + 2] [i_4 + 3])));
                var_16 = ((/* implicit */short) arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1]);
            }
        }
        var_17 = ((/* implicit */short) (~(arr_7 [i_2])));
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (signed char i_7 = 4; i_7 < 22; i_7 += 4) 
                {
                    {
                        arr_26 [i_2] [i_5] [i_6] [i_2] [i_7 - 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_22 [i_7 + 1] [i_7 + 1] [i_7 - 4] [i_7 - 2])) : (((/* implicit */int) arr_22 [i_7 - 2] [i_7] [i_7 - 3] [i_7 - 3]))));
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_6])) ? (arr_7 [(signed char)5]) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_22 [i_7 - 4] [i_7 - 4] [i_7] [i_7 - 4])) : (((/* implicit */int) arr_23 [i_2] [i_2] [i_2]))));
                    }
                } 
            } 
            arr_27 [i_2] [i_5] = ((/* implicit */unsigned int) ((unsigned long long int) arr_9 [i_5] [i_2] [i_2]));
        }
        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_9 = 1; i_9 < 22; i_9 += 4) 
            {
                arr_34 [i_2] [(unsigned short)20] [i_2] = ((((/* implicit */_Bool) var_4)) ? ((~(arr_24 [i_2] [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))));
                var_19 = ((/* implicit */unsigned long long int) (+(arr_25 [i_9 + 1])));
                var_20 = ((((/* implicit */int) var_13)) & ((~(var_3))));
            }
            var_21 = ((/* implicit */unsigned char) ((var_10) ? (((/* implicit */int) arr_22 [i_2] [i_2] [i_8] [i_8])) : (((/* implicit */int) arr_22 [i_2] [i_2] [i_2] [i_2]))));
        }
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (var_4)))) ? (((((/* implicit */_Bool) (~(4294967295U)))) ? (var_6) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_12))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
    var_23 = (+(((/* implicit */int) (_Bool)0)));
}
