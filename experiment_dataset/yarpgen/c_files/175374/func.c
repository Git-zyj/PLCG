/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175374
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (-((+(var_16)))))) : (min((((/* implicit */long long int) (+(((/* implicit */int) var_7))))), (var_14)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */int) max((var_18), ((-(((/* implicit */int) (unsigned short)60467))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) arr_2 [i_0] [(short)8] [i_0])), (2106905721U)))))) ? (((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (arr_0 [i_1 - 1]) : (arr_0 [i_1 - 1]))) : (((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1])) ? (((((/* implicit */_Bool) 7297632930089189664ULL)) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1 - 1] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64))))))))));
                    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)18199)), (arr_0 [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_12)), (arr_3 [i_0] [i_1 - 1]))))) : (((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */long long int) var_11)) : (var_4))))))));
                    arr_7 [i_0] [(unsigned short)4] = ((/* implicit */_Bool) min(((~(((((/* implicit */unsigned long long int) arr_0 [i_0])) & (arr_1 [i_0]))))), (973345930322081368ULL)));
                    var_21 = ((/* implicit */int) arr_0 [(short)8]);
                    var_22 = ((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) ((var_9) ? (arr_1 [4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_2]))))))))), (((short) min((((/* implicit */unsigned long long int) var_1)), (11149111143620361967ULL))))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned char) (_Bool)1);
        /* LoopNest 2 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 4; i_4 < 11; i_4 += 3) 
            {
                {
                    arr_14 [i_0] [i_3] [3] = ((/* implicit */unsigned short) min((min((((/* implicit */long long int) arr_5 [i_4] [i_4] [i_4] [i_4 - 4])), (arr_10 [i_0] [i_3 - 1]))), (((/* implicit */long long int) min(((~(var_5))), (((/* implicit */int) ((unsigned short) var_14))))))));
                    var_23 += ((/* implicit */long long int) ((unsigned int) var_14));
                    arr_15 [i_0] = ((/* implicit */short) (+(var_6)));
                }
            } 
        } 
        arr_16 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((3U), (((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [6LL] [6LL] [i_0])) == (((/* implicit */int) (_Bool)1)))))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) && (((/* implicit */_Bool) arr_11 [i_0] [(short)11] [5]))))) + (((/* implicit */int) arr_3 [i_0] [i_0])))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) max((var_24), ((!(((1699293099U) != (var_11)))))));
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_5] [i_5] [i_5])) ? (35465847065542656ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_5] [5] [i_5])))));
    }
}
