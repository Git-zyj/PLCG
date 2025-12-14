/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106501
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) min((min((((/* implicit */unsigned long long int) arr_1 [i_0] [0ULL])), (arr_6 [(signed char)3] [i_1] [i_2]))), (min((arr_6 [(short)9] [i_1] [(signed char)11]), (arr_6 [i_0] [i_1] [i_2]))))))));
                    arr_10 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) min((min((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_6)))), (arr_2 [i_1])))) ? (min((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))) : (7902967456508526340ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_5 [i_0] [i_2])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))) : (arr_2 [i_0]));
                }
                var_17 = ((min((min((10543776617201025276ULL), (arr_2 [i_0]))), (((/* implicit */unsigned long long int) var_2)))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)17907))) / (10543776617201025276ULL))));
                arr_11 [i_0] [i_0] = ((/* implicit */int) var_6);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) == (((/* implicit */int) ((_Bool) var_4)))));
    var_19 = ((/* implicit */_Bool) 16187178491204200968ULL);
}
