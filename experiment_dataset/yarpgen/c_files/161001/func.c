/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161001
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
    var_20 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */long long int) ((max((4135547137U), (((/* implicit */unsigned int) min((-455627508), (-1125213505)))))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) % (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [13U])) * (((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (-7LL)))) ? (((/* implicit */int) ((arr_3 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))) : (((/* implicit */int) arr_0 [i_0]))))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) 1328553840))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */signed char) arr_0 [i_1]);
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((arr_0 [i_1]), (((short) arr_6 [i_1])))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [i_2]))));
                        var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_14 [i_2] [i_5 - 1] [i_4] [i_5]))));
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */long long int) 455627508)) | (-4560229098837952061LL))))));
                    }
                } 
            } 
        } 
        arr_18 [i_2] = (-(((/* implicit */int) (unsigned char)244)));
        arr_19 [i_2] = ((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) -1125213505)))));
    }
    var_27 = ((/* implicit */short) var_15);
    var_28 = (+(max((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))), (min((((/* implicit */int) var_10)), (-455627510))))));
}
