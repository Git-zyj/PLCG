/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13169
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) 1317785599U)) < (4906006952055493023ULL))));
        /* LoopSeq 1 */
        for (int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(13540737121654058585ULL)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (var_0))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */int) ((((((((/* implicit */int) var_5)) < (var_3))) ? (((/* implicit */int) arr_2 [2])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)12))))))) > (((/* implicit */int) arr_7 [(unsigned short)3] [i_1] [i_2] [i_1]))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            arr_13 [i_3] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) (~(-11LL)));
                            arr_14 [i_4] [i_1] [i_2] [i_3 + 1] [i_4] = ((/* implicit */short) (unsigned char)236);
                        }
                        for (int i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            var_12 = ((/* implicit */unsigned int) (_Bool)1);
                            arr_19 [i_1 - 3] [i_1] [i_1 + 1] [i_1 - 3] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) ((short) ((long long int) (signed char)21))))));
                            var_13 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 3470659309U))) ? (((/* implicit */int) (short)23246)) : (((/* implicit */int) (short)-23252))));
                            var_14 -= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2063313)) ? (arr_8 [i_0] [i_2] [i_3] [i_5]) : (((/* implicit */unsigned long long int) var_9)))))))) % ((~(((/* implicit */int) (unsigned char)104))))));
                            arr_20 [(short)4] [i_1 - 3] [i_2] [i_1] [i_5] = ((short) (~(((/* implicit */int) (signed char)126))));
                        }
                        /* vectorizable */
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
                        {
                            var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) -1498395233)) : (824307987U)))) || (((/* implicit */_Bool) ((int) var_9)))));
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_1])) >> (((/* implicit */int) (!(((/* implicit */_Bool) 15140985082811843656ULL)))))));
                            var_17 += ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)97))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            arr_25 [i_7] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */signed char) var_3);
                            var_18 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_6)))) == (max((var_0), (((/* implicit */unsigned long long int) var_4)))))) ? (((/* implicit */unsigned long long int) max((3LL), (((/* implicit */long long int) (unsigned short)34074))))) : (((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1])))))));
                            arr_26 [i_0] [i_1 - 2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3 - 1] [i_7])) ? ((~(((/* implicit */int) (unsigned short)51373)))) : ((~(var_9)))))) ? (((((/* implicit */_Bool) ((unsigned char) 3470659308U))) ? (min((var_3), (((/* implicit */int) arr_7 [i_0] [i_2] [i_3 - 1] [i_7])))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1804850244))))))) : (495615939)));
                            arr_27 [i_0] [i_1] = ((/* implicit */unsigned int) 1498395232);
                            var_19 *= (+(max((((((/* implicit */_Bool) 3470659309U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [1LL] [i_7]))) : (14465722000247470333ULL))), (max((((/* implicit */unsigned long long int) (unsigned char)243)), (14862472939321177648ULL))))));
                        }
                    }
                } 
            } 
            arr_28 [i_1] [i_1] = ((/* implicit */unsigned short) max((arr_9 [i_1] [i_1] [i_1 - 1] [i_1 - 2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (var_3)))) ? (min((824307974U), (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) var_9)))))));
            arr_29 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
        }
        var_20 &= ((/* implicit */unsigned int) arr_10 [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_32 [i_0] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0]))));
            var_21 = ((/* implicit */int) ((long long int) arr_18 [i_0]));
            arr_33 [i_0] [16ULL] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_10 [i_0]))));
        }
    }
    for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
    {
        arr_37 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_34 [i_9]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_9]))) : (((((/* implicit */_Bool) var_5)) ? (arr_36 [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_9])))))));
        var_22 *= ((/* implicit */unsigned int) (short)-9855);
    }
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) max(((+(var_0))), (((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */unsigned long long int) (-(var_2)))) : ((+(var_1))))))))));
}
