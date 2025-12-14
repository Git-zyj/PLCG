/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125339
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 += ((/* implicit */long long int) max((var_5), (((/* implicit */unsigned short) min((((/* implicit */short) arr_1 [i_0])), ((short)22342))))));
        var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0])), (-8094845930404506225LL)));
    }
    /* LoopNest 3 */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        for (int i_2 = 2; i_2 < 8; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                {
                    arr_12 [i_1] [3] [5ULL] [i_3] = ((/* implicit */short) max(((-(8094845930404506225LL))), (((/* implicit */long long int) var_3))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 1; i_4 < 9; i_4 += 1) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) min(((signed char)112), (var_9)));
                                var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)100)) ? (-8094845930404506232LL) : (var_16)))) && (((/* implicit */_Bool) var_16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4 + 1] [i_2 - 1]))) : (min((arr_4 [i_1]), (((/* implicit */unsigned long long int) -1533473778))))));
                                arr_19 [(signed char)2] [i_1] [i_4] [(signed char)1] [(signed char)2] = ((/* implicit */unsigned long long int) ((arr_16 [i_5] [i_5] [i_5 - 1] [i_5] [i_5]) | (((/* implicit */long long int) min(((~(((/* implicit */int) var_10)))), (((/* implicit */int) var_2)))))));
                                var_23 = ((/* implicit */unsigned short) min((((/* implicit */int) var_5)), ((~(((/* implicit */int) (signed char)45))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((min((((/* implicit */long long int) (unsigned short)58253)), (8094845930404506231LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)47222))))))));
                    var_25 = ((/* implicit */unsigned int) arr_14 [i_1] [i_2] [1LL]);
                }
            } 
        } 
    } 
}
