/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183522
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_12 += ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) ((18446744073709551611ULL) << (((13155820604213249263ULL) - (13155820604213249262ULL)))))) && (((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_5))))))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) arr_0 [(unsigned char)9])) : ((+(var_8)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_2 [i_0] [(short)1]))))))) : (max((var_10), (((/* implicit */long long int) arr_3 [(unsigned char)8]))))));
        var_14 = var_9;
        var_15 = ((/* implicit */short) max(((~(var_7))), (((/* implicit */unsigned long long int) var_4))));
        var_16 |= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_1 [(unsigned char)2] [i_0])) ? (13155820604213249256ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)249)), ((short)3405)));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_1] [i_1])) ? (((/* implicit */int) ((((arr_7 [i_1]) && (var_4))) && (arr_5 [12LL] [(unsigned char)15])))) : ((-(((/* implicit */int) arr_7 [i_1])))))))));
    }
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((var_10) + (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((/* implicit */long long int) var_5)))))));
}
