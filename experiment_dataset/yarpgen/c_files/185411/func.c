/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185411
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
    var_14 = ((/* implicit */short) var_11);
    var_15 = ((/* implicit */unsigned char) ((long long int) ((((unsigned int) var_2)) == (((/* implicit */unsigned int) ((var_12) << (((var_0) - (1357902915U)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1376))) >= (4513738902928819274ULL)));
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) arr_10 [i_2 - 2] [i_2 + 2] [i_2 + 3] [i_1 - 1]);
                            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (var_12)))) ? ((+(var_5))) : (((/* implicit */unsigned long long int) (~(var_12))))))) ? ((-(var_10))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_13)))))))));
                            var_18 = ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) ((long long int) var_11))), (((((/* implicit */_Bool) (unsigned char)101)) ? (4513738902928819277ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) << (((((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1])) - (54989)))));
                    var_20 += ((/* implicit */unsigned long long int) var_2);
                    var_21 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_13)) ? (arr_7 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4] [i_4] [i_0] [i_1 + 2] [i_1 - 1] [i_0])))));
                }
                for (short i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                {
                    var_22 -= ((/* implicit */unsigned int) (-(min((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5)))))))));
                    var_23 = ((/* implicit */long long int) var_1);
                    var_24 ^= ((/* implicit */unsigned char) var_5);
                }
                for (short i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
                {
                    arr_18 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) arr_14 [(unsigned short)6] [i_1] [i_1] [i_1 + 1]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (16146824088633978598ULL)))) ? (((/* implicit */int) arr_9 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [9LL] [i_1])) : ((-(((/* implicit */int) var_2))))))));
                    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0]))) > (var_5))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (var_12))) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_4 [i_1] [i_1] [(unsigned short)4])));
                    var_26 = var_2;
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_7 = 3; i_7 < 14; i_7 += 4) 
    {
        var_27 = ((short) (unsigned short)18741);
        arr_21 [i_7 + 3] [i_7] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_19 [i_7 - 3] [i_7 + 3])))) >= (((/* implicit */int) min((((/* implicit */unsigned char) var_6)), (arr_19 [i_7 - 3] [i_7 + 3]))))));
        /* LoopNest 2 */
        for (long long int i_8 = 4; i_8 < 16; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                {
                    var_28 = ((/* implicit */short) min((((/* implicit */long long int) arr_23 [i_8] [(signed char)10] [i_9])), (((arr_24 [i_7 + 2]) >> (((((/* implicit */int) var_7)) - (2)))))));
                    var_29 = ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46786))) : (4513738902928819301ULL))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-24492))))) ? (((/* implicit */int) min((var_8), (((/* implicit */unsigned char) var_6))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_3))))))))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        for (long long int i_11 = 0; i_11 < 18; i_11 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */short) var_0);
                                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)21020), (((/* implicit */short) ((unsigned char) var_3))))))) : ((~(min((((/* implicit */unsigned long long int) (short)-21020)), (var_10)))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */short) max((((/* implicit */long long int) var_3)), (min((arr_24 [i_7 + 3]), (arr_24 [i_7 + 2])))));
                }
            } 
        } 
    }
}
