/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141180
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
    var_13 = ((/* implicit */int) ((long long int) min((((/* implicit */int) (signed char)127)), ((+(((/* implicit */int) var_1)))))));
    var_14 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        var_15 += ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_0 [(unsigned char)14] [i_0])) : (((unsigned long long int) var_2)));
        arr_3 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? ((+(arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) != (((/* implicit */long long int) ((((/* implicit */int) (signed char)-124)) - (((((/* implicit */int) var_3)) << (((((arr_0 [i_0] [i_0 + 1]) + (5524295499405479362LL))) - (15LL))))))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? ((+(arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) != (((/* implicit */long long int) ((((/* implicit */int) (signed char)-124)) - (((((/* implicit */int) var_3)) << (((((((arr_0 [i_0] [i_0 + 1]) + (5524295499405479362LL))) - (15LL))) - (5374460762379000464LL)))))))))));
        arr_4 [i_0] = var_0;
    }
    for (long long int i_1 = 3; i_1 < 10; i_1 += 4) 
    {
        var_16 = ((var_0) + (((((/* implicit */_Bool) max((var_2), (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (max((arr_0 [i_1] [i_1]), (((/* implicit */long long int) arr_6 [i_1] [i_1])))))));
        var_17 = ((/* implicit */unsigned char) arr_7 [i_1]);
        /* LoopNest 2 */
        for (long long int i_2 = 3; i_2 < 9; i_2 += 2) 
        {
            for (unsigned char i_3 = 1; i_3 < 9; i_3 += 2) 
            {
                {
                    arr_13 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_11);
                    arr_14 [i_1] [i_1] [(short)9] [(short)9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_1]))))) ? ((-(arr_9 [i_1 - 3]))) : (((/* implicit */unsigned long long int) 1134907106097364992LL))));
                    var_18 = ((/* implicit */_Bool) arr_12 [i_1] [i_2]);
                }
            } 
        } 
        var_19 += ((/* implicit */signed char) var_9);
        var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) max((var_3), (((/* implicit */unsigned char) (signed char)30))))) : ((+(((/* implicit */int) (short)-15743))))))) ? (max((10560385487569441252ULL), (((/* implicit */unsigned long long int) (unsigned char)82)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))));
    }
    for (signed char i_4 = 2; i_4 < 12; i_4 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_5 = 1; i_5 < 12; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (short i_6 = 1; i_6 < 11; i_6 += 4) 
            {
                for (unsigned char i_7 = 2; i_7 < 12; i_7 += 4) 
                {
                    {
                        var_21 = ((/* implicit */short) arr_24 [i_4] [i_6] [i_6]);
                        var_22 = ((/* implicit */_Bool) var_7);
                    }
                } 
            } 
            var_23 = ((/* implicit */int) ((((long long int) var_0)) / (((/* implicit */long long int) ((/* implicit */int) ((short) var_11))))));
        }
        for (unsigned int i_8 = 3; i_8 < 11; i_8 += 3) 
        {
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) ((_Bool) (unsigned char)80))), (max((((/* implicit */unsigned char) var_10)), (var_9)))))) ? (-2268098781226268297LL) : (((long long int) (short)10371)))))));
            var_25 = ((/* implicit */int) ((long long int) 14453879075912727183ULL));
            var_26 = var_2;
            /* LoopNest 2 */
            for (unsigned char i_9 = 2; i_9 < 10; i_9 += 4) 
            {
                for (unsigned long long int i_10 = 1; i_10 < 11; i_10 += 3) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) ((unsigned long long int) 13447579355911080748ULL));
                        var_28 = ((/* implicit */unsigned short) var_3);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned int i_11 = 1; i_11 < 11; i_11 += 4) 
        {
            arr_38 [i_11] |= ((/* implicit */short) var_10);
            var_29 = ((/* implicit */int) ((unsigned char) ((unsigned long long int) var_3)));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_12 = 3; i_12 < 11; i_12 += 4) 
        {
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) ((short) 108781967015518836LL)))));
            var_31 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)66))) >= (((unsigned int) arr_26 [(unsigned short)6] [i_12] [i_12] [i_12] [i_12] [i_12]))));
            var_32 = ((/* implicit */_Bool) (-(((/* implicit */int) var_10))));
        }
        var_33 = ((/* implicit */int) (short)32767);
        arr_42 [i_4] = (-(((((/* implicit */_Bool) arr_23 [i_4] [i_4 + 1] [i_4 + 1])) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (9650466114750621883ULL) : (((/* implicit */unsigned long long int) 710936795)))) : (((unsigned long long int) var_0)))));
    }
    var_34 = ((/* implicit */_Bool) min((((/* implicit */long long int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)152)) : (var_6)))))), (((max((-3817809770742010317LL), (9223372036854775807LL))) * (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
}
