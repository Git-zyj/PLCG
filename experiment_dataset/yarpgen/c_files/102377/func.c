/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102377
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 15; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 2) 
                            {
                                arr_11 [i_0] [i_2] [(unsigned short)11] [i_2] [i_4] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((var_10) | (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_9)))), (((/* implicit */int) (unsigned short)18501))));
                                arr_12 [i_2] [i_0] [i_2 + 2] [i_4] = ((/* implicit */long long int) var_2);
                                var_11 = ((/* implicit */long long int) var_3);
                                var_12 += ((((((/* implicit */int) var_2)) + (((/* implicit */int) var_3)))) + (((int) var_7)));
                                var_13 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6141589278878868094LL)) ? (((/* implicit */int) (unsigned char)89)) : (((/* implicit */int) (unsigned char)56))))) ? (((/* implicit */unsigned long long int) -5726152146817610059LL)) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (~(var_4)))) : (((((/* implicit */_Bool) (unsigned char)89)) ? (((/* implicit */unsigned long long int) 1496189135U)) : (10629706274393122216ULL))))));
                            }
                            for (short i_5 = 0; i_5 < 17; i_5 += 1) 
                            {
                                var_14 = ((/* implicit */short) var_10);
                                var_15 &= min((((/* implicit */unsigned long long int) var_4)), (((10254258054792319709ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                                arr_15 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */long long int) (~(min((((/* implicit */int) var_1)), (2147483647)))))) : (max((((/* implicit */long long int) -196255757)), (9223372036854775807LL)))));
                                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) ((((/* implicit */int) ((short) (unsigned short)2044))) >= (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4095)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) (unsigned short)39562)) : ((~(((/* implicit */int) var_6))))))));
                            }
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                arr_18 [i_2] [i_1] [i_1] [i_3] [i_3] [i_3] [i_2] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)54468)))));
                                arr_19 [i_2] = ((/* implicit */long long int) max((((/* implicit */unsigned char) min(((_Bool)0), ((_Bool)1)))), ((unsigned char)183)));
                                var_17 += ((((((/* implicit */_Bool) (-(-1814430472)))) && ((!(var_0))))) ? (((/* implicit */unsigned long long int) ((long long int) -1650819254))) : (((min((6858663932091619578ULL), (((/* implicit */unsigned long long int) var_0)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)89)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)0))))))));
                                var_18 = ((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned short)0)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))));
                            }
                            /* vectorizable */
                            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) 
                            {
                                arr_23 [i_0] [i_1] [14U] [i_2] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1762906487)) ? (((/* implicit */int) ((13971799543369545338ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18165)))))) : (((/* implicit */int) (unsigned short)2044))));
                                arr_24 [i_0] [i_2] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) var_6);
                                arr_25 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)0)))) > (((((/* implicit */_Bool) (short)24931)) ? (6319676667735472384ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                            }
                            var_19 ^= ((/* implicit */int) ((((/* implicit */int) (unsigned short)18005)) <= (((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
                var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 17113044233576052599ULL)) ? (((/* implicit */int) ((_Bool) (short)(-32767 - 1)))) : ((~(((/* implicit */int) (short)21374))))));
                arr_26 [i_0] [i_1] = ((/* implicit */unsigned char) 2147483647);
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) (-(max((max((((/* implicit */long long int) (unsigned short)12131)), (9223372036854775807LL))), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0)))))))));
    var_22 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((int) 9223372036854775802LL))), (9223372036854775807LL)));
    /* LoopSeq 2 */
    for (int i_8 = 1; i_8 < 14; i_8 += 2) /* same iter space */
    {
        var_23 += var_8;
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (0ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_6), (var_7)))) ? ((-(-484397486))) : ((-(((/* implicit */int) (short)-24931)))))))));
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 14; i_9 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            for (int i_11 = 4; i_11 < 16; i_11 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 2) 
                    {
                        var_25 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)246))));
                        var_26 = ((/* implicit */int) var_6);
                    }
                    /* LoopNest 2 */
                    for (long long int i_13 = 1; i_13 < 14; i_13 += 2) 
                    {
                        for (signed char i_14 = 2; i_14 < 15; i_14 += 2) 
                        {
                            {
                                var_27 |= ((/* implicit */int) var_6);
                                var_28 *= ((/* implicit */short) var_8);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 = ((/* implicit */_Bool) (short)-23343);
        var_30 = ((/* implicit */short) ((unsigned long long int) var_2));
        arr_47 [i_9] = ((short) (_Bool)1);
    }
    var_31 += ((/* implicit */int) var_7);
}
