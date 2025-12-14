/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148113
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
    var_15 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 8; i_0 += 4) /* same iter space */
    {
        var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_7) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) ^ (((/* implicit */unsigned long long int) ((arr_2 [i_0]) ^ (((/* implicit */long long int) var_11)))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2])) > (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2]))))) : (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) (unsigned short)13890)) > (-1343262958)))), ((short)0))))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_0 [i_0 - 3] [i_0 + 1]), (arr_0 [i_0 - 3] [i_0 - 3])))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0 + 2] [i_0 - 1]), (arr_0 [i_0 - 2] [i_0 + 3]))))))))));
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)7)) ^ (var_4))) + (((/* implicit */int) (unsigned short)20210))));
        arr_3 [i_0] = ((/* implicit */int) min((((2251799813685247ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (18357245651134640241ULL)))) && (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) != (arr_1 [i_0]))))))));
    }
    for (int i_1 = 3; i_1 < 8; i_1 += 4) /* same iter space */
    {
        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_6 [i_1 - 1]) * (arr_6 [i_1 - 1])))) ? (((/* implicit */int) (signed char)-7)) : (((min((((/* implicit */int) arr_5 [i_1] [i_1])), (var_11))) ^ (((/* implicit */int) var_1))))));
        arr_7 [i_1] = ((/* implicit */short) var_6);
        arr_8 [i_1] = ((/* implicit */long long int) 7ULL);
    }
    for (int i_2 = 3; i_2 < 8; i_2 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned char) var_9);
        var_21 -= ((/* implicit */int) arr_1 [i_2 - 2]);
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)13888)) ? (arr_10 [i_2] [i_2]) : (var_11)))) ? (arr_1 [i_2]) : (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_2)))))))) ? (max((((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)189)))), (((/* implicit */int) (!(((/* implicit */_Bool) -710428719))))))) : ((~(((/* implicit */int) arr_12 [i_2 + 1] [i_2 + 1]))))));
        arr_13 [i_2] [i_2] = arr_5 [i_2] [i_2];
    }
    for (int i_3 = 3; i_3 < 8; i_3 += 4) /* same iter space */
    {
        arr_16 [i_3] = ((/* implicit */long long int) ((((((/* implicit */int) (short)-32741)) / (((((/* implicit */_Bool) -1343262951)) ? (-1343262956) : (((/* implicit */int) var_13)))))) > ((+(((/* implicit */int) max(((signed char)23), ((signed char)-9))))))));
        var_23 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */int) (short)-5606)) : (((/* implicit */int) (unsigned char)44))))) ? (17ULL) : ((-(var_7)))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_2))))) : ((+(((((/* implicit */_Bool) arr_2 [i_3])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
        var_24 = ((/* implicit */int) ((((/* implicit */long long int) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) arr_12 [i_3] [i_3])))), (((((/* implicit */int) var_9)) * (((/* implicit */int) (unsigned char)44))))))) % (arr_14 [i_3])));
        arr_17 [(unsigned short)6] [(unsigned short)6] |= ((/* implicit */_Bool) (short)-31170);
    }
    var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_6)) ^ (max((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_2)))))))));
    var_26 = var_13;
    var_27 = ((/* implicit */long long int) ((var_11) + ((-(((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))))));
}
