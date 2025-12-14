/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139688
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((_Bool) (~(((arr_0 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0]))))));
        var_15 |= ((/* implicit */short) ((int) ((_Bool) var_13)));
    }
    for (unsigned int i_1 = 2; i_1 < 23; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-23)) ? (((/* implicit */int) (_Bool)1)) : (1760243649)));
        arr_4 [i_1] [i_1] = ((/* implicit */signed char) ((int) min((((/* implicit */unsigned short) max((((/* implicit */short) var_1)), (var_5)))), (arr_3 [i_1 - 2]))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 3; i_4 < 21; i_4 += 4) 
                {
                    {
                        var_17 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 2])))));
                        var_18 *= ((/* implicit */signed char) var_13);
                        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_9 [i_1 + 1] [i_1 - 1] [i_2] [i_4 - 3]), (arr_9 [i_1 - 2] [i_1 - 2] [i_2] [i_4 + 3]))))));
                        /* LoopSeq 2 */
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((unsigned int) ((signed char) ((signed char) arr_6 [i_1])))))));
                            var_21 += ((/* implicit */signed char) min(((+(arr_14 [i_1] [i_1] [i_1] [i_4] [i_5] [i_1]))), (min((arr_14 [i_1 - 1] [i_2] [i_3] [i_2] [i_5] [i_3]), (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1])))));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            var_22 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1 + 1] [i_1 + 1] [(signed char)11] [i_4] [i_1 + 1] [i_4])) ? (arr_14 [14U] [i_2] [i_3] [14U] [i_6] [14U]) : (arr_14 [i_6] [i_4 - 3] [i_3] [i_3] [18LL] [i_1])));
                            var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [23U]))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
        {
            arr_22 [i_1] [(signed char)23] [i_7] = ((((/* implicit */_Bool) arr_18 [i_7] [(_Bool)1] [i_1 - 2])) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((((/* implicit */int) var_4)) + (94)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (var_3))));
            var_24 = ((signed char) arr_17 [i_1] [i_7]);
        }
        for (signed char i_8 = 1; i_8 < 22; i_8 += 3) 
        {
            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) min((((/* implicit */long long int) var_4)), (((long long int) 944030347U)))))));
            var_26 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_1 + 1] [i_1 - 2] [i_1 - 1])) ? (((/* implicit */int) arr_23 [i_1 - 1] [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) arr_23 [i_1 - 2] [i_1 - 2] [i_1 - 2]))))), (max((arr_7 [i_1 - 1] [i_1 - 1]), (((/* implicit */unsigned int) var_12))))));
        }
    }
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_12)) : (((((/* implicit */_Bool) ((long long int) -1760243649))) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_12)) : (var_6))))))));
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 19; i_9 += 4) 
    {
        for (int i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            for (int i_11 = 0; i_11 < 19; i_11 += 1) 
            {
                {
                    var_28 = ((/* implicit */long long int) ((unsigned long long int) ((signed char) (signed char)81)));
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        for (long long int i_13 = 3; i_13 < 17; i_13 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((unsigned long long int) 1571389136))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (1760243649)))) : (var_8))), (((/* implicit */int) ((_Bool) var_12)))));
                                var_30 = ((unsigned int) ((signed char) arr_37 [i_13 - 3] [i_13 - 2] [i_12] [i_13 - 3] [i_11]));
                            }
                        } 
                    } 
                    var_31 ^= ((/* implicit */int) var_2);
                }
            } 
        } 
    } 
}
