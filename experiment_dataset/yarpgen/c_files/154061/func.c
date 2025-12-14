/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154061
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) var_0);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) 31U);
        var_17 = ((/* implicit */unsigned short) var_13);
    }
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_9 [i_1] = ((/* implicit */int) var_7);
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((((/* implicit */long long int) ((((/* implicit */_Bool) 1152921504606846975ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_16))))) < (3575067421500531119LL))) ? (((((/* implicit */_Bool) ((unsigned char) arr_7 [i_1]))) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) (signed char)-66)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_14))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                for (signed char i_4 = 2; i_4 < 12; i_4 += 2) 
                {
                    {
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (~(((/* implicit */int) (short)-1)))))));
                        arr_17 [i_4 - 2] [i_3] [i_3] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((long long int) arr_16 [i_4 + 1] [i_4 + 1] [i_4] [i_4 - 1] [i_1])) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)-32763))))));
                        arr_18 [i_1] [i_1] = ((/* implicit */short) (+((+(-1338768862)))));
                    }
                } 
            } 
        } 
        arr_19 [i_1] [i_1] = ((/* implicit */unsigned short) var_1);
    }
    /* vectorizable */
    for (short i_5 = 1; i_5 < 9; i_5 += 2) 
    {
        var_20 = (~(arr_6 [i_5 - 1]));
        var_21 = ((/* implicit */signed char) var_8);
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_5 - 1] [(_Bool)0] [i_5 + 1] [i_5 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2497243978601370555LL))))) : (((/* implicit */int) ((unsigned short) 1338768846)))));
        arr_22 [i_5] = ((/* implicit */_Bool) var_7);
    }
    var_23 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(min((((/* implicit */int) (short)-14806)), (1338768859)))))) ? ((((!(((/* implicit */_Bool) (unsigned short)0)))) ? (((long long int) var_6)) : (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_5))))), (var_6)))))));
}
