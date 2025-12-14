/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16347
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = var_6;
                var_14 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))) <= ((-((((_Bool)0) ? (192106763U) : (192106768U)))))));
                var_15 = ((/* implicit */int) ((unsigned int) (unsigned short)36654));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned int i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_16 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_5 [10] [10] [i_3 - 1] [i_3])) <= (min((((/* implicit */int) arr_5 [i_1] [i_1] [i_3 - 3] [i_0])), (2089910843)))));
                            var_17 = ((/* implicit */signed char) var_0);
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1] [i_1])) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1] [(unsigned short)10])) : (((/* implicit */int) arr_4 [i_1 - 1] [14U] [(unsigned short)22])))) / (((((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)24084)) >= (1746255698)));
    var_20 = ((/* implicit */unsigned int) var_6);
}
