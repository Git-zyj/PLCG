/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115333
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115333 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115333
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            var_17 = 17379973659818395148ULL;
            arr_7 [i_0 - 1] [i_0] = (!(((/* implicit */_Bool) 1066770413891156467ULL)));
            var_18 += ((/* implicit */unsigned int) ((unsigned long long int) min((2097024U), (((/* implicit */unsigned int) (unsigned short)65521)))));
            arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned long long int) arr_1 [i_1])) : (arr_5 [i_0 + 1] [i_1 + 1])));
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            arr_12 [i_0] = ((/* implicit */unsigned short) (-(var_12)));
            arr_13 [0] [0] [i_0 + 1] &= ((/* implicit */unsigned long long int) 3884942936U);
        }
        var_19 = ((/* implicit */int) arr_4 [i_0]);
    }
    for (unsigned int i_3 = 3; i_3 < 17; i_3 += 2) 
    {
        arr_16 [i_3] = ((/* implicit */int) (~(((unsigned int) ((7552710270179156444LL) >= (((/* implicit */long long int) 4294967290U)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            arr_20 [i_3] [i_3] [i_4 + 2] = ((/* implicit */unsigned int) var_9);
            arr_21 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) arr_14 [i_3]);
        }
        arr_22 [i_3] = ((/* implicit */unsigned long long int) arr_15 [i_3] [i_3]);
    }
    var_20 = ((/* implicit */long long int) (+(((unsigned long long int) max((((/* implicit */unsigned int) var_2)), (1777080468U))))));
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (max((((min((((/* implicit */unsigned long long int) 2129294477U)), (15032331133592636948ULL))) | (var_14))), (((4607182418800017408ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
}
