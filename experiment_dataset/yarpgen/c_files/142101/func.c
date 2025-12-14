/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142101
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((arr_0 [i_0]) >> (((arr_0 [i_0]) - (16750275484763282363ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)80)))))))))));
        var_20 = ((/* implicit */unsigned char) var_18);
    }
    /* LoopNest 3 */
    for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                {
                    var_21 = ((((/* implicit */_Bool) max((min((7784857084823544224ULL), (((/* implicit */unsigned long long int) (signed char)-43)))), (arr_4 [i_1 + 1] [i_1] [i_1])))) ? (((/* implicit */long long int) (~((~(((/* implicit */int) var_0))))))) : (var_15));
                    arr_8 [i_1] [i_1] [i_3] = ((/* implicit */short) min((max((7784857084823544224ULL), (((/* implicit */unsigned long long int) (unsigned char)234)))), (max((arr_4 [i_1 - 1] [i_1] [i_1]), (arr_4 [i_1 + 1] [i_1] [i_1])))));
                    var_22 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((((/* implicit */_Bool) 4294138949U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)155))) : (1430347866U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))), (var_5)));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((0LL), (((/* implicit */long long int) (short)3665)))), (((/* implicit */long long int) (unsigned short)50699))))) ? (((/* implicit */int) var_11)) : ((+(((/* implicit */int) var_11))))));
                }
            } 
        } 
    } 
}
