/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185229
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
    var_19 &= ((/* implicit */long long int) var_16);
    var_20 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [(_Bool)1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) (unsigned short)63476)) : (((/* implicit */int) (unsigned short)22731))))), (((((/* implicit */_Bool) ((short) 18446744073709551615ULL))) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
                var_21 = ((/* implicit */short) min((((_Bool) (_Bool)1)), ((_Bool)1)));
                var_22 ^= ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_10)) : (((var_15) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((short) (_Bool)1)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((((int) var_1)) / (var_13)))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        arr_14 [(_Bool)1] [i_2] = ((((/* implicit */_Bool) min((min((0), (-1581142748))), (((/* implicit */int) max((var_15), ((_Bool)1))))))) && (((/* implicit */_Bool) ((unsigned long long int) ((767958277) > (((/* implicit */int) (_Bool)1)))))));
                        arr_15 [i_2 - 1] [i_2 - 1] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_5 [i_2]))) + (((arr_5 [i_2]) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4))))));
                        var_24 = var_14;
                    }
                }
            } 
        } 
    } 
}
