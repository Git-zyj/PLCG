/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11642
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
    for (signed char i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                arr_5 [i_0] [13LL] = ((/* implicit */unsigned char) ((signed char) max((((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_0]))), (27ULL))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] = ((/* implicit */short) max((((arr_2 [i_1 + 2] [i_1]) % (((/* implicit */unsigned long long int) arr_1 [i_1 - 1] [i_0])))), (arr_2 [i_1 + 2] [i_1])));
                                arr_14 [i_2] [i_0] [i_4] = ((/* implicit */int) ((unsigned long long int) 27ULL));
                            }
                        } 
                    } 
                } 
                var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(18446744073709551588ULL)))) ? (arr_8 [i_0] [(short)5] [(_Bool)1] [i_0]) : (((/* implicit */int) (!((!(((/* implicit */_Bool) 22ULL)))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */short) var_0);
}
