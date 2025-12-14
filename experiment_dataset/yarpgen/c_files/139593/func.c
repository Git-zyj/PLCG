/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139593
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_19 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (var_16)))) < (arr_1 [i_0 - 3] [i_0]));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2 - 1] = ((/* implicit */unsigned short) (((+(((/* implicit */int) (_Bool)0)))) + (((((/* implicit */_Bool) arr_4 [9ULL])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((arr_2 [i_0] [i_0]) != (((/* implicit */int) var_18))))) + (((/* implicit */int) ((var_13) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned char)8] [i_1] [i_1] [(_Bool)1]))))))));
                }
            } 
        } 
    }
    for (unsigned char i_3 = 3; i_3 < 14; i_3 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (((unsigned int) var_16)) : ((-(((unsigned int) var_6))))));
        var_22 = ((_Bool) (unsigned char)0);
        var_23 = ((/* implicit */unsigned char) var_8);
        var_24 = ((/* implicit */signed char) var_9);
    }
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_20 [i_4] [i_6] [i_4] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_2 [i_4] [i_4])))) ? (((/* implicit */int) ((signed char) (~(((/* implicit */int) var_12)))))) : (((/* implicit */int) var_14))));
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((~(arr_22 [i_8] [i_7] [i_6] [i_5])))))) ? (((/* implicit */int) arr_18 [i_4])) : (((/* implicit */int) var_1))));
                                arr_25 [(short)6] [i_5] [i_4] [i_7] [i_8] = ((/* implicit */unsigned int) min(((((((~(((/* implicit */int) var_11)))) + (2147483647))) >> (((((arr_18 [i_5]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14)))) - (9155))))), ((+(((/* implicit */int) var_15))))));
                                arr_26 [i_4] [i_5] [i_4] [i_4] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) var_3)))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-115)) ? (((/* implicit */int) arr_7 [i_6] [i_6] [i_5] [i_4])) : (var_16)))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_15 [i_4] [i_4])))))) ? (((/* implicit */int) ((signed char) arr_1 [i_4] [i_4]))) : ((((+(((/* implicit */int) arr_19 [i_4] [(unsigned short)11] [(unsigned short)11] [14U])))) % ((((_Bool)0) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)1))))))));
                }
            } 
        } 
    } 
}
