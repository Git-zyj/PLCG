/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13289
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (var_2))))));
        arr_5 [i_0] = ((/* implicit */long long int) max((((unsigned long long int) arr_0 [(signed char)10] [i_0])), (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */short) var_11)))))));
        arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_2 [i_0] [i_0])))) ? (((((/* implicit */int) (short)23006)) | (((/* implicit */int) var_0)))) : (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_3] |= ((/* implicit */signed char) arr_12 [i_3] [i_1] [i_0]);
                        arr_16 [i_0] = ((/* implicit */long long int) ((unsigned short) (-(((/* implicit */int) arr_11 [(signed char)13])))));
                        arr_17 [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (+((-((~(((/* implicit */int) var_5))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
    {
        arr_20 [i_4] = ((/* implicit */signed char) ((unsigned long long int) (((+(((/* implicit */int) arr_19 [(unsigned short)10])))) / (((((/* implicit */_Bool) (short)19634)) ? (((/* implicit */int) arr_10 [i_4] [i_4] [(unsigned short)1] [(unsigned short)1])) : (((/* implicit */int) (short)19611)))))));
        arr_21 [i_4] [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_14 [i_4] [i_4] [i_4] [i_4] [i_4]))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
    {
        arr_24 [i_5] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)40627)) ? (((/* implicit */int) arr_0 [i_5] [i_5])) : (((/* implicit */int) var_12))))));
        arr_25 [i_5] &= ((/* implicit */short) ((((/* implicit */int) var_14)) / (((/* implicit */int) var_0))));
        arr_26 [i_5] [i_5] = ((/* implicit */signed char) ((unsigned long long int) var_17));
    }
    var_19 = ((/* implicit */signed char) (+(var_15)));
    var_20 = ((/* implicit */long long int) var_5);
}
