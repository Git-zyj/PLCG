/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111528
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] = (+(7197408897317450367ULL));
        var_17 &= ((/* implicit */signed char) min((((((/* implicit */_Bool) max((13584677670454742465ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (13584677670454742465ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0])))), (min((min((((/* implicit */unsigned long long int) arr_2 [(signed char)18])), (13584677670454742453ULL))), (((((/* implicit */_Bool) 17732778164933969362ULL)) ? (var_8) : (((/* implicit */unsigned long long int) -12LL))))))));
        arr_4 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
    }
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) 5569053418777624569LL)), (11387283870387584037ULL))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) 4862066403254809154ULL))) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_6)) : (var_12)))))) ? (var_15) : (((unsigned long long int) var_10))));
}
