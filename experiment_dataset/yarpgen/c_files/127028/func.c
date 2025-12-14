/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127028
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
    for (int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)56))));
                var_21 = ((/* implicit */unsigned char) min((((unsigned long long int) ((((/* implicit */int) var_10)) >> (((-2114648528) + (2114648550)))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (1784294312303116297LL) : (((/* implicit */long long int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 2114648528)))))) : (((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56)))))))) ? (((/* implicit */unsigned long long int) ((2114648524) % (((/* implicit */int) (signed char)-107))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (6329761764879717421ULL) : (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */unsigned long long int) var_16)) : (((((/* implicit */_Bool) (signed char)107)) ? (((/* implicit */unsigned long long int) -2114648528)) : (6837197310313522022ULL)))))));
    /* LoopSeq 4 */
    for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        arr_6 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (signed char)-98))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-122)) != (var_5)))) : (var_4)));
        var_23 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(((((/* implicit */_Bool) var_17)) ? (var_4) : (-2114648499)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (-2114648529) : (((/* implicit */int) (short)16737))))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (7272241980315021664LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 14U)) ? (2114648528) : (((/* implicit */int) (unsigned char)253)))))))));
    }
    for (int i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            for (signed char i_5 = 4; i_5 < 13; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 14; i_6 += 1) 
                {
                    {
                        arr_19 [i_3] = ((/* implicit */unsigned short) (~(9ULL)));
                        arr_20 [i_3] [i_4 + 1] [i_3] [i_3] = ((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))) > (((/* implicit */int) ((unsigned short) var_15))));
                        var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (short)15500)))), (((((/* implicit */_Bool) 2114648528)) ? (-2114648499) : (var_13)))))) || ((!(((/* implicit */_Bool) ((unsigned long long int) 1272544382U)))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((var_15), (((/* implicit */unsigned long long int) var_8))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_18), (((/* implicit */unsigned int) (short)-18228)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)43)) | (((/* implicit */int) (unsigned char)193))))) ? (2114648481) : (((/* implicit */int) ((unsigned short) var_13)))))));
        var_26 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (+(var_18)))) ? (((/* implicit */int) (signed char)56)) : ((-(((/* implicit */int) var_1)))))), ((-(-2114648528)))));
        var_27 = (~(4844693487730945165ULL));
    }
    for (int i_7 = 0; i_7 < 14; i_7 += 1) /* same iter space */
    {
        var_28 -= ((/* implicit */unsigned short) (+(min((min((((/* implicit */unsigned long long int) var_17)), (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_9)) : (var_13))))))));
        var_29 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 102072942))))));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
    {
        arr_26 [i_8] = ((/* implicit */unsigned char) var_15);
        arr_27 [i_8] = ((((/* implicit */_Bool) (unsigned short)46483)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)));
        /* LoopSeq 1 */
        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            var_30 -= ((/* implicit */unsigned int) var_13);
            /* LoopNest 2 */
            for (unsigned char i_10 = 1; i_10 < 12; i_10 += 1) 
            {
                for (int i_11 = 2; i_11 < 11; i_11 += 1) 
                {
                    {
                        arr_38 [i_8] [i_9] [i_10] [(unsigned char)6] = ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((1392870744) + (((/* implicit */int) (signed char)-107))))) : (((((/* implicit */_Bool) -102072939)) ? (var_15) : (((/* implicit */unsigned long long int) -7064648586887643111LL)))));
                        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)9923)) ? (((((/* implicit */int) (signed char)-107)) + (var_11))) : (var_2)));
                        arr_39 [i_10] [i_10] [i_10 + 2] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) (short)-18228)) < (((/* implicit */int) (unsigned short)27))));
                        arr_40 [(unsigned short)9] [i_8] [i_9] [(unsigned short)9] [i_10 - 1] [i_10] = ((/* implicit */long long int) ((var_0) > (((/* implicit */unsigned long long int) 3653437699U))));
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_6))))));
            arr_41 [i_8] [i_9] = ((/* implicit */unsigned long long int) (unsigned short)18794);
            arr_42 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4259439682U)) | (18201454750089592040ULL)))) ? (((int) var_4)) : (1025118146)));
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 3; i_12 < 24; i_12 += 1) 
    {
        for (int i_13 = 0; i_13 < 25; i_13 += 1) 
        {
            {
                arr_47 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (1392870744) : (max((2147483647), (((/* implicit */int) var_10))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)38666), (var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (4169830065548307621LL) : (((/* implicit */long long int) -2147483642))))) : ((~(13252853675614673393ULL))))))));
                arr_48 [i_13] [i_13] = ((/* implicit */unsigned int) var_1);
                var_33 -= ((/* implicit */unsigned short) ((((13252853675614673393ULL) > (((/* implicit */unsigned long long int) 9223372036854775776LL)))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) 2114648481)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-6814179156779049202LL)))))) : (max((((/* implicit */unsigned long long int) var_7)), (var_19)))));
            }
        } 
    } 
}
