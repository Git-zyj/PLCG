/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169400
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
    var_14 = ((/* implicit */unsigned long long int) ((int) ((unsigned short) min((var_1), (((/* implicit */int) var_0))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_6 [i_1] [i_1] &= ((/* implicit */int) ((((/* implicit */_Bool) (-(var_13)))) ? ((+(var_6))) : (((/* implicit */unsigned long long int) (+(286634786))))));
            var_15 = ((int) ((int) -669443685));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                var_16 -= (+((-(15639702734598728827ULL))));
                var_17 = ((((/* implicit */_Bool) ((int) var_12))) ? ((~(var_3))) : (var_8));
            }
        }
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_4 = 2; i_4 < 17; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [12] [12] [i_0] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1003358401)) ? (1735472292U) : (((/* implicit */unsigned int) -1158956574))))) : (((unsigned long long int) var_6))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 3; i_6 < 19; i_6 += 4) 
                        {
                            var_19 = (~(((-1485438561) / (1417534312))));
                            var_20 = ((/* implicit */unsigned int) ((unsigned long long int) arr_3 [i_6 - 3]));
                        }
                        arr_21 [i_5] [i_0] [2ULL] [i_3] [i_0] = ((/* implicit */int) (~(arr_17 [i_0] [i_4] [i_4 + 1] [i_5])));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned short) var_8);
                            var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) -1445635198))) || (((/* implicit */_Bool) (~(var_3))))));
                        }
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) ((unsigned int) var_4));
        }
        var_24 = ((int) var_7);
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 255488996)) ? (442315022) : (669443684)));
    }
    var_26 = ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 262143ULL)) ? (((/* implicit */unsigned long long int) var_2)) : (var_10)))))));
}
