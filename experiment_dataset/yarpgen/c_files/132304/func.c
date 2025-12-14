/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132304
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
    var_14 = ((((/* implicit */_Bool) min((((/* implicit */long long int) var_1)), (min((var_8), (((/* implicit */long long int) (unsigned char)136))))))) ? (((((/* implicit */_Bool) 370328329623713834LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned char)114)))) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) 33554432U))))))));
    var_15 -= ((/* implicit */unsigned int) var_8);
    var_16 = ((/* implicit */unsigned short) (!((((+(var_13))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)136))) <= (var_3)))))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */signed char) (-(max((arr_3 [i_0] [4ULL] [i_0 - 1]), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)122)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (signed char i_4 = 3; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)1)))))))));
                                var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)60465)))))))));
                                arr_12 [i_0] = min((arr_6 [i_0] [i_0 + 2] [i_4 - 2]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_4 - 3])) || (((/* implicit */_Bool) 33554430U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 &= ((/* implicit */int) ((signed char) ((unsigned int) ((((/* implicit */unsigned long long int) 1907576177)) > (5678011875089975269ULL)))));
}
