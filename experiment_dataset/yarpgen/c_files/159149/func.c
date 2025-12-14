/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159149
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
    var_14 = ((/* implicit */unsigned long long int) var_11);
    var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1014))) : (var_6))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_0))))), (((/* implicit */unsigned long long int) var_11))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) max(((~(var_6))), ((~(max((((/* implicit */unsigned long long int) (signed char)-102)), (var_4)))))));
                var_16 = ((/* implicit */_Bool) var_11);
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) var_10)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_0]))))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (arr_3 [7U])))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_3 [(short)11])))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
                var_18 = ((/* implicit */long long int) min((((unsigned long long int) max((((/* implicit */unsigned long long int) -4668651765673142476LL)), (2251799813685247ULL)))), (((/* implicit */unsigned long long int) var_13))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (min((((int) var_11)), (var_10)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        arr_8 [i_2] [1LL] = ((/* implicit */unsigned int) 2251799813685251ULL);
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [17]))) : (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (max((((/* implicit */unsigned long long int) var_9)), (18444492273895866369ULL)))))) ? (min((((((/* implicit */_Bool) var_8)) ? (6396526559973128690ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))))))));
    }
}
