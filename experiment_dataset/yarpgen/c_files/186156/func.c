/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186156
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 905938044U)) ? (max((1921250750), (((/* implicit */int) (unsigned short)65532)))) : (((/* implicit */int) ((signed char) var_10)))))) ? (((/* implicit */int) ((short) 3389029251U))) : (max(((~(var_3))), (max((-1652237934), (1921250762)))))));
    var_14 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((((/* implicit */_Bool) ((var_12) & (((/* implicit */int) var_0))))) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 3964320224U)))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) : (((/* implicit */long long int) max((var_4), (((/* implicit */int) var_7)))))));
    var_15 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (max((((((/* implicit */_Bool) 905938043U)) ? (3389029259U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-84))))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)227)))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                arr_5 [i_0] [16ULL] [(unsigned char)18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)4509))))) ? (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) var_11)) : (1081642278109288656LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)83)) ? (var_2) : (((/* implicit */int) (signed char)13)))))));
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((var_3) != (1921250763))))) != (((((/* implicit */_Bool) 16383)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (5LL))))))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-45)) ? (3389029248U) : (3389029267U)));
            }
        } 
    } 
}
