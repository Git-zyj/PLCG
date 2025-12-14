/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177096
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)13)) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) (short)23186)))))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
        {
            var_20 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) <= (((/* implicit */int) var_7)));
            /* LoopSeq 4 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((18103572089369881926ULL) >> (((((/* implicit */int) (short)23174)) - (23142))))) : (((/* implicit */unsigned long long int) ((var_4) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))))));
                arr_6 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30549)) ? (((((/* implicit */_Bool) var_16)) ? (18103572089369881926ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                /* LoopSeq 1 */
                for (unsigned char i_3 = 4; i_3 < 21; i_3 += 2) 
                {
                    arr_11 [i_0] [(signed char)1] [i_2] [(_Bool)1] [i_2] = ((/* implicit */short) (((+(((/* implicit */int) var_14)))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) != (var_15))))));
                    var_22 += ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) <= (var_1));
                }
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((long long int) var_10)))));
                arr_12 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_17))));
            }
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
            {
                var_24 ^= ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)-63))))));
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551592ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-13))) : (var_10)))) ? ((~(((/* implicit */int) (short)896)))) : (((((/* implicit */int) (unsigned char)128)) & (((/* implicit */int) (short)23214))))));
                    var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182))) : (((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))));
                    var_26 = ((/* implicit */unsigned short) ((unsigned long long int) ((_Bool) var_10)));
                }
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    arr_21 [(signed char)3] [(signed char)3] [(signed char)3] = ((/* implicit */unsigned long long int) (signed char)0);
                    arr_22 [i_6] [(unsigned char)8] [i_1] [1ULL] [i_0] = ((/* implicit */unsigned char) var_14);
                }
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)-30549)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7))))));
            }
            for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) var_8))));
                arr_26 [i_0] [(_Bool)1] [20LL] [(unsigned char)0] = (!((!(((/* implicit */_Bool) var_15)))));
            }
            for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 1) 
            {
                arr_30 [i_8] [i_8] [(_Bool)1] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) + (((/* implicit */int) (unsigned short)60))))) >= (((unsigned long long int) var_5))));
                var_29 |= var_1;
            }
            arr_31 [i_0] = ((/* implicit */unsigned int) ((unsigned char) -6965283874799852114LL));
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 22; i_9 += 1) 
            {
                var_30 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                arr_34 [i_1] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)80)) ? (((/* implicit */int) (unsigned short)14262)) : (((/* implicit */int) var_16))));
                /* LoopSeq 4 */
                for (long long int i_10 = 3; i_10 < 21; i_10 += 2) 
                {
                    var_31 = ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (3558268198U)))));
                    var_32 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_17))));
                    arr_38 [(unsigned short)6] [i_1] [i_9] [(unsigned short)6] [(unsigned short)10] = ((/* implicit */unsigned long long int) ((var_4) || (var_4)));
                }
                for (unsigned char i_11 = 0; i_11 < 22; i_11 += 2) 
                {
                    var_33 |= (signed char)112;
                    arr_42 [i_11] [i_11] |= ((/* implicit */long long int) ((unsigned long long int) var_3));
                }
                for (unsigned int i_12 = 1; i_12 < 19; i_12 += 2) 
                {
                    arr_46 [3] [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)26159)))))));
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7)))))));
                        var_35 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14))));
                    }
                }
                for (signed char i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    arr_53 [(_Bool)1] [17U] [i_1] [i_9] [i_9] = ((/* implicit */unsigned int) (!(var_4)));
                    var_36 = ((/* implicit */unsigned long long int) var_14);
                    var_37 = ((((-8663111752406270710LL) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_9)) ? (199540303U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (199540292U))));
                }
                var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) (-(((/* implicit */int) var_8)))))));
            }
        }
        for (short i_15 = 0; i_15 < 22; i_15 += 2) /* same iter space */
        {
            arr_57 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (short)5154)) : (((/* implicit */int) var_5))));
            arr_58 [i_0] = ((/* implicit */signed char) ((var_4) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_2)))))));
            arr_59 [(unsigned short)14] [(short)4] = ((/* implicit */long long int) ((short) ((signed char) var_8)));
        }
        arr_60 [i_0] [18U] = ((/* implicit */short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_16)))));
    }
    /* LoopNest 3 */
    for (unsigned short i_16 = 0; i_16 < 14; i_16 += 3) 
    {
        for (unsigned char i_17 = 0; i_17 < 14; i_17 += 3) 
        {
            for (unsigned int i_18 = 0; i_18 < 14; i_18 += 1) 
            {
                {
                    var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_6)))) ? ((+(((/* implicit */int) var_7)))) : (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4)))) * (((/* implicit */int) var_5)))))))));
                    var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) -2464484008498363286LL)) || (((/* implicit */_Bool) (signed char)59))))))));
                    var_41 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) (signed char)63)), ((short)23186)))) ? (((var_17) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) var_17)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_1)))))));
                    arr_69 [4LL] [10U] [i_16] [4LL] &= 4294967295U;
                }
            } 
        } 
    } 
    var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_16))) || (((/* implicit */_Bool) var_10))))))));
    var_43 = ((/* implicit */short) (~(var_15)));
}
