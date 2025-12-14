/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178825
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) && (((((/* implicit */_Bool) ((unsigned int) var_14))) && (((/* implicit */_Bool) max((((/* implicit */int) var_0)), (var_10))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_0 [i_0])) && (var_2))) ? (max((0U), (((/* implicit */unsigned int) (unsigned char)29)))) : (((unsigned int) arr_0 [i_0])))) > ((~((-(arr_0 [i_0])))))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) 143833713099145216ULL)))))));
        var_18 = ((/* implicit */unsigned short) var_8);
    }
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((var_15) ^ (((min((((/* implicit */int) var_7)), (var_15))) ^ (((/* implicit */int) var_12)))))))));
    var_20 = ((/* implicit */unsigned long long int) ((min((((7966100784167042264ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))), (((/* implicit */unsigned long long int) (+(var_10)))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)30481)), (var_1)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_7)))))))));
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        for (signed char i_2 = 3; i_2 < 22; i_2 += 2) 
        {
            {
                var_21 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) <= (var_8)))) : (((/* implicit */int) ((_Bool) (unsigned short)49072)))))));
                var_22 *= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) var_3)) >= (((((/* implicit */_Bool) 17928108514561891566ULL)) ? (arr_5 [20LL] [i_1] [i_2]) : (arr_4 [i_2] [i_1]))))))));
            }
        } 
    } 
}
