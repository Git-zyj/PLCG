/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132712
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_1 [(unsigned char)7]))))))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) (unsigned char)13);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) ((unsigned short) min((((/* implicit */int) (signed char)7)), ((+(((/* implicit */int) var_1)))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                {
                    var_17 = ((/* implicit */int) arr_4 [i_3]);
                    var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_3]))) | ((~(((unsigned int) var_13))))));
                    arr_11 [(_Bool)1] [(_Bool)1] [(_Bool)1] = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) arr_7 [i_1])))), (((((/* implicit */int) var_6)) < (arr_7 [i_1])))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_4 [i_1]))));
    }
    var_20 = ((/* implicit */unsigned long long int) (short)26270);
    var_21 |= ((/* implicit */int) ((_Bool) ((((((/* implicit */int) var_14)) << (((3875916336U) - (3875916329U))))) ^ (((/* implicit */int) (_Bool)1)))));
}
