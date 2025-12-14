/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155293
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
    var_20 = ((/* implicit */unsigned int) (+(var_1)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) (short)3331);
                var_22 += ((/* implicit */short) var_8);
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 17; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2 - 1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((arr_6 [i_0] [i_0] [i_0 + 1] [18U]) ? (((((((/* implicit */_Bool) -1090172922)) && (((/* implicit */_Bool) -916631287)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)3331), (var_0))))) : (arr_11 [i_1]))) : (((/* implicit */unsigned long long int) ((min((arr_14 [(signed char)4] [i_1] [i_2] [i_1 - 1] [i_4]), (((/* implicit */unsigned int) (unsigned char)208)))) << ((((-(((/* implicit */int) arr_6 [17ULL] [i_1] [i_2] [i_3])))) + (21))))))));
                                var_23 = ((/* implicit */int) var_14);
                                var_24 ^= ((/* implicit */long long int) ((unsigned int) (+(((/* implicit */int) (short)14015)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
