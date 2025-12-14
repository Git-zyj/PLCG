/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12158
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((unsigned int) (unsigned short)20817)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_6), (((/* implicit */signed char) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)44719)) << (((((/* implicit */int) (unsigned char)231)) - (225)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (0U)))))) ? (((int) max((0U), (((/* implicit */unsigned int) (signed char)-111))))) : (((/* implicit */int) var_2))));
        var_12 *= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-88)), (var_4)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            var_13 |= ((/* implicit */_Bool) ((var_4) ^ (2U)));
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (unsigned char)40);
            var_14 = ((/* implicit */_Bool) (unsigned char)120);
        }
        var_15 *= ((/* implicit */int) ((((/* implicit */_Bool) -1946932433)) ? (((unsigned int) ((unsigned int) 0U))) : (2363259904U)));
        arr_8 [(_Bool)1] = ((/* implicit */unsigned int) ((signed char) ((unsigned char) ((short) var_2))));
    }
    var_16 = ((/* implicit */unsigned long long int) (unsigned short)44731);
    var_17 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1966080U)) - (var_3)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)117)) > (((/* implicit */int) (unsigned short)20805)))))) : (((unsigned long long int) 2694821257U)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((_Bool) (signed char)-69)))))));
}
