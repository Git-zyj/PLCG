/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189066
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
    var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */int) (_Bool)1))))))))));
    var_12 = ((/* implicit */unsigned short) var_1);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)181))))) - (max((((/* implicit */unsigned long long int) (_Bool)1)), (500424057406306677ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) > (16596391398573437494ULL)))) * (((/* implicit */int) arr_3 [i_0])))))));
        var_13 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 + 1] [i_0])) % ((-2147483647 - 1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [(unsigned short)15] [(unsigned short)15])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((((/* implicit */_Bool) (unsigned short)50766)) ? (-15LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)121)) != (((/* implicit */int) arr_3 [(unsigned short)6]))))) : (0)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 = ((/* implicit */signed char) ((arr_1 [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) (signed char)-97)) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1]))));
            /* LoopSeq 1 */
            for (int i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((arr_6 [i_0] [i_0]) - (5068116419181444332ULL))))))));
                arr_10 [i_0 + 1] [i_1] [i_0] [i_0 + 1] = ((/* implicit */int) arr_7 [i_0 + 1] [i_0]);
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((711526951) / (((/* implicit */int) arr_3 [i_0]))))) < (((arr_2 [i_0]) & (16425446026873029071ULL)))));
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (_Bool)1))));
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) min((var_18), (((((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (arr_5 [i_1]))) > (((/* implicit */int) (short)63))))));
                            arr_15 [i_0] [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [i_4])) % (((/* implicit */int) arr_0 [i_1]))));
                            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((unsigned short) arr_8 [i_0] [i_0 + 1] [i_2 - 2] [i_2 - 2])))));
                        }
                    } 
                } 
            }
            var_20 = ((/* implicit */int) max((var_20), ((((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])))) ^ (arr_9 [2ULL] [i_0 + 1])))));
        }
    }
    for (long long int i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
            {
                {
                    arr_24 [i_5] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) (unsigned short)14769);
                    var_21 = ((/* implicit */long long int) ((-270483765) < (((/* implicit */int) (signed char)-15))));
                    var_22 *= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_13 [i_5] [i_6 + 1])) % (((/* implicit */int) arr_13 [i_5] [i_6 + 1])))));
                }
            } 
        } 
        arr_25 [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)4)))))));
        var_23 = ((/* implicit */int) min((var_23), (max((((((/* implicit */int) (unsigned short)1)) - (((/* implicit */int) (short)-28461)))), (((((/* implicit */_Bool) arr_23 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_14 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5]))))))));
    }
    for (long long int i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            arr_30 [i_9] = ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)176))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_14 [i_8] [i_9] [i_9] [i_9] [i_8] [i_8] [i_9])), (arr_26 [i_8]))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                for (unsigned char i_11 = 2; i_11 < 21; i_11 += 4) 
                {
                    {
                        var_24 = max((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) -1781197827)))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_22 [i_10] [i_11 - 2]))))));
                        arr_36 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) (short)1050))) < (min((0), (((/* implicit */int) (unsigned char)120))))));
                        arr_37 [i_9] [i_9] [i_8] [i_10] = ((/* implicit */unsigned long long int) ((_Bool) 1632306088019652136ULL));
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((int) arr_18 [i_11])))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (short)-28471))))))) < (((unsigned long long int) (signed char)73))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned short i_13 = 0; i_13 < 24; i_13 += 2) 
                {
                    for (unsigned short i_14 = 1; i_14 < 22; i_14 += 4) 
                    {
                        {
                            var_27 = ((unsigned short) (+(((/* implicit */int) (unsigned short)22881))));
                            arr_46 [i_12] = ((/* implicit */signed char) (((-((+(16596391398573437494ULL))))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_42 [i_14 + 1] [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 + 2] [i_14 + 1])) - (((/* implicit */int) arr_42 [i_14 - 1] [i_14 + 2] [i_14 - 1] [i_14 + 1] [i_14 + 1] [i_14 + 1])))))));
                            var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_34 [i_14] [i_14 + 1] [i_14 + 2] [i_14 + 2] [i_14]) ^ (arr_34 [i_14] [i_14 + 1] [i_14 + 2] [i_14 + 1] [i_14])))) && (((/* implicit */_Bool) ((short) arr_22 [i_9] [i_9])))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            arr_50 [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)26668)) << (((((((/* implicit */int) (short)-28471)) + (28489))) - (10)))))) % (16814437985689899479ULL)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)-8744)))))));
            var_29 = (short)28471;
            arr_51 [i_8] = ((/* implicit */unsigned char) min(((+(((((/* implicit */int) (signed char)15)) >> (((arr_9 [i_8] [i_8]) - (1675092184))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)8738)) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) (short)28461))))))))));
        }
    }
    for (long long int i_16 = 0; i_16 < 24; i_16 += 2) /* same iter space */
    {
        arr_55 [i_16] [i_16] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_26 [i_16]) % (((/* implicit */long long int) arr_41 [i_16] [i_16] [i_16] [i_16])))))));
        var_30 = ((/* implicit */int) (short)8744);
        /* LoopSeq 1 */
        for (int i_17 = 1; i_17 < 22; i_17 += 4) 
        {
            /* LoopNest 2 */
            for (short i_18 = 0; i_18 < 24; i_18 += 2) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 3) 
                {
                    {
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((arr_32 [i_16] [i_17 + 1] [i_17 - 1] [i_17 + 2]) ^ (arr_32 [i_16] [i_17 + 2] [i_17 - 1] [i_17 + 2])))), (max((min((((/* implicit */unsigned long long int) arr_42 [i_16] [i_16] [i_17] [i_17 - 1] [i_18] [i_19])), (12454397366183570806ULL))), (((/* implicit */unsigned long long int) arr_23 [i_17] [i_17] [i_17] [i_17 + 1])))))))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_54 [i_19])) % (((/* implicit */int) (signed char)-11)))))))) ^ (((((/* implicit */int) arr_35 [i_16] [i_17 + 1] [i_17 + 2])) + (((/* implicit */int) arr_13 [i_17] [i_17]))))));
                        var_33 = ((/* implicit */int) min((var_33), (min(((+(((/* implicit */int) (unsigned short)10015)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) -268105911)), (arr_26 [i_16])))) >= (((unsigned long long int) arr_28 [i_16] [i_16] [i_16])))))))));
                        /* LoopSeq 2 */
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_17] [i_17]))) % ((-(arr_31 [i_18] [i_19] [i_20])))));
                            arr_66 [i_17] [(_Bool)1] [(_Bool)1] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max(((unsigned char)244), (((/* implicit */unsigned char) (_Bool)1)))))));
                        }
                        for (int i_21 = 0; i_21 < 24; i_21 += 2) 
                        {
                            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_67 [i_16] [i_16] [i_17 + 2] [i_17 + 2] [i_17 + 2]))) + (((/* implicit */int) ((((/* implicit */int) (unsigned short)39805)) >= (((/* implicit */int) (unsigned short)17062))))))))));
                            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (short)8738)) >= (((/* implicit */int) (unsigned short)34378)))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)8744)) ? (((/* implicit */int) arr_63 [i_16] [i_21] [i_21])) : (((/* implicit */int) (signed char)15)))) < (((/* implicit */int) arr_21 [i_21]))))) : (((((((/* implicit */int) (unsigned short)37249)) > (((/* implicit */int) arr_52 [i_18])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)-28455)), ((unsigned short)57770)))) : (((/* implicit */int) arr_49 [i_17 - 1] [i_17 - 1] [i_17 - 1])))))))));
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-76)) - (((/* implicit */int) (_Bool)0)))))))) < (((((/* implicit */_Bool) min((597717758), (((/* implicit */int) (unsigned short)25730))))) ? (((/* implicit */int) (unsigned short)25730)) : ((-(((/* implicit */int) (signed char)(-127 - 1)))))))));
                        }
                    }
                } 
            } 
            arr_69 [i_16] [i_17] [i_16] = ((/* implicit */short) ((((((/* implicit */int) arr_39 [i_17 - 1] [i_17 + 2])) << (((((/* implicit */int) arr_39 [i_17 + 2] [i_17 + 1])) - (129))))) > (((/* implicit */int) ((_Bool) arr_9 [i_17] [i_17])))));
            var_38 = arr_63 [i_16] [i_17] [i_17];
            arr_70 [i_17] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)30768)), (7114810048800347032ULL)))) && (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)136)) / (((/* implicit */int) (unsigned short)25730)))))));
            var_39 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_44 [i_16] [i_17 - 1] [i_17 + 2] [i_17 - 1] [i_17]) + (2147483647))) >> (((arr_44 [i_16] [i_17 - 1] [i_17 + 1] [i_17 - 1] [i_17]) + (1581356816)))))) ? ((-(arr_44 [i_16] [i_17 + 2] [i_17 + 2] [i_17 + 1] [i_17 + 1]))) : (((/* implicit */int) ((short) 15447848943015535592ULL)))));
        }
        /* LoopNest 2 */
        for (unsigned char i_22 = 0; i_22 < 24; i_22 += 2) 
        {
            for (unsigned short i_23 = 1; i_23 < 23; i_23 += 2) 
            {
                {
                    arr_75 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) ((arr_48 [i_22]) != (((/* implicit */unsigned long long int) 0))))), (((unsigned char) arr_12 [i_16] [i_16] [(signed char)6] [i_16])))))) > ((-((-(arr_18 [i_16])))))));
                    arr_76 [i_16] [i_16] = ((/* implicit */short) max((max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)45846)) << (((((/* implicit */int) (unsigned char)244)) - (237)))))), (min((-4860807185105132628LL), (((/* implicit */long long int) (unsigned char)245)))))), (4860807185105132628LL)));
                    var_40 = ((/* implicit */int) ((arr_57 [i_16] [i_23 - 1]) - (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_16])) ? (((/* implicit */int) (unsigned short)53247)) : (((/* implicit */int) (unsigned short)49152)))) << (((((/* implicit */int) ((short) (signed char)-76))) + (87))))))));
                    var_41 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */short) ((arr_41 [i_16] [(_Bool)1] [i_22] [i_23 + 1]) >= (((/* implicit */int) (_Bool)1))))), (max(((short)-24202), (((/* implicit */short) arr_42 [i_16] [i_16] [i_22] [i_16] [i_23 + 1] [i_23])))))))));
                }
            } 
        } 
        var_42 ^= ((/* implicit */unsigned short) (((-(arr_40 [i_16] [i_16] [i_16]))) >= (max((arr_40 [i_16] [i_16] [i_16]), (((/* implicit */int) (unsigned short)25730))))));
    }
}
