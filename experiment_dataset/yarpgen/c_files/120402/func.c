/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120402
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_1))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_0)))) : (var_9)))) ? (min((((/* implicit */long long int) var_3)), (((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) var_4))))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
    var_11 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((short) var_9))), (min((var_2), (var_2)))))), (((((/* implicit */_Bool) ((short) var_6))) ? (((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_1))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) min((min((var_6), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) ((short) ((unsigned long long int) var_0))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 4; i_2 < 9; i_2 += 4) 
            {
                var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) ((int) var_2))))));
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((signed char) (+(((/* implicit */int) var_5))))))));
            }
            arr_9 [i_1] = ((/* implicit */short) var_5);
        }
        for (long long int i_3 = 1; i_3 < 8; i_3 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) var_1);
            arr_12 [i_3] = ((/* implicit */unsigned short) (+(((unsigned int) var_9))));
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((unsigned short) ((_Bool) (!(var_4))))))));
            var_17 = ((/* implicit */short) ((unsigned char) var_1));
        }
        for (int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            arr_16 [i_0] = ((/* implicit */short) min((max((((/* implicit */long long int) ((var_3) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))), ((+(var_9))))), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_1)))))))));
            var_18 |= ((/* implicit */unsigned short) ((short) ((signed char) var_8)));
            var_19 |= ((/* implicit */int) var_4);
        }
    }
    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))))), (var_8)))))));
}
