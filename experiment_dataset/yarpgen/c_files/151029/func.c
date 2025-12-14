/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151029
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (1048575ULL))) >> ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((long long int) var_13)) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((((/* implicit */int) arr_2 [i_0])) < (((/* implicit */int) ((signed char) var_10))));
                arr_6 [i_1] = (!(((_Bool) (signed char)-113)));
            }
        } 
    } 
    var_18 = min((max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) + (8610990450331631423ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)39825)))))), (((/* implicit */unsigned long long int) -5510304488650968944LL)));
    var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_8)), (14139417603254214519ULL)));
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) (~((((((_Bool)1) || (((/* implicit */_Bool) arr_8 [i_2])))) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_2])) < (((/* implicit */int) var_13))))) : (((/* implicit */int) var_14))))));
        var_21 = ((/* implicit */unsigned long long int) var_4);
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 15; i_3 += 1) 
    {
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (~(((arr_12 [(_Bool)1]) >> (((/* implicit */int) arr_7 [i_3])))))))));
        arr_13 [i_3] = ((/* implicit */_Bool) (+(arr_9 [i_3])));
    }
}
