/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162921
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -145633703)), (11ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)207))) : (var_13)))) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58224)))));
                arr_7 [i_1] = ((/* implicit */_Bool) (+((+(0)))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 13ULL))));
                var_15 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_1] [i_0])) : (((/* implicit */int) arr_5 [i_1]))))))) ? (((/* implicit */int) ((arr_3 [i_1] [i_0]) == (((/* implicit */int) (!(((/* implicit */_Bool) 1994444130399003495ULL)))))))) : (((/* implicit */int) ((unsigned char) ((unsigned long long int) arr_4 [i_0] [i_1 + 2]))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 16; i_2 += 4) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)110))));
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) ((arr_2 [i_2] [i_2 - 2]) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2] [i_2]))) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2])))));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), ((-(7146820853392095634ULL)))));
        var_17 = ((/* implicit */signed char) 806347709);
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)123))) | (10041596021398205529ULL)))))));
        var_19 = ((/* implicit */unsigned char) (((~(1890243021820177564ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139)))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_14 [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_3])))));
    }
    var_21 |= ((/* implicit */signed char) 3291639757U);
}
