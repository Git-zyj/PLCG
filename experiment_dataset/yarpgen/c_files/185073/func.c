/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185073
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
    var_10 = ((/* implicit */unsigned short) var_7);
    var_11 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_1 - 3] [i_2] [i_3 - 1] = ((/* implicit */short) max((var_3), (((/* implicit */long long int) (-(((/* implicit */int) var_6)))))));
                            var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((((/* implicit */_Bool) arr_8 [i_1 - 2] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)20)))) ^ (((/* implicit */int) (_Bool)1)))))));
                            arr_13 [i_3 - 1] [i_0] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1])), (-1169292885))), (((/* implicit */int) arr_1 [i_2] [i_2]))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 - 1] [i_1 - 1]);
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0 + 4])) ? (2294513558U) : (((/* implicit */unsigned int) max((((/* implicit */int) max((((/* implicit */short) var_9)), ((short)127)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)152)) : (((/* implicit */int) var_6))))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        for (unsigned char i_5 = 1; i_5 < 21; i_5 += 2) 
        {
            {
                var_15 = (+(((/* implicit */int) arr_7 [i_4])));
                arr_19 [i_4] [18] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)146)) ? (((/* implicit */unsigned long long int) arr_2 [i_4] [(_Bool)1])) : (arr_0 [i_4])))) ? (max((((/* implicit */int) arr_10 [i_4] [i_5] [i_5 - 1] [i_5 - 1])), (var_7))) : ((+(487181472)))))) ? (((((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_5]))))) - (((((/* implicit */_Bool) var_0)) ? (arr_14 [i_4]) : (var_3))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_2 [i_5 - 1] [i_4])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))))));
                var_16 = ((/* implicit */unsigned char) (short)0);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_7);
}
