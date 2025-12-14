/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104589
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_20 = ((/* implicit */int) ((((((/* implicit */int) ((((/* implicit */_Bool) -6796104803520888658LL)) && (((/* implicit */_Bool) (signed char)-113))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1] [10LL] [i_3]))))))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)226))))))));
                        var_21 += arr_0 [i_3];
                        var_22 |= ((/* implicit */int) (((-(max((arr_2 [i_2] [i_1]), (arr_2 [i_0] [i_2]))))) % (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_1 - 4])))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            var_23 |= ((/* implicit */long long int) ((min((((/* implicit */int) ((_Bool) 1358709557))), (-1358709557))) + ((+(1358709540)))));
                            var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1358709557))));
                        }
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_0] [(unsigned char)17] [i_0] [i_0] [16U] [i_0])) || (((arr_5 [i_0] [i_0] [i_0] [i_0]) && (((/* implicit */_Bool) 1634083316))))));
        var_25 ^= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1358709544)))))) / (min((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) 5470558864660624790LL))))))) ? (((/* implicit */int) ((unsigned char) -73055385))) : ((+(15))));
    }
    for (unsigned int i_5 = 3; i_5 < 11; i_5 += 2) 
    {
        var_26 *= ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) 16153901045261624738ULL)))));
        var_27 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_9 [i_5] [11ULL] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 - 1])))) || (((_Bool) arr_9 [i_5] [(_Bool)1] [i_5] [i_5 - 3] [i_5] [i_5]))));
    }
    var_28 -= ((/* implicit */long long int) ((((var_7) - (((/* implicit */long long int) var_4)))) != (((((/* implicit */_Bool) var_18)) ? ((((_Bool)1) ? (((/* implicit */long long int) 4294967292U)) : (5470558864660624772LL))) : (((/* implicit */long long int) var_3))))));
    var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) max((var_11), (((/* implicit */int) var_0)))))));
}
