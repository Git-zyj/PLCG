/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158477
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
    var_11 = ((/* implicit */unsigned short) ((_Bool) ((((((/* implicit */int) var_5)) + (((/* implicit */int) var_3)))) >= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)31396)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (((((/* implicit */_Bool) 14ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34142))) : (7410611552988950937ULL)))))));
                var_13 += ((/* implicit */unsigned short) arr_4 [i_0] [i_0] [i_0 + 1]);
            }
        } 
    } 
    var_14 = var_1;
    var_15 = ((/* implicit */_Bool) min((1103989903), (((((/* implicit */int) (unsigned char)5)) * (((/* implicit */int) (_Bool)0))))));
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)34140)))) ? (((unsigned int) 4518724272004376191ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1684)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) min(((short)32766), (((/* implicit */short) (signed char)21)))))))) : (min((((unsigned long long int) var_9)), (((/* implicit */unsigned long long int) (-(-3292708268677536976LL)))))));
}
