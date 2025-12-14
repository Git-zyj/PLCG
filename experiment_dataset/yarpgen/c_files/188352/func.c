/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188352
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 1]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 3; i_2 < 19; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [(unsigned short)11] [i_0] = ((/* implicit */long long int) min(((+(((((/* implicit */int) arr_8 [i_1] [i_0] [i_3])) + (((/* implicit */int) (short)28485)))))), ((-(((((/* implicit */_Bool) arr_10 [4LL] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_1]))))))));
                            var_20 = ((/* implicit */unsigned short) 1152921367167893504ULL);
                            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) arr_5 [i_0] [(_Bool)1] [i_2 - 1]))));
                            var_22 += ((/* implicit */unsigned long long int) arr_3 [0LL] [0LL]);
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(min((arr_12 [(_Bool)1] [i_1] [(_Bool)1] [i_0]), (((/* implicit */long long int) arr_1 [i_0] [i_1]))))))) ? (((/* implicit */unsigned long long int) min((((unsigned int) arr_11 [i_0] [5])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_1] [18])))))))) : (((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))))) / (max((3645388119717873860ULL), (((/* implicit */unsigned long long int) (unsigned short)16756))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((((var_1) ? (min((((/* implicit */unsigned int) var_16)), (var_11))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_7))))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (1587638199)))) ? (max((5945612123886034192LL), (((/* implicit */long long int) var_12)))) : (((/* implicit */long long int) (-(((/* implicit */int) var_10))))))) + (119LL)))));
}
