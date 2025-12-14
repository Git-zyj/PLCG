/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175554
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
    var_16 = ((/* implicit */long long int) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (short)32654))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) -2122360945))) ? (-2122360945) : (2122360944)));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (signed char i_3 = 1; i_3 < 12; i_3 += 1) 
        {
            arr_9 [6ULL] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-102)) ? (3733216393528567605LL) : ((((_Bool)0) ? (325757611968414923LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42709)))))));
            var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) (unsigned short)49771)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_8)))))));
        }
        for (int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            var_19 = ((((/* implicit */_Bool) ((var_3) ? (3906361200U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) (unsigned short)16383)));
            var_20 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) -2122360949)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551607ULL)) && ((_Bool)0)))) : ((-2147483647 - 1))));
        }
        arr_12 [i_0] = var_6;
        var_21 = ((/* implicit */int) ((((((/* implicit */int) var_3)) == (((/* implicit */int) var_3)))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) 0U)) : (5927389188874792169ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
    }
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (10028107815820971327ULL)))))) ? (min((5587623650645887698ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)12288)) : (((/* implicit */int) (_Bool)1)))))));
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)25537)) ? (((/* implicit */int) (unsigned short)50715)) : (((/* implicit */int) (_Bool)0))));
                }
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        for (long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */short) (unsigned char)32);
                                var_25 ^= ((/* implicit */int) ((var_9) ? (((((/* implicit */_Bool) var_15)) ? (1112369707U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-7406)))))));
                                var_26 |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)14173)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4894813867423389041LL)))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)63448)) && (((/* implicit */_Bool) 2147483647)))))) >= (((((/* implicit */_Bool) (short)32755)) ? (554481443956268890ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65523)))))));
                }
                for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) /* same iter space */
                {
                    var_28 = ((/* implicit */long long int) 5587623650645887698ULL);
                    arr_32 [i_5] [i_6] [(unsigned short)1] = ((/* implicit */long long int) (short)-438);
                    var_29 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (short)10358)) ? (((/* implicit */int) (unsigned short)51054)) : (((/* implicit */int) (_Bool)1)))));
                }
                /* LoopNest 3 */
                for (unsigned int i_12 = 3; i_12 < 18; i_12 += 2) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        for (signed char i_14 = 2; i_14 < 16; i_14 += 3) 
                        {
                            {
                                arr_39 [i_12] [i_12] [i_12] [i_13] [(unsigned short)14] [i_14] [i_12] = ((/* implicit */long long int) var_15);
                                var_30 = ((/* implicit */short) var_10);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
