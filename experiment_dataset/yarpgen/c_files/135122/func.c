/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135122
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_3), (var_8)))) ? (((((/* implicit */_Bool) var_5)) ? (-239643165) : (((/* implicit */int) (short)17382)))) : (((/* implicit */int) max((var_7), ((short)-17389))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned short) (signed char)101))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_0))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))))))) : (max((((/* implicit */long long int) max((var_9), (((/* implicit */unsigned short) var_11))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29253))) : (-3695014615654399693LL)))))));
    var_13 = ((/* implicit */_Bool) min((max((((((/* implicit */_Bool) (unsigned short)6158)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-8394458213926016033LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)8025)) : (((/* implicit */int) (short)-30775))))))), (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35381))) : (3906661167010536317LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) -1344268830)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)16128)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_9 [2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))) ? (min((var_10), (((/* implicit */long long int) arr_1 [i_2] [i_1])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (arr_5 [(signed char)4] [i_1] [i_0]))))))) ? (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (-3890433100344524970LL))), (((/* implicit */long long int) max((((/* implicit */unsigned int) var_3)), (arr_1 [i_0 + 2] [i_0])))))) : (((/* implicit */long long int) max((max((arr_5 [i_0] [i_1] [i_2]), (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) (unsigned short)1105)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) var_7)))))))));
                    arr_10 [i_0] [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) min((max((arr_5 [i_2] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0]))), (min((arr_7 [i_0 + 2] [i_0] [i_0]), (((/* implicit */int) arr_2 [i_0]))))))) ? (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2]))) : (-6463727152112562219LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2])))))))) : (((/* implicit */long long int) max((min((((/* implicit */int) arr_6 [i_0] [(unsigned char)9] [i_0 + 1] [i_0])), (arr_7 [i_0 + 2] [i_1] [i_2]))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_1 - 4] [i_1 - 4]))))))));
                    var_14 = max((max((min((var_0), (arr_1 [i_2] [i_0]))), (((/* implicit */unsigned int) min((((/* implicit */short) (signed char)25)), (arr_0 [i_1])))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_10)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), ((unsigned short)3938)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_7)), ((unsigned short)512))))))));
                }
            } 
        } 
    } 
}
