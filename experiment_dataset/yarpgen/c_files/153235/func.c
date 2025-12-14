/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153235
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
    var_14 = ((/* implicit */unsigned short) var_4);
    var_15 = ((/* implicit */short) var_10);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((short) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)224)))))));
        arr_2 [i_0 + 1] = ((/* implicit */unsigned char) ((int) 1073739776U));
        arr_3 [(short)0] = ((/* implicit */signed char) (+(((int) ((((/* implicit */int) (unsigned char)217)) / (-1018418754))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-23262))) == (3897557803U))))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) (short)-1)) : (33552384)))));
                        var_19 = ((/* implicit */long long int) (unsigned char)190);
                        arr_14 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned int) ((int) arr_7 [i_2] [i_2]))) | (((unsigned int) (unsigned char)238))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) ^ (3251512288690855034ULL)))))));
                    }
                } 
            } 
        }
    }
}
