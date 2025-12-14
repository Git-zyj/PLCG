/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114429
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
    var_14 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */int) (-(((((/* implicit */_Bool) (short)4600)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4588))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)4603))) - (35184355311616ULL)))))));
                            arr_10 [i_0] = ((/* implicit */unsigned short) var_11);
                            var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) 2063467923)) ? (((/* implicit */int) (short)-4604)) : (((/* implicit */int) (_Bool)0)))) == (((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1])) ? ((+(-1670172697))) : (((/* implicit */int) min(((short)-4612), ((short)-4628))))))));
                        }
                    } 
                } 
                var_17 = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min(((short)4580), ((short)-4611)))))) | (((unsigned int) arr_5 [i_1 + 1])));
                var_18 = (+(((int) ((arr_4 [i_0] [i_0] [i_1 + 1]) * (((/* implicit */int) (_Bool)1))))));
                var_19 += ((/* implicit */signed char) arr_8 [i_1 - 1]);
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((((/* implicit */int) ((unsigned short) var_3))) - (((/* implicit */int) (short)4586)))) + (((((((/* implicit */_Bool) var_10)) ? (2048223981) : (((/* implicit */int) var_1)))) - (((/* implicit */int) ((signed char) var_5)))))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4614)) ? (((((((/* implicit */_Bool) var_6)) ? (0) : (var_8))) << (((((unsigned int) -17)) - (4294967252U))))) : (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (signed char)1))))))));
    var_22 = ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)29010)));
}
