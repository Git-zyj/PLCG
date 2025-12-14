/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157502
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
    var_10 += ((/* implicit */unsigned char) ((-1088859873056314758LL) ^ (-1088859873056314758LL)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) (+(min((9223372036854775807LL), (-1088859873056314758LL)))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 15; i_2 += 3) 
                {
                    arr_9 [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (9223372036854775807LL) : (7328826866962284940LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 16383)))))))), ((~(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) 8991842055605897208LL)) : (0ULL)))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */long long int) (signed char)117);
                    arr_11 [i_0] [i_1] [14ULL] [i_0] = (~(max((((/* implicit */long long int) ((-9223372036854775792LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)48628)))))), (((-218747960129600465LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-16758))))))));
                }
                var_11 = (~(max(((~((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) (~(((/* implicit */int) (short)16772))))))));
            }
        } 
    } 
}
