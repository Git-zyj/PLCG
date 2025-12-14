/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104189
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) max((((/* implicit */unsigned short) ((((/* implicit */int) var_8)) > ((~(((/* implicit */int) var_7))))))), (var_2))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) (~((-(arr_5 [19LL])))));
                    var_16 *= ((/* implicit */unsigned char) ((((((/* implicit */int) ((signed char) var_8))) > (((/* implicit */int) arr_0 [i_0])))) ? (max((arr_4 [i_1] [i_1]), (arr_5 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_2 [i_0] [i_1] [16])) : (-7536777804448507625LL)))) ? (max((arr_4 [i_0] [i_1]), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-29948)))))))) > (max((((/* implicit */long long int) (short)29979)), (-7536777804448507625LL)))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-29973)) ? (7236268628404885437LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
    var_19 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_20 = ((/* implicit */int) arr_16 [i_6] [i_6] [i_5] [i_6]);
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_2 [i_3] [i_4] [(unsigned short)6])) - (arr_4 [i_4] [i_6]))))));
                        arr_20 [i_3] [i_3] [i_4] [i_5] [i_6] = ((arr_10 [i_3] [(signed char)18]) ? (((/* implicit */int) arr_10 [i_3] [7U])) : (((/* implicit */int) arr_10 [i_3] [i_3])));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (int i_7 = 0; i_7 < 19; i_7 += 3) 
        {
            var_22 *= ((/* implicit */_Bool) (-((+(((/* implicit */int) var_6))))));
            var_23 = var_13;
            /* LoopSeq 3 */
            for (signed char i_8 = 3; i_8 < 17; i_8 += 3) 
            {
                var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_15 [i_8] [i_7]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)9696))))) : ((-(var_4)))));
                arr_28 [(unsigned short)0] [i_7] [i_7] [i_3] = ((/* implicit */_Bool) (+(arr_18 [(_Bool)1] [i_8 - 3] [i_8 + 1] [i_3])));
                var_25 += ((/* implicit */short) (+(((((/* implicit */_Bool) -7536777804448507629LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10))))));
            }
            for (long long int i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
                arr_32 [i_7] = -1868137806458848237LL;
                arr_33 [i_7] [i_7] [i_9] = ((/* implicit */short) var_2);
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_38 [i_3] [i_7] [(unsigned short)5] = ((/* implicit */int) (+(var_4)));
                var_27 = (+(((/* implicit */int) arr_30 [i_3] [i_3] [i_3])));
                var_28 *= var_5;
            }
            arr_39 [6] [i_7] &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-5418)))) | (((/* implicit */int) arr_1 [i_7]))));
        }
        for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            arr_43 [i_11] [i_3] = ((/* implicit */_Bool) (~((+(18446744073709551615ULL)))));
            arr_44 [i_3] [i_11] [i_11] = ((/* implicit */_Bool) var_2);
            /* LoopSeq 4 */
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                arr_47 [i_3] [i_3] [i_11] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_41 [i_12 - 1]))));
                var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */int) arr_21 [i_3] [i_12])) <= (((/* implicit */int) arr_21 [i_12] [i_12])))))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                arr_51 [9] [i_11] [i_11] [i_3] = ((/* implicit */unsigned int) arr_15 [i_3] [(unsigned char)6]);
                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) var_12))));
            }
            for (unsigned short i_14 = 0; i_14 < 19; i_14 += 4) 
            {
                var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_3])))))));
                var_32 = ((/* implicit */unsigned int) min((var_32), (1971905528U)));
                var_33 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (short)5416))) ? (7224639393230979033ULL) : (7224639393230979033ULL)));
                arr_56 [i_3] [i_3] [4] [4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [13LL] [13LL] [i_3] [(short)2])) ? (1868137806458848233LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 12441665580056093881ULL))))));
            }
            for (signed char i_15 = 0; i_15 < 19; i_15 += 3) 
            {
                var_34 = ((/* implicit */int) ((6005078493653457729ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-127)))));
                arr_59 [(short)1] [(short)1] [i_15] &= ((/* implicit */_Bool) ((short) (-(arr_50 [i_3] [i_3] [i_3] [i_3]))));
                var_35 ^= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)49))));
            }
        }
        for (unsigned short i_16 = 0; i_16 < 19; i_16 += 1) 
        {
            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) (~(((/* implicit */int) arr_3 [i_3])))))));
            var_37 = ((/* implicit */unsigned int) var_10);
            arr_64 [i_3] [i_16] [i_3] = ((/* implicit */unsigned long long int) arr_35 [i_16] [i_16] [i_3] [i_16]);
        }
    }
    for (int i_17 = 0; i_17 < 13; i_17 += 2) 
    {
        var_38 = ((/* implicit */unsigned char) (~(((arr_41 [i_17]) + (arr_41 [i_17])))));
        var_39 -= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) var_11)))))), (((long long int) arr_13 [0U] [6U] [(_Bool)1] [i_17]))));
        var_40 = max((((/* implicit */unsigned long long int) max((arr_23 [i_17] [i_17]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 9)) || (((/* implicit */_Bool) arr_2 [i_17] [i_17] [12ULL])))))))), (((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_17] [i_17] [i_17])))))) : (((((/* implicit */_Bool) (short)-7150)) ? (6005078493653457735ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121))))))));
        var_41 |= ((/* implicit */_Bool) ((((/* implicit */unsigned int) 127)) * (2132849567U)));
        var_42 = ((/* implicit */short) max((arr_29 [i_17] [i_17] [i_17] [i_17]), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */int) arr_42 [i_17] [i_17])), (arr_13 [i_17] [i_17] [(short)11] [i_17])))), (max((var_11), (((/* implicit */long long int) arr_50 [i_17] [i_17] [i_17] [i_17])))))))));
    }
}
