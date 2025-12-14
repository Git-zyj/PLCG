/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102797
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
    var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) var_7))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_10)) & (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_15))))), (var_1)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(arr_2 [i_0])))), (((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned char)14] [(unsigned char)14]))))))))));
        arr_4 [i_0] = (!(((/* implicit */_Bool) (~(arr_2 [i_0])))));
        var_19 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 15802781249238242614ULL)) ? (((/* implicit */long long int) 1841069683)) : (arr_0 [i_0] [i_0]))), (((/* implicit */long long int) (~(((/* implicit */int) var_7)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                arr_11 [i_0] = (i_0 % 2 == zero) ? (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_1]) != (var_14))))) < (max((var_13), (((/* implicit */unsigned long long int) 2340343007768673795LL))))))) >> ((((~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 + 1] [i_1 + 1])) : (var_0))))) - (18446744071712564680ULL))))) : (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_1]) != (var_14))))) < (max((var_13), (((/* implicit */unsigned long long int) 2340343007768673795LL))))))) >> ((((((~(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 + 1] [i_1 + 1])) : (var_0))))) - (18446744071712564680ULL))) - (18446744071563540611ULL)))));
                /* LoopSeq 1 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (~((~(max((9192754625888465320LL), (((/* implicit */long long int) 4245478261U)))))))))));
                    var_21 ^= ((/* implicit */_Bool) arr_12 [i_1] [(unsigned char)0] [(unsigned short)4] [i_1]);
                }
            }
            var_22 = ((/* implicit */signed char) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)0)))))) == (arr_2 [i_0])));
        }
        var_23 -= ((/* implicit */unsigned int) (~(arr_9 [(_Bool)1])));
    }
}
