/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109046
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
    var_17 = (short)1319;
    var_18 = ((/* implicit */short) (+(((/* implicit */int) var_6))));
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_7), (max(((short)28387), ((short)25154)))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((((/* implicit */int) var_10)) >= (((/* implicit */int) var_9)))))))));
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
    /* LoopSeq 3 */
    for (short i_0 = 4; i_0 < 19; i_0 += 2) 
    {
        var_21 = ((/* implicit */short) max((var_21), (var_14)));
        arr_2 [i_0] = ((/* implicit */short) ((((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_1 [i_0 - 3])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_3))))) : (((((/* implicit */_Bool) arr_1 [i_0 - 4])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-8)))))) == (((/* implicit */int) ((((/* implicit */int) min((var_9), ((short)(-32767 - 1))))) < (((/* implicit */int) var_1)))))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            arr_8 [i_1] [i_1] [i_2] = ((/* implicit */short) ((((((/* implicit */int) min((var_14), ((short)-25182)))) + (((/* implicit */int) min((arr_5 [i_1]), (arr_0 [i_1])))))) == (((/* implicit */int) var_10))));
            arr_9 [(short)10] [i_2] &= ((/* implicit */short) max((((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) + (((/* implicit */int) var_15)))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_12)) : ((~(((/* implicit */int) var_8))))))));
        }
        var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)15796))))) ? ((~(((/* implicit */int) arr_5 [i_1])))) : (min((((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_10))))), (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (short)-25165)) : (((/* implicit */int) arr_5 [i_1]))))))));
        /* LoopNest 3 */
        for (short i_3 = 4; i_3 < 10; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (short i_5 = 3; i_5 < 10; i_5 += 3) 
                {
                    {
                        var_23 = (short)-10706;
                        var_24 *= min((max((min((var_7), (arr_12 [i_3] [i_3] [i_3]))), (((/* implicit */short) (!(((/* implicit */_Bool) var_0))))))), (var_1));
                        arr_16 [i_5 - 3] [i_1] [i_4] [i_1] [i_1] = ((short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) (short)32760)))) : (((/* implicit */int) arr_11 [i_3] [i_3] [i_3 + 1]))));
                        var_25 -= ((/* implicit */short) min(((+(((/* implicit */int) arr_6 [i_4] [i_4])))), ((+(((/* implicit */int) var_9))))));
                        arr_17 [i_1] [i_1] = ((short) ((short) arr_15 [i_3 - 4] [i_3] [i_3 - 4] [i_5] [i_1] [i_3]));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (short i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            arr_20 [i_6] [i_1] = ((/* implicit */short) (~(((/* implicit */int) var_6))));
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((/* implicit */int) (short)10602)) : (((((/* implicit */_Bool) arr_15 [i_6] [i_6] [(short)7] [i_6] [i_1] [i_1])) ? (((/* implicit */int) arr_15 [i_1] [(short)4] [i_1] [i_1] [i_1] [i_6])) : (((/* implicit */int) var_4))))));
            var_27 = max((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) min((var_10), (arr_5 [i_6]))))))));
        }
        for (short i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            var_28 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_0)))) ? (((((((/* implicit */int) var_13)) + (2147483647))) << (((((/* implicit */int) arr_7 [i_1])) - (27152))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_5))))))))));
            var_29 += var_5;
            var_30 = ((/* implicit */short) min((max((((/* implicit */int) min(((short)28549), ((short)5206)))), (((((/* implicit */int) arr_0 [i_1])) | (((/* implicit */int) arr_6 [i_1] [i_7])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [(short)0] [(short)0] [i_7])) ? (((/* implicit */int) (short)28549)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)28549)) : (((/* implicit */int) (short)-1941)))) : (((((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_1] [i_1])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_4 [i_1] [i_7]))))))));
        }
        for (short i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            var_31 -= ((/* implicit */short) min(((-(((/* implicit */int) var_13)))), (((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [(short)8] [i_1]))));
            arr_26 [i_1] [i_8] = ((/* implicit */short) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)19380)) : (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (short)19373)) : (((/* implicit */int) var_4))))));
            var_32 = ((/* implicit */short) (-((-(((/* implicit */int) arr_21 [i_1]))))));
            var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) ((((/* implicit */_Bool) min(((short)-15881), (min(((short)19380), ((short)-12885)))))) ? (((((/* implicit */_Bool) (short)-24181)) ? ((+(((/* implicit */int) (short)19353)))) : (((/* implicit */int) (short)-12819)))) : (((((/* implicit */_Bool) (short)112)) ? (((((/* implicit */_Bool) (short)-6024)) ? (((/* implicit */int) (short)-25165)) : (((/* implicit */int) (short)27301)))) : (((/* implicit */int) (short)-9518)))))))));
        }
        for (short i_9 = 0; i_9 < 11; i_9 += 1) 
        {
            var_34 *= ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */int) (short)-14343)) ^ (((/* implicit */int) var_11))))) ? ((~(((/* implicit */int) (short)9625)))) : (((/* implicit */int) ((short) var_8)))))));
            arr_29 [(short)2] [(short)0] |= var_5;
            var_35 = ((/* implicit */short) (-((-(((/* implicit */int) arr_28 [i_9]))))));
            arr_30 [i_1] [i_9] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)-29150)) ? (((/* implicit */int) (short)-19381)) : (((/* implicit */int) (short)-27302))))))) ? (((((/* implicit */int) arr_23 [i_1])) % (((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_9])))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */_Bool) arr_0 [i_9])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_10))))));
        }
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 12; i_10 += 1) 
    {
        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-9626))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (short)16123)) : (((/* implicit */int) var_15)))))));
        arr_33 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_10])) & (((/* implicit */int) arr_0 [i_10]))));
        arr_34 [i_10] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-9960)) ? (((((/* implicit */_Bool) arr_32 [i_10])) ? (((/* implicit */int) (short)-21175)) : (((/* implicit */int) var_16)))) : ((~(((/* implicit */int) (short)13983))))));
        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (short)16170)) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-19381))))));
    }
}
