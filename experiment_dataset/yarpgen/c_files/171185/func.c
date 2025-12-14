/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171185
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) max((arr_1 [(short)1]), (((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)5)))))))));
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) && (((/* implicit */_Bool) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) ((arr_2 [i_1]) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)11)) || (((/* implicit */_Bool) -7644957057539652691LL)))))));
        var_14 = ((/* implicit */unsigned long long int) (((_Bool)1) ? ((-(((/* implicit */int) arr_2 [i_1])))) : (((/* implicit */int) arr_4 [i_1]))));
        /* LoopNest 3 */
        for (long long int i_2 = 2; i_2 < 19; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 4) 
                {
                    {
                        var_15 = ((/* implicit */short) var_9);
                        /* LoopSeq 2 */
                        for (int i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            var_16 = ((/* implicit */int) var_6);
                            var_17 = ((((_Bool) (unsigned char)239)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) var_1);
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_11 [i_4 - 2]))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_18 [i_7]), (((/* implicit */unsigned long long int) (unsigned char)22)))))));
        var_21 = ((/* implicit */long long int) (~(((/* implicit */int) var_8))));
        arr_21 [i_7] [i_7] &= ((/* implicit */unsigned short) ((min((var_9), (((/* implicit */int) arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [17ULL] [i_7])))) <= (((/* implicit */int) (_Bool)1))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_7])) ? (arr_18 [i_7]) : (arr_18 [i_7])))) ? ((-(arr_18 [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33)))));
    }
    var_23 = ((((/* implicit */int) (unsigned char)32)) < (var_9));
    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)11)) ? (min((-7644957057539652676LL), (((/* implicit */long long int) 2147483647)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)59738)) && (((/* implicit */_Bool) -1378879823607319000LL)))))))))))));
}
