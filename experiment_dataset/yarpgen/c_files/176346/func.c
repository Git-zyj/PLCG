/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176346
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
    var_17 = ((/* implicit */unsigned long long int) (~(var_4)));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)5841)))), (3843354264U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (18446744073709551604ULL)));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_13 [(short)17] [i_0 + 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((860973591U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) min((arr_2 [i_0]), ((unsigned char)155))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)20541))) : (((((/* implicit */_Bool) min(((unsigned short)31903), ((unsigned short)15725)))) ? (max((((/* implicit */long long int) (short)-4293)), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
                                var_19 = ((/* implicit */unsigned short) arr_0 [i_0 - 2] [i_1 + 1]);
                            }
                        } 
                    } 
                    arr_14 [7ULL] [i_0] = (unsigned char)162;
                    arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) (-(var_10)));
                }
            } 
        } 
    } 
}
