/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184551
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) -33554432))));
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(((/* implicit */int) min((var_1), (((/* implicit */signed char) var_8))))))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) var_4)), (((((/* implicit */_Bool) (+(((/* implicit */int) (short)2964))))) ? (((/* implicit */int) (short)-13849)) : (((/* implicit */int) min((var_5), (arr_1 [(short)12]))))))));
        var_21 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4309107494371223693LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_0 [i_0 + 1]))) + (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2]))) : (arr_0 [i_0 + 3])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_5 [i_1] [i_1])))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_18))));
        /* LoopSeq 2 */
        for (signed char i_2 = 2; i_2 < 21; i_2 += 1) /* same iter space */
        {
            var_23 = max((((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)110)) && (((/* implicit */_Bool) 0LL))))), (max((arr_1 [i_1]), (((/* implicit */signed char) (_Bool)0))))))), (max(((short)-29056), (((short) var_7)))));
            var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)2964))) + (arr_0 [i_2])));
            arr_8 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_1])) || (((/* implicit */_Bool) ((min((0LL), (((/* implicit */long long int) (short)-2964)))) - (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)96)), ((unsigned short)7))))))))));
            arr_9 [(signed char)5] [(short)9] [i_1] = (+(((/* implicit */int) (short)-17716)));
            arr_10 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)7), (((/* implicit */unsigned short) var_8))))) ? (((/* implicit */int) max(((short)17716), (arr_4 [i_1])))) : (((/* implicit */int) ((_Bool) (short)721)))))), (min((((/* implicit */long long int) var_13)), (max((((/* implicit */long long int) arr_1 [i_1])), (-2130589303220225371LL)))))));
        }
        for (signed char i_3 = 2; i_3 < 21; i_3 += 1) /* same iter space */
        {
            arr_13 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((-1LL), (((/* implicit */long long int) (short)-2964))))) ? (((((/* implicit */int) (unsigned char)175)) << (((arr_5 [i_3] [(signed char)12]) - (15747729376633223481ULL))))) : (((/* implicit */int) var_3)))) != (((/* implicit */int) arr_12 [i_1] [i_1]))));
            arr_14 [i_1] [i_1] [(unsigned char)7] = ((/* implicit */unsigned long long int) (short)-13845);
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) max((((/* implicit */int) ((short) ((unsigned short) (unsigned char)21)))), ((~(((/* implicit */int) arr_11 [i_3 + 1] [i_3 - 2])))))))));
            var_26 = ((/* implicit */unsigned short) min((((((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 1])) / (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) ((signed char) (_Bool)0)))));
        }
    }
    var_27 = ((/* implicit */signed char) ((unsigned int) ((signed char) max((((/* implicit */long long int) (short)-20841)), (5748923573835729528LL)))));
}
