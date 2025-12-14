/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171611
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) ((min((((/* implicit */long long int) ((((/* implicit */int) (short)32767)) - (((/* implicit */int) (unsigned char)255))))), (max((var_5), (((/* implicit */long long int) var_14)))))) + (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) (signed char)-12)) : (((/* implicit */int) (signed char)4)))))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (+(max((((/* implicit */long long int) arr_1 [i_0] [i_1])), (((((/* implicit */_Bool) (short)-32760)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (var_9))))))))));
            /* LoopSeq 1 */
            for (signed char i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                var_22 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (short)-32760))))) ? (((/* implicit */int) ((unsigned char) var_10))) : (((/* implicit */int) ((signed char) (short)-32760)))))));
                /* LoopSeq 2 */
                for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_4 [i_0 - 1]))) ? (((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 - 1]))) : (var_18))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_0 - 1])) : (((/* implicit */int) (short)-32758)))))));
                    arr_9 [i_0] [i_1] = ((/* implicit */long long int) ((signed char) max((var_8), (var_5))));
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        var_24 ^= ((/* implicit */unsigned char) ((signed char) (+((-(((/* implicit */int) (short)32751)))))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_0), ((short)-32752)))) + (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-32752))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -8474199762078568212LL)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)139)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (short)32751))) | (-8474199762078568212LL))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_7 [i_0 + 1] [i_0 + 1] [(unsigned char)5] [(unsigned char)5]), ((unsigned char)8)))))))));
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (unsigned char)124)), ((short)32760))))) / (max((((/* implicit */long long int) (signed char)96)), (arr_13 [i_0 + 1] [i_1] [i_2] [i_2] [i_4])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_2 + 1] [i_4] [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [(signed char)9]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_1)))) : (((long long int) var_7)))) : ((+(((((/* implicit */long long int) ((/* implicit */int) var_13))) / (var_18)))))));
                    }
                    for (signed char i_5 = 2; i_5 < 10; i_5 += 2) 
                    {
                        var_27 *= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_2 - 3]))))) * (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-127)), ((unsigned char)232))))));
                        arr_16 [i_0 - 1] [(signed char)4] [i_2 - 1] [i_3] [i_5 + 1] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) (short)32))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2 - 3] [i_1] [i_5])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_5 [i_0] [i_1]))))) : (max((var_8), (((/* implicit */long long int) (short)2016)))))), (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) var_16))))))));
                        arr_17 [i_1] [i_2] = max((arr_1 [i_1] [i_1]), (((/* implicit */short) var_13)));
                        var_28 = ((/* implicit */short) (+(((/* implicit */int) var_13))));
                    }
                    for (short i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        arr_20 [i_6] [i_3] [9LL] [i_2] [i_2 - 1] [i_1] [i_0] = ((/* implicit */signed char) max(((+(((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)128)))))), (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_3]))));
                        var_29 = ((/* implicit */short) min((((((/* implicit */int) ((unsigned char) var_4))) * (((/* implicit */int) (signed char)-46)))), (((/* implicit */int) ((short) ((((/* implicit */int) arr_11 [i_2 - 3] [i_2 - 3] [i_2] [i_2] [i_2 - 2] [i_2 - 3])) ^ (((/* implicit */int) (short)-32752))))))));
                        var_30 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) (unsigned char)114)) : ((+(((/* implicit */int) var_15))))))));
                    }
                    arr_21 [i_0] [i_1] [i_1] [i_3] = max(((+(((((/* implicit */_Bool) var_17)) ? (var_8) : (var_2))))), (((/* implicit */long long int) arr_12 [(unsigned char)1] [i_1] [i_1] [i_2 + 1] [i_3])));
                    var_31 ^= ((/* implicit */signed char) min((((/* implicit */long long int) arr_5 [i_2 + 1] [(signed char)1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)2048)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-11051))))) ? ((-(9223372036854775680LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)32750)))))))));
                }
                /* vectorizable */
                for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    var_32 = ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)56))) % (var_8))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)113))));
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_7] [i_0] [i_7])) : (((/* implicit */int) (short)-2016))));
                }
                /* LoopNest 2 */
                for (short i_8 = 2; i_8 < 9; i_8 += 2) 
                {
                    for (short i_9 = 3; i_9 < 10; i_9 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)14336))) : (max((var_10), (((/* implicit */long long int) arr_7 [i_0 - 1] [i_0 - 1] [i_2] [(unsigned char)8]))))));
                            var_35 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)-30758)) ? (((/* implicit */int) (short)32758)) : (((/* implicit */int) (unsigned char)224))));
                            arr_30 [i_0] [i_0] [i_2] [(signed char)6] [i_9 + 1] = ((/* implicit */long long int) min((var_15), (((signed char) ((((/* implicit */int) var_0)) << (((((((/* implicit */int) var_15)) + (98))) - (13))))))));
                        }
                    } 
                } 
            }
            var_36 ^= ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (((long long int) ((((/* implicit */_Bool) (unsigned char)79)) && (((/* implicit */_Bool) (unsigned char)134))))));
        }
        for (signed char i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            arr_33 [i_10] [i_10] [i_0] = ((/* implicit */signed char) (short)1008);
            var_37 ^= ((/* implicit */long long int) ((signed char) var_18));
            arr_34 [i_10] = ((/* implicit */long long int) ((((((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0 + 1] [i_10])) | (((/* implicit */int) arr_10 [i_10] [i_10] [i_0 - 1] [i_0 - 1] [i_10])))) == (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (short)17087))))));
        }
        for (signed char i_11 = 3; i_11 < 10; i_11 += 2) 
        {
            var_38 -= ((/* implicit */long long int) (short)-2009);
            var_39 = ((/* implicit */unsigned char) var_0);
            arr_38 [i_11] = ((/* implicit */signed char) ((((9205357638345293824LL) + (((var_2) % (((/* implicit */long long int) ((/* implicit */int) (short)32761))))))) % (((((/* implicit */long long int) ((/* implicit */int) max(((short)1561), ((short)30122))))) + (((((/* implicit */_Bool) (unsigned char)152)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (1073741760LL)))))));
        }
        var_40 = ((((/* implicit */_Bool) (short)17101)) ? (((/* implicit */long long int) ((/* implicit */int) min((((signed char) (signed char)39)), ((signed char)(-127 - 1)))))) : (((((/* implicit */_Bool) (unsigned char)34)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))));
        var_41 = ((/* implicit */unsigned char) ((6360362909257678724LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-57)))));
        arr_39 [i_0 - 1] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_18))) << (((arr_32 [i_0 - 1] [(short)8]) + (38876050786647644LL))))) << (((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)-32746)) ? (((/* implicit */int) arr_36 [i_0 + 1] [i_0] [(unsigned char)4])) : (((/* implicit */int) (unsigned char)240)))))) - (131)))));
    }
    var_42 -= max((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)104))))) ? (var_8) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)31))))))), (var_18));
}
