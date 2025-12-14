/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154053
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_7)))))))) ? (((/* implicit */int) min((var_2), (((/* implicit */signed char) ((24LL) == (((/* implicit */long long int) var_3)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_13 -= ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6075)) ? (16777215) : (((/* implicit */int) (short)-6076))))) ? (((/* implicit */int) ((12199269467205566437ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)25)))))) : (((/* implicit */int) min(((short)6075), (((/* implicit */short) arr_7 [i_0] [i_1] [i_2] [i_1])))))))) <= (1347495231114543305LL)));
                    arr_8 [(short)10] [i_1] [i_2] = ((/* implicit */unsigned short) (signed char)47);
                }
                var_14 ^= ((/* implicit */signed char) var_1);
                var_15 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 3368465919U))))) >> (((arr_0 [i_0] [i_0]) + (5585216064868746344LL)))));
            }
        } 
    } 
}
