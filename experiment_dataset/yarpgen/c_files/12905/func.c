/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12905
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
    for (int i_0 = 4; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned char) (short)-13001))), (max((4197746550U), (((/* implicit */unsigned int) var_6))))))) ? (((/* implicit */unsigned long long int) ((int) ((unsigned long long int) var_7)))) : ((+(max((((/* implicit */unsigned long long int) (short)-30949)), (17077699415287971824ULL))))))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_15 ^= min((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))), (((((/* implicit */_Bool) ((long long int) var_13))) ? (-5903266990425869667LL) : ((+(var_1))))));
                            var_16 = ((/* implicit */unsigned int) var_3);
                            arr_9 [i_0] [i_2] [i_2] [i_3] = ((/* implicit */int) max((((/* implicit */long long int) ((1615823404U) % (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))), (min((((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)3)), (1615823404U)))), ((+(-4255516636380669957LL)))))));
                            var_17 = ((((/* implicit */_Bool) max((8932704129661371019LL), (((/* implicit */long long int) ((unsigned short) (unsigned short)46813)))))) ? (14240171956905662824ULL) : (((/* implicit */unsigned long long int) 1615823433U)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */unsigned long long int) var_11)), (var_13))) : (((/* implicit */unsigned long long int) ((int) (unsigned short)28534)))))) ? (((/* implicit */long long int) min((max((2147483647), (((/* implicit */int) var_12)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (-1720304763) : (var_5)))) ? (var_1) : (var_10)))));
}
