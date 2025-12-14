/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112840
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
    for (signed char i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 3) 
        {
            var_15 = ((/* implicit */unsigned char) min((((/* implicit */short) (unsigned char)117)), ((short)-30905)));
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 24; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_16 |= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)6603))) + (1503096897U))) <= (((unsigned int) var_14)))))) == (((((var_3) - (((/* implicit */long long int) var_0)))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))))));
                        var_17 = ((/* implicit */unsigned char) (((-((-(((/* implicit */int) (signed char)105)))))) * (((/* implicit */int) (_Bool)0))));
                        arr_8 [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-30905)) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)103)))))), (((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) && (((/* implicit */_Bool) ((17179869183LL) >> (((/* implicit */int) arr_4 [i_0]))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 4) 
                        {
                            var_18 |= ((/* implicit */_Bool) (-(-1LL)));
                            var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-30905)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [(short)10] [(short)10] [(short)10]))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (arr_7 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)205))))))));
                            var_20 = ((/* implicit */unsigned short) var_11);
                        }
                        var_21 = max((((/* implicit */signed char) (_Bool)0)), ((signed char)48));
                    }
                } 
            } 
            var_22 = ((/* implicit */_Bool) max((var_22), (((((((9760773809986449404ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 2]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) < (751974197963891372ULL))))))) < (((/* implicit */unsigned long long int) var_0))))));
        }
        for (signed char i_5 = 2; i_5 < 24; i_5 += 2) 
        {
            var_23 = ((/* implicit */long long int) min((var_23), (((long long int) (!(((/* implicit */_Bool) (short)30905)))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_16 [i_6] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1920))) : (18446744073709551615ULL)));
                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_5] [i_0] [(signed char)5])) ? (arr_7 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) >= (((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) arr_14 [i_6])) : (((/* implicit */int) (short)0))))))))));
                var_25 = ((/* implicit */unsigned int) ((4108464103039298114ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 1) 
                    {
                        {
                            var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)6)) ? (1978308310U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */int) arr_15 [i_8 + 4] [i_5 + 1] [i_5 - 1] [i_0 - 2])) == (((/* implicit */int) (_Bool)1)))))));
                            var_28 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_3 [i_6] [i_6]))))));
                            arr_22 [i_0 + 3] [i_0 - 1] [i_0 - 1] [i_6] [i_6] [i_7] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (-1041842462838152123LL)))) ? ((+(((/* implicit */int) (signed char)-39)))) : (((((/* implicit */_Bool) -4943163862705043277LL)) ? (((/* implicit */int) (short)-15850)) : (((/* implicit */int) var_2))))));
                        }
                    } 
                } 
            }
        }
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_1 [i_0 + 1]), (arr_14 [i_0 + 1])))))))));
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_9] [i_9])))))));
        var_31 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_2 [i_9] [i_9])) < (((/* implicit */int) arr_4 [i_9])))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-124))))))));
    }
    var_32 = max(((short)32767), (((/* implicit */short) (signed char)-1)));
    var_33 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)41717)));
}
