/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150283
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
    var_15 = max((((/* implicit */long long int) var_0)), (min((((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), ((short)3700)))), (min((((/* implicit */long long int) var_14)), (6171340208689645119LL))))));
    var_16 = ((((/* implicit */_Bool) var_3)) ? ((~(min((-4335114103196054099LL), (((/* implicit */long long int) 0)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_3))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_3 [20ULL])) : (((/* implicit */int) var_9))));
        arr_4 [i_0] = ((/* implicit */int) ((short) (~(((/* implicit */int) var_3)))));
        arr_5 [i_0 + 2] = (signed char)103;
        arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_9))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))));
        var_18 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
    }
    for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            arr_15 [i_1] [i_1] = ((/* implicit */int) min((4192054864072267212LL), (((/* implicit */long long int) var_12))));
            arr_16 [i_1] [(short)0] [(short)9] = ((/* implicit */unsigned long long int) (+((-(2708610397U)))));
            arr_17 [i_1] [12U] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_8)) != (((((/* implicit */long long int) ((/* implicit */int) var_0))) / (arr_11 [i_1 + 2] [i_1 + 1] [i_1 + 2])))));
            arr_18 [i_1 + 1] [i_2] [17LL] = ((/* implicit */short) (-(max((5831330936281825745LL), (((/* implicit */long long int) arr_8 [i_1 + 1] [i_1 + 2]))))));
        }
        var_19 = ((/* implicit */long long int) var_5);
        /* LoopNest 3 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            for (long long int i_4 = 2; i_4 < 17; i_4 += 2) 
            {
                for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    {
                        arr_26 [i_5] [i_4] = ((/* implicit */long long int) ((signed char) ((((long long int) (signed char)127)) - (((/* implicit */long long int) ((/* implicit */int) var_1))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) / ((+(((((/* implicit */long long int) var_8)) | (-2345701467476381479LL)))))));
                            arr_30 [(unsigned short)6] [18LL] [i_1] [18LL] [i_5] [11] = ((/* implicit */short) (+(((/* implicit */int) max((min((((/* implicit */unsigned short) (_Bool)1)), (arr_7 [i_3] [i_4 + 2]))), (((/* implicit */unsigned short) arr_28 [i_4 - 2] [5U] [i_4 - 1] [i_1 - 1] [i_6])))))));
                            arr_31 [i_5] [14ULL] [i_5] [(_Bool)1] = ((/* implicit */short) (!(var_14)));
                            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned short) arr_8 [i_4 + 1] [i_4 + 1])))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
                        {
                            arr_35 [i_1] [i_5] [i_5] [(unsigned short)8] [(short)11] [9LL] = ((/* implicit */unsigned char) 246290604621824ULL);
                            var_22 = ((/* implicit */short) ((((/* implicit */long long int) max((((/* implicit */int) var_6)), (-1476656643)))) <= (5831330936281825749LL)));
                            arr_36 [i_1 - 1] [i_1 - 1] [8ULL] [i_1 - 1] [i_5] [i_1 - 1] [i_7] = (-(min((((/* implicit */int) ((((/* implicit */int) (unsigned short)37768)) != (var_12)))), (arr_21 [i_1 + 1] [i_4 + 2] [17LL] [17LL]))));
                            arr_37 [i_1 + 2] [i_1 + 1] [4LL] [11] [i_1 + 2] [i_7] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_3 [i_1 + 2])), ((signed char)-1)))) ? (max((min((4819416825805433944ULL), (2928696170698242926ULL))), (((/* implicit */unsigned long long int) min(((signed char)48), ((signed char)-2)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 246290604621824ULL)) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) var_0)))))));
                        }
                        arr_38 [i_5] [i_4] [i_5] [(_Bool)1] [i_1 + 1] = ((/* implicit */long long int) (~((-(((/* implicit */int) arr_0 [i_4]))))));
                    }
                } 
            } 
        } 
        arr_39 [i_1] [17ULL] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) arr_8 [i_1 - 1] [i_1 - 1])));
    }
    for (long long int i_8 = 0; i_8 < 17; i_8 += 3) 
    {
        arr_43 [i_8] [i_8] = ((((/* implicit */int) var_5)) * (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_3)), (10949544063097561220ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) <= (var_12)))))))));
        arr_44 [i_8] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_8]))) : (4258706777326545279ULL))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) var_13)) & (((/* implicit */int) (signed char)-16)))) : (((((/* implicit */int) arr_19 [i_8] [i_8] [i_8])) >> (((/* implicit */int) (_Bool)1))))));
    }
    var_24 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((min(((signed char)20), ((signed char)1))), (((/* implicit */signed char) ((-5831330936281825760LL) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)-21))))))))), (max((((/* implicit */unsigned long long int) ((889673350945722591LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-115)))))), (18446744073709551613ULL)))));
}
