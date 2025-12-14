/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122268
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
    var_16 = ((((/* implicit */_Bool) 10800500451069496801ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)93))) : (((((unsigned int) var_12)) % (var_8))));
    var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (567278227U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32766)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) (short)32747)))))) : (((unsigned int) 567278227U))))) ? (2448428357U) : (((/* implicit */unsigned int) (~((+(((/* implicit */int) (unsigned char)163)))))))));
    var_18 = ((/* implicit */long long int) max((((unsigned int) ((_Bool) var_7))), (((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)151))) : (var_11)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 4; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */long long int) ((((/* implicit */_Bool) -7913332162302825612LL)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)165))))) & (-2740585402245820124LL))) / (((/* implicit */long long int) 3727689074U))));
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) /* same iter space */
        {
            arr_9 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) -1652026909))) * (((/* implicit */int) (_Bool)0))));
            arr_10 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)7)) ? (((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)15), (((/* implicit */unsigned short) (unsigned char)109))))) && ((_Bool)1)))) : (((((/* implicit */int) ((unsigned char) arr_4 [i_2]))) * (((/* implicit */int) arr_5 [i_2]))))));
        }
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) /* same iter space */
        {
            var_19 = ((((/* implicit */_Bool) max(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)93))))) ? (((unsigned int) max((arr_11 [9] [9] [i_3]), (((/* implicit */unsigned short) (unsigned char)154))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29651))));
            var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)124))));
            var_21 = ((/* implicit */unsigned int) ((int) (!(arr_7 [i_1] [i_3]))));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                arr_15 [i_1] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max((((/* implicit */short) arr_1 [i_1] [i_1])), ((short)3716)))))) % (min((((/* implicit */long long int) ((arr_4 [i_4]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)150)))))), ((+(-7913332162302825612LL)))))));
                var_22 = ((/* implicit */short) ((var_8) <= (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_3] [i_4])) * (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_1])) == (((/* implicit */int) (unsigned char)115))))))))));
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((((/* implicit */int) arr_0 [i_1])), ((~(((/* implicit */int) arr_0 [i_1])))))))));
                /* LoopSeq 3 */
                for (short i_5 = 1; i_5 < 10; i_5 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */long long int) ((unsigned short) ((((((/* implicit */int) arr_11 [i_5] [i_4] [i_1])) * (((/* implicit */int) (unsigned char)150)))) > (arr_19 [i_5] [i_1] [i_3] [i_1] [i_1]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        arr_24 [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) (-(((/* implicit */int) (short)-32766)))))) ? (((/* implicit */int) ((short) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)68))))) : (((/* implicit */int) arr_0 [i_4]))));
                        var_25 = ((/* implicit */unsigned short) min(((+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (var_8))))), (((/* implicit */unsigned int) arr_23 [i_4] [i_5 + 1] [i_6]))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 2) 
                    {
                        var_26 *= ((/* implicit */unsigned int) arr_11 [i_7] [(signed char)5] [i_1]);
                        arr_28 [i_1] [i_5] [i_1] [i_5] [i_7] = ((/* implicit */unsigned short) ((((unsigned long long int) min((var_0), (((/* implicit */int) (short)-31357))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1])))));
                        var_27 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)50277)) ? (((((/* implicit */_Bool) arr_22 [i_5] [i_5 + 1] [(unsigned char)9] [i_5])) ? (arr_21 [i_5] [i_5 + 3] [i_5 - 1] [i_5] [i_5 + 3] [i_4] [i_4]) : (((/* implicit */unsigned long long int) arr_25 [i_7] [i_5 + 4] [i_5 - 1] [i_5 + 3] [i_5 + 4] [i_4] [i_3])))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_26 [i_1] [i_3] [i_4] [i_1] [i_7])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))) << (((((/* implicit */int) arr_22 [i_5 - 1] [i_5 - 1] [i_5 + 3] [i_5 + 3])) - (21378))))))));
                    }
                    var_28 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_1] [i_4] [i_4] [i_3] [i_3])) ? (((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_17 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_4])))))) ? (((/* implicit */int) max(((short)10205), (((/* implicit */short) (unsigned char)22))))) : (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_8 [i_1] [4U]))))))));
                    arr_29 [i_1] [i_1] [i_3] [i_3] [8LL] [i_5] = ((/* implicit */signed char) 1023);
                    var_29 = ((((/* implicit */_Bool) (~(8739286950935951906LL)))) ? (((unsigned int) max((arr_18 [i_1] [i_1]), ((unsigned char)246)))) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) -8739286950935951888LL)) ? (((/* implicit */int) (short)2)) : (((/* implicit */int) arr_1 [i_1] [i_1])))), (((/* implicit */int) (unsigned char)137))))));
                }
                for (short i_8 = 1; i_8 < 10; i_8 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
                    {
                        arr_34 [i_1] [i_3] [i_8] [i_8 + 3] [i_9] = (unsigned char)158;
                        var_30 = ((/* implicit */unsigned char) arr_32 [i_1] [i_1] [i_1] [i_1] [i_1]);
                        arr_35 [i_1] [i_8] [i_8] [i_8 + 4] [i_8 + 4] [i_8] = ((/* implicit */long long int) arr_12 [i_8 + 4]);
                    }
                    for (unsigned char i_10 = 0; i_10 < 14; i_10 += 1) /* same iter space */
                    {
                        var_31 += ((/* implicit */short) arr_33 [i_4] [i_4]);
                        var_32 = ((/* implicit */_Bool) var_3);
                        arr_39 [i_1] [i_1] [i_4] [i_8] [i_8] [i_3] [i_8 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) (short)15)) >= (((/* implicit */int) arr_23 [i_1] [i_4] [i_4])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) % (((/* implicit */int) arr_1 [i_8] [i_1]))))) ? (((((/* implicit */int) (unsigned char)11)) * (((/* implicit */int) (short)7)))) : (((((/* implicit */int) arr_6 [i_3] [i_10])) / (((/* implicit */int) (unsigned char)224)))))) : (((((((/* implicit */_Bool) (short)15)) ? (((/* implicit */int) arr_37 [i_1] [(unsigned char)7])) : (((/* implicit */int) (unsigned char)75)))) / (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26163))) <= (arr_14 [i_3] [i_3] [i_4]))))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 14; i_11 += 1) /* same iter space */
                    {
                        var_33 |= ((/* implicit */_Bool) ((unsigned short) (unsigned char)164));
                        arr_42 [i_1] [i_3] [i_3] [i_8] [i_8] [i_11] = ((/* implicit */unsigned int) (_Bool)1);
                        var_34 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)-19930)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (unsigned char)0))))))) / (min((((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_1] [i_8 + 3])) << (((((/* implicit */int) (unsigned char)158)) - (154)))))), (((long long int) arr_1 [i_3] [i_8 - 1]))))));
                        arr_43 [i_8] [i_8] [i_4] [i_3] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_31 [i_8] [i_8 + 1])) & (((/* implicit */int) arr_31 [i_8] [i_8 + 2])))) > (((/* implicit */int) ((short) arr_31 [i_8] [i_8 + 3])))));
                    }
                    var_35 |= ((/* implicit */unsigned long long int) (((~(arr_21 [i_4] [i_8 - 1] [i_8 - 1] [i_8 + 1] [i_3] [i_1] [i_3]))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)2)) * (((/* implicit */int) arr_20 [i_1]))))) ? (((/* implicit */int) arr_31 [i_4] [i_4])) : (arr_26 [i_1] [i_3] [i_3] [i_1] [i_8]))))));
                    /* LoopSeq 3 */
                    for (short i_12 = 2; i_12 < 13; i_12 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned short) min((((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_25 [i_1] [i_3] [i_4] [i_1] [i_12] [i_1] [i_12 + 1])) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) arr_1 [i_12] [i_1])))))), ((short)21)));
                        var_37 *= (-(((/* implicit */int) ((((/* implicit */int) (unsigned char)93)) >= (((/* implicit */int) (unsigned char)151))))));
                        arr_46 [i_1] [i_8] [i_3] [i_4] [i_3] [i_12] [i_12] = ((/* implicit */long long int) var_13);
                    }
                    for (short i_13 = 0; i_13 < 14; i_13 += 3) 
                    {
                        var_38 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_16 [i_3] [(unsigned char)11] [i_13]) ? ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15))) : (arr_32 [i_1] [i_3] [i_1] [i_8] [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-21)))))) ? (((/* implicit */int) var_9)) : (var_2)));
                        arr_50 [i_1] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_1] [(unsigned char)6])) | ((-(((/* implicit */int) arr_1 [i_13] [i_4]))))))) ? (((((/* implicit */int) arr_40 [i_8] [i_8] [i_8])) % (((/* implicit */int) arr_23 [i_8 + 1] [i_8] [i_4])))) : (((((/* implicit */_Bool) ((unsigned char) arr_6 [i_1] [i_3]))) ? (((/* implicit */int) (unsigned char)4)) : (((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (unsigned short)18140)) : (((/* implicit */int) (unsigned char)21))))))));
                        arr_51 [i_13] [i_8] [i_4] [i_3] [i_8] [i_1] = (unsigned char)140;
                        arr_52 [i_8] [i_3] = ((/* implicit */int) arr_33 [i_8 - 1] [i_3]);
                    }
                    for (int i_14 = 3; i_14 < 11; i_14 += 2) 
                    {
                        arr_55 [i_3] [i_8] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)151))) > (((unsigned long long int) (short)-18))));
                        var_39 = ((_Bool) var_8);
                    }
                    var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-513))))) ? (((arr_53 [i_8 + 1] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8 + 4]) % (((/* implicit */unsigned long long int) arr_25 [i_8] [i_8] [i_8 + 3] [i_8] [i_8] [i_8 + 4] [i_8 + 4])))) : (((/* implicit */unsigned long long int) arr_25 [i_8 - 1] [i_8 + 3] [i_8] [i_8] [i_8 + 3] [i_8 + 1] [i_8 + 4]))));
                }
                for (short i_15 = 1; i_15 < 10; i_15 += 3) /* same iter space */
                {
                    var_41 ^= ((/* implicit */short) ((unsigned char) -1));
                    var_42 = ((/* implicit */unsigned long long int) arr_49 [i_1] [i_1] [i_4] [i_15 + 3] [i_1]);
                }
            }
            for (unsigned char i_16 = 4; i_16 < 12; i_16 += 4) 
            {
                var_43 = ((/* implicit */int) max((var_43), (((/* implicit */int) ((unsigned long long int) (((_Bool)1) ? (8191) : (((/* implicit */int) (unsigned char)100))))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 1) 
                {
                    var_44 ^= ((/* implicit */unsigned int) (unsigned short)22295);
                    var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_13 [i_16 - 3] [i_16 + 1] [(_Bool)1]), (((/* implicit */unsigned short) arr_61 [i_16 + 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) arr_33 [i_16] [i_17])) : (((/* implicit */int) (unsigned char)100))))))) : (arr_38 [i_17]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_18 = 2; i_18 < 13; i_18 += 2) 
                    {
                        arr_70 [i_16] = ((/* implicit */unsigned short) arr_12 [i_1]);
                        arr_71 [i_1] [i_3] [i_16] [i_17] [i_18] = ((/* implicit */_Bool) arr_0 [i_17]);
                        var_46 = ((/* implicit */long long int) arr_49 [i_18] [i_17] [i_16] [i_3] [i_1]);
                    }
                }
                for (unsigned int i_19 = 0; i_19 < 14; i_19 += 3) 
                {
                    arr_74 [i_1] [i_3] [i_3] [i_16 - 2] [i_19] [i_19] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) var_13)) == (((/* implicit */int) min((arr_13 [i_3] [i_16] [i_19]), (arr_11 [i_16] [i_3] [i_16])))))));
                    var_47 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)43))) > (arr_53 [i_1] [i_3] [i_19] [i_16 + 1] [i_19] [i_19] [i_19])))) * (((/* implicit */int) ((((/* implicit */long long int) arr_26 [i_1] [i_1] [i_1] [i_1] [i_1])) >= (arr_54 [i_3] [i_3] [i_3] [i_1] [i_1]))))));
                    arr_75 [i_19] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-6))))) ? (max((1257329351), (((/* implicit */int) (short)10)))) : (((/* implicit */int) (unsigned char)142))));
                }
                var_48 = ((/* implicit */short) arr_17 [i_16]);
            }
            arr_76 [i_1] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_6))))))) : (min((((/* implicit */unsigned long long int) (short)-12)), (245892461276958020ULL)))));
        }
        var_49 |= ((/* implicit */int) max((((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_1]))) / (arr_30 [i_1] [i_1]))), (((/* implicit */long long int) (short)-513))));
    }
    for (unsigned char i_20 = 0; i_20 < 20; i_20 += 1) 
    {
        arr_79 [i_20] &= ((/* implicit */unsigned short) (+(arr_77 [i_20] [i_20])));
        var_50 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)11)) % (((/* implicit */int) arr_78 [i_20] [i_20])))) << (((((/* implicit */int) arr_78 [i_20] [i_20])) - (6673)))));
    }
}
