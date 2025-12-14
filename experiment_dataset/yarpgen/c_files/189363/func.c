/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189363
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
    var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_10))))))));
    var_18 &= 5256158408819075592ULL;
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((unsigned long long int) ((unsigned long long int) (+(((/* implicit */int) var_7)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1])))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) max((((((((/* implicit */_Bool) 13190585664890476023ULL)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) >> ((((+(4240779502093741469ULL))) - (4240779502093741444ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0)))))));
        arr_3 [i_0] = ((/* implicit */int) ((short) arr_1 [i_0] [i_0]));
    }
    for (int i_1 = 2; i_1 < 18; i_1 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */short) (~(((/* implicit */int) ((((var_9) ? (2245123183082428634LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) > (((/* implicit */long long int) ((unsigned int) var_5))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 19; i_4 += 2) 
                {
                    {
                        arr_16 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */short) (+(((/* implicit */int) max((min(((_Bool)1), (var_5))), ((_Bool)0))))));
                        var_22 -= ((/* implicit */unsigned int) arr_13 [i_1] [i_1] [i_3] [i_4] [i_1]);
                        arr_17 [i_1] [i_2] [i_1] [i_1] |= ((((/* implicit */_Bool) (~(min((var_3), (((/* implicit */unsigned int) arr_14 [i_3] [i_3] [i_3]))))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) (signed char)-107)) | (((/* implicit */int) (short)17285)))));
                    }
                } 
            } 
        } 
        arr_18 [i_1] = ((_Bool) max((((/* implicit */long long int) var_3)), (var_11)));
    }
    var_23 = ((/* implicit */long long int) var_8);
}
