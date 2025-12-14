/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130398
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
    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (524286U)))) ? (((((/* implicit */_Bool) 4294967295U)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (max((max((103327209U), (((/* implicit */unsigned int) (unsigned char)7)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)65532))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_8)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-111)))) : (((/* implicit */int) ((unsigned char) (unsigned short)0))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 12; i_0 += 3) 
    {
        arr_2 [i_0] &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_1 [i_0 - 3])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) var_14)))), ((-(((/* implicit */int) arr_1 [i_0 - 4]))))));
        var_19 += ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)65532)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) max(((unsigned char)89), (((/* implicit */unsigned char) (signed char)-35)))))))));
        var_20 += ((/* implicit */unsigned char) (unsigned short)13993);
    }
    var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((3700978266U), (((((/* implicit */_Bool) (short)0)) ? (1311404583U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237))) ^ (17976138492873646788ULL)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) var_10))));
    /* LoopSeq 3 */
    for (short i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_5 [i_1] [i_1])))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) arr_5 [21ULL] [i_1])) ? (arr_5 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
        var_23 ^= ((/* implicit */unsigned long long int) var_4);
    }
    for (short i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
    {
        var_24 |= ((/* implicit */signed char) var_10);
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)28)))))));
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22282)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3]))) : (9258043272110964580ULL)))) || (((((/* implicit */int) var_1)) > (((/* implicit */int) var_3)))))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)6))) : (var_8)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [i_4]))))) : (arr_8 [i_2])))));
                }
            } 
        } 
        arr_15 [i_2] [(unsigned short)0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483634)) ? (((/* implicit */int) arr_4 [i_2])) : (-10)))) : (3617767046577396536LL)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15))))) : (((var_9) >> (((((/* implicit */int) (unsigned short)22390)) - (22367))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)139)))))));
    }
    /* vectorizable */
    for (short i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */signed char) var_0);
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
        {
            var_28 = ((/* implicit */long long int) arr_7 [i_5]);
            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) var_9))));
            var_30 = ((/* implicit */unsigned long long int) (unsigned char)1);
            arr_20 [(unsigned char)21] [i_6] [i_5] = (-(arr_14 [i_5] [i_6] [i_6] [i_6]));
        }
    }
    var_31 = var_10;
}
