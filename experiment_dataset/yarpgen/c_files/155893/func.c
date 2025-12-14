/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155893
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_13))))) <= (((((/* implicit */long long int) ((/* implicit */int) var_4))) % (var_8))))))) > (((max((var_11), (((/* implicit */unsigned long long int) (short)0)))) << (((-1LL) + (11LL)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] &= ((/* implicit */unsigned int) 3LL);
        arr_5 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_4))))) ? (min((var_11), (((/* implicit */unsigned long long int) -1LL)))) : (min((((/* implicit */unsigned long long int) (short)-1)), (5987721974884473159ULL))));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) var_7);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (arr_1 [i_0]))))) != (var_0))))) == (((((arr_9 [i_0] [(_Bool)1] [i_0] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) var_1))))) ? (max((var_3), (((/* implicit */unsigned long long int) (unsigned short)0)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_0])), (var_5)))))))));
                    arr_12 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */int) (short)0)) & (-1)));
                }
            } 
        } 
    }
}
