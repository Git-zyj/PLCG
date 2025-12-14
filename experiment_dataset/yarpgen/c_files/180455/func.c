/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180455
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
    var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)0)) : (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)-11384)) : (((/* implicit */int) (signed char)0))))))));
    var_21 = ((/* implicit */unsigned char) (unsigned short)28957);
    var_22 &= ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) (unsigned short)28957)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_2))))), (((/* implicit */unsigned long long int) (~(max((0LL), (((/* implicit */long long int) (unsigned char)224)))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_23 = ((/* implicit */unsigned long long int) (_Bool)0);
        arr_3 [(signed char)5] = ((/* implicit */long long int) ((((/* implicit */_Bool) max(((-(7808343039764465811ULL))), (10553145617243634222ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (((/* implicit */unsigned short) arr_0 [i_0] [(unsigned short)1])))))) : (max((min((15782897918839808551ULL), (((/* implicit */unsigned long long int) arr_2 [i_0])))), (((/* implicit */unsigned long long int) var_8))))));
        arr_4 [i_0] = ((/* implicit */short) ((((((var_2) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (-2572696128232382091LL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (~(763618133165815023LL)))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))))) : (((/* implicit */int) (unsigned char)224))));
        var_24 = ((/* implicit */unsigned char) ((max((max((arr_2 [i_0]), (arr_0 [i_0] [i_0]))), (((arr_2 [12ULL]) && (((/* implicit */_Bool) (signed char)0)))))) ? (((((/* implicit */_Bool) var_11)) ? (min((var_6), (((/* implicit */long long int) (short)3946)))) : (((((/* implicit */_Bool) (short)-18367)) ? (-4791529587765382432LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)195))))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_4)), (var_19)))))));
    }
    var_25 = ((/* implicit */long long int) var_3);
}
