/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112577
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_14 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 303903240U)) & (12259281504826359096ULL)));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        arr_10 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_7);
                        arr_11 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) arr_6 [i_2] [i_1] [(unsigned char)0])) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) < (((/* implicit */int) (unsigned short)53185))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (arr_5 [i_0] [i_1])))));
                    }
                    for (long long int i_4 = 1; i_4 < 15; i_4 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (int i_5 = 3; i_5 < 16; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) var_12))));
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (+((+(((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_5] [(unsigned short)16] [i_1] [i_1] [i_0])) && (((/* implicit */_Bool) var_4))))))))))));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((unsigned long long int) arr_1 [i_4])) - (max((((/* implicit */unsigned long long int) arr_18 [(short)14] [i_1] [i_1] [(signed char)16] [i_0] [(unsigned char)8] [i_5])), (8882696112263906292ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_15 [i_0] [6U] [i_2] [i_4] [i_0])) : (var_11)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) min((var_1), (var_1)))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((int) var_2))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [4] [i_4 - 1] [i_4 + 1])), (6187462568883192519ULL))))))))))));
                        }
                        for (short i_6 = 4; i_6 < 14; i_6 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned short)12333), (var_9)))) << (((/* implicit */int) (_Bool)1))));
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_16 [i_4] [i_0] [i_4 + 1] [i_4]))))), (max((arr_1 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_1))))))))))));
                            var_20 = min(((-((((_Bool)1) ? (((/* implicit */unsigned long long int) 3911418614U)) : (1674033212040262955ULL))))), (5522803130716595689ULL));
                        }
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) var_8))));
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 16; i_7 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((unsigned long long int) var_8)))));
                        arr_25 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) ((short) max(((!(((/* implicit */_Bool) var_4)))), ((!(((/* implicit */_Bool) arr_3 [i_1])))))));
                        arr_26 [i_2] = ((/* implicit */signed char) max((12259281504826359097ULL), (6187462568883192518ULL)));
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) var_13);
    var_24 = ((/* implicit */long long int) (+((~(((6187462568883192519ULL) << (((16662800922636479186ULL) - (16662800922636479179ULL)))))))));
    var_25 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) 6187462568883192519ULL))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) var_4)) ? (var_10) : (0LL)))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)25569)) : (((/* implicit */int) (short)-12195))))), (((((/* implicit */_Bool) (short)-23958)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
    var_26 = ((/* implicit */unsigned long long int) ((int) (~(((((/* implicit */int) var_12)) & (((/* implicit */int) var_8)))))));
}
