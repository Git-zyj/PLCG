/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169845
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(var_2)))))) ? (min((((((/* implicit */_Bool) var_14)) ? (16611161308643025994ULL) : (((/* implicit */unsigned long long int) -7548546748169938311LL)))), (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
    var_17 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (var_1)))) ? (((/* implicit */int) (unsigned char)90)) : (max((((/* implicit */int) (signed char)47)), (var_8))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_18 = ((((/* implicit */_Bool) ((7548546748169938305LL) / (-7548546748169938316LL)))) ? (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) arr_1 [14ULL] [i_0])), (arr_0 [(unsigned char)4]))), (arr_0 [16])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (((((/* implicit */_Bool) arr_0 [3U])) ? (var_15) : (arr_2 [i_0]))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29347))) : (var_2)))) ? (arr_2 [i_0]) : (var_0)));
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_1])))))));
        }
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_20 = ((/* implicit */short) (-((((!(((/* implicit */_Bool) 2853615248U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)62510))))) : (min((var_0), (((/* implicit */unsigned long long int) (unsigned short)605))))))));
            var_21 = ((/* implicit */int) min((var_21), (min((max((((/* implicit */int) (!(((/* implicit */_Bool) 7548546748169938308LL))))), (((((/* implicit */_Bool) -6364147004415564094LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))))), (((/* implicit */int) (short)23477))))));
            arr_9 [i_0] [(signed char)15] [i_2] |= ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63552)) ? (((/* implicit */int) arr_8 [10ULL] [i_2] [i_0])) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), ((unsigned short)30856)))) : (((/* implicit */int) ((arr_2 [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_0]))))))))), (max((((7548546748169938315LL) & (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_0] [(_Bool)1]))))), (((/* implicit */long long int) ((unsigned short) (_Bool)1)))))));
        }
    }
    for (short i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) max(((_Bool)1), (((((/* implicit */int) (unsigned short)10591)) == (((/* implicit */int) (_Bool)1))))));
        var_23 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_3]))))), ((-(max((arr_2 [20U]), (((/* implicit */unsigned long long int) (unsigned short)65535))))))));
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) arr_11 [i_3]))));
    }
    /* LoopSeq 1 */
    for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        arr_15 [i_4] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)20002))))) ? (((((/* implicit */_Bool) arr_12 [i_4])) ? (var_4) : (arr_14 [i_4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
        var_25 = max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535)))))))), (((((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_14 [19LL]))) + (var_10))));
    }
}
