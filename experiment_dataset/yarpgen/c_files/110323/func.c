/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110323
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
    var_12 = ((/* implicit */int) var_10);
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_9))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) -7LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (0ULL)))));
        var_15 ^= ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))), (((((/* implicit */_Bool) 268435455)) ? (((/* implicit */int) (unsigned short)55638)) : (((/* implicit */int) arr_1 [6ULL])))))))));
    }
    for (int i_1 = 3; i_1 < 14; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */long long int) 0ULL);
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (-(((/* implicit */int) var_10)))))));
        var_17 = ((/* implicit */short) max((var_5), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1422512539662280108ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) 65408))))) || (((/* implicit */_Bool) ((unsigned int) var_5)))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 3; i_2 < 14; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    {
                        var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_0 [i_1 + 2])), ((unsigned short)65533)))) ? (max((((/* implicit */int) var_5)), (-65413))) : (((/* implicit */int) arr_0 [i_3]))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (-((-(4356238696149967011LL)))))) || (((/* implicit */_Bool) 862834696U))));
                    }
                } 
            } 
        } 
        var_20 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) min((arr_13 [1LL] [(_Bool)1]), (((/* implicit */unsigned int) arr_7 [(unsigned char)10] [(unsigned char)10]))))) || (((/* implicit */_Bool) arr_10 [i_1] [i_1] [1ULL] [i_1]))))), ((-(((/* implicit */int) (signed char)-67))))));
    }
}
