/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131800
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
    var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((var_17) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))) ? (((var_5) ^ (max((var_11), (var_11))))) : ((~(var_16)))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_0 [i_0]))));
        var_20 = (((((-(((/* implicit */int) arr_2 [5] [i_0])))) + (((/* implicit */int) max((((/* implicit */unsigned char) var_9)), (arr_0 [i_0])))))) - ((+((-(((/* implicit */int) (unsigned short)7)))))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 10; i_2 += 2) 
            {
                {
                    var_21 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned short) -709343932))) ? (((/* implicit */int) arr_5 [(unsigned short)0] [i_2])) : (((/* implicit */int) arr_1 [4])))) * (((/* implicit */int) (unsigned short)16128))));
                    arr_7 [i_0] [(unsigned short)9] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_3)))) ? (((long long int) var_10)) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [(signed char)3] [(signed char)3]))))))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) max((((/* implicit */long long int) (signed char)-66)), (17179869183LL))))));
                }
            } 
        } 
    }
    for (long long int i_3 = 3; i_3 < 13; i_3 += 4) 
    {
        arr_10 [i_3] = ((/* implicit */unsigned short) max((((/* implicit */int) ((_Bool) arr_8 [i_3] [i_3 - 3]))), ((~(((/* implicit */int) arr_8 [i_3] [i_3 - 2]))))));
        var_23 = ((/* implicit */signed char) var_0);
    }
}
