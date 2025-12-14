/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182458
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_11 &= min(((~(((/* implicit */int) var_9)))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((short) arr_2 [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_6 [i_1] = 6ULL;
        arr_7 [12U] &= ((/* implicit */unsigned int) (unsigned char)0);
        var_13 = ((/* implicit */signed char) min((var_13), (var_6)));
        arr_8 [i_1] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned int) ((_Bool) arr_3 [i_1] [i_1]))), ((+((~(var_5)))))));
    }
    for (signed char i_2 = 1; i_2 < 8; i_2 += 1) 
    {
        arr_13 [i_2 - 1] [i_2 - 1] = ((/* implicit */signed char) ((_Bool) (unsigned char)15));
        var_14 &= ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)4)) : (-679987275)))))))));
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned long long int) (~(arr_3 [i_2 + 2] [14])));
        /* LoopNest 2 */
        for (short i_3 = 4; i_3 < 9; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_23 [i_4] [i_3] [i_3 - 2] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) ((short) (+(((/* implicit */int) var_4)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) == (arr_11 [i_3] [i_4]))))));
                    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) min(((short)32077), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)70)) || (((/* implicit */_Bool) ((unsigned long long int) (short)32077)))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (signed char i_6 = 2; i_6 < 7; i_6 += 3) 
                        {
                            {
                                arr_30 [i_5] [i_5] [i_3] [i_5] [i_5] &= ((/* implicit */short) ((_Bool) (unsigned char)17));
                                arr_31 [i_2] [i_3] [i_4] [i_4] &= (+((~(((unsigned int) arr_12 [i_2 + 1] [i_4])))));
                                var_16 = ((/* implicit */unsigned long long int) (!(((_Bool) ((2ULL) << ((((((-2147483647 - 1)) - (-2147483624))) + (50))))))));
                                var_17 &= ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) (short)1)))));
                                arr_32 [i_2] [i_3] [i_3] [i_2] [i_2] &= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_10 [i_6 - 1] [i_3 - 1])) || (arr_21 [i_6 + 1] [i_3 - 2] [i_3 - 2] [i_2 - 1]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_33 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((2574323070U), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))) ? ((-(((var_4) ? (arr_25 [i_2] [i_2 - 1]) : (((/* implicit */unsigned long long int) var_5)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
    }
    var_18 = ((/* implicit */short) var_5);
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (~(1U))))));
    var_20 = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) (short)15872)) <= (((/* implicit */int) ((short) (unsigned char)235))))))));
    var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
}
