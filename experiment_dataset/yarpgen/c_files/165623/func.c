/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165623
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
                    {
                        var_17 = ((var_9) + (((((((/* implicit */unsigned int) ((/* implicit */int) var_15))) * (var_3))) * (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) * (((/* implicit */int) var_11))))))));
                        var_18 = ((/* implicit */_Bool) var_9);
                        var_19 = var_0;
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_20 = ((((/* implicit */unsigned int) ((/* implicit */int) ((var_3) <= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) <= (((var_0) * (((/* implicit */unsigned int) ((/* implicit */int) var_5))))));
                        var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (var_3)));
                    }
                    var_22 = var_9;
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) min((var_23), (((((((var_16) && (var_12))) && (((/* implicit */_Bool) var_0)))) && (((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned int) ((var_5) && (var_15)))))))))));
                                var_24 = var_8;
                            }
                        } 
                    } 
                    var_25 ^= ((/* implicit */unsigned int) max((var_12), (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) < (var_2)))) >= (((((/* implicit */int) var_6)) << (((/* implicit */int) var_5))))))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned int) var_8);
    var_27 |= ((((var_3) << (((/* implicit */int) var_5)))) >= (((/* implicit */unsigned int) ((((/* implicit */int) min((var_8), (var_12)))) >> (((/* implicit */int) var_16))))));
    var_28 = ((/* implicit */unsigned int) var_11);
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                var_29 = ((/* implicit */unsigned int) var_10);
                var_30 = var_1;
                var_31 = var_12;
            }
        } 
    } 
}
