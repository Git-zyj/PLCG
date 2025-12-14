/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107166
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
    var_20 = ((/* implicit */unsigned short) 501950751);
    var_21 = ((/* implicit */unsigned short) var_11);
    var_22 = var_3;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_23 = ((/* implicit */int) min((var_23), (((int) (+(max((2871012586174543120LL), (((/* implicit */long long int) 501950740)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_0 [i_0])), (min((arr_1 [i_0] [i_0]), (((/* implicit */long long int) arr_2 [i_0] [i_0]))))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [(unsigned char)10] [(unsigned char)10])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)2)) == (((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [(unsigned short)7] [i_0])))))))));
        var_24 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) -1559782340)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29404)) ? (1340051832) : (501950751)))) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)36132)))))))));
        arr_5 [i_0] = (unsigned short)36113;
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (arr_8 [i_1])))) == (arr_6 [i_1] [i_1])));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1841700680)))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_2 [i_1] [i_1])), (arr_8 [6])))) : (max((44766552U), (((/* implicit */unsigned int) arr_2 [i_1] [i_1]))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-1))))) : (min((-5652347541905161365LL), (((/* implicit */long long int) -1138643648))))));
        var_27 = max(((+(((long long int) arr_2 [6ULL] [i_1])))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? (arr_1 [i_1] [i_1]) : (arr_1 [i_1] [i_1]))) > (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_8 [(unsigned short)11]) : (((/* implicit */int) (unsigned short)24375)))))))));
    }
}
