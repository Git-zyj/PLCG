/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159476
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
    var_11 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))))) << (((((/* implicit */int) var_6)) + (115)))));
    var_12 = ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : ((+(((((/* implicit */long long int) ((/* implicit */int) var_3))) / (var_4))))));
    var_13 &= ((/* implicit */unsigned char) ((unsigned short) var_3));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_14 = arr_4 [i_1] [i_0];
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))));
                            var_16 = ((/* implicit */unsigned long long int) ((long long int) ((unsigned char) (!(((/* implicit */_Bool) arr_10 [(unsigned short)9] [i_2] [i_1] [i_0]))))));
                            var_17 = ((/* implicit */unsigned char) arr_4 [i_0] [i_3]);
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_0])) * (((/* implicit */int) arr_1 [i_1])))))));
                            var_19 = ((/* implicit */short) (+(var_1)));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) arr_7 [i_0] [i_1]))) ? (((unsigned long long int) (!(((/* implicit */_Bool) 761777505U))))) : (((/* implicit */unsigned long long int) ((((((long long int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])) + (9223372036854775807LL))) >> (((((arr_0 [i_0] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0]))))) - (12599675859275235536ULL))))))));
            }
        } 
    } 
}
