/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144974
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
    var_14 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_1]) : (arr_2 [i_1])));
            var_15 = ((/* implicit */unsigned int) arr_2 [i_0]);
        }
        var_16 = ((/* implicit */int) min((var_16), (524287)));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_2 [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)70)) ? (((((/* implicit */_Bool) -2686165142339458276LL)) ? (7288011071254283840LL) : (2686165142339458277LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0))))))) : (8922584790747028042LL)));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 3; i_4 < 20; i_4 += 3) 
            {
                {
                    var_18 = arr_10 [i_4 - 3] [i_4 + 2] [i_4 - 3] [i_4];
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned int) ((signed char) var_12));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_2))));
                        var_21 += ((/* implicit */unsigned int) arr_12 [i_2] [i_2] [i_2] [i_2]);
                    }
                }
            } 
        } 
        var_22 = ((/* implicit */long long int) (_Bool)0);
        var_23 = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_2] [i_2] [i_2] [i_2]))) : (1719765854043304939LL));
    }
}
