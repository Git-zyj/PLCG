/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166873
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) 1210468467)) ? (((/* implicit */int) ((18446744073709551593ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6617)))))) : ((+(((/* implicit */int) (unsigned char)127)))))) : (((/* implicit */int) var_1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_10 [i_1] = ((/* implicit */unsigned long long int) ((signed char) min((3456813823U), (((/* implicit */unsigned int) (signed char)127)))));
                    arr_11 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (((+(((((/* implicit */int) (_Bool)1)) ^ (var_3))))) << (((((/* implicit */int) ((((var_3) >> (((-1773478977) + (1773478980))))) >= (((/* implicit */int) ((unsigned char) arr_3 [i_1] [i_1])))))) - (1)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_2 [i_1]))));
                        var_14 += ((/* implicit */int) ((26ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        /* LoopSeq 1 */
                        for (int i_4 = 1; i_4 < 21; i_4 += 2) 
                        {
                            var_15 = ((/* implicit */int) (~(8820247296507283869ULL)));
                            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((13201855137809056252ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) && (((/* implicit */_Bool) ((arr_2 [i_2]) ? (-2147483630) : (((/* implicit */int) (_Bool)1)))))));
                            arr_17 [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */int) var_5);
                        }
                        var_17 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? ((~(var_3))) : (((((/* implicit */int) var_8)) >> (((arr_7 [i_0] [i_1] [i_0]) - (4759744785962910810LL)))))));
                    }
                    var_18 *= ((/* implicit */short) ((signed char) (((!(((/* implicit */_Bool) 263011520)))) ? (((unsigned long long int) arr_4 [i_0] [i_0])) : (arr_5 [i_0]))));
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_5 [15]))));
                }
            } 
        } 
    } 
}
