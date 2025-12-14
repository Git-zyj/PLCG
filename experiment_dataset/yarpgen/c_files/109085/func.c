/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109085
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((int) (unsigned short)31376)) : ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_17 ^= ((/* implicit */int) arr_0 [i_0]);
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_14)), (((((-1370755129) + (2147483647))) << (((var_2) - (341553465)))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))));
    }
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1809016843U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)199))));
    var_20 = ((/* implicit */_Bool) (unsigned short)20991);
    var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) var_5))))) ? (var_11) : (((/* implicit */unsigned long long int) max((1162817783U), (((/* implicit */unsigned int) var_13))))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_11)))) ? (((((/* implicit */int) var_3)) / (((/* implicit */int) var_13)))) : (((/* implicit */int) var_4)))))));
}
