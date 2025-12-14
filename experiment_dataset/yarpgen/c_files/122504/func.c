/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122504
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
    var_14 = ((/* implicit */unsigned short) (((~(((/* implicit */int) var_2)))) | (min(((~(((/* implicit */int) var_11)))), (((/* implicit */int) var_3))))));
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (var_6)))) ? (((((/* implicit */_Bool) var_9)) ? (var_0) : (var_0))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) ((_Bool) min((((/* implicit */long long int) var_10)), (var_1))))))))));
    var_16 += ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)28)) && (((/* implicit */_Bool) var_1))))) >> (((/* implicit */int) (!(((((/* implicit */int) var_11)) == (((/* implicit */int) var_3)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */int) ((signed char) arr_0 [i_0 + 1]))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))));
        var_17 = ((/* implicit */int) ((unsigned char) arr_1 [i_0 - 1]));
        var_18 = ((/* implicit */signed char) ((long long int) arr_2 [i_0] [i_0 - 2]));
        var_19 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [(unsigned short)4] [i_0 - 2]))));
    }
    for (long long int i_1 = 3; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) (-(((int) (unsigned char)175))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)243))))))));
    }
    for (long long int i_2 = 3; i_2 < 20; i_2 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) arr_9 [i_2] [i_2])) && (((/* implicit */_Bool) var_12)))))) ? (((/* implicit */long long int) min((var_0), (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [8LL] [8LL]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2 - 2]))) : (((long long int) arr_9 [4LL] [i_2]))))));
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)25)) ? (-4459536787205204684LL) : (((/* implicit */long long int) -895693370))))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) min((arr_2 [2LL] [i_2]), (((/* implicit */signed char) var_7)))))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [(unsigned short)6] [i_2 - 2])) : (((/* implicit */int) var_12))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))));
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (~((-(9223372036854775797LL))))))));
    }
}
