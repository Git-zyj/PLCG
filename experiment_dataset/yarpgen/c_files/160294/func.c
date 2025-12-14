/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160294
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 6; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) - (17707238135497361832ULL))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))));
                            var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) var_5)))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((unsigned char) -878445977))) : (((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_9))))))))));
                var_21 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((unsigned int) (_Bool)1))) % (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_8)))) % (var_5)))));
            }
        } 
    } 
    var_22 = ((int) var_12);
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 2; i_4 < 16; i_4 += 3) 
    {
        for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((((/* implicit */long long int) var_17)), (var_3)))))) ? (min((((unsigned int) (short)-9240)), (((/* implicit */unsigned int) var_9)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_11))))));
                    var_24 = ((/* implicit */unsigned int) var_5);
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((+(var_16)))))) ? (8446733044393395653LL) : (((/* implicit */long long int) (+(((/* implicit */int) var_12)))))));
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 739505938212189793ULL)) ? (17707238135497361823ULL) : (17707238135497361840ULL)))) ? ((((!(((/* implicit */_Bool) var_17)))) ? (((/* implicit */int) ((_Bool) 739505938212189784ULL))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))) : (1975302757)));
                }
            } 
        } 
    } 
}
