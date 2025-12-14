/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108955
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
    var_11 += ((/* implicit */short) ((unsigned long long int) (~(((/* implicit */int) var_10)))));
    var_12 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 4294967295U))))))));
    var_13 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_6), (var_6)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((1325866415) > (((/* implicit */int) var_1))))))) * (((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */int) var_0);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_10 [i_0] = ((/* implicit */unsigned short) 2130524828U);
                    var_15 = ((/* implicit */unsigned int) ((15019587645159178973ULL) >> (((((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))) >> (((((/* implicit */int) (unsigned short)44210)) - (44197)))))));
                }
            } 
        } 
        var_16 = ((/* implicit */short) ((int) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [5U] [i_0]))))) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))));
        arr_11 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_8 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) (_Bool)1))))) ? (-1245873278358421994LL) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned short)65510)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_4))))))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            for (short i_4 = 1; i_4 < 21; i_4 += 3) 
            {
                {
                    var_17 = ((/* implicit */short) (_Bool)0);
                    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)1))))) ? (((/* implicit */long long int) arr_9 [i_4 - 1] [i_3] [i_3] [i_4 + 4])) : ((~(-297540088182584932LL)))));
                    /* LoopSeq 2 */
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) var_10))));
                        arr_19 [(unsigned short)10] [i_0] [i_0] [1U] = ((/* implicit */short) min((((((/* implicit */_Bool) min((var_2), (arr_3 [i_0] [i_5])))) ? (((/* implicit */int) (short)-17396)) : (((((/* implicit */int) var_10)) % (((/* implicit */int) arr_4 [i_0] [i_4 + 3] [i_5])))))), ((+(((/* implicit */int) (unsigned char)243))))));
                        var_20 -= ((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [24U] [i_3] [24U]))) == (24U))));
                        var_21 = ((/* implicit */unsigned long long int) arr_16 [i_0] [i_3] [i_0]);
                    }
                    for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((max((1842878057756144672ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_4] [i_4])))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-18651)) <= (2072609662))))))))));
                        var_23 &= ((/* implicit */int) min(((((!(var_3))) ? (4056703191U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))))), (((/* implicit */unsigned int) (((~(((/* implicit */int) var_1)))) < (((/* implicit */int) min((((/* implicit */short) (unsigned char)2)), ((short)26318)))))))));
                    }
                }
            } 
        } 
    }
}
