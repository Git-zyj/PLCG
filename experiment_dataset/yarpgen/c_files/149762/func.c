/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149762
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
    var_19 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) 15964099490446401157ULL);
        /* LoopNest 3 */
        for (long long int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */int) max((var_20), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (16260234902677455420ULL)))) ? (((/* implicit */int) (unsigned char)169)) : (var_17)))));
                        arr_13 [i_0] [i_0] [i_2] [i_0] = (((!((!(((/* implicit */_Bool) 2482644583263150479ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (15964099490446401137ULL)))) ? (((/* implicit */long long int) ((unsigned int) var_18))) : (arr_8 [i_1 - 1] [i_1 + 1] [i_1 + 1]))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_9 [i_1] [i_2] [i_3])))) >> (((((int) (unsigned char)156)) - (137)))))));
                        var_21 *= ((arr_1 [i_0] [i_1]) <= (((((/* implicit */_Bool) 15964099490446401118ULL)) ? (2186509171032096195ULL) : (15964099490446401137ULL))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 1; i_5 < 17; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 19; i_6 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (var_16)));
                    var_23 = ((/* implicit */signed char) ((short) arr_16 [i_5 - 1] [i_5 + 2]));
                }
            } 
        } 
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((unsigned long long int) ((unsigned short) (unsigned char)167))))));
    }
}
