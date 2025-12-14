/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181325
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */int) var_7);
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 18; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_10 [i_0] [i_0]), ((signed char)-21)))) ? (((/* implicit */long long int) (-(2749371672U)))) : (min((((/* implicit */long long int) 1545595644U)), (137438953472LL)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0])))))) ^ (((var_10) & (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [(unsigned short)15]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0])))));
                            var_12 = ((/* implicit */short) ((unsigned int) arr_10 [i_0] [i_0]));
                            /* LoopSeq 2 */
                            for (long long int i_4 = 0; i_4 < 20; i_4 += 3) /* same iter space */
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_2 - 1] [i_3] [(unsigned short)18] = ((/* implicit */signed char) ((unsigned int) min((((/* implicit */unsigned short) (unsigned char)25)), (arr_0 [i_3 + 3]))));
                                var_13 = ((/* implicit */long long int) ((unsigned int) 2258173293U));
                                arr_17 [i_3] [i_0] [i_2 + 2] [i_0] [i_3] = ((/* implicit */unsigned short) arr_14 [i_4] [i_4] [i_3 + 3] [i_2 - 1] [i_1] [i_0]);
                                arr_18 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 137438953472LL)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4] [i_3 + 1] [i_2]))) : (941868891U))) : (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)230)), (var_6)))))), (((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_9))) ^ (var_10))) <= (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-137438953473LL))))))));
                            }
                            for (long long int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
                            {
                                var_14 = ((/* implicit */unsigned short) 2749371652U);
                                arr_21 [i_3] [i_1] [i_3] [i_3] [i_3 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_0] [i_1] [i_3] [i_3] [i_5]))))) ? (((arr_14 [i_0] [i_0] [i_1] [i_2] [i_3 - 1] [i_3 - 1]) | (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) min(((unsigned char)196), (arr_8 [i_0] [i_0]))))))) ? (max((1545595644U), (((/* implicit */unsigned int) (signed char)-89)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((short) var_0))))))));
                            }
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_6))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((max((((/* implicit */long long int) var_9)), (2179092842383592945LL))) & (((/* implicit */long long int) (~(((/* implicit */int) var_1))))))) ^ (((long long int) (signed char)29))));
}
