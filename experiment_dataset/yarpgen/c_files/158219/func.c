/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158219
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
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (((long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_12)) : (var_9)))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) ((_Bool) arr_0 [i_0]));
        var_18 |= ((/* implicit */signed char) (((-(var_8))) << (((((((/* implicit */_Bool) arr_1 [i_0])) ? (1243115366U) : (3682187388U))) - (1243115348U)))));
    }
    for (long long int i_1 = 4; i_1 < 13; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_2 = 2; i_2 < 13; i_2 += 3) 
        {
            var_19 -= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((signed char) -2))) ? ((-(((/* implicit */int) (_Bool)1)))) : (arr_4 [10]))));
            var_20 *= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [(_Bool)1])) + (2147483647))) >> (((((/* implicit */int) (unsigned short)29193)) - (29192)))));
        }
        arr_7 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((~(292213461)))))) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 4] [(signed char)1] [i_1]))) : (min((((/* implicit */long long int) (unsigned char)83)), (var_3))))) : (((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (arr_5 [i_1] [i_1]))) : (((/* implicit */long long int) arr_2 [i_1]))))));
        arr_8 [i_1] = (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)69)) < (4)))));
        arr_9 [i_1] = (-(((long long int) ((signed char) arr_1 [i_1 - 4]))));
        var_21 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)99)) || (((/* implicit */_Bool) (unsigned char)172))))) ^ (((/* implicit */int) var_5)))));
    }
    for (long long int i_3 = 4; i_3 < 13; i_3 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)173))) : (var_3)))) || (((/* implicit */_Bool) ((unsigned short) 9408988429267364518ULL))))));
        var_23 -= ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_3 [8ULL])) ? (arr_1 [(signed char)18]) : (((arr_4 [8ULL]) / (((/* implicit */int) arr_3 [(unsigned char)6])))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_3 - 3]))))) ? (var_12) : (var_14)))));
        var_24 += ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)83))) : (-4513328198768172957LL)))) ? (((unsigned int) var_0)) : (1718183361U)))));
        var_25 = ((/* implicit */_Bool) min((var_25), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [0]))))), (((((/* implicit */_Bool) var_6)) ? (12466367772957624706ULL) : (((/* implicit */unsigned long long int) arr_5 [i_3] [(unsigned short)9]))))))) || (((/* implicit */_Bool) var_6))))));
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_4))))) || (((/* implicit */_Bool) ((unsigned long long int) 4645494178743049946ULL))))))) >= (((((/* implicit */_Bool) 2105232004)) ? (((/* implicit */long long int) min((((/* implicit */int) (signed char)50)), (arr_1 [i_3 - 4])))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3]))) : (arr_5 [i_3] [i_3 - 2])))))));
    }
    for (long long int i_4 = 4; i_4 < 13; i_4 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */long long int) ((arr_1 [i_4]) << (((((((/* implicit */_Bool) ((signed char) 9037755644442187083ULL))) ? (var_8) : (((/* implicit */unsigned int) ((arr_1 [i_4]) + (((/* implicit */int) (signed char)101))))))) - (3821137038U)))));
        var_28 += ((/* implicit */signed char) max((((((/* implicit */_Bool) ((short) arr_12 [8]))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) arr_0 [i_4]))))) : (arr_5 [i_4] [i_4]))), (((/* implicit */long long int) (_Bool)1))));
        arr_14 [i_4 - 3] [i_4] = ((/* implicit */long long int) (((-(-2105231996))) >> ((((-(var_9))) - (10127214676022172417ULL)))));
    }
    var_29 = ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (8589934588LL) : (6229374071603857094LL)))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))), (((/* implicit */long long int) var_10))));
}
