/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108066
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
    var_12 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) ((((/* implicit */unsigned long long int) -1519710943)) >= (var_7)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))))) / ((+(((/* implicit */int) max((var_10), (((/* implicit */short) var_1)))))))));
    var_13 &= ((/* implicit */short) min((((((/* implicit */_Bool) (+(((/* implicit */int) (short)29637))))) ? (((/* implicit */int) ((signed char) var_4))) : (((/* implicit */int) var_8)))), (((((/* implicit */int) ((unsigned short) var_2))) | (((/* implicit */int) ((signed char) 703500887U)))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((unsigned int) (~(((/* implicit */int) ((((/* implicit */int) (signed char)-32)) != (((/* implicit */int) arr_0 [i_0])))))))))));
        arr_2 [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) % (15393162788864ULL))))));
    }
    var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | ((+(var_7))))))));
    var_16 = ((/* implicit */signed char) (~((+((+(((/* implicit */int) (signed char)0))))))));
}
