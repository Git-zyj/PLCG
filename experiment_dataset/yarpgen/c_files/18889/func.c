/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18889
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_3) ? (((var_8) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_0)) : (((var_11) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) (unsigned char)157))))));
    var_19 = ((/* implicit */short) var_16);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) (-(((((/* implicit */_Bool) (-(16837067067167841732ULL)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))));
                                var_21 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (((((((/* implicit */_Bool) var_7)) ? (var_1) : (-750718799))) & (((/* implicit */int) ((unsigned char) var_1))))) : (((/* implicit */int) var_13))));
                            }
                        } 
                    } 
                    var_22 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (var_12)))));
                    var_23 = ((/* implicit */_Bool) 1ULL);
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) 16837067067167841728ULL);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        var_24 = ((unsigned char) ((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */unsigned long long int) -750718810)) : (4137604742675140934ULL)));
        arr_16 [i_5] = ((/* implicit */_Bool) min(((~(-157839124))), (750718786)));
        var_25 = ((/* implicit */short) var_17);
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_6 = 2; i_6 < 14; i_6 += 1) 
        {
            arr_21 [i_5] [(short)13] = ((/* implicit */_Bool) var_2);
            /* LoopNest 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_26 = ((((/* implicit */_Bool) (unsigned char)78)) ? (var_7) : (((/* implicit */int) var_0)));
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((int) var_6)))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
        {
            arr_33 [i_5] [i_5] [i_10 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) (short)19)))) : (((/* implicit */int) (unsigned char)232))));
            /* LoopNest 3 */
            for (short i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                for (unsigned char i_12 = 0; i_12 < 16; i_12 += 4) 
                {
                    for (unsigned short i_13 = 2; i_13 < 13; i_13 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)66)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (9ULL)))) ? (((/* implicit */unsigned long long int) -157839116)) : (11ULL)));
                            var_29 = ((/* implicit */unsigned long long int) var_14);
                        }
                    } 
                } 
            } 
        }
    }
    for (short i_14 = 0; i_14 < 21; i_14 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */signed char) var_16);
        var_31 = ((/* implicit */short) (((((!(((/* implicit */_Bool) (short)14)))) ? (((/* implicit */int) var_0)) : (max((var_12), (((/* implicit */int) var_13)))))) + (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-27089))))))));
        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((var_15), (((/* implicit */unsigned long long int) var_3))))))) ? (((/* implicit */int) var_11)) : (var_12)));
    }
    for (short i_15 = 0; i_15 < 21; i_15 += 1) /* same iter space */
    {
        var_33 = ((/* implicit */unsigned long long int) var_12);
        var_34 = max((var_5), (((unsigned char) 157839098)));
    }
    var_35 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) (_Bool)0))))) ? (var_16) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)35380)) ? (((/* implicit */int) (unsigned short)27204)) : (((/* implicit */int) var_0)))))))));
}
