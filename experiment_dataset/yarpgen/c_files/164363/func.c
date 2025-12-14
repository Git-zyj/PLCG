/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164363
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
    var_14 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) 4354532617333652697ULL)) ? (((/* implicit */int) (unsigned short)21296)) : (((/* implicit */int) (unsigned short)21317)))))));
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)21317)))))));
    var_16 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) ((long long int) (signed char)-15))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) 576459652791795712ULL))));
                var_18 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [12LL]))) <= (arr_2 [i_0] [i_0 - 1])))) > (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) != (17870284420917755924ULL))))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)44220)) <= (((/* implicit */int) arr_4 [i_0 - 1]))))) < (((/* implicit */int) ((unsigned short) (_Bool)0)))));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) arr_7 [i_1] [i_1] [(unsigned short)2] [i_1]);
                                var_21 = ((/* implicit */unsigned short) var_12);
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)44238)), (((((/* implicit */_Bool) (-(14518319240285587928ULL)))) ? (((/* implicit */int) (unsigned short)21301)) : (((/* implicit */int) min((var_3), (var_7)))))))))));
                                var_23 = ((/* implicit */long long int) arr_4 [i_0]);
                                var_24 = ((/* implicit */_Bool) min((max((((/* implicit */int) (!(((/* implicit */_Bool) -8765941299665473356LL))))), (((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (signed char)6)))))), (((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) >> (((1958905880U) - (1958905849U)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
