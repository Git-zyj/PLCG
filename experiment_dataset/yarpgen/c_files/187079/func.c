/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187079
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
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                arr_6 [i_0] [i_0] [8LL] = ((/* implicit */unsigned char) arr_3 [10U] [i_1]);
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (-(var_3))))));
            }
        } 
    } 
    var_16 -= (_Bool)1;
    /* LoopSeq 1 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        arr_10 [i_2] = ((/* implicit */_Bool) (~(max((((/* implicit */int) ((((/* implicit */unsigned int) arr_7 [i_2])) >= (2062870325U)))), (arr_7 [i_2])))));
        arr_11 [i_2] = ((/* implicit */unsigned short) var_10);
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)46)) ? (arr_7 [i_2]) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_9 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-5747))))))));
    }
}
