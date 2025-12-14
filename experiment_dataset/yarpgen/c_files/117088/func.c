/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117088
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) var_1);
                arr_7 [2] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)96))) | (((unsigned int) (unsigned short)16383))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4294967284U)) ^ (17172222937427960384ULL)))) ? (((((/* implicit */long long int) 4294967284U)) & (-1372276575706958857LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 4294967284U))))));
                var_19 = ((/* implicit */unsigned char) ((min((11171030817542699012ULL), (((/* implicit */unsigned long long int) ((unsigned int) arr_3 [3ULL] [i_0]))))) == (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) * (var_11)))) ? (((((/* implicit */_Bool) -4189961729685193142LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31417))) : (0ULL))) : (((/* implicit */unsigned long long int) ((long long int) (_Bool)1)))))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) max((12617499694768951152ULL), (((/* implicit */unsigned long long int) arr_4 [0LL] [i_1 - 2] [i_0]))));
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) max((((/* implicit */long long int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-15)))), (min((((/* implicit */int) (_Bool)1)), (var_15)))))), (((long long int) min((5829244378940600463ULL), (((/* implicit */unsigned long long int) (unsigned char)57)))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (min((((/* implicit */long long int) 2147483646)), (var_5)))))) ? (min((0ULL), (((/* implicit */unsigned long long int) (unsigned char)39)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (min((((/* implicit */signed char) (_Bool)1)), ((signed char)15)))))))));
    var_22 = var_3;
}
