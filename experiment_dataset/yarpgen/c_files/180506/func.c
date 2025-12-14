/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180506
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (short)-8192)) & (((/* implicit */int) (signed char)112)))) != (((/* implicit */int) (!((_Bool)1)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_0)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)21013)))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */long long int) min((max((((/* implicit */int) arr_2 [i_0] [(unsigned char)8] [i_0])), (var_5))), (((/* implicit */int) arr_4 [i_1]))))) ^ ((~(max((2490678050055769576LL), (((/* implicit */long long int) (signed char)-105)))))))))));
            var_14 = ((/* implicit */short) var_5);
        }
        var_15 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (max((-6605898243647575795LL), (((/* implicit */long long int) (unsigned short)36697)))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) < (((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(unsigned short)17]))))))))));
        var_16 = ((/* implicit */short) min((((/* implicit */int) arr_0 [i_0])), ((~(((/* implicit */int) arr_4 [i_0]))))));
    }
    var_17 &= ((/* implicit */signed char) (~(min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (var_5))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))))));
}
