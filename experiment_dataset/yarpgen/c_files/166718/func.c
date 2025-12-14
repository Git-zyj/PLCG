/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166718
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (~(((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3))) == (9374371242713262256ULL))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_12))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned char)171)), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)3))) != (arr_0 [8LL]))))) ^ (max((-1LL), (-218196982767537695LL)))))));
    }
    for (unsigned short i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3)))) > (-218196982767537678LL)));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_4 [i_1]))));
        arr_8 [0LL] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) (-(arr_4 [i_1 + 2])))) != (((var_12) ? (((/* implicit */unsigned long long int) 218196982767537690LL)) : (var_0))))))));
    }
    for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        arr_11 [3U] = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_9 [i_2] [i_2])), (((((/* implicit */_Bool) arr_4 [i_2])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8)))))));
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((((((/* implicit */long long int) ((/* implicit */int) max((arr_6 [i_2] [i_2]), (arr_6 [(short)17] [i_2]))))) - ((~(-218196982767537690LL))))), (((/* implicit */long long int) ((641378947384042177ULL) == (((/* implicit */unsigned long long int) 218196982767537690LL))))))))));
        var_17 |= ((/* implicit */unsigned int) arr_6 [i_2] [i_2]);
    }
    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((unsigned char) (((+(((/* implicit */int) arr_6 [i_3] [i_4])))) * (((/* implicit */int) var_13))))))));
            var_19 = ((/* implicit */long long int) ((unsigned char) (-(((/* implicit */int) ((unsigned short) (short)1197))))));
        }
        for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
            arr_20 [i_3] [i_3] [i_3] = max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)72))) ^ (4398046478336ULL))), (((/* implicit */unsigned long long int) max((3402765185U), (((/* implicit */unsigned int) arr_19 [i_3] [i_3] [i_5]))))));
        }
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    {
                        arr_30 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) 2057532890U);
                        /* LoopSeq 3 */
                        for (signed char i_9 = 2; i_9 < 16; i_9 += 1) 
                        {
                            arr_34 [i_9 - 1] [i_6] [i_7] [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_24 [i_6] [i_6] [i_7] [i_7]))));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) 6526174007956924428ULL))));
                            var_22 = ((/* implicit */unsigned char) ((((((((/* implicit */int) (short)-1)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) != ((-(((/* implicit */int) arr_32 [i_9 + 1] [i_9 + 1] [i_9 - 2] [i_9] [i_6]))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned short) var_9);
                            var_24 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_36 [i_3] [i_6] [(signed char)11] [i_7] [i_10])) % (((/* implicit */int) (unsigned char)11)))) > (((/* implicit */int) var_11))));
                            arr_38 [i_3] [i_6] [i_6] [i_8] [i_10] = ((/* implicit */short) (unsigned char)82);
                        }
                        for (unsigned char i_11 = 1; i_11 < 16; i_11 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)127))));
                            arr_41 [i_3] [i_7] [i_3] [i_3] [i_7] |= ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned char)91))));
                            var_26 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) (unsigned char)8)))));
                            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_19 [i_6] [i_7] [i_8])) : (((/* implicit */int) arr_19 [i_8] [i_6] [i_8])))))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_12 = 1; i_12 < 16; i_12 += 1) 
        {
            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) var_6))));
            /* LoopNest 2 */
            for (short i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    {
                        var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-29423))));
                        var_30 = ((/* implicit */unsigned long long int) var_11);
                        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((min((((/* implicit */long long int) (_Bool)1)), (((long long int) arr_4 [i_3])))) ^ (((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)112)) * (((/* implicit */int) (unsigned char)0))))))))))));
                    }
                } 
            } 
            var_32 = ((/* implicit */short) var_7);
        }
    }
    var_33 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)63))));
    /* LoopSeq 3 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_34 = ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-104))));
        arr_55 [i_15] [i_15] = ((/* implicit */short) (+(((min((-218196982767537690LL), (((/* implicit */long long int) (unsigned short)40312)))) % (arr_4 [i_15])))));
    }
    /* vectorizable */
    for (short i_16 = 0; i_16 < 14; i_16 += 3) 
    {
        arr_59 [i_16] |= ((/* implicit */unsigned int) ((short) ((((/* implicit */int) (signed char)95)) == (((/* implicit */int) var_7)))));
        var_35 = ((/* implicit */unsigned int) ((-218196982767537696LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)91)))));
    }
    for (signed char i_17 = 0; i_17 < 12; i_17 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_18 = 0; i_18 < 12; i_18 += 3) 
        {
            for (unsigned char i_19 = 1; i_19 < 11; i_19 += 2) 
            {
                {
                    var_36 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)48874))))))) ? (var_9) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_17] [i_17])) : (((/* implicit */int) arr_56 [i_17] [i_17]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)236))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) & (var_0)))))));
                    var_37 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-17764)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)8128)) * (((/* implicit */int) (short)12))))) : (min((((/* implicit */long long int) arr_1 [i_19])), (9223372036854775807LL))))))));
                }
            } 
        } 
        arr_70 [i_17] [i_17] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)22))))) ? (min((((/* implicit */int) var_11)), ((~(((/* implicit */int) arr_10 [(short)8] [i_17])))))) : (((/* implicit */int) (unsigned char)0))));
    }
    var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_4))));
}
