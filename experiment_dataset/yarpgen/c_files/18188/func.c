/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18188
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
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 3640070689U)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (unsigned short)3))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))) != (((/* implicit */int) var_15)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (arr_2 [8LL]))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_15)), (max((arr_2 [i_0]), (arr_2 [i_0])))));
                arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))) ? (((/* implicit */long long int) min((757391133U), (((/* implicit */unsigned int) (short)11475))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (arr_4 [i_0] [i_1])))))) || (((/* implicit */_Bool) var_3))));
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((short) var_10))) ? (((((/* implicit */_Bool) 16893541050865999113ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)27))) : (3537576139U))) : (((/* implicit */unsigned int) (+(var_9)))))), (((3537576161U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)249)))))));
                arr_9 [i_1] [0ULL] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_4 [i_0] [i_1])))) ? (((/* implicit */int) arr_1 [6ULL])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10219)))))))), ((~(arr_0 [i_0] [i_0])))));
            }
        } 
    } 
}
