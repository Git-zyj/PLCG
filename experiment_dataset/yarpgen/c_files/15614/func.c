/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15614
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
    var_14 -= ((/* implicit */short) max((((/* implicit */int) var_3)), (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) var_8)))), (var_9)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))));
        var_15 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) || (((/* implicit */_Bool) min(((short)-1), ((short)-23283))))));
        var_16 = ((/* implicit */unsigned long long int) (short)0);
        var_17 ^= ((/* implicit */_Bool) max((((/* implicit */int) (short)10)), (((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) var_8))))) ? (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (short)-10)) : (((/* implicit */int) (short)-17300)))) : (((((/* implicit */_Bool) arr_2 [16LL])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-92))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [4] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((1202075874) >= (((/* implicit */int) (unsigned short)19962)))))))) ? (max((max((-317795456), (((/* implicit */int) (short)-11955)))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)45574)) > (((/* implicit */int) (short)11834))))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) <= (1963411127650776127ULL))))));
        /* LoopSeq 3 */
        for (long long int i_2 = 4; i_2 < 21; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    {
                        var_18 &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(1408534631)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (short)-13))))) : (((/* implicit */int) max(((short)-17300), (arr_5 [i_3])))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)19962)) << (((((((/* implicit */int) (signed char)-105)) + (123))) - (12)))))) || (((/* implicit */_Bool) var_7)))))));
                        arr_16 [i_1] [i_1] [i_3] [i_4] [i_2] = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_10 [i_1] [(_Bool)1] [i_2 + 1]))))));
                        var_19 = (-(max((((/* implicit */int) (unsigned char)4)), (-2043392999))));
                    }
                } 
            } 
            var_20 = ((/* implicit */short) (_Bool)1);
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((arr_11 [i_2 - 1] [i_1]), (((/* implicit */unsigned int) var_7))))) ^ (((8348475793664463081LL) >> (((-1074968674) + (1074968702)))))));
        }
        for (unsigned short i_5 = 1; i_5 < 22; i_5 += 2) 
        {
            var_22 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)109)), ((+(((/* implicit */int) (short)-26948))))))), (((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_1]))) : (16483332946058775507ULL)))));
            var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) max(((short)-13), ((short)-1))))));
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) && (((/* implicit */_Bool) var_1))));
            var_25 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((var_6) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (short)5)))))) ? (790823779) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)6)) : (((/* implicit */int) (short)12)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)56367)) : (516889154)))) || (((/* implicit */_Bool) var_0)))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            arr_22 [i_6] |= ((/* implicit */_Bool) var_10);
            arr_23 [i_1] [i_1] [i_6] = ((/* implicit */long long int) ((((var_13) / (max((var_10), (((/* implicit */unsigned long long int) arr_10 [i_1] [i_1] [i_6])))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned short)16382)) & (((/* implicit */int) (short)7369)))) <= ((+(-1551555166)))))))));
            /* LoopNest 3 */
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    for (unsigned int i_9 = 2; i_9 < 22; i_9 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_30 [i_7] [i_7] [i_9 - 2] [i_7] [i_9])) : (((/* implicit */int) arr_30 [i_7] [i_7] [i_9 - 2] [i_9 + 1] [i_9 + 1]))))) || (((/* implicit */_Bool) var_5))));
                            var_27 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_7])) ? (((/* implicit */int) (short)12499)) : ((-(var_9)))));
                        }
                    } 
                } 
            } 
            var_28 -= ((/* implicit */unsigned long long int) var_9);
        }
        var_29 -= ((/* implicit */int) ((min((((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) max((((/* implicit */unsigned char) (_Bool)0)), (var_3)))))) % (((/* implicit */long long int) (+(((/* implicit */int) max(((signed char)21), (var_4)))))))));
    }
}
