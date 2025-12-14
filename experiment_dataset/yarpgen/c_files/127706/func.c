/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127706
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
    var_13 = ((/* implicit */signed char) (-(1362830898)));
    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((min((((/* implicit */long long int) ((unsigned char) var_12))), (max((var_3), (((/* implicit */long long int) -1362830898)))))) / (((/* implicit */long long int) min((-1362830898), (((/* implicit */int) ((signed char) var_12)))))))))));
    var_15 = ((/* implicit */unsigned short) ((signed char) ((signed char) (unsigned short)25882)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((short) (signed char)-70));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1362830898)) || (((/* implicit */_Bool) ((max((var_4), (((/* implicit */int) var_0)))) | (((/* implicit */int) ((signed char) (unsigned short)10913))))))));
                            var_18 = ((/* implicit */signed char) (unsigned char)255);
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) max((var_19), (arr_7 [i_1 - 1] [i_1] [i_1] [i_0] [i_1] [i_1])));
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1 + 2] [i_1] [i_1 + 1] [i_0] [i_1 + 2] [i_1 + 2])) + (((/* implicit */int) arr_7 [i_0] [i_1] [i_1 + 1] [i_0] [i_1 + 1] [i_1 + 2]))))) ? (((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) arr_7 [(unsigned short)10] [i_0] [i_1 + 1] [i_0] [i_1 - 3] [i_1 - 1])) : (((/* implicit */int) arr_7 [i_1 - 3] [i_1] [i_1 - 2] [i_0] [i_1 - 3] [i_1 + 1])))) : (((((/* implicit */_Bool) arr_7 [i_0] [12ULL] [i_1 + 2] [i_0] [i_1 + 2] [i_1 - 3])) ? (((/* implicit */int) (short)-26597)) : (((/* implicit */int) (unsigned short)39674))))));
            }
        } 
    } 
}
