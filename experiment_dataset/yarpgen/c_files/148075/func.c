/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148075
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
    var_10 = ((/* implicit */signed char) (+(((unsigned long long int) ((((/* implicit */_Bool) 882956972U)) ? (-5655756872196643675LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (~(18446744073709551615ULL))))));
    var_12 = ((/* implicit */unsigned char) ((var_7) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) << (((((var_9) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-5655756872196643689LL))) + (5655756872196643705LL))))))));
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) ((signed char) -6307613674807031896LL))) & (((/* implicit */int) ((unsigned short) 1925078230U)))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((unsigned char) (short)15539)))));
                arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4806)) ? (((/* implicit */int) (short)21030)) : (((/* implicit */int) (short)4778))));
            }
        } 
    } 
}
