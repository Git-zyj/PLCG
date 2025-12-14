/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132945
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9215595013371687591ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_0 + 1] [i_1 - 1] [i_0]), (arr_4 [i_0 - 1] [i_1 + 2] [i_0]))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (7825903506814795171ULL)))))));
                    arr_7 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 - 1] [i_0])) || (((/* implicit */_Bool) (unsigned short)11500)))))), (min((min((arr_4 [(signed char)12] [i_1] [i_0]), (((/* implicit */unsigned short) var_16)))), ((unsigned short)11490)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [(_Bool)1] [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) * (((/* implicit */int) arr_1 [i_1 + 1]))))) : (max((8059152415240320906ULL), (((/* implicit */unsigned long long int) 2930059042U))))));
                                arr_14 [i_0] [i_1] [i_0] [i_0] [i_3 + 2] [i_3] [i_4 - 2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                                var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0 + 1] [i_0] [i_2])))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_11 [i_0 + 2] [i_0] [i_1 + 2])) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)1536)))) : (((((/* implicit */_Bool) (unsigned short)39731)) ? (((/* implicit */int) (unsigned short)39731)) : (((/* implicit */int) var_16)))))) : ((-(((/* implicit */int) ((signed char) arr_9 [i_0])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)63225)) - (((/* implicit */int) (unsigned short)39731))))) / (var_11)));
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)39731)) | (((/* implicit */int) min((var_6), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)23577)))))))))))));
}
