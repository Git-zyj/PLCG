/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126866
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
    var_19 = ((((((((/* implicit */unsigned long long int) 5915300488759685755LL)) <= (var_17))) && ((!(((/* implicit */_Bool) var_13)))))) || (((/* implicit */_Bool) (~((+(((/* implicit */int) (unsigned short)23040))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    arr_10 [i_1 + 2] [i_1 + 1] [i_1 + 2] = max(((+((+(var_17))))), (((/* implicit */unsigned long long int) var_18)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        arr_13 [i_0 + 1] [i_1] [i_1] [i_0 + 1] &= ((/* implicit */int) ((_Bool) 4998833982062677471ULL));
                        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) min((1830016879), (((/* implicit */int) (short)4638)))))));
                    }
                    arr_14 [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 508)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (unsigned short)0)))), ((-((-(((/* implicit */int) arr_8 [i_0 - 1] [i_1] [i_2]))))))));
                }
            } 
        } 
    } 
}
