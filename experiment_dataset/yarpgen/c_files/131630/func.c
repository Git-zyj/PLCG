/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131630
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [(short)10])) : (((/* implicit */int) (short)8052))))) ? (((/* implicit */int) min((arr_0 [i_0] [(signed char)15]), (arr_0 [i_0] [i_0])))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 23; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_12 = ((/* implicit */unsigned short) min((min((max((4270479706231298125ULL), (((/* implicit */unsigned long long int) (unsigned char)23)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_5))))))), (((/* implicit */unsigned long long int) max((min((arr_6 [i_3] [i_1] [(_Bool)1]), (var_7))), (arr_4 [i_0] [i_0]))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 3) /* same iter space */
                        {
                            var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)24)) ? (var_10) : (arr_15 [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2 - 3] [i_3])));
                            var_14 &= ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2] [i_2 - 1] [(_Bool)1])) ^ (((/* implicit */int) ((_Bool) (short)8191)))));
                        }
                        for (signed char i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                        {
                            arr_19 [11ULL] [i_3] [i_0] [11ULL] [i_3] [i_0] = ((/* implicit */short) arr_16 [i_2] [i_3] [i_5]);
                            var_15 = ((/* implicit */int) var_9);
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                        {
                            var_16 += ((/* implicit */signed char) (~(((((((/* implicit */int) (short)-8192)) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_2 - 3] [i_2 + 2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)26))))) : ((+(((/* implicit */int) var_6))))));
                            var_18 = ((/* implicit */unsigned long long int) arr_18 [i_3] [i_3] [i_2 + 2]);
                        }
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((var_0), (((/* implicit */int) var_8)))) * (((/* implicit */int) ((((/* implicit */int) (short)-8192)) > (959111152))))))) ? ((+(((/* implicit */int) var_8)))) : ((+((+(((/* implicit */int) var_5)))))))))));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_4))) * (max((-2771834286353908251LL), (((/* implicit */long long int) (short)6212))))));
}
