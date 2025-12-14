/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175140
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) var_9)))));
        var_11 ^= ((/* implicit */signed char) (((((~(((/* implicit */int) (unsigned short)12189)))) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0])) - (99)))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        for (short i_2 = 3; i_2 < 24; i_2 += 3) 
        {
            for (long long int i_3 = 3; i_3 < 23; i_3 += 4) 
            {
                {
                    var_12 = ((/* implicit */int) max((var_12), (((((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (unsigned char)215)) : (((/* implicit */int) (unsigned char)15)))) * (((((/* implicit */int) arr_9 [i_1] [i_2 - 1] [20U])) / (((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_1])), (var_4))))))))));
                    var_13 = ((/* implicit */unsigned int) min((var_13), (arr_4 [i_1] [(unsigned char)4])));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_14 [(signed char)2] = (!(((/* implicit */_Bool) ((arr_4 [i_4] [(short)22]) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
        /* LoopSeq 1 */
        for (signed char i_5 = 1; i_5 < 11; i_5 += 4) 
        {
            var_14 = ((2845550027U) / (1449417259U));
            arr_18 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (arr_7 [(unsigned short)19] [i_4] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        }
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_10))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 4) 
    {
        var_16 = ((/* implicit */long long int) min((var_16), ((+(arr_7 [i_6] [i_6] [i_6])))));
        arr_23 [i_6] = ((arr_4 [i_6] [i_6]) / (((/* implicit */unsigned int) ((/* implicit */int) var_10))));
        /* LoopSeq 1 */
        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 4) 
        {
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_6] [i_7] [i_6])) ? (((/* implicit */int) arr_26 [i_7])) : (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) arr_19 [i_7])))))));
            arr_27 [3] [(_Bool)1] = ((/* implicit */unsigned char) ((arr_7 [i_6] [i_7] [i_7]) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_6]))))))));
            arr_28 [i_7] [i_6] [i_6] = ((/* implicit */short) arr_24 [14ULL] [i_6] [i_6]);
            var_18 = ((/* implicit */unsigned char) 2845550027U);
            var_19 ^= ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_19 [i_6]))) + (((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))));
        }
    }
}
