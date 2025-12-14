/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155246
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
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) 9897733832200266534ULL))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = (+(((/* implicit */int) var_18)));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 33030144U))) ? (((/* implicit */long long int) min((((66584576U) & (3422416613U))), (((/* implicit */unsigned int) ((unsigned char) (unsigned short)45357)))))) : (((max((((/* implicit */long long int) (short)5091)), (arr_1 [i_0]))) >> (((((/* implicit */int) (unsigned char)137)) - (84)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned short)20186)), (min((arr_1 [i_1]), (arr_1 [i_1]))))))));
        arr_5 [i_1] = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)20197));
    }
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) max(((signed char)105), (((/* implicit */signed char) (_Bool)1)))))));
    var_24 -= ((/* implicit */unsigned short) min((var_7), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((signed char)-105), (((/* implicit */signed char) (_Bool)1))))) || (((/* implicit */_Bool) (unsigned short)45357)))))));
    var_25 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)36))));
}
