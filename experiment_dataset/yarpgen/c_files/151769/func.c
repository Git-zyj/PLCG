/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151769
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (-(arr_0 [i_0] [i_0])));
        var_19 *= ((/* implicit */_Bool) (short)20981);
    }
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 1; i_2 < 19; i_2 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (+(3046563585U))))));
            /* LoopSeq 3 */
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                arr_11 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((351001975976546343ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((arr_10 [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 - 1]) / (((/* implicit */unsigned long long int) -1703884684)))) : (((((/* implicit */_Bool) (short)-860)) ? (((/* implicit */unsigned long long int) var_12)) : (arr_10 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 + 1])))));
                var_21 = ((/* implicit */short) ((((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-62)), ((unsigned short)0)))) * (((/* implicit */int) max((var_5), ((unsigned short)8708)))))) - (var_13)));
            }
            for (short i_4 = 0; i_4 < 20; i_4 += 4) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
                {
                    arr_16 [i_1] [i_4] [i_2 - 1] [i_1] = ((/* implicit */int) arr_3 [i_1]);
                    arr_17 [i_1] [i_2] [i_4] [i_1] = ((/* implicit */int) ((unsigned char) var_5));
                    var_22 &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)142)) - (((int) (unsigned char)188))));
                    arr_18 [i_1] [i_4] [i_4] [i_5] [i_2] = ((/* implicit */short) ((1248403711U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2 + 1] [i_2 - 1])))));
                }
                for (int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
                {
                    arr_21 [10] [i_2] [i_2] [i_4] [i_1] [i_1] = ((/* implicit */unsigned short) ((1248403720U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-15334)))));
                    arr_22 [i_6] [i_2] [i_4] [i_1] = ((/* implicit */_Bool) ((((arr_20 [14U] [i_4] [i_4] [i_2 + 1] [i_1] [i_1]) - (-146932349))) + (((arr_20 [i_1] [i_2] [i_4] [i_4] [i_4] [i_6]) / (((/* implicit */int) (unsigned short)65532))))));
                    /* LoopSeq 3 */
                    for (int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        arr_25 [i_4] [i_6] [i_1] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) ((int) max((var_16), (((0ULL) + (var_16))))));
                        arr_26 [i_1] [i_6] [i_4] [i_2 - 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-19545))))) ? (17490390573019476230ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)8708)) / (14))))));
                        var_23 = (-(((/* implicit */int) var_3)));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        arr_29 [i_1] [i_1] [i_1] [i_6] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))));
                        arr_30 [i_1] [i_6] [i_1] [i_6] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) 4294967278U)) ? (arr_4 [i_2 + 1]) : (((/* implicit */unsigned long long int) ((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) (short)1096))))))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) var_4)), (798280320957237738LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 + 1])))))) ? (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (_Bool)1)) : (((var_15) / (((/* implicit */int) var_18)))))) : (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (short)-23153)) * (((/* implicit */int) var_4)))) : (13)))));
                        var_25 = ((/* implicit */signed char) ((_Bool) ((unsigned int) (_Bool)1)));
                        arr_35 [i_1] [i_1] [i_4] [i_1] [i_9] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (-761813869))), (((var_12) - (((/* implicit */int) var_0))))));
                    }
                }
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    for (int i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        {
                            var_26 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_23 [i_11] [i_10] [i_11] [i_11] [i_2] [12ULL])))) - (3046563585U)));
                            var_27 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) var_2)) / (12233979498986598919ULL))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                            arr_40 [i_1] [i_2 + 1] [2] [i_4] [i_11] &= ((/* implicit */short) ((((((/* implicit */unsigned long long int) -6920199127354307020LL)) - (max((((/* implicit */unsigned long long int) -5576367196103992293LL)), (6212764574722952697ULL))))) - (var_16)));
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (-(((var_1) * (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))))))));
                            var_29 *= ((/* implicit */signed char) (-(min((((/* implicit */int) var_5)), (arr_5 [i_10])))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned char) (+(var_13)));
                arr_41 [i_1] [i_2 + 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((_Bool) ((unsigned short) var_6)))), (max((((/* implicit */long long int) (short)-28454)), (16LL)))));
                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (arr_32 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_4]))))))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_32 = ((/* implicit */unsigned long long int) var_15);
                arr_45 [i_1] [i_1] = ((/* implicit */long long int) max((((((/* implicit */int) ((short) var_12))) + (((/* implicit */int) (short)23974)))), (((((/* implicit */_Bool) 2118755814)) ? (((/* implicit */int) var_18)) : (((8) / (var_15)))))));
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 20; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        {
                            arr_51 [i_1] [(unsigned char)12] [i_2] [i_13] [13] = ((/* implicit */long long int) 743181777);
                            arr_52 [i_1] [i_2] [i_12] [i_1] [(unsigned char)10] = ((/* implicit */int) ((((var_3) ? (15254909173412540794ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (var_1)))))) * (((/* implicit */unsigned long long int) var_15))));
                        }
                    } 
                } 
                var_33 *= ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) / ((-(((/* implicit */int) var_5))))));
            }
            var_34 = ((/* implicit */int) (((-(-5903792838838125759LL))) + (((/* implicit */long long int) ((/* implicit */int) (short)-25)))));
            arr_53 [i_1] [i_2] [i_2] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) (short)9076)), (var_6))), (((/* implicit */unsigned long long int) ((((2861173910141839396LL) + (((/* implicit */long long int) ((/* implicit */int) var_0))))) + (((/* implicit */long long int) ((/* implicit */int) var_17))))))));
        }
        for (unsigned short i_15 = 1; i_15 < 19; i_15 += 1) /* same iter space */
        {
            arr_57 [i_1] [i_15 + 1] [i_1] = ((/* implicit */unsigned int) ((16771188878290221466ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
            arr_58 [i_1] = ((/* implicit */signed char) 6212764574722952701ULL);
            var_35 = ((/* implicit */unsigned long long int) ((short) (unsigned char)140));
        }
        arr_59 [i_1] = ((/* implicit */short) ((9) + (((max((var_13), (-733824123))) - ((((_Bool)0) ? (((/* implicit */int) var_8)) : (var_9)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_16 = 0; i_16 < 20; i_16 += 3) 
        {
            /* LoopNest 3 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (long long int i_18 = 0; i_18 < 20; i_18 += 3) 
                {
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (3191834900297010821ULL)));
                            var_37 = ((((/* implicit */unsigned long long int) var_15)) + (3191834900297010821ULL));
                            arr_70 [i_1] [i_1] [i_1] [i_16] [i_17] [i_18] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_16] [i_1] [i_18])) - (((/* implicit */int) (short)-7193))));
                        }
                    } 
                } 
            } 
            var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((-16LL) / (((/* implicit */long long int) ((-1552884134) / (var_15)))))))));
        }
    }
}
