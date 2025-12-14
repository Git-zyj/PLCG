/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14154
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
    var_14 = ((/* implicit */signed char) (~(max((min((var_3), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 17163091968ULL)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_15 ^= ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))), ((-(((/* implicit */int) arr_1 [i_0 - 3]))))));
                var_16 = var_12;
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 2; i_2 < 11; i_2 += 3) 
    {
        var_17 *= ((/* implicit */unsigned int) (+((~(((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (arr_1 [i_2]))))))));
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((((arr_0 [i_2 + 2] [i_2 + 3]) ? (((/* implicit */int) arr_0 [i_2 + 2] [i_2 + 3])) : (((/* implicit */int) var_12)))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25; i_3 += 3) 
    {
        var_19 &= ((/* implicit */long long int) (~(((unsigned int) 3539953141599591285ULL))));
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 25; i_4 += 3) 
        {
            var_20 += (!(((/* implicit */_Bool) var_8)));
            var_21 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_7 [7ULL] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                var_22 -= ((/* implicit */unsigned int) var_12);
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_6 [i_3] [i_3]))));
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_8 [i_3]))));
            }
            var_25 = ((/* implicit */unsigned long long int) ((63ULL) != ((-(8618930199521931073ULL)))));
        }
    }
}
