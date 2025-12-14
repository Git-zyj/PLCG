/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129798
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) arr_0 [(signed char)8]);
        var_12 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_10))));
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((signed char) arr_1 [i_0])))));
    }
    for (short i_1 = 1; i_1 < 10; i_1 += 3) /* same iter space */
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)-22)), ((unsigned char)65)));
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (~((~(((/* implicit */int) var_8)))))))));
    }
    /* vectorizable */
    for (short i_2 = 1; i_2 < 10; i_2 += 3) /* same iter space */
    {
        var_15 &= ((/* implicit */unsigned char) (signed char)-115);
        var_16 *= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)89))));
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */int) (short)-7136)) % (((/* implicit */int) (unsigned char)121))))) ? (((/* implicit */int) ((unsigned char) arr_5 [i_2] [i_2 - 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))));
    }
    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        var_18 = ((/* implicit */signed char) max((arr_10 [i_3]), (var_3)));
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) max((((/* implicit */long long int) (signed char)121)), (9223372036854775807LL))))));
        arr_11 [i_3] [i_3] = (+(arr_10 [i_3]));
        var_20 += ((/* implicit */int) arr_9 [i_3]);
    }
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((short) (_Bool)1)))));
    var_22 -= ((/* implicit */unsigned char) ((((((/* implicit */int) min((var_8), ((unsigned char)6)))) | (((/* implicit */int) var_1)))) >= (min(((+(((/* implicit */int) var_8)))), (((/* implicit */int) var_5))))));
    var_23 -= ((/* implicit */unsigned long long int) (+(max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) max((var_6), (var_6))))))));
}
