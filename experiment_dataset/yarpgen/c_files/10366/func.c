/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10366
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
    var_11 = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) -2144714741)) <= (var_1)))))) == (((unsigned int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_5))))));
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) >= (((/* implicit */int) ((signed char) var_2)))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((int) arr_1 [13ULL])) <= (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)255))))))) > (((/* implicit */int) max((((((/* implicit */int) arr_0 [(unsigned char)9])) > (((/* implicit */int) arr_0 [i_0])))), (arr_0 [i_0]))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 14; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_2 - 1])))));
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (-((((+(((/* implicit */int) arr_1 [i_0])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(_Bool)1] [11] [i_2])))))))));
                    arr_8 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) 4170069624130239733LL))))) < (((((/* implicit */int) arr_6 [(short)9] [i_1] [i_1] [i_2])) << (((7568056260256765756LL) - (7568056260256765731LL))))))));
                }
            } 
        } 
        arr_9 [(unsigned char)2] = ((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) (unsigned char)77))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) 342821164U)) ? (((/* implicit */int) arr_1 [(unsigned char)7])) : (((/* implicit */int) arr_0 [13ULL]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_5 [i_0] [i_0] [i_0])))) : (((long long int) arr_0 [10U]))))));
    }
}
