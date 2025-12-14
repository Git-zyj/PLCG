/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179650
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
    var_10 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2674)) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) (signed char)-24)))))));
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_5)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (-(-810339760))))));
                                arr_12 [i_2] [i_1] [i_2] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) 1957072718599174848ULL)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)24689)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)199)), (arr_5 [i_2]))))))));
                                var_13 = ((((/* implicit */_Bool) ((unsigned short) (unsigned short)44773))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_0] [i_4] [i_2]))) / (((((/* implicit */_Bool) (unsigned short)63417)) ? (8480513289045354645ULL) : (((/* implicit */unsigned long long int) -810339778)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((unsigned short) (unsigned char)202))) + (((/* implicit */int) var_5))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_6);
}
