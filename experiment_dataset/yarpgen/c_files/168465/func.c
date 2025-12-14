/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168465
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
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) % (((/* implicit */int) var_13))))))))));
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */int) ((signed char) (signed char)-48))) : ((~(((/* implicit */int) var_2))))))) ? ((+((-(((/* implicit */int) var_0)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-65))))) ? (((/* implicit */int) min((var_0), (var_15)))) : (((/* implicit */int) min((var_1), (var_0))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? ((-((~(var_17))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
        arr_3 [(unsigned char)10] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) var_1)))))) ^ ((~((~(var_17)))))));
        var_20 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) (-(((/* implicit */int) (_Bool)1))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_7 [i_1] [(unsigned char)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_5 [24ULL]))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : (var_9))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))));
        var_21 *= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_6 [i_1] [(signed char)0]))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 16; i_2 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))));
        arr_10 [i_2] = ((unsigned char) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (var_9) : (arr_8 [i_2 + 1] [(_Bool)1])));
    }
}
