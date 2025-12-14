/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165701
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
    for (int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_14 *= ((/* implicit */unsigned int) min((arr_1 [8ULL]), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12813081649128913702ULL)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (unsigned short)65533))))), (((((/* implicit */_Bool) arr_1 [(unsigned short)10])) ? (15659849800630410335ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))));
        var_15 *= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((unsigned int) var_11))) != (arr_2 [6ULL]))));
        var_16 += ((/* implicit */short) ((15094255556297755574ULL) * (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) (signed char)-114))))))));
        var_17 *= ((/* implicit */unsigned char) var_6);
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_18 *= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (max((var_12), (((/* implicit */long long int) -1050400395)))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 2013265920U))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)185)) << (((((/* implicit */int) (unsigned short)31468)) - (31453)))));
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_1] [i_1]))))) ? (((/* implicit */int) ((arr_3 [i_1] [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) : (((/* implicit */int) ((unsigned char) var_5))))))));
        var_20 -= ((/* implicit */unsigned long long int) (+(arr_5 [i_1] [i_1])));
    }
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
    {
        arr_10 [22LL] [i_2] = ((/* implicit */unsigned int) (short)-32757);
        arr_11 [i_2] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (unsigned short)41235)) || (((/* implicit */_Bool) 2013265935U)))) ? (((/* implicit */unsigned long long int) ((2013265920U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30)))))) : (((var_6) << (((var_6) - (5962773995536815699ULL))))))) | (max((((/* implicit */unsigned long long int) max((arr_5 [7ULL] [7ULL]), (0U)))), (arr_3 [i_2] [i_2])))));
    }
    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */int) 10ULL);
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */int) var_10)) / (((/* implicit */int) (_Bool)1)))) : (min((-728097362), (((/* implicit */int) (signed char)-93))))))) : (max((max((((/* implicit */unsigned long long int) 256)), (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-15634)) && (((/* implicit */_Bool) (unsigned short)18749))))))))))));
    }
    var_22 = var_11;
}
