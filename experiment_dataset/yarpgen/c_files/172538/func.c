/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172538
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) (~(134217696)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((11460890454886276998ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))))))))));
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                var_15 = ((134217696) == (((/* implicit */int) var_8)));
                arr_10 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65534)) ? (((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 143833713099145216ULL)) ? (134217696) : (((/* implicit */int) var_10)))))));
                var_16 |= ((/* implicit */_Bool) var_4);
                var_17 = ((/* implicit */unsigned short) -134217695);
            }
            var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) != (((/* implicit */int) (unsigned short)65535))));
        }
        for (int i_3 = 0; i_3 < 14; i_3 += 1) 
        {
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) -134217697)) : (2118013545087467199ULL)))))) ? (-1086973408) : (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                arr_15 [i_0] [i_3] [i_4] [i_4] = ((/* implicit */long long int) (+(((unsigned long long int) ((((/* implicit */unsigned long long int) var_5)) / (var_4))))));
                var_20 ^= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) (~(var_11)))) >= (min((arr_1 [i_0] [(unsigned short)2]), (((/* implicit */unsigned long long int) (unsigned short)63429)))))))));
            }
            arr_16 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((_Bool) (unsigned char)0))) : (((/* implicit */int) (unsigned short)8176))))) ? (((/* implicit */int) (unsigned short)13772)) : (((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_3])))));
        }
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) ((var_2) | (var_11)));
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 4 */
                for (int i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    arr_23 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((_Bool) arr_14 [i_6] [i_5]));
                    arr_24 [i_0] [i_5] [i_6] [i_6] [i_6] [i_7] = (~(((/* implicit */int) var_9)));
                }
                for (int i_8 = 3; i_8 < 13; i_8 += 4) 
                {
                    arr_28 [i_0] [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) var_10);
                    var_22 = ((/* implicit */short) arr_8 [i_6] [i_5] [i_6] [i_8]);
                    arr_29 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))));
                }
                for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    arr_32 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (0ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (-1418608338) : (var_2))))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) <= (((/* implicit */int) ((_Bool) var_11)))));
                }
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    arr_36 [i_0] [(unsigned short)4] [i_10] [i_5] [i_10] [i_0] |= ((/* implicit */long long int) (((~(((/* implicit */int) arr_13 [i_10] [i_0] [i_0] [i_0])))) * (((/* implicit */int) ((var_4) > (var_3))))));
                    arr_37 [i_0] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_5)))) || ((!(((/* implicit */_Bool) var_4))))));
                    arr_38 [i_10] [i_5] [i_6] = ((/* implicit */long long int) arr_4 [i_6] [i_6]);
                    arr_39 [i_0] [i_10] [i_6] [i_10] &= ((((/* implicit */_Bool) ((var_7) / (((/* implicit */unsigned long long int) 372504248))))) ? (((((/* implicit */int) var_10)) / (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_0] [i_0] [(unsigned char)3])))));
                    var_24 = ((/* implicit */int) var_4);
                }
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_19 [i_0] [i_5] [i_6] [i_6])));
            }
            for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 1) 
            {
                var_26 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) arr_6 [i_11] [i_0]))));
                var_27 ^= ((/* implicit */short) (unsigned char)255);
                var_28 = var_11;
                arr_42 [i_11] [i_11] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_3)))) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) arr_4 [i_0] [i_11])) ? (var_11) : (((/* implicit */int) arr_0 [i_11]))))));
                arr_43 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (unsigned short)2107))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (0ULL)));
            }
            /* LoopSeq 1 */
            for (int i_12 = 0; i_12 < 14; i_12 += 4) 
            {
                arr_46 [i_0] [i_0] [i_5] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (var_5)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [i_0] [i_5])) : (var_5)))) : (var_4)));
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    for (unsigned short i_14 = 0; i_14 < 14; i_14 += 1) 
                    {
                        {
                            var_29 += ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_41 [i_0] [i_5] [i_12] [i_5])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)125))))));
                            var_30 ^= ((/* implicit */long long int) arr_13 [i_0] [i_5] [i_12] [i_0]);
                            var_31 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((/* implicit */int) ((unsigned short) 6564538521151517194ULL))) : (((/* implicit */int) (((-2147483647 - 1)) == (var_11))))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 0; i_15 < 14; i_15 += 4) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 14; i_16 += 4) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((long long int) var_8)))));
                        var_33 = ((/* implicit */unsigned long long int) ((((var_1) != (114688))) ? (((((/* implicit */int) arr_14 [(short)4] [i_15])) | (((/* implicit */int) arr_6 [i_0] [i_15])))) : (((var_12) ? (var_5) : (((/* implicit */int) (unsigned char)4))))));
                    }
                } 
            } 
        }
        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)28672)) * (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)245)))) : (((/* implicit */int) var_12))))));
        var_35 = ((/* implicit */unsigned short) (~((~(((13013725669659781105ULL) * (((/* implicit */unsigned long long int) -106545890))))))));
    }
    for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 4) /* same iter space */
    {
        var_36 ^= ((/* implicit */unsigned short) ((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_4)))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((unsigned char) var_0))))))));
        var_37 &= max((((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)64)) - (((/* implicit */int) (unsigned char)0)))) * (((((/* implicit */int) var_12)) | (((/* implicit */int) arr_6 [i_17] [i_17]))))))), (((unsigned long long int) var_8)));
        var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) var_6))));
    }
    /* LoopNest 2 */
    for (unsigned char i_18 = 0; i_18 < 13; i_18 += 1) 
    {
        for (unsigned short i_19 = 0; i_19 < 13; i_19 += 4) 
        {
            {
                var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (var_1))) : (((((/* implicit */_Bool) 864374971)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)0)))))), ((-((~(((/* implicit */int) arr_44 [i_18])))))))))));
                var_40 = ((((/* implicit */_Bool) ((unsigned char) min((var_2), (var_11))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_1) == (((/* implicit */int) (unsigned short)10626)))))))) : (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (0ULL))) * (((/* implicit */unsigned long long int) ((long long int) var_13))))));
                var_41 = ((unsigned short) min((var_1), (max((var_5), (var_2)))));
                var_42 = ((/* implicit */unsigned long long int) max((var_42), (((((/* implicit */_Bool) 0LL)) ? (max((max((((/* implicit */unsigned long long int) var_9)), (arr_27 [i_18] [i_19] [i_18]))), (((((/* implicit */unsigned long long int) 864374971)) % (var_4))))) : (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) var_12)), (arr_53 [i_19] [i_19] [i_18] [i_18])))), (((arr_27 [i_18] [i_19] [i_19]) + (var_4)))))))));
                var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) ((((arr_0 [i_18]) ? (((/* implicit */int) arr_0 [i_18])) : (((/* implicit */int) (unsigned char)0)))) - (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) (unsigned char)248))))))))));
            }
        } 
    } 
    var_44 = ((/* implicit */long long int) var_13);
    var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (min((((/* implicit */unsigned long long int) var_1)), ((+(var_3))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((unsigned char)255), (var_10)))) ? ((+(((/* implicit */int) var_6)))) : (((/* implicit */int) var_0)))))));
}
