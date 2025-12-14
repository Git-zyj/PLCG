/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171991
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
    var_14 = ((/* implicit */unsigned short) ((((long long int) min((var_3), (4816699843673128099LL)))) - ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (-9223372036854775806LL)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_11 [i_2] [i_4] [i_4] = arr_8 [i_1] [i_4];
                                var_15 += arr_4 [i_0] [i_1 - 1] [12LL] [i_0];
                                var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (unsigned short)56789))));
                            }
                        } 
                    } 
                    var_17 = var_2;
                }
            } 
        } 
        arr_12 [i_0] = (unsigned short)32895;
    }
}
