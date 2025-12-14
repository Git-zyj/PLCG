/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156210
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
    var_10 = ((/* implicit */short) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0 - 1]);
        arr_4 [i_0] = ((/* implicit */unsigned int) var_2);
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_2 [i_0]) : (((/* implicit */long long int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))) : (var_5)));
        var_11 = ((/* implicit */unsigned int) (~(2199023255551ULL)));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        for (int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                    {
                        {
                            arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_2);
                            var_12 -= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_18 [(short)11] [i_3] [i_2] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1] [12U] [12U] [i_1]))) : (arr_7 [i_1] [i_1]))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (-(max((min((arr_15 [i_2] [i_2] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), (var_6)))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) max((max((2199023255551ULL), (((/* implicit */unsigned long long int) (unsigned char)31)))), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */int) var_0)))))));
    var_15 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (4092549070U) : (((/* implicit */unsigned int) -1))))))) ? (((long long int) ((18446741874686296064ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) : (((/* implicit */long long int) ((/* implicit */int) var_8))));
}
