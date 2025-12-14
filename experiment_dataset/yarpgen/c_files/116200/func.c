/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116200
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
    var_19 = ((/* implicit */signed char) (-(var_14)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */int) 3542876338343625269ULL);
        var_21 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)163))) | (14903867735365926346ULL)));
        var_22 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)170)) : (((/* implicit */int) var_3)))) + (((/* implicit */int) min((var_10), (arr_0 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (+(min((((/* implicit */long long int) min((var_8), (((/* implicit */unsigned int) var_12))))), (max((((/* implicit */long long int) var_6)), (var_18)))))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_1]))))) ? ((~(((((/* implicit */_Bool) var_3)) ? (var_15) : (((/* implicit */unsigned int) 1102483676)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65534))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_7)))));
        var_24 = ((/* implicit */long long int) max((((var_10) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1])))), (((/* implicit */int) arr_1 [i_1]))));
    }
    for (long long int i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
    {
        arr_9 [i_2] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */int) arr_8 [i_2])) : (((/* implicit */int) arr_8 [i_2]))))) ? (max((((/* implicit */unsigned long long int) var_13)), (((arr_5 [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2])))));
        arr_10 [19] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)-121)) : (((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_5)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) > (max((arr_5 [i_2]), (((/* implicit */unsigned long long int) arr_2 [(unsigned char)2])))))))));
        var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2]))) + (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_16)), (var_1)))) : (14903867735365926362ULL))))))));
        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) (((!(arr_0 [i_2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_17))) > (24U))))) : ((~((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44125))) : (3542876338343625294ULL))))))))));
        var_27 = ((/* implicit */short) var_7);
    }
    var_28 *= ((/* implicit */unsigned long long int) (unsigned char)227);
    var_29 = ((/* implicit */int) min((((/* implicit */unsigned int) ((int) 1943368052U))), (((unsigned int) ((3542876338343625267ULL) >> (((14903867735365926340ULL) - (14903867735365926294ULL))))))));
}
