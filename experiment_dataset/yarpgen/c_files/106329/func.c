/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106329
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
    var_10 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0] [(unsigned short)8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (var_9) : (var_9)))))) ? (((/* implicit */long long int) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (33554416))))))) : ((~(((long long int) var_3))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-39))))) | (2669603957U)))));
                /* LoopSeq 1 */
                for (long long int i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_11 = ((((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_9)))) && (((/* implicit */_Bool) ((unsigned long long int) var_7))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (var_8)))) && ((!(((/* implicit */_Bool) 1977860770))))))) : (((((arr_3 [i_0] [i_0]) && (((/* implicit */_Bool) arr_9 [i_0] [(_Bool)1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 8099971021939626939ULL))))) : (((/* implicit */int) (unsigned char)129)))));
                                arr_14 [i_0] [i_1 - 1] [i_2 + 2] [i_0] [i_4] = ((/* implicit */short) var_2);
                                var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) - ((-(((/* implicit */int) var_3))))))) * (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_2))) * (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-5535)))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [(unsigned short)6] [i_0] [i_2 + 3] &= ((/* implicit */unsigned short) ((1625363338U) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [(signed char)6] [2] [i_2])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) arr_12 [(unsigned short)14])))))));
                }
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))));
            }
        } 
    } 
}
