/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126306
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
    var_19 = var_12;
    var_20 = ((/* implicit */unsigned int) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) var_14);
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) var_12);
                                arr_14 [i_0] [i_4] [(_Bool)1] [i_2] [4LL] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_13 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1])) << (((var_16) - (2483782940U)))))));
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((63) | (((/* implicit */int) (short)18496))))) ? (659335243U) : (((/* implicit */unsigned int) (~(-2082751718))))))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) > ((+(137438953471ULL))))))) : (((((18446743936270598145ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) ? (137438953457ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (var_14)))))))));
}
