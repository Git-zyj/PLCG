/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145578
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))) / (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-3081)) : (((/* implicit */int) var_2))))))) ? (var_3) : (((((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) (unsigned char)32))))) ? ((~(var_8))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)32))))))))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (max((((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))) : (21U))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)768)))))))));
    var_15 = ((/* implicit */short) min((((/* implicit */unsigned short) (unsigned char)32)), (((unsigned short) ((((/* implicit */_Bool) 1186536056U)) ? (((/* implicit */int) (short)31744)) : (((/* implicit */int) var_5)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_16 = (+(((/* implicit */int) var_6)));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)60836)) ? (((/* implicit */int) (short)19985)) : (((/* implicit */int) (signed char)-12)))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) (short)4)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-19986)))))))));
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        var_19 *= ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)22)))) && (((/* implicit */_Bool) (unsigned char)215))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19988)))))) ? ((+(((/* implicit */int) (unsigned short)60836)))) : (((((/* implicit */_Bool) arr_1 [(short)0] [i_2])) ? (((/* implicit */int) (short)-19984)) : (((/* implicit */int) (short)-19980))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                        {
                            var_21 *= ((/* implicit */long long int) ((arr_2 [i_1] [i_1]) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) arr_2 [i_3] [i_1]))));
                            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((signed char) (short)19980)))));
                            var_23 = ((/* implicit */unsigned char) ((long long int) arr_0 [i_2]));
                        }
                    }
                    for (short i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        var_24 *= ((((/* implicit */int) (short)12)) >> (((((/* implicit */int) (short)-31747)) + (31756))));
                        /* LoopSeq 2 */
                        for (long long int i_7 = 4; i_7 < 17; i_7 += 2) 
                        {
                            arr_17 [i_1] [(unsigned char)9] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */int) arr_12 [(unsigned short)9] [i_2] [i_7 - 2] [i_7 - 4] [i_1] [i_7 + 1])) < (((/* implicit */int) (_Bool)1))));
                            var_25 = ((/* implicit */unsigned int) (signed char)126);
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned char) (unsigned short)25415);
                            arr_21 [(unsigned short)6] [(unsigned short)6] [i_1] [(unsigned char)9] [i_8] = ((/* implicit */long long int) (+(2147483648U)));
                            var_27 = ((((long long int) var_8)) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))));
                            var_28 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)12665)) + (arr_5 [i_1])));
                            var_29 = ((/* implicit */signed char) ((_Bool) arr_6 [i_1] [i_1] [i_1]));
                        }
                        var_30 = ((/* implicit */unsigned int) min((var_30), (((2147483648U) | (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_1] [i_2] [i_3] [i_3] [i_2] [i_6] [i_3]))) : (var_3)))))));
                    }
                    for (long long int i_9 = 4; i_9 < 16; i_9 += 3) 
                    {
                        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [(signed char)7] [i_3] [i_1] [i_1])) ? (((/* implicit */int) (short)-32766)) : (((/* implicit */int) arr_19 [i_9] [i_2] [16U] [i_3] [i_2] [i_2] [i_1]))))) ? (((/* implicit */int) arr_16 [i_9] [i_9 - 3] [i_9 - 3] [(_Bool)1] [i_9 - 2] [i_1])) : (((/* implicit */int) arr_16 [i_9 - 3] [i_9] [i_9 - 3] [i_9] [(short)5] [i_9 - 3])))))));
                        var_32 = ((/* implicit */unsigned int) (!((!((_Bool)1)))));
                    }
                }
            } 
        } 
        var_33 = ((/* implicit */signed char) (+((+(((/* implicit */int) (short)-19992))))));
        var_34 = ((/* implicit */long long int) ((short) arr_23 [(unsigned char)0] [i_1] [i_1] [i_1]));
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 23; i_10 += 2) 
    {
        for (unsigned int i_11 = 0; i_11 < 23; i_11 += 2) 
        {
            {
                var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((unsigned char) 480091342U)))) ? (min((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_24 [i_11])))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)126)) & (((/* implicit */int) var_4))))))) : (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4700)) && (((/* implicit */_Bool) (signed char)96))))), ((-(var_10))))))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 3; i_12 < 20; i_12 += 2) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-32766))));
                            var_37 *= ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)4691))));
                            var_38 += ((/* implicit */_Bool) (short)-1);
                            var_39 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12687))) | (min((((unsigned long long int) (unsigned short)61264)), (((/* implicit */unsigned long long int) (+(-148862926))))))));
                            var_40 = ((((/* implicit */_Bool) min((max((((/* implicit */int) var_9)), (-12))), (arr_27 [i_13])))) ? (((((/* implicit */_Bool) ((-7LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-22285)))))) ? (((/* implicit */int) ((unsigned short) arr_33 [i_10] [i_10] [i_10] [i_10]))) : (((/* implicit */int) (short)4)))) : (((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_24 [i_13])) + (17187))))) / (((((/* implicit */int) arr_31 [i_12])) << (((351335522) - (351335510))))))));
                        }
                    } 
                } 
                var_41 -= ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) (unsigned char)246)) >> (((arr_26 [i_10] [i_10]) - (1263531146628204581LL))))) : (((/* implicit */int) ((_Bool) arr_33 [i_11] [i_11] [i_11] [i_11]))))));
            }
        } 
    } 
}
