/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174534
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
    /* vectorizable */
    for (short i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 - 2] [i_0 - 3] [i_0 + 1])) ? (((((/* implicit */_Bool) arr_2 [4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (var_3)));
                    var_15 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)62)))) ? ((+(((/* implicit */int) arr_0 [(_Bool)1])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)51705)) <= (((/* implicit */int) (unsigned short)13830)))))));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */short) ((unsigned short) (unsigned char)194));
        var_16 ^= ((/* implicit */short) ((((/* implicit */int) (unsigned short)13839)) != (((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 2]))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_13) ? (-2237096904834035975LL) : (18014398509481856LL)))) ? (((/* implicit */int) ((15367291547430909402ULL) <= (((/* implicit */unsigned long long int) 18014398509481856LL))))) : (((/* implicit */int) arr_0 [i_0 - 2])))))));
    }
    var_18 = ((/* implicit */_Bool) var_0);
}
