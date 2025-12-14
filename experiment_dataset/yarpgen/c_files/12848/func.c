/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12848
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
    for (signed char i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (short i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) (short)6974)), ((unsigned short)57020)));
                                arr_13 [i_0] [i_1] = ((/* implicit */short) ((_Bool) max((((((/* implicit */_Bool) (short)26938)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12)))), (((/* implicit */int) var_0)))));
                                arr_14 [i_1 - 1] [i_1] [i_0] [i_3] [i_3 - 2] [i_4 - 2] [i_0] = ((/* implicit */unsigned short) (short)4);
                                arr_15 [i_2] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) max(((short)26938), (((/* implicit */short) (unsigned char)116)))))));
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) arr_4 [i_4] [i_4 + 3] [i_2]))))) <= (((/* implicit */int) var_13)))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_4), (((/* implicit */unsigned short) (unsigned char)53)))))))) ? (arr_8 [i_0 - 2] [i_0 + 1] [i_0] [i_1 - 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0 + 1] [22ULL])) != (((/* implicit */int) ((signed char) var_0)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_2);
    var_19 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_7))))) < (((/* implicit */int) (!(((/* implicit */_Bool) (short)339)))))))) - (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))));
}
