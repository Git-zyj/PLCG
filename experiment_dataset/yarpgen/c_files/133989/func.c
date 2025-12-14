/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133989
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [i_1] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 505086604U)) ? (((/* implicit */int) var_7)) : ((~(var_12))))));
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */int) min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) (~(var_12)))) : (15231740400329808693ULL))), (((/* implicit */unsigned long long int) ((unsigned char) ((535460472875955576LL) != (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
                    var_17 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_2)) : (var_11))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((long long int) ((535460472875955576LL) % (((/* implicit */long long int) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_7)) - (15476)))))))));
        var_19 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 6761919348424030096LL))));
        var_20 &= ((/* implicit */_Bool) ((((unsigned long long int) (!(((/* implicit */_Bool) var_0))))) * (((/* implicit */unsigned long long int) 535460472875955600LL))));
    }
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((var_1) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)151)))))))))) % (535460472875955576LL)));
    /* LoopSeq 1 */
    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
        {
            var_22 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)15251)) && ((_Bool)0)));
            arr_17 [i_4] [i_4] [i_5] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) -8204245958070579747LL)) || ((!(((/* implicit */_Bool) (unsigned char)214)))))));
            var_23 = ((((/* implicit */int) ((var_12) < ((+(((/* implicit */int) var_16))))))) & (((int) (_Bool)1)));
        }
        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (int i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_15)) * (((/* implicit */int) var_9))))) ^ ((~(535460472875955566LL)))));
                var_25 = ((/* implicit */long long int) var_4);
            }
            /* vectorizable */
            for (signed char i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                var_26 ^= ((/* implicit */long long int) ((((/* implicit */int) ((var_11) < (var_11)))) == ((+(var_3)))));
                var_27 = ((/* implicit */short) ((((/* implicit */int) var_0)) * (((/* implicit */int) var_2))));
            }
            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)142))) : (var_10)))) ? (((/* implicit */long long int) ((-1173283623) + (((/* implicit */int) var_4))))) : (((8204245958070579747LL) | (((/* implicit */long long int) -1148071648))))));
        }
        /* LoopSeq 2 */
        for (short i_9 = 0; i_9 < 15; i_9 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
            {
                var_29 -= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) -1500963494)) == (3701533914U))))) <= (4611686018427387904ULL)))) == (((/* implicit */int) (_Bool)1))));
                var_30 = ((((((/* implicit */_Bool) ((unsigned short) var_13))) ? (((/* implicit */unsigned long long int) 536346624)) : (12282116706895120785ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)8628), (((/* implicit */short) var_15)))))));
                arr_31 [i_4] = ((/* implicit */unsigned char) ((long long int) var_11));
                arr_32 [i_4] = ((((/* implicit */_Bool) ((unsigned int) var_4))) ? (((/* implicit */int) ((_Bool) var_3))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))));
            }
            for (short i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                var_31 *= ((/* implicit */_Bool) max((((((unsigned long long int) var_14)) & (((/* implicit */unsigned long long int) ((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (535460472875955564LL) : (var_1)))) ? ((-(8204245958070579756LL))) : (((/* implicit */long long int) var_6)))))));
                arr_37 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) ((short) (unsigned short)0))) <= (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
                arr_38 [i_4] = ((/* implicit */int) var_16);
            }
            var_32 = ((/* implicit */int) ((((int) 12686309441650440672ULL)) == (((/* implicit */int) (unsigned char)0))));
        }
        /* vectorizable */
        for (short i_12 = 0; i_12 < 15; i_12 += 2) /* same iter space */
        {
            var_33 ^= ((/* implicit */int) ((unsigned char) 4611686018427387878ULL));
            var_34 ^= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_11) == (250468957))))) < (((long long int) var_7))));
            var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((1783822272) ^ (-1783822273)))))))));
            arr_42 [(_Bool)1] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)1))));
        }
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 15; i_13 += 4) 
        {
            for (unsigned char i_14 = 0; i_14 < 15; i_14 += 1) 
            {
                {
                    var_36 = ((/* implicit */_Bool) ((((/* implicit */int) (short)29261)) * (((/* implicit */int) ((((/* implicit */int) ((unsigned char) var_8))) > (((/* implicit */int) var_16)))))));
                    var_37 = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) / (5214364319977196318LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) ((short) 7508005646447848880LL))))));
                    arr_47 [i_4] = ((/* implicit */unsigned char) ((((2067007985) | (((/* implicit */int) ((5522202193514537203ULL) < (((/* implicit */unsigned long long int) 2067007990))))))) | (((((/* implicit */int) var_4)) * ((+(((/* implicit */int) (short)5596))))))));
                }
            } 
        } 
    }
    var_38 &= ((/* implicit */_Bool) ((int) (_Bool)1));
}
