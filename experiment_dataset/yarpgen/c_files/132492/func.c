/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132492
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
    var_15 = ((/* implicit */short) min((var_4), (var_4)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 2730416486U)) ? (arr_1 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)-17361))))), (((/* implicit */long long int) arr_0 [i_1]))))), (((((/* implicit */_Bool) (unsigned char)241)) ? (var_7) : (((/* implicit */unsigned long long int) 1564550810U))))));
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)39500)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (arr_2 [i_0] [i_1] [i_1])))) ? (max((-5393803345098574833LL), (((/* implicit */long long int) (short)14980)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (1564550828U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [0])) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (1564550810U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))))));
                var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)250)) || (((/* implicit */_Bool) var_10))))), ((+(arr_2 [i_1] [i_1] [i_0])))));
            }
        } 
    } 
}
