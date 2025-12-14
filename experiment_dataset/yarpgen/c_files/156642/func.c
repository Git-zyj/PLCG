/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156642
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)47369)))))));
    var_21 = ((/* implicit */int) (((~(11U))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 18446744073709551606ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-81))) : (5059518882009427623LL))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63412)) ? (((/* implicit */unsigned long long int) 3397309312U)) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) 1212770964)) : (18446744073709551600ULL))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (~((-(((/* implicit */int) (_Bool)1)))))))));
            arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_3 [(_Bool)1] [i_0]))))))) ? ((~(((/* implicit */int) (unsigned short)18084)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)2142))))));
        }
        arr_7 [i_0] = ((/* implicit */short) ((164869116) >= (((/* implicit */int) (short)-6883))));
    }
    var_23 = ((/* implicit */short) var_2);
}
