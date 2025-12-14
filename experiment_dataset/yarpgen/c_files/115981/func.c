/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115981
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
    var_19 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (+(var_11)))) || (((/* implicit */_Bool) ((unsigned char) 8233908365480355533LL))))));
    var_20 = ((/* implicit */unsigned char) var_0);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_1 [i_0 - 1])))), (((((/* implicit */_Bool) (short)20060)) ? (max((var_8), (((/* implicit */int) arr_1 [(signed char)6])))) : (((((/* implicit */int) var_3)) / (var_8))))))))));
        var_22 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) (signed char)122)) < (((/* implicit */int) arr_1 [i_0 - 2])))))));
        arr_2 [i_0] = ((/* implicit */_Bool) (unsigned short)60246);
    }
    for (unsigned int i_1 = 3; i_1 < 12; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_9 [i_3] [i_2] [i_1] = ((/* implicit */unsigned int) ((((((int) var_11)) + (2147483647))) >> (((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_5 [i_2] [i_2])) : (((/* implicit */int) arr_5 [i_1 - 3] [i_3])))) - (119)))));
                    arr_10 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) (unsigned char)68)))))) ? (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_6 [i_1 - 1] [i_2] [i_3]))))), ((signed char)104)))) : ((+(-1069206419)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                {
                    arr_16 [i_5] [i_4] [i_1] [i_1] = ((/* implicit */short) var_18);
                    /* LoopSeq 2 */
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        var_23 = ((9863426647225392394ULL) & ((+(arr_0 [i_1 - 3]))));
                        arr_20 [i_1] [(unsigned char)12] [i_1] [i_6] [3LL] = ((/* implicit */signed char) (+(min((-1154724688), (((/* implicit */int) (_Bool)1))))));
                        arr_21 [(signed char)1] [11ULL] [i_5] [i_6] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)87)))) ? (arr_11 [i_5]) : (min((min((((/* implicit */unsigned long long int) var_2)), (5696044106824542979ULL))), (((/* implicit */unsigned long long int) 573009059))))));
                    }
                    for (signed char i_7 = 0; i_7 < 13; i_7 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) -4104815440691972591LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_5))))) : (var_17))), (((((/* implicit */_Bool) arr_15 [i_1] [i_1 - 1] [i_5] [i_7])) ? (((/* implicit */int) arr_15 [i_1] [i_1 + 1] [i_5] [i_7])) : (((/* implicit */int) (unsigned char)9))))));
                            arr_26 [i_7] [i_5] [12ULL] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((+(1013671646))) : (((/* implicit */int) ((short) (short)-18286))))))));
                            arr_27 [i_1] [i_1] [i_5] [i_8] [i_1] [i_5] [i_7] |= ((/* implicit */unsigned short) ((min((3094685606768533164ULL), (((/* implicit */unsigned long long int) var_3)))) ^ (((/* implicit */unsigned long long int) (+((+(-570677773))))))));
                            arr_28 [i_1 + 1] [(unsigned short)8] [i_4] [i_5] [i_7] [(unsigned short)11] [i_8] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (signed char)-114)), ((((+(var_11))) ^ (((/* implicit */unsigned int) (~(var_17))))))));
                        }
                        for (short i_9 = 2; i_9 < 10; i_9 += 4) 
                        {
                            var_25 = ((/* implicit */signed char) (+((-(((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46806))) : (var_7)))))));
                            var_26 = ((/* implicit */unsigned short) ((signed char) (((~(4073809366544186926LL))) ^ (((/* implicit */long long int) (+(((/* implicit */int) (signed char)7))))))));
                            arr_32 [i_1] [i_4] [i_5] [i_7] [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((13126067988218729757ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_19 [i_1] [i_4] [i_5] [i_9])))) : (var_16)))) & (min((((((/* implicit */_Bool) arr_11 [(unsigned short)2])) ? (10121786672017777140ULL) : (((/* implicit */unsigned long long int) -2503335054242784552LL)))), (((/* implicit */unsigned long long int) var_13))))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */int) var_2)) << (((min((13607814116401131888ULL), (((/* implicit */unsigned long long int) 4289261585U)))) - (4289261564ULL)))));
                            arr_33 [11LL] [i_4] [i_4] [i_7] [i_9] [i_7] [i_1] = ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) 1744228827986913053LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)11630))) : (9220839231551820940ULL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (int i_10 = 2; i_10 < 11; i_10 += 1) 
                        {
                            arr_36 [i_1] [i_1] = (+(((unsigned int) arr_22 [i_1] [i_1 + 1])));
                            var_28 = ((/* implicit */signed char) var_13);
                        }
                        for (unsigned short i_11 = 1; i_11 < 11; i_11 += 1) 
                        {
                            arr_40 [i_11] = ((/* implicit */signed char) min((((/* implicit */int) (signed char)-23)), ((~(((/* implicit */int) min((var_2), (arr_39 [i_1] [i_7]))))))));
                            var_29 -= ((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) (signed char)6)), (379273211357390040ULL))))), (((int) arr_3 [i_1 + 1]))));
                            arr_41 [i_1] [i_4] [i_1 + 1] [i_7] [i_11] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) -4901804055356489146LL)))) ? (((/* implicit */int) (unsigned short)8455)) : (arr_24 [i_7])))) ? (((((/* implicit */int) (signed char)127)) >> (((((((/* implicit */int) (unsigned char)18)) | (((/* implicit */int) (unsigned short)4252)))) - (4248))))) : (((/* implicit */int) (signed char)-11))));
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) (-(-7379089199356177060LL)))) && (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_29 [i_4] [i_7] [i_5] [i_4] [i_1 - 2])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_1])))))))));
                        }
                        arr_42 [i_7] [i_5] [i_4] [i_4] [i_1] [i_1] = ((/* implicit */signed char) var_17);
                        arr_43 [i_1] [i_4] [i_5] [9U] [(signed char)11] = ((/* implicit */signed char) ((long long int) min((-4434435015320831771LL), (((/* implicit */long long int) (_Bool)1)))));
                        arr_44 [i_1] [i_4] = ((/* implicit */long long int) (((+(((((/* implicit */_Bool) var_13)) ? (var_7) : (((/* implicit */unsigned long long int) -614645205683323477LL)))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_0))))) ? ((+(4995665394027120634LL))) : (((/* implicit */long long int) ((unsigned int) (unsigned char)221))))))));
                        var_31 = ((/* implicit */unsigned int) min(((~(((((/* implicit */int) (unsigned short)119)) + (((/* implicit */int) (unsigned char)160)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_5])) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) arr_1 [i_1]))))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) var_12))))));
                    }
                    arr_45 [(signed char)6] [i_4] [i_4] = ((/* implicit */long long int) var_18);
                }
            } 
        } 
    }
    for (unsigned char i_12 = 0; i_12 < 12; i_12 += 1) 
    {
        arr_49 [i_12] = ((/* implicit */unsigned char) -4625119684230610584LL);
        arr_50 [i_12] = ((/* implicit */long long int) min((((unsigned int) var_7)), (((/* implicit */unsigned int) min(((signed char)43), (min((arr_29 [i_12] [i_12] [i_12] [i_12] [i_12]), ((signed char)33))))))));
    }
    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)194)) ? (((/* implicit */int) (short)-30793)) : (((/* implicit */int) (short)7719))))))) ? (((/* implicit */int) var_15)) : (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) var_5)))) % ((+(var_17)))))));
    var_33 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_1)))) * (max((1784600846721454311ULL), (((/* implicit */unsigned long long int) min((var_12), (var_15))))))));
}
