/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168943
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_9 [i_2] [i_1] [i_1] [8LL] = ((/* implicit */unsigned int) var_7);
                    var_18 = ((/* implicit */short) ((unsigned char) (_Bool)1));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((unsigned long long int) max((((/* implicit */int) ((unsigned short) var_4))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))))));
                    var_20 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_4 [i_0]) : (arr_4 [i_1]))));
                }
            } 
        } 
        var_21 *= ((/* implicit */unsigned char) ((min((((/* implicit */long long int) min(((_Bool)1), ((_Bool)1)))), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-278700363961265980LL))))) == (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [2LL]) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)63)) ? (3374832553741187289LL) : (-3374832553741187290LL))))))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_5 [(signed char)8]), (((/* implicit */long long int) (~(var_5))))))) ? (max((((/* implicit */unsigned int) max(((_Bool)1), (var_0)))), (((((/* implicit */_Bool) arr_7 [i_0] [(short)8] [i_0] [i_0])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) arr_7 [i_0] [10U] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) << (((((/* implicit */int) var_17)) + (32)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) & (var_3)))))));
        var_23 = ((/* implicit */short) (~(min((arr_1 [(signed char)12] [i_0]), (((/* implicit */long long int) ((int) var_16)))))));
    }
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 3374832553741187289LL)) ? (7LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) != (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_12)))))))) / (3374832553741187300LL))))));
        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) 4452949511055675504LL)))));
        var_26 = ((/* implicit */unsigned int) arr_2 [(_Bool)1]);
        var_27 = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) arr_7 [i_3] [0ULL] [0ULL] [i_3])))) + (2147483647))) << ((((((-(4796990129109556936LL))) + (4796990129109556944LL))) - (8LL)))));
    }
    var_28 ^= ((/* implicit */unsigned short) var_11);
    var_29 = ((/* implicit */short) ((signed char) var_2));
}
