/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140007
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
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))) - (min((((/* implicit */unsigned long long int) var_0)), (var_1)))))) ? ((-(((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (var_5))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)5476)))));
    var_15 = ((/* implicit */_Bool) var_4);
    var_16 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)0)), (-8244726335662003071LL)))) ? (-1080799711) : (((/* implicit */int) (unsigned char)229))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (long long int i_3 = 4; i_3 < 21; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] [5U] [22ULL] [9LL] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) arr_6 [i_1 + 2] [i_3 + 1])) - (var_1))) * (((/* implicit */unsigned long long int) arr_6 [i_1 - 2] [i_3 + 2]))));
                        /* LoopSeq 2 */
                        for (int i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
                        {
                            var_17 -= ((/* implicit */signed char) (-(((((/* implicit */int) (short)32744)) - (((/* implicit */int) arr_10 [i_1 + 1] [i_1 + 3]))))));
                            arr_14 [i_0] [i_0] &= ((/* implicit */unsigned char) ((((/* implicit */long long int) var_5)) * (max((var_10), (((/* implicit */long long int) arr_1 [i_1 + 3]))))));
                            var_18 += max((var_13), (((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!((_Bool)1)))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                        {
                            var_19 ^= (-(((var_10) | (((/* implicit */long long int) arr_5 [i_0] [(unsigned char)18] [i_0])))));
                            arr_18 [18U] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((9223372036854775807LL) >> (((/* implicit */int) var_0))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_13 [i_0] [i_1] [20U] [(short)5] [i_1]) : (((/* implicit */unsigned long long int) var_5))))));
                            var_21 = ((/* implicit */unsigned short) ((long long int) (~(((/* implicit */int) var_8)))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_6 = 3; i_6 < 23; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_3] [i_1] = (-(var_7));
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */int) arr_1 [i_0]);
                        }
                    }
                } 
            } 
        } 
        arr_24 [i_0] = ((/* implicit */short) var_4);
        var_22 = arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
        var_23 = ((/* implicit */unsigned short) 2928224920029585460LL);
    }
    for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
    {
        var_24 ^= ((/* implicit */long long int) var_9);
        arr_27 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)4)) != (((/* implicit */int) (unsigned char)4))));
    }
}
