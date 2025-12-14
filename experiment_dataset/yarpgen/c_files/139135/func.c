/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139135
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
    var_15 = ((/* implicit */long long int) ((max(((!(((/* implicit */_Bool) var_12)))), (((_Bool) var_14)))) ? ((+((-(((/* implicit */int) (short)15)))))) : (((/* implicit */int) ((short) (short)27862)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */short) min((var_16), (((short) max((((/* implicit */unsigned int) min((var_9), (((/* implicit */unsigned char) arr_1 [i_0]))))), (((unsigned int) arr_0 [8U] [i_0])))))));
        var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), ((short)-27862)))) ? (max((((/* implicit */unsigned int) var_10)), (3430887884U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))));
        var_18 += ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (short)27849)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1]))) : ((+(arr_0 [9LL] [i_0])))))));
        arr_2 [0ULL] [i_0] = ((/* implicit */unsigned short) ((short) max((3430887895U), (((/* implicit */unsigned int) (short)-27851)))));
        var_19 = ((/* implicit */unsigned char) ((_Bool) ((_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_7))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_2 = 1; i_2 < 10; i_2 += 1) 
        {
            arr_10 [i_1] [i_2] = ((short) ((((/* implicit */_Bool) arr_4 [i_1] [i_2 - 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_5))));
            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((long long int) ((long long int) ((short) arr_8 [i_1] [i_2 + 2]))));
            var_20 = ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
            var_21 *= ((/* implicit */_Bool) max((((long long int) ((unsigned char) var_3))), (((/* implicit */long long int) ((signed char) arr_9 [i_1] [i_1 - 3] [i_2 + 1])))));
            var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_2) : (var_13)))), (((((/* implicit */_Bool) ((unsigned int) var_3))) ? (((unsigned long long int) 8298472529258683995LL)) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (3566754698178014269LL))))))));
        }
        var_23 |= ((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)11)), ((short)-29889)))) : (((/* implicit */int) (unsigned char)85))));
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((short) max((((((/* implicit */_Bool) var_8)) ? (arr_9 [i_1] [i_1] [i_1]) : (2129971230U))), (((/* implicit */unsigned int) ((unsigned short) var_2)))))))));
    }
    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 2) /* same iter space */
    {
        var_25 = ((short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (864079401U))))));
        var_26 -= ((/* implicit */_Bool) (~(((/* implicit */int) ((short) min((arr_7 [(unsigned short)6]), (((/* implicit */unsigned int) var_9))))))));
        var_27 &= ((/* implicit */unsigned char) max((((unsigned int) max((arr_5 [i_3]), (arr_1 [6U])))), (min((3430887884U), (((/* implicit */unsigned int) arr_5 [i_3 - 1]))))));
        var_28 -= ((/* implicit */_Bool) min((((unsigned short) ((unsigned int) var_1))), (((/* implicit */unsigned short) ((unsigned char) ((unsigned int) var_2))))));
    }
}
