/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107235
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
    var_20 += ((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (var_9)))) % (max((((/* implicit */unsigned long long int) (_Bool)1)), (6365864284553337025ULL)))))));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((((/* implicit */_Bool) min((max((var_7), (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-74)))))) : (((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 6365864284553337053ULL))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max((((/* implicit */unsigned int) var_14)), (((((/* implicit */_Bool) 1424499492U)) ? (402430514U) : (1457532U))))))));
                var_23 *= ((/* implicit */unsigned short) min((((long long int) ((((/* implicit */_Bool) var_3)) ? (var_3) : (var_4)))), (((/* implicit */long long int) ((4293509763U) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) 4294967273U)))))))))));
                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_11))))) <= (((var_0) | (((/* implicit */long long int) 788047573U)))))))));
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) 3924660184U)) % (6365864284553337053ULL))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17177772032LL)) ? (((/* implicit */int) (unsigned short)12620)) : (((/* implicit */int) (signed char)40))))))))));
            }
        } 
    } 
    var_26 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13918))) : (6365864284553337025ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ^ (((/* implicit */int) var_11))));
}
