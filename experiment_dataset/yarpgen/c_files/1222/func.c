/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1222
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
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    {
                        arr_11 [i_3] [i_2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_8);
                        arr_12 [i_1 - 1] [i_1 - 1] [i_0] = max((((((/* implicit */_Bool) var_0)) ? (var_5) : (11466735354792319736ULL))), (((unsigned long long int) var_7)));
                        arr_13 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((signed char) 11466735354792319736ULL));
                        var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((max((((/* implicit */short) var_0)), (arr_5 [i_0] [i_0] [i_0]))), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) && (((/* implicit */_Bool) 6980008718917231879ULL))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((unsigned long long int) var_5)) : (min((((/* implicit */unsigned long long int) var_4)), (arr_1 [i_2] [i_2])))))));
                        var_11 = ((/* implicit */signed char) max((max((max((arr_2 [i_2] [i_1] [i_0]), (var_5))), (((/* implicit */unsigned long long int) ((unsigned int) 11466735354792319736ULL))))), ((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3]))) : (var_7)))))));
                    }
                } 
            } 
        } 
        var_12 += ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0] [(short)16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0 - 3] [i_0] [(_Bool)1]))) : (var_5))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 3; i_4 < 16; i_4 += 2) /* same iter space */
    {
        var_13 = var_7;
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_4] [i_4] [i_4 - 1])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_7 [i_4] [i_4] [i_4]))));
        var_15 = ((/* implicit */signed char) ((_Bool) arr_9 [i_4 - 1] [i_4] [i_4 - 2] [i_4]));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_0))));
    }
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 4; i_6 < 13; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_5] [i_5] [i_5])), (arr_2 [i_6] [i_5] [i_5])))) ? (((((/* implicit */_Bool) var_6)) ? (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_20 [i_7] [i_7 + 1] [i_6 - 3] [i_6]))))))))));
                    var_18 = ((/* implicit */unsigned char) ((((_Bool) arr_1 [i_7 - 2] [(short)7])) ? ((+(((unsigned int) var_6)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) max((var_4), (var_4))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_0);
}
