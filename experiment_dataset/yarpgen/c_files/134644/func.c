/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134644
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
    var_11 = ((/* implicit */int) (unsigned char)100);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) -3299005323120067927LL);
        var_12 = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))), (((arr_1 [i_0]) > (arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) 1905380937)))));
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) -3299005323120067927LL))));
        arr_4 [(signed char)2] &= ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_0 [i_0] [8LL]))) > (((/* implicit */int) (unsigned char)102))));
    }
    for (long long int i_1 = 3; i_1 < 20; i_1 += 3) 
    {
        var_14 -= ((/* implicit */long long int) arr_6 [(unsigned char)2]);
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((arr_5 [8U]) % (arr_5 [14]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((9223372036854775788LL) < (((/* implicit */long long int) arr_5 [0LL])))))))))));
        var_16 = ((/* implicit */int) min((max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1]))))), (arr_7 [i_1 - 1] [i_1 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)16)) / (((/* implicit */int) (signed char)117)))))));
    }
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)34186)) && (((/* implicit */_Bool) ((signed char) var_10))))))));
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-124)) & (((/* implicit */int) (unsigned short)63066))))) | (((((/* implicit */_Bool) (signed char)58)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22781)))));
}
