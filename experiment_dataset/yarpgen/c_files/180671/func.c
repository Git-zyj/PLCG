/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180671
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
    for (unsigned short i_0 = 3; i_0 < 10; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
        var_14 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned char)140)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0 - 3]) : (arr_1 [i_0 + 1]))))));
    }
    for (unsigned short i_1 = 3; i_1 < 10; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)58)) ? ((-((-(((/* implicit */int) (unsigned short)50342)))))) : (((/* implicit */int) (unsigned char)52))));
        var_15 = ((/* implicit */unsigned short) max((arr_0 [i_1]), (((/* implicit */long long int) (unsigned short)50342))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((((/* implicit */int) arr_6 [i_1] [i_1])) << (((6450816461687758153LL) - (6450816461687758136LL))))) : (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_6 [i_1] [i_1]))))))));
    }
    for (unsigned char i_2 = 2; i_2 < 11; i_2 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (unsigned short)1798)) && (((/* implicit */_Bool) arr_9 [i_2]))))))));
        arr_10 [i_2 - 2] = ((/* implicit */unsigned char) min((min((-230385858466821685LL), (((/* implicit */long long int) arr_9 [i_2 - 2])))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) arr_9 [i_2 - 2])))))));
    }
    for (unsigned short i_3 = 3; i_3 < 24; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_4 = 1; i_4 < 24; i_4 += 2) 
        {
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) max(((unsigned short)15193), (((/* implicit */unsigned short) arr_15 [i_4] [i_3] [i_3])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_4] [i_4 + 1] [i_4]))) < (var_9))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)74))))) ? (min((443826667572282169LL), (443826667572282169LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)112))))))))));
            /* LoopSeq 1 */
            for (long long int i_5 = 1; i_5 < 24; i_5 += 3) 
            {
                arr_20 [(unsigned char)21] [i_4] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [i_3]))))))))) ? ((-(((/* implicit */int) max(((unsigned short)50342), ((unsigned short)15193)))))) : (((((/* implicit */int) (unsigned char)48)) / (((/* implicit */int) (unsigned short)15193))))));
                var_19 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (unsigned char)75))))));
            }
        }
        for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            arr_23 [(unsigned short)14] = var_1;
            arr_24 [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27662))) : (max(((-9223372036854775807LL - 1LL)), (36026597995708416LL))))) | (max((var_1), (((((/* implicit */_Bool) arr_15 [i_3] [i_3] [i_3])) ? (arr_17 [i_6] [i_3]) : (var_12)))))));
        }
        arr_25 [(unsigned char)13] [(unsigned short)22] = ((/* implicit */unsigned char) arr_16 [i_3] [i_3] [i_3 - 1]);
        arr_26 [i_3] [i_3] = ((/* implicit */long long int) (unsigned short)448);
    }
    var_20 = ((/* implicit */unsigned short) var_9);
}
