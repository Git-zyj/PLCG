/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183046
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
    var_10 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (short)-17730)) ? (((/* implicit */unsigned long long int) (~(var_1)))) : (((unsigned long long int) 1065303048U))))));
    var_11 += ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_9))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(var_1)))))))));
        var_13 = ((/* implicit */long long int) -684737645);
        var_14 += ((/* implicit */long long int) (!(((/* implicit */_Bool) -684737621))));
    }
    for (long long int i_1 = 2; i_1 < 10; i_1 += 2) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) max((2147483647), (1890449942)));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 2; i_2 < 11; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        for (unsigned short i_5 = 2; i_5 < 11; i_5 += 2) 
                        {
                            {
                                var_15 -= ((/* implicit */long long int) min((((/* implicit */unsigned short) ((unsigned char) arr_15 [i_5] [i_5] [i_2 - 1] [(signed char)6]))), (min((((/* implicit */unsigned short) (unsigned char)86)), ((unsigned short)65532)))));
                                arr_18 [i_3] = arr_1 [(signed char)5];
                                var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 1065303034U)), (min((((/* implicit */unsigned long long int) (unsigned short)15725)), (8709033894266867192ULL)))));
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [1] [i_2]))))) && (((/* implicit */_Bool) var_8)))))) <= (min(((~(var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_0))))))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned int) (+(var_3)));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (-(min((max((var_2), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) var_0)))))))));
}
