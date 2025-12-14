/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101039
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (short i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 9; i_2 += 3) 
            {
                {
                    var_20 *= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                    arr_7 [i_0] [i_0 - 1] [i_0 + 1] = (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_16)), (arr_2 [i_0 - 2] [i_1 - 1])))))) || (((/* implicit */_Bool) 7177920275786869783ULL)));
                    var_21 = ((/* implicit */unsigned long long int) ((4294967279U) * ((-(max((((/* implicit */unsigned int) (short)8042)), (2401702895U)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_0);
    var_23 ^= ((/* implicit */unsigned long long int) var_13);
    var_24 = -909544366396164699LL;
    var_25 = (!(((/* implicit */_Bool) (short)24242)));
}
