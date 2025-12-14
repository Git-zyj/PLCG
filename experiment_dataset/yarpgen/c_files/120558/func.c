/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120558
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_6 [i_0] [i_1 - 2] [i_1] = ((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_13)) : ((~((-(((/* implicit */int) var_7))))))));
                    arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? ((-(arr_3 [i_0] [i_1] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                    arr_8 [4U] |= ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
                }
                for (signed char i_3 = 1; i_3 < 19; i_3 += 1) 
                {
                    arr_12 [i_1] [17] [i_3 - 1] = ((((/* implicit */_Bool) 1947213337U)) ? (12287900061166008050ULL) : (8646911284551352320ULL));
                    arr_13 [20ULL] [i_1] [(short)20] [i_1] |= ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) ((signed char) var_1))))));
                    var_16 = ((/* implicit */signed char) (!(arr_1 [i_3 - 1] [i_3 + 3])));
                }
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_13))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */int) (signed char)7)) <= (var_14)))), ((short)-3422))))));
}
