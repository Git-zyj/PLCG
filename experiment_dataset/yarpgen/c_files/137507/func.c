/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137507
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) var_6);
        var_13 |= ((/* implicit */long long int) ((signed char) ((((min((1546472426258652476LL), (((/* implicit */long long int) arr_2 [i_0] [i_0])))) + (9223372036854775807LL))) >> ((((~(var_11))) - (13358282476058493740ULL))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */long long int) ((int) ((long long int) min((var_10), (((/* implicit */long long int) (unsigned short)44599))))));
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_1 [i_1] [i_1]))) ? (min((((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_1]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20949))) | (var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_4 [i_1] [i_1])), (0U)))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (var_3))))))))));
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */long long int) max(((unsigned short)20949), (((/* implicit */unsigned short) (short)6342))));
            arr_9 [i_1] = ((/* implicit */long long int) ((unsigned int) (unsigned short)20949));
        }
        for (long long int i_3 = 0; i_3 < 14; i_3 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    {
                        var_16 = ((/* implicit */_Bool) arr_17 [i_4] [i_4] [i_4] [i_3] [i_4] [i_4]);
                        var_17 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((arr_8 [i_1] [i_4]) >= (((/* implicit */unsigned long long int) 290470084))))))), (-2034596419)));
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            var_18 += max((min((min((940880206073537429ULL), (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_20 [12U] [12U]))) & (5271137339492697640LL)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)25)), (var_5)))) ? (6193317394658752045ULL) : (((/* implicit */unsigned long long int) 290470075)))));
                            var_19 = ((/* implicit */short) arr_18 [i_6] [i_4] [i_4] [i_1]);
                        }
                        for (long long int i_7 = 4; i_7 < 13; i_7 += 2) 
                        {
                            arr_24 [i_1] [i_1] [i_7] [i_5] [i_7] [i_4] [i_3] = ((/* implicit */unsigned int) (-((~(((int) arr_8 [i_4] [i_4]))))));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((max((((/* implicit */unsigned long long int) var_12)), (var_11))) - (((/* implicit */unsigned long long int) ((var_7) & (((/* implicit */int) arr_1 [i_3] [i_5]))))))) > (var_3))))));
                        }
                    }
                } 
            } 
            var_21 = ((/* implicit */int) var_5);
            var_22 = ((/* implicit */signed char) (unsigned short)328);
            /* LoopNest 3 */
            for (unsigned int i_8 = 1; i_8 < 13; i_8 += 2) 
            {
                for (short i_9 = 3; i_9 < 12; i_9 += 2) 
                {
                    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        {
                            arr_32 [i_8] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) (short)-8)) ? (((((/* implicit */_Bool) arr_29 [i_3] [i_8] [i_8] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44586))) : (91769893U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_8] [i_8])))))))));
                            arr_33 [i_10] [i_9 + 2] [i_8] [i_8] [i_3] [i_1] = ((/* implicit */signed char) (~(min((((((/* implicit */_Bool) arr_11 [i_1] [i_9])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_8 [i_3] [i_8]))), (940880206073537416ULL)))));
                        }
                    } 
                } 
            } 
        }
    }
    for (int i_11 = 0; i_11 < 23; i_11 += 2) 
    {
        var_23 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -2034596418)) ? (-977097419336581764LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-4844))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) 5387355229256908815LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_11] [i_11]))) : (var_4))))))) ? (min((((/* implicit */long long int) (short)22585)), (-3121405181626600807LL))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)25724)), (2305841909702066176LL)))) ? (min((var_12), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) arr_35 [i_11] [i_11])))));
        var_24 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((signed char) var_7))))) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned short) 8589934584LL))) != (min((((/* implicit */int) (short)(-32767 - 1))), (arr_35 [i_11] [i_11])))))) : (var_7)));
    }
    var_25 += var_12;
    /* LoopSeq 2 */
    for (unsigned short i_12 = 0; i_12 < 12; i_12 += 2) 
    {
        arr_40 [i_12] = ((/* implicit */unsigned int) ((int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) - (-290470084)))) / (((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_12] [i_12]))))))));
        var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_11 [i_12] [i_12])) ? (arr_11 [i_12] [i_12]) : (((/* implicit */long long int) 290470085)))) & (((/* implicit */long long int) max((((/* implicit */unsigned int) -290470087)), (3347134091U))))));
        var_27 = ((/* implicit */signed char) 10965783689777640366ULL);
    }
    for (int i_13 = 0; i_13 < 11; i_13 += 3) 
    {
        arr_44 [i_13] [i_13] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_12 [i_13] [i_13] [i_13])) ? (var_1) : (((/* implicit */unsigned long long int) arr_12 [i_13] [i_13] [i_13])))));
        /* LoopNest 3 */
        for (long long int i_14 = 1; i_14 < 7; i_14 += 2) 
        {
            for (short i_15 = 0; i_15 < 11; i_15 += 3) 
            {
                for (unsigned short i_16 = 0; i_16 < 11; i_16 += 4) 
                {
                    {
                        var_28 |= ((/* implicit */unsigned int) var_12);
                        var_29 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_52 [i_14] [i_14 - 1] [i_14 - 1] [i_14 + 4])) & (562945658454016ULL))) & (((unsigned long long int) arr_52 [i_13] [i_14 + 4] [i_14 + 3] [i_14 - 1]))));
                    }
                } 
            } 
        } 
        var_30 ^= ((/* implicit */unsigned int) (+(max((arr_45 [(signed char)8]), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)44599)), (var_10))))))));
    }
}
