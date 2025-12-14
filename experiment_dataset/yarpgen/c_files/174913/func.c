/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174913
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
    var_14 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) (_Bool)0)))) % (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_8)) : (var_12)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) ((min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))), ((+(((/* implicit */int) (_Bool)1)))))) * (((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)14078))))) & (((/* implicit */int) arr_3 [(unsigned char)11] [i_0]))))));
        var_16 = (-(((((/* implicit */int) var_6)) + (((/* implicit */int) (_Bool)1)))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 2) 
    {
        var_17 = ((/* implicit */unsigned long long int) var_2);
        var_18 = ((/* implicit */_Bool) min((var_18), ((_Bool)0)));
    }
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) arr_6 [i_2]);
        /* LoopSeq 2 */
        for (unsigned char i_3 = 1; i_3 < 22; i_3 += 2) 
        {
            var_20 = var_2;
            var_21 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) (unsigned char)43))));
            var_22 = ((/* implicit */unsigned long long int) (unsigned char)212);
        }
        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
        {
            var_23 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
            var_24 = ((/* implicit */unsigned long long int) var_0);
            var_25 = ((/* implicit */signed char) (-(((/* implicit */int) (short)-13145))));
            var_26 = ((/* implicit */unsigned int) var_12);
            var_27 = ((/* implicit */int) arr_8 [i_2 - 1]);
        }
    }
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_28 -= ((/* implicit */unsigned int) var_8);
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 25; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */int) var_3);
                                var_30 = ((/* implicit */_Bool) ((arr_17 [17U]) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)126)) >> (((((/* implicit */int) (unsigned short)34593)) - (34573)))))) ? ((-(((/* implicit */int) (unsigned char)49)))) : (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned int) ((((arr_17 [i_5]) != (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) != (((/* implicit */int) var_6))))) : ((+(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (+(min((arr_19 [(short)14]), (arr_19 [(unsigned char)12]))))))));
    }
}
