/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113006
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113006 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113006
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
    var_15 = ((/* implicit */int) (-(var_5)));
    var_16 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (+(var_13)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (11043264041044501300ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)12288))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((_Bool) var_4))))))));
    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) var_11)) - (((/* implicit */int) (unsigned short)1338)))) : (((/* implicit */int) (short)-12285)))) <= (((/* implicit */int) (unsigned short)65525))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_18 = ((/* implicit */signed char) (_Bool)0);
            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) var_5))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_20 = var_5;
            var_21 = ((/* implicit */unsigned int) arr_3 [i_2] [i_2]);
            var_22 = ((/* implicit */_Bool) var_11);
            var_23 = ((/* implicit */unsigned short) arr_1 [i_2]);
            arr_8 [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) % (arr_7 [i_0 - 2] [i_0 + 1]))) > (((/* implicit */unsigned long long int) 432318465))));
        }
        arr_9 [i_0 + 1] = ((/* implicit */signed char) arr_5 [i_0]);
    }
    var_24 = ((/* implicit */unsigned long long int) var_3);
}
