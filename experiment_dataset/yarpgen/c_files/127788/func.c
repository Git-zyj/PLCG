/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127788
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
    var_17 = ((/* implicit */unsigned char) (unsigned short)65280);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) max(((~(132558673218620933LL))), (((/* implicit */long long int) (_Bool)1))));
        arr_3 [17ULL] = ((/* implicit */unsigned int) (((((-(16ULL))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) arr_0 [i_0] [i_0])) : (-6692699753783170908LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2102464674U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)52))) : (1726314059U)))) ? (((var_10) & (((/* implicit */unsigned long long int) 1105274401U)))) : (((((/* implicit */_Bool) (unsigned short)65528)) ? (18446744073709551594ULL) : (((/* implicit */unsigned long long int) 6692699753783170907LL))))))));
    }
    for (unsigned int i_1 = 3; i_1 < 13; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((max((var_14), (((/* implicit */unsigned long long int) var_2)))) >= (((/* implicit */unsigned long long int) 1099575644U)))))) | (((6692699753783170908LL) >> (((arr_1 [i_1 - 1] [i_1 - 3]) - (15555727341416068884ULL)))))));
        var_18 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~((((_Bool)1) ? (((/* implicit */int) (unsigned short)47755)) : (((/* implicit */int) var_11))))))), (var_0)));
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) min((arr_1 [i_1] [i_1]), (((/* implicit */unsigned long long int) (unsigned char)0))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_1] [i_1 + 1]) > (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))) : (((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) ^ (var_10))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 3; i_2 < 13; i_2 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) arr_0 [i_2] [i_2 - 2]);
        var_20 = ((/* implicit */int) min((var_20), ((~(arr_5 [i_2 - 1] [i_2 - 1])))));
        var_21 = arr_4 [(short)2];
    }
    var_22 ^= ((/* implicit */unsigned char) min(((-(14379855887211713431ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)52276)) <= (((/* implicit */int) (!(((/* implicit */_Bool) 3614924089016593158ULL))))))))));
    var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_8)), ((~(((((/* implicit */_Bool) var_9)) ? (20ULL) : (((/* implicit */unsigned long long int) var_3))))))));
    var_24 = ((/* implicit */_Bool) var_7);
}
