/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128452
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
    var_20 = var_7;
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] [i_0 + 1] = min((((/* implicit */unsigned int) -1758399784)), (253136467U));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10945448886105401250ULL)) ? (18881797) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 2])))) : (((((/* implicit */int) arr_0 [i_0 + 3])) + (((/* implicit */int) arr_0 [i_0 - 1]))))));
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((4041830834U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-27141)))))), (arr_1 [i_1 - 2])))) ? (min((min((((/* implicit */long long int) (short)27141)), (-7723528197906003184LL))), (arr_1 [i_0 + 1]))) : (((((/* implicit */_Bool) 253136467U)) ? (((/* implicit */long long int) 3922842029U)) : (arr_1 [i_0 - 2])))));
                    var_22 -= ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
                }
            } 
        } 
        var_23 -= ((/* implicit */_Bool) min((-7723528197906003181LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3749306523U))))));
        arr_10 [7LL] = ((/* implicit */unsigned int) 7723528197906003174LL);
        arr_11 [i_0] = ((((/* implicit */_Bool) (unsigned short)18153)) ? (((/* implicit */int) max(((short)13630), ((short)32753)))) : (((/* implicit */int) arr_6 [i_0] [21U])));
    }
}
