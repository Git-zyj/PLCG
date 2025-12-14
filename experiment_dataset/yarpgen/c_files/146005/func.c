/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146005
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
    var_10 += ((/* implicit */long long int) (~((~(((/* implicit */int) (signed char)43))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
        {
            arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((2U), (((/* implicit */unsigned int) (signed char)-64))))) | (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_1 [(signed char)16])) | (arr_2 [i_1] [i_0 + 3])))) ? (((((/* implicit */long long int) var_2)) & (-8943916342764010938LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 7372671408403368643LL))))))));
            arr_5 [i_0] [i_0] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) -4251432122957136194LL))) ? ((-(arr_1 [(unsigned char)18]))) : (((/* implicit */int) (short)-11766))))) ? (((5952074422644549955ULL) | (((/* implicit */unsigned long long int) arr_3 [i_1])))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))));
            arr_6 [i_0] [(unsigned char)17] = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)5606)) ? (((/* implicit */int) ((signed char) 16734470307114434496ULL))) : (((/* implicit */int) min((arr_0 [i_0 + 2]), ((short)5606))))))));
        }
        for (int i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
        {
            var_11 ^= ((/* implicit */unsigned int) min(((~(((((/* implicit */int) (short)-13099)) / (-549046065))))), (max(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_0 [i_0 + 2]))))));
            var_12 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_9 [i_0])))))) <= ((((!(((/* implicit */_Bool) -3355843175903330892LL)))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)43)) || (((/* implicit */_Bool) (unsigned short)53426))))))))));
            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_0 [i_0 + 3])))), ((+(((/* implicit */int) var_7))))));
        }
        for (int i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
        {
            var_13 = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_0] [i_3])) ? (((/* implicit */int) (short)11765)) : (((/* implicit */int) arr_11 [i_0]))))))) ? ((+(((/* implicit */int) (unsigned char)49)))) : (((/* implicit */int) ((((((/* implicit */int) (short)13096)) <= (arr_1 [i_3]))) && (((((/* implicit */_Bool) 1580883080U)) && (((/* implicit */_Bool) -1767468991))))))));
            var_14 = ((/* implicit */short) 5726845126295885969ULL);
            arr_14 [i_0] [i_3] [i_3] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) && (((/* implicit */_Bool) arr_1 [i_0 - 1])))))) : (((((/* implicit */_Bool) 665239460U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-53))) : (2U)))));
            arr_15 [i_0] = ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) ((unsigned char) (signed char)-19))), (((((/* implicit */long long int) ((/* implicit */int) var_1))) % (812678139574384269LL)))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            arr_20 [(short)4] = ((/* implicit */unsigned short) 2147483647);
            /* LoopSeq 2 */
            for (int i_5 = 0; i_5 < 19; i_5 += 2) 
            {
                arr_25 [i_0 + 1] [i_0 + 1] [i_4] [14U] = ((/* implicit */short) arr_3 [i_4]);
                var_15 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_0 - 1] [i_0 - 1] [i_0 + 1])) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) -1058189663))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((_Bool) var_5)))));
            }
            /* vectorizable */
            for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_9))));
                var_17 = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (13927950805783540677ULL)))));
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_6])) ? (8607598951251081049LL) : (((/* implicit */long long int) arr_7 [i_6]))))) ? (((/* implicit */unsigned long long int) -3)) : (arr_18 [i_0 + 1] [i_0 + 1]))))));
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 19; i_7 += 2) 
                {
                    arr_33 [i_4] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)95))));
                    var_19 = ((/* implicit */_Bool) ((short) var_3));
                    arr_34 [i_0] [i_4] [i_6] [6U] = ((/* implicit */unsigned short) (~(arr_16 [i_0] [i_4] [i_0 + 2])));
                    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-8347))));
                }
                /* LoopSeq 1 */
                for (int i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    arr_37 [i_0] [i_4] [0ULL] [i_8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))));
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) 
                    {
                        arr_40 [i_9] [11] [i_6] [i_4] [(signed char)2] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)11763)) - (((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) var_9))))));
                        var_21 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_9 [i_0])) ^ (14565794116622082689ULL))) ^ (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_22 = ((/* implicit */unsigned short) (((+(3670016ULL))) != (((/* implicit */unsigned long long int) ((int) arr_32 [i_0] [i_0] [i_4] [i_4] [i_8] [i_9])))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_29 [i_6])) - (arr_3 [(signed char)14])));
                    }
                }
            }
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_10 = 0; i_10 < 19; i_10 += 4) 
        {
            var_24 = ((/* implicit */unsigned char) (+((~(arr_19 [i_10])))));
            /* LoopSeq 1 */
            for (unsigned short i_11 = 0; i_11 < 19; i_11 += 1) 
            {
                arr_48 [i_0] [i_10] [i_0] [9U] = ((/* implicit */unsigned long long int) 2);
                /* LoopSeq 3 */
                for (unsigned int i_12 = 0; i_12 < 19; i_12 += 4) 
                {
                    var_25 += ((/* implicit */unsigned long long int) var_0);
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)92)) ? (12719898947413665643ULL) : (((/* implicit */unsigned long long int) 2)))))));
                    var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)63))))) ? (((/* implicit */int) arr_39 [i_0] [i_10] [i_11] [i_11] [17] [(unsigned char)18] [i_0 - 1])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)218))))));
                }
                for (unsigned short i_13 = 0; i_13 < 19; i_13 += 1) 
                {
                    var_28 += ((/* implicit */unsigned int) (unsigned short)0);
                    arr_55 [i_10] [i_11] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_54 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 2]))));
                }
                for (int i_14 = 0; i_14 < 19; i_14 += 4) 
                {
                    var_29 = ((/* implicit */short) arr_7 [i_0]);
                    var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_11])) ? (((/* implicit */int) arr_28 [2] [i_11] [i_10] [i_0 - 1])) : (((/* implicit */int) var_3)))))));
                    var_31 = ((/* implicit */unsigned char) (short)25173);
                }
                var_32 = ((/* implicit */unsigned short) ((arr_1 [i_0]) / (((arr_46 [i_10]) / (((/* implicit */int) (short)-11765))))));
                arr_58 [(unsigned short)9] [i_10] [i_0 + 3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 1510962951645805660ULL)) && (((/* implicit */_Bool) (unsigned char)37)))))));
            }
        }
        var_33 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_0 + 2] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50292))) < (3106697626U))))) : (((((/* implicit */_Bool) 6ULL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0])))))))), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1188269670U))))), ((+(15861429343885762033ULL))))));
    }
}
