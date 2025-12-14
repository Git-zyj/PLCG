/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131502
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_1] [(short)4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (unsigned char)200)) : (((/* implicit */int) (unsigned char)195))));
                    var_20 = (unsigned char)170;
                    /* LoopSeq 3 */
                    for (signed char i_3 = 1; i_3 < 7; i_3 += 4) 
                    {
                        arr_10 [(short)8] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)205)), (-1261874890))))));
                        var_21 = ((/* implicit */unsigned short) var_4);
                    }
                    for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((_Bool) min((var_19), (((/* implicit */unsigned long long int) var_18))))))));
                        var_23 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (signed char)-6)) : (((/* implicit */int) (unsigned char)184))));
                    }
                    for (int i_5 = 1; i_5 < 7; i_5 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned int) (~(1261874889)));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)31)) ? (1313635301) : (((/* implicit */int) (unsigned char)156))));
                    }
                }
            } 
        } 
        var_26 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_0] [i_0]))))) == (arr_5 [(_Bool)1] [i_0]));
    }
    for (int i_6 = 0; i_6 < 19; i_6 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
        {
            var_27 ^= ((/* implicit */int) ((unsigned int) arr_20 [i_6] [i_6]));
            arr_22 [i_7] = ((/* implicit */unsigned short) var_7);
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (short i_9 = 0; i_9 < 19; i_9 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) 
                        {
                            arr_31 [i_6] [i_9] [i_10] [i_6] [i_9] [i_8] [i_6] |= ((/* implicit */unsigned int) ((_Bool) ((unsigned int) ((long long int) arr_23 [i_10] [i_7] [i_7]))));
                            arr_32 [i_6] [i_7] [i_8] [i_8] = ((/* implicit */unsigned short) var_10);
                            var_28 += ((/* implicit */short) ((((/* implicit */_Bool) max(((unsigned char)200), (((/* implicit */unsigned char) (signed char)-26))))) ? ((+(((/* implicit */int) arr_26 [i_6] [i_7] [i_8] [i_9])))) : (((/* implicit */int) (unsigned char)51))));
                        }
                        arr_33 [i_7] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (signed char)20))) ? (((/* implicit */int) arr_27 [i_7])) : (((/* implicit */int) arr_19 [i_7]))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_30 [i_6] [(signed char)8])));
                        arr_34 [i_7] [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_30 [i_7] [i_7]) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_16))))) : (min((arr_29 [i_7] [i_7] [i_8] [i_8] [i_9]), (((/* implicit */unsigned int) arr_27 [i_7]))))))) ? (((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_30 [i_7] [i_8])))) : (((((((/* implicit */_Bool) (unsigned char)56)) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (unsigned char)183)))) % (((/* implicit */int) arr_18 [i_7] [i_8]))))));
                    }
                } 
            } 
            var_29 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)191)) ? (((((/* implicit */int) (unsigned char)27)) & (43540254))) : (var_7))) & (((/* implicit */int) var_5))));
        }
        for (signed char i_11 = 0; i_11 < 19; i_11 += 3) /* same iter space */
        {
            var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_7))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) max(((unsigned char)195), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)156)) && ((_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
            /* LoopNest 3 */
            for (unsigned int i_12 = 4; i_12 < 18; i_12 += 4) 
            {
                for (short i_13 = 3; i_13 < 16; i_13 += 4) 
                {
                    for (int i_14 = 0; i_14 < 19; i_14 += 4) 
                    {
                        {
                            var_31 ^= ((/* implicit */unsigned char) ((((((arr_17 [i_6]) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))))) * (min((((/* implicit */unsigned int) (short)7969)), (min((((/* implicit */unsigned int) var_5)), (var_0)))))));
                            var_32 = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)30));
                            arr_47 [(short)4] [12] [(short)4] [(short)4] [(short)12] [i_13] [i_13] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) ((_Bool) 29360128U))), (var_14))), (var_18)));
                        }
                    } 
                } 
            } 
            arr_48 [i_6] [i_6] [16ULL] |= ((/* implicit */unsigned long long int) arr_45 [i_6] [6U] [i_6] [6U] [i_11] [i_11] [i_11]);
            arr_49 [i_6] [i_6] [4] = ((arr_24 [i_11] [i_11] [i_6] [i_6]) <= (((((/* implicit */_Bool) (unsigned char)192)) ? (((arr_17 [i_6]) & (arr_17 [i_6]))) : (((/* implicit */unsigned int) (-(-43540254)))))));
        }
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            var_33 = ((/* implicit */unsigned long long int) 62914560U);
            /* LoopNest 3 */
            for (short i_16 = 3; i_16 < 17; i_16 += 4) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        {
                            arr_61 [i_6] [17] [i_6] [i_6] [i_16] [18ULL] [17] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_41 [i_6] [i_15])) : (((((/* implicit */_Bool) -2080834262)) ? (((/* implicit */int) (unsigned char)51)) : (33552384)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (unsigned char)180)) : (((/* implicit */int) arr_45 [i_6] [i_6] [i_16] [i_16] [(_Bool)1] [i_17] [i_16]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned char)200)))) : ((-(1390298724U))))) : ((-(arr_17 [i_6]))));
                            arr_62 [i_16] = ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)155)), (arr_35 [i_16])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)205)))) : (max((((/* implicit */unsigned long long int) 736381206)), (5260664972825860299ULL))));
                        }
                    } 
                } 
            } 
        }
        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)180)), ((short)0)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [(_Bool)0] [i_6]))) + (min((var_18), (((/* implicit */unsigned int) 43540254)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_19 = 3; i_19 < 16; i_19 += 3) 
        {
            arr_67 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-18016)) >= (((/* implicit */int) arr_38 [(short)9] [i_19] [i_19 + 3] [i_19]))));
            /* LoopSeq 1 */
            for (unsigned int i_20 = 0; i_20 < 19; i_20 += 4) 
            {
                var_35 ^= ((/* implicit */unsigned short) var_13);
                arr_70 [7U] [i_19] = ((((/* implicit */_Bool) (signed char)31)) || (((/* implicit */_Bool) (unsigned short)57344)));
            }
        }
        var_36 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) (-(var_4)))) : (((unsigned long long int) arr_29 [i_6] [i_6] [i_6] [i_6] [i_6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)53)), ((short)0))))) : (((((/* implicit */_Bool) (unsigned char)124)) ? (min((((/* implicit */unsigned int) var_7)), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)213))))))))));
    }
    /* LoopNest 2 */
    for (unsigned int i_21 = 1; i_21 < 19; i_21 += 4) 
    {
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            {
                var_37 = ((/* implicit */_Bool) max((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) -736381207)) ? (((/* implicit */unsigned int) min((-736381207), (((/* implicit */int) (short)-10624))))) : (var_18))))));
                /* LoopNest 2 */
                for (unsigned short i_23 = 0; i_23 < 22; i_23 += 3) 
                {
                    for (unsigned char i_24 = 0; i_24 < 22; i_24 += 2) 
                    {
                        {
                            arr_81 [i_21] [i_21] [i_21] [(unsigned char)3] [i_24] = ((/* implicit */unsigned char) min((((/* implicit */int) (short)-16)), (-43540252)));
                            arr_82 [i_21] [i_21] [i_23] = ((/* implicit */signed char) min((((arr_72 [i_21] [i_22]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17))))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (min((((/* implicit */unsigned long long int) var_17)), (arr_72 [i_21] [i_21]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)10625)) : (((/* implicit */int) (_Bool)1)))))))) ? (((((((/* implicit */int) (unsigned char)205)) - (736381207))) + (-363434244))) : ((-(((/* implicit */int) (signed char)-48))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        {
                            var_39 ^= ((/* implicit */_Bool) min((arr_83 [(short)0] [2U] [(short)0] [(short)0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1073741824)) ? (43540260) : (((/* implicit */int) arr_80 [i_22] [2] [i_26])))))));
                            arr_89 [i_26] [i_21] [(_Bool)1] [i_22] [i_21] [i_21] = ((/* implicit */_Bool) min((min((var_8), (arr_79 [i_21 + 1] [i_21]))), (((((/* implicit */_Bool) arr_79 [i_21 + 2] [i_21])) ? (((/* implicit */unsigned int) arr_76 [i_21 + 1] [i_21] [i_21 + 1] [i_21 + 3])) : (arr_79 [i_21 + 3] [i_21])))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_27 = 2; i_27 < 20; i_27 += 2) 
                {
                    for (signed char i_28 = 0; i_28 < 22; i_28 += 1) 
                    {
                        {
                            arr_95 [i_21] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_86 [i_21] [5U] [i_21 + 3])) ? (((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (var_7))) + (((/* implicit */int) ((((/* implicit */int) (unsigned char)40)) >= (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)45532))))));
                            var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1048544)) ? (((/* implicit */int) (unsigned char)140)) : (-663803913))))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */short) var_10);
            }
        } 
    } 
}
