/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132577
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2 + 1] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_2 - 2])) ? (((/* implicit */int) (short)27017)) : (((/* implicit */int) (signed char)48)))), (((/* implicit */int) max((((unsigned short) (short)8192)), (((/* implicit */unsigned short) (signed char)-82)))))));
                    arr_10 [i_0 + 1] [i_0 + 1] [i_2 + 1] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) -556854930695589120LL)) ? (arr_5 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(signed char)3] [(signed char)3]))))) - (((/* implicit */long long int) (+(((/* implicit */int) (short)(-32767 - 1)))))))) | (((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (short)-17355)), (arr_8 [i_2] [i_1] [i_2])))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_18))))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((_Bool) var_15)))))) + (((((/* implicit */_Bool) var_11)) ? (((long long int) (signed char)46)) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)33168), (((/* implicit */unsigned short) (signed char)-34))))))))));
    var_20 &= ((/* implicit */long long int) (+(((/* implicit */int) (signed char)77))));
    var_21 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))) - (((long long int) (unsigned short)32368)))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
}
