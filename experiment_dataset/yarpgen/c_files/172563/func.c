/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172563
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (unsigned int i_3 = 1; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_20 *= ((/* implicit */int) (((-(((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (1394872617U))))) != ((((_Bool)1) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)20537)) ? (((/* implicit */int) arr_8 [i_0] [i_1])) : (((/* implicit */int) (_Bool)1))))) : (var_10)))));
                        var_21 = ((/* implicit */int) max((var_21), ((-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (~(((((/* implicit */_Bool) arr_10 [(signed char)1] [(signed char)1] [(signed char)1] [i_2] [i_3])) ? (((17798369654447831769ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) arr_5 [i_1])))))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_17)))) ? (min((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) ^ (var_18))), (((/* implicit */long long int) ((int) (signed char)7))))) : (((((5181648132794497507LL) - (((/* implicit */long long int) 1395749649)))) + (((/* implicit */long long int) 2147137490U))))));
        arr_13 [i_0] [i_0] &= ((/* implicit */_Bool) max(((((_Bool)1) ? (2755170606U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))) : (max((((/* implicit */unsigned int) (short)9309)), (2755170622U)))))));
        arr_14 [i_0] [i_0] = ((/* implicit */_Bool) 4194303);
    }
    var_24 ^= ((/* implicit */signed char) (+((+(((((/* implicit */int) (signed char)-47)) * (((/* implicit */int) var_4))))))));
}
