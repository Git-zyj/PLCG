/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158221
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    var_17 = ((((arr_8 [i_2 + 1] [i_2 + 1] [i_0 - 1] [i_0 - 1]) < (arr_8 [i_2 - 1] [i_2 + 1] [i_0 - 2] [i_0 - 2]))) ? (((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (unsigned short)2987)) - (2979))))) : (((/* implicit */int) min((((/* implicit */short) var_5)), ((short)15341)))));
                    arr_10 [i_1] = ((/* implicit */_Bool) min((((unsigned int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (unsigned char)255))))), (((((((/* implicit */_Bool) arr_5 [i_1] [i_2 + 2])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned short)16] [i_0 - 2] [i_2 - 2])))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            {
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)193))) : (var_7)))) ? ((+((-9223372036854775807LL - 1LL)))) : (((((/* implicit */_Bool) var_11)) ? (arr_9 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    for (int i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (((((((-(arr_17 [i_3] [i_3] [i_4] [i_6]))) + (9223372036854775807LL))) << ((((((~(((/* implicit */int) (unsigned char)21)))) + (23))) - (1))))) | (((long long int) (-(-7472145581358110324LL)))))))));
                            var_20 -= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) 1318081666840650473LL))) * (((((((/* implicit */int) var_0)) % (((/* implicit */int) var_0)))) + ((-(((/* implicit */int) (_Bool)0))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
