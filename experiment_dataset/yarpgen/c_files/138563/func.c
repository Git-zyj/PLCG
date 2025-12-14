/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138563
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) ((unsigned short) 1497196345U))))), (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)53)))))));
            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) (short)-17897)) : (((/* implicit */int) (signed char)-42))))) ? ((+((+(((/* implicit */int) (unsigned char)202)))))) : (((/* implicit */int) arr_0 [i_0]))));
        }
        for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 3) 
        {
            var_19 = ((/* implicit */unsigned long long int) arr_7 [i_2] [i_0] [i_0]);
            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [18])) ? (((/* implicit */int) arr_7 [i_0] [(unsigned char)4] [i_2])) : (((/* implicit */int) ((short) arr_6 [14ULL] [i_2]))))))));
        }
        var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_22 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (min((arr_1 [i_0]), (((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))), (((((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (var_8))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) / ((+(arr_1 [i_0])))));
    }
    var_24 = ((/* implicit */unsigned int) ((min((max((((/* implicit */int) (signed char)-1)), (var_4))), (((/* implicit */int) (unsigned short)65532)))) ^ (((/* implicit */int) ((((((/* implicit */_Bool) 14840622776018880639ULL)) ? (((/* implicit */int) (unsigned short)1242)) : (((/* implicit */int) var_0)))) < (((((/* implicit */_Bool) 14338399990953590915ULL)) ? (2145114379) : (((/* implicit */int) (short)17897)))))))));
}
