/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11458
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            var_20 = (unsigned short)1019;
                            var_21 = ((/* implicit */short) (+(min((((/* implicit */int) var_7)), (2019765987)))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~((~(var_11)))))) >= (((var_17) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                    var_23 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_10 [i_4] [i_0] [i_0] [i_0])) == (var_18)));
                    var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) arr_10 [i_1] [i_0] [i_1] [i_4]))) != (((/* implicit */int) ((unsigned short) min((var_8), (((/* implicit */long long int) arr_0 [i_0]))))))));
                }
                for (signed char i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    var_25 = ((/* implicit */unsigned int) ((((((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (_Bool)1)))) ? (max((((/* implicit */unsigned long long int) 449940597)), (var_18))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_0] [i_1]))))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_0])) <= (4282511571339584243ULL))))));
                    var_26 = ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) arr_14 [i_1 + 2] [i_1 - 2] [i_1 + 2])))));
                    var_27 = arr_13 [i_1 + 2] [i_0] [i_1 + 2];
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned short) (signed char)-40);
    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)20))))), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-40))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_3) : (((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_3))))))));
}
