/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100514
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_10 = (((!(((/* implicit */_Bool) var_8)))) && (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                var_11 = min((((/* implicit */int) ((short) (+(((/* implicit */int) var_2)))))), ((-((+(var_6))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_2 = 4; i_2 < 17; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                {
                    var_12 = ((/* implicit */short) (+(((((/* implicit */int) var_5)) * (((/* implicit */int) var_4))))));
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 19; i_5 += 4) 
                    {
                        for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_13 += ((/* implicit */short) (-((-(((/* implicit */int) var_4))))));
                                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) != ((+(((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) (-((-(((/* implicit */int) var_4))))));
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 17; i_7 += 3) 
                    {
                        for (int i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            {
                                var_16 += (!(var_0));
                                var_17 *= ((/* implicit */short) (+(((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 2; i_9 < 18; i_9 += 1) 
        {
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                {
                    var_18 = ((_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_7))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))))));
                    var_20 = ((/* implicit */short) (+(((/* implicit */int) var_5))));
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) (~(((((/* implicit */int) var_9)) * (((/* implicit */int) var_3))))));
    }
    /* LoopNest 2 */
    for (short i_11 = 0; i_11 < 16; i_11 += 3) 
    {
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            {
                var_22 += ((/* implicit */unsigned long long int) max((((/* implicit */int) (!((!(var_0)))))), (((var_1) | (((/* implicit */int) var_9))))));
                var_23 = ((/* implicit */short) max(((+((~(((/* implicit */int) var_2)))))), ((-(max((var_6), (((/* implicit */int) var_0))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_13 = 0; i_13 < 21; i_13 += 4) 
    {
        var_24 = var_2;
        var_25 = ((/* implicit */short) ((((((/* implicit */int) var_2)) >> (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_7))))))) * (((/* implicit */int) (!(((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_4)))))))));
        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((_Bool) (+(((var_1) & (var_6)))))))));
    }
    for (signed char i_14 = 2; i_14 < 21; i_14 += 2) 
    {
        var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) min((var_5), (var_5)))) : ((~(((/* implicit */int) var_4)))))))));
        var_28 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((max((var_1), (((/* implicit */int) var_3)))) ^ (((/* implicit */int) var_5)))))));
        var_29 = ((/* implicit */short) ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))) + (var_1))) + ((((~(((/* implicit */int) var_0)))) % ((-(((/* implicit */int) var_7))))))));
    }
}
