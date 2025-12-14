/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137608
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
    var_18 = ((/* implicit */long long int) 14702084672243701112ULL);
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) var_13);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 24; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */short) (unsigned char)69);
                        var_21 += ((/* implicit */short) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_9)))) ? ((+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_13))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((-1502496554765032291LL) + (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3 + 1] [i_0] [i_0] [i_0]))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 4; i_4 < 23; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_20 [i_0] [23] [i_0] [i_0] = ((/* implicit */short) -1502496554765032310LL);
                    var_22 = ((/* implicit */unsigned char) var_10);
                    var_23 &= (+(((((((/* implicit */_Bool) var_5)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_4 - 1] [i_4 - 1] [i_5]))))) % (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                    arr_21 [i_0 - 1] [i_0] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4 - 2] [i_4 - 2] [i_4]))))) << (((/* implicit */int) ((_Bool) var_5)))));
                }
            } 
        } 
    }
    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
    {
        var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) -1502496554765032291LL)) : (var_8))))));
        arr_25 [i_6 + 1] [i_6] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_8 [i_6] [i_6] [i_6])), (min((((/* implicit */unsigned long long int) var_14)), (var_5))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) arr_2 [i_6 + 1])) : (((/* implicit */int) arr_2 [i_6 + 1])))))));
        var_25 += ((/* implicit */long long int) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_6] [i_6])) || (((/* implicit */_Bool) 13777990944943076292ULL)))))) : (arr_12 [i_6 + 1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-25132)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) (unsigned char)243)))))));
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 17; i_8 += 4) 
            {
                {
                    var_26 = ((/* implicit */_Bool) (-(((min((((/* implicit */unsigned long long int) var_11)), (var_8))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_5) == (3744659401465850499ULL)))))))));
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_6] [i_6 + 1])) ? (((((/* implicit */_Bool) (short)10456)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_5)))))));
                    arr_31 [i_6] [(_Bool)1] [i_7] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) + ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_5))))), (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) -2734589382612511354LL)) : (var_10))) >> (((min((((/* implicit */long long int) var_6)), (arr_16 [(_Bool)1] [(short)10]))) + (8843337728744443138LL)))))));
                    arr_32 [i_6] [i_8] [i_8] [i_8] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_6 + 1])) ? (2851323891755612502ULL) : (14702084672243701107ULL))) * (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_24 [i_6])))))))));
                }
            } 
        } 
    }
    for (unsigned char i_9 = 1; i_9 < 9; i_9 += 4) 
    {
        var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) (!((_Bool)1))))));
        var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) min(((short)(-32767 - 1)), (var_7)))))));
        arr_36 [(short)8] [i_9] &= ((/* implicit */int) ((min(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_9]))) : (var_10))), (((/* implicit */unsigned long long int) (_Bool)1)))) << (min((((/* implicit */int) min((arr_26 [i_9] [i_9]), (((/* implicit */short) var_14))))), (((((/* implicit */_Bool) 7094111978888884819ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)2613))))))));
    }
}
