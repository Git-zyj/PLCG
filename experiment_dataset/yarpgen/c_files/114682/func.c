/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114682
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) var_13))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned char) (signed char)116);
            var_17 = ((/* implicit */signed char) arr_5 [i_0]);
            arr_7 [4U] [i_1] [i_1] = ((/* implicit */_Bool) arr_0 [i_0]);
        }
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */int) ((max((-6317308688210059056LL), (arr_5 [8U]))) <= (max((arr_5 [i_0]), (((/* implicit */long long int) (unsigned char)66))))))) + (((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (-6317308688210059050LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) < (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)147)))))))))))));
    }
    for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
    {
        var_19 -= ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_11))) && (((/* implicit */_Bool) var_4))));
        var_20 = ((/* implicit */signed char) var_5);
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */_Bool) (~(603388214289132887LL)));
        var_21 = ((/* implicit */unsigned char) 6317308688210059056LL);
        var_22 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)54))));
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (unsigned char i_5 = 3; i_5 < 13; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    {
                        arr_20 [i_3] [i_3] [i_3] [i_3] = -4939884026167687580LL;
                        arr_21 [i_3] [i_3] [i_3] [i_3] [(_Bool)1] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) arr_9 [i_6])) != (((/* implicit */int) (_Bool)0)))))));
                    }
                } 
            } 
        } 
    }
    var_23 |= ((/* implicit */long long int) var_10);
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (signed char i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    var_24 ^= ((/* implicit */long long int) ((((/* implicit */int) (signed char)43)) % (((/* implicit */int) (unsigned char)238))));
                    var_25 = ((/* implicit */_Bool) (-(((/* implicit */int) ((var_6) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))));
                }
                for (signed char i_10 = 3; i_10 < 23; i_10 += 2) 
                {
                    var_26 = ((/* implicit */int) (-(min((-6317308688210059059LL), (((/* implicit */long long int) var_9))))));
                    var_27 = ((/* implicit */_Bool) 1862599238432017278LL);
                }
                for (long long int i_11 = 1; i_11 < 23; i_11 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_28 = (-(-384189899));
                        var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_36 [i_11] [i_11 + 1] [i_11 + 2] [i_11 + 2]))));
                        var_30 = ((/* implicit */short) ((var_7) >= (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                    }
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(4939884026167687580LL)))) ? ((-(6980742255819931962LL))) : (((/* implicit */long long int) ((var_0) ^ (((/* implicit */int) arr_26 [i_11 + 1] [i_11] [i_7])))))));
                    arr_38 [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_32 [i_7] [i_11] [i_11 + 1] [i_7])) / (var_6)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)))) : ((+(((/* implicit */int) var_15))))));
                }
                /* LoopSeq 1 */
                for (long long int i_13 = 0; i_13 < 25; i_13 += 2) 
                {
                    var_32 = ((/* implicit */long long int) max((var_32), (var_14)));
                    arr_41 [i_13] [i_7] [(_Bool)1] = ((/* implicit */unsigned short) ((short) min((((/* implicit */unsigned short) (signed char)-1)), (var_3))));
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4205373023430044262LL)))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)83)))))));
                    arr_42 [i_7] = (~(min((arr_30 [i_7] [i_8] [i_13]), (((/* implicit */long long int) (signed char)-54)))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_14 = 0; i_14 < 21; i_14 += 2) 
    {
        for (unsigned short i_15 = 0; i_15 < 21; i_15 += 1) 
        {
            {
                arr_50 [i_15] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) max(((signed char)-63), (((/* implicit */signed char) ((var_16) < (((/* implicit */long long int) var_7)))))))) : (max((((/* implicit */int) (short)12449)), (((((/* implicit */_Bool) -7742645542998434087LL)) ? (((/* implicit */int) (unsigned short)55704)) : (((/* implicit */int) (_Bool)0))))))));
                var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_47 [(short)2] [i_15]))));
            }
        } 
    } 
}
