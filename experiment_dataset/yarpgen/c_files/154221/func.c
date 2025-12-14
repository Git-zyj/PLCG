/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154221
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) var_4);
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2 - 2]))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_1])) ? (1380500968) : (-1380500968)))) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8128)))))));
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) arr_0 [i_0])) ^ (arr_4 [i_1] [i_2 + 2]))) | ((~(5592202567873435038ULL))))))));
                }
            } 
        } 
        arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-88))))) ? (var_7) : (arr_2 [i_0] [i_0])));
        var_22 *= ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
    {
        var_23 ^= ((/* implicit */unsigned char) ((short) 0U));
        var_24 += ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_3] [i_3])) != (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)87)) : (((/* implicit */int) arr_10 [i_3] [i_3]))))));
        var_25 -= ((unsigned long long int) arr_4 [i_3] [i_3]);
    }
    for (int i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
    {
        var_26 -= ((/* implicit */unsigned int) -1363819107);
        var_27 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) <= (arr_12 [i_4] [i_4]))))) & ((((!(((/* implicit */_Bool) arr_11 [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) (unsigned short)9661)) ? (17223718153573643537ULL) : (((/* implicit */unsigned long long int) 1380500968))))))));
        /* LoopSeq 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_28 -= ((/* implicit */signed char) 14344583444326962002ULL);
            arr_16 [i_4] [i_5] = ((/* implicit */long long int) arr_15 [i_4] [i_4] [i_4]);
        }
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
        {
            arr_20 [i_6] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) ((unsigned short) var_11)))))));
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
                {
                    {
                        arr_26 [i_4] [(unsigned char)0] [i_7] [i_6] = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? (arr_12 [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-17947))))));
                        var_29 += ((/* implicit */unsigned int) (signed char)80);
                    }
                } 
            } 
            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_24 [i_4] [i_6]))));
        }
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_4])))))));
            arr_31 [i_4] |= ((/* implicit */unsigned long long int) arr_11 [i_4]);
            var_32 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) var_15)) : (arr_4 [i_4] [(_Bool)1])))));
        }
    }
    for (int i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
    {
        arr_35 [i_10] |= ((/* implicit */unsigned int) var_12);
        var_33 ^= ((/* implicit */unsigned char) (-(17223718153573643537ULL)));
    }
    var_34 = (-(((/* implicit */int) max(((unsigned short)33753), (((/* implicit */unsigned short) (signed char)14))))));
    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((var_0), (var_12))), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)23921))) <= (var_6))))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1223025920135908079ULL)) ? (((/* implicit */int) (unsigned char)107)) : (((/* implicit */int) (unsigned char)99))))) ? (((/* implicit */int) ((5074400324666809823ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) : (((((/* implicit */_Bool) (unsigned short)55874)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_14)))))))));
    var_36 += ((/* implicit */_Bool) (signed char)50);
    var_37 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((_Bool) var_17))) <= ((~(((/* implicit */int) var_4))))))) == (((int) (!(((/* implicit */_Bool) var_15)))))));
}
