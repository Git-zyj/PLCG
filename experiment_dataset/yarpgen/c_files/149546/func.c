/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149546
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
    var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    arr_6 [i_0] = ((/* implicit */_Bool) (~(min((((/* implicit */int) (unsigned char)45)), (var_8)))));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = (unsigned char)13;
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)13))) - (var_16))), (((/* implicit */unsigned int) (unsigned char)243))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                                arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)247)) * (((/* implicit */int) (unsigned char)250))));
                                var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) (~(min((16ULL), (((/* implicit */unsigned long long int) (unsigned char)13)))))))));
                                arr_14 [i_2] [i_2] = ((/* implicit */short) (~(max((((/* implicit */int) (unsigned char)251)), (-467096271)))));
                            }
                        } 
                    } 
                }
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (unsigned char)27))));
                arr_15 [i_0] [i_0] = ((/* implicit */int) ((unsigned char) min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) (unsigned char)249)))))));
                arr_16 [i_1] [i_1] = max((((/* implicit */long long int) (unsigned char)6)), (9223372036854775807LL));
                var_23 = ((/* implicit */_Bool) -281284780);
            }
        } 
    } 
    var_24 = max((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)32))))) / ((~(((/* implicit */int) (unsigned char)8)))))), (((/* implicit */int) ((((/* implicit */int) var_10)) < (var_17)))));
}
