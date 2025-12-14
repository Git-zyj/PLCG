/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118502
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) (signed char)-8))))), (max((((/* implicit */unsigned long long int) var_13)), (arr_0 [i_0]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13)))))));
        arr_2 [i_0] = min(((signed char)20), (((signed char) min((arr_0 [i_0]), (14997852453223495041ULL)))));
        var_19 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) >= (((/* implicit */int) arr_1 [(unsigned char)1] [i_0]))))))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) >= (arr_0 [i_0])))) == ((~(((/* implicit */int) var_1)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) (+((~(arr_0 [i_0])))));
    }
    for (signed char i_1 = 2; i_1 < 23; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned int) max(((unsigned char)107), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (-735888186)))))))));
        var_20 = ((/* implicit */signed char) 2999866117U);
        var_21 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((signed char) var_2))))) == (arr_6 [i_1 - 1])));
    }
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)47533)) ? (4169854163U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)84)))))));
    var_23 = ((/* implicit */short) (+(max((max((((/* implicit */unsigned int) (unsigned char)171)), (var_15))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_11)))))))));
}
