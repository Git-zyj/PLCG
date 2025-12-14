/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158943
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned short) arr_4 [i_2]);
                    var_15 = ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)75))) : (-2361608413208706465LL));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((536870911) >> ((((((+(((/* implicit */int) (_Bool)1)))) << (((352734271U) - (352734260U))))) - (2030)))));
                    var_16 += ((/* implicit */short) ((signed char) min((((/* implicit */unsigned int) arr_6 [i_2] [i_1] [i_2])), (max((65535U), (((/* implicit */unsigned int) var_5)))))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((short) ((int) 536870888))))));
    }
    for (unsigned char i_3 = 3; i_3 < 10; i_3 += 3) 
    {
        arr_13 [i_3 - 1] = ((/* implicit */unsigned char) max((-2035807620), (-2035807639)));
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_6))));
        var_19 = ((/* implicit */unsigned short) -2361608413208706465LL);
        var_20 = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_12)))) << (((((((/* implicit */_Bool) arr_11 [i_3 + 1])) ? (((/* implicit */int) arr_10 [i_3 - 3] [i_3 + 2])) : (((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 1])))) - (24)))));
        arr_14 [i_3 - 3] [i_3 + 1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */long long int) (+(26907331)))) : (max((2361608413208706464LL), (2361608413208706484LL))))));
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 22; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            {
                                arr_28 [i_4] [i_5] [i_6] [i_6] [i_6] [i_7 + 2] [i_8] = ((/* implicit */unsigned char) (+(arr_15 [i_7 - 1])));
                                var_21 = ((short) 4873108643700315644ULL);
                                var_22 = ((((/* implicit */unsigned long long int) -2361608413208706475LL)) <= (4873108643700315644ULL));
                            }
                        } 
                    } 
                    arr_29 [i_4] = ((((/* implicit */_Bool) (signed char)0)) ? (((arr_17 [i_4]) / (((/* implicit */int) arr_25 [i_4] [i_5] [i_6])))) : ((-(-2114324789))));
                    /* LoopSeq 1 */
                    for (short i_9 = 1; i_9 < 22; i_9 += 4) 
                    {
                        var_23 = (!(((/* implicit */_Bool) -2361608413208706450LL)));
                        var_24 = ((/* implicit */long long int) ((((_Bool) arr_19 [i_4] [i_5])) ? ((+(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_14))))));
                    }
                }
            } 
        } 
        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)26512)) ? (((/* implicit */int) (short)22658)) : (((/* implicit */int) var_4))));
    }
    var_26 = ((/* implicit */int) (signed char)112);
}
