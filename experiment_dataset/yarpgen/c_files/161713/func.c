/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161713
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
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned char) ((unsigned int) (!(arr_0 [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 8; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_1 + 1])) || (((/* implicit */_Bool) 8114080085687253763LL))))) == (((/* implicit */int) (((~(arr_6 [i_0 - 1] [i_0] [i_0] [i_0]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))))));
                    var_21 += ((/* implicit */int) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned char)56)))))))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)49)))));
                    var_23 = ((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)1)), (arr_1 [i_0 - 1] [i_0 + 1])));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */_Bool) (unsigned short)3840);
    var_25 -= ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) 3563817819U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)19))) : (-279414369849135249LL))) : (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) var_5))))))));
    var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_15))) ? (12057028750526801492ULL) : (((/* implicit */unsigned long long int) min(((~(-1LL))), (((/* implicit */long long int) (unsigned short)2354)))))));
}
