/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128996
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
    var_15 = ((/* implicit */unsigned int) max((((long long int) max(((unsigned short)39527), (var_7)))), (((/* implicit */long long int) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_11))) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12288))))))));
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (791420997U)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((unsigned int) arr_0 [i_0] [i_0])))));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (~((-2147483647 - 1)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */int) ((arr_6 [i_0] [i_0]) * (arr_3 [8U] [i_0])));
                    var_20 = ((/* implicit */_Bool) 2147483647);
                    var_21 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 4) 
        {
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                {
                    arr_16 [i_5] [i_4 + 1] |= ((/* implicit */unsigned short) (((!((_Bool)0))) || (((/* implicit */_Bool) arr_6 [i_4 - 1] [i_4 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
                    {
                        for (long long int i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            {
                                arr_23 [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3291726715U)) ? (((/* implicit */int) ((_Bool) arr_9 [i_5] [i_7]))) : (((/* implicit */int) arr_20 [i_3] [i_4] [i_5] [i_6] [i_4 + 1] [i_4]))));
                                var_22 = ((/* implicit */unsigned int) max((var_22), (arr_6 [i_3] [i_6])));
                                var_23 |= ((/* implicit */_Bool) ((((/* implicit */long long int) 1839615765U)) | (((long long int) (_Bool)0))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((arr_17 [i_3] [i_3]) + (9223372036854775807LL))) << (((var_11) - (2195360120U))))))));
                }
            } 
        } 
        var_25 = ((((/* implicit */_Bool) arr_22 [i_3] [i_3] [i_3] [i_3] [i_3])) ? (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((_Bool) var_3))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        arr_26 [i_8] [i_8] = max((((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_10 [i_8] [i_8] [i_8])) && (((/* implicit */_Bool) arr_19 [i_8] [(_Bool)1]))))))), (min((arr_14 [i_8] [i_8] [i_8] [i_8]), (((/* implicit */unsigned short) arr_15 [i_8] [i_8] [i_8] [i_8])))));
        var_26 = ((/* implicit */long long int) max((var_26), (((((/* implicit */_Bool) arr_0 [i_8] [i_8])) ? (((/* implicit */long long int) arr_8 [i_8] [i_8])) : (((long long int) (_Bool)0))))));
    }
    var_27 &= var_8;
}
