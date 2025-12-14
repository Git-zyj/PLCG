/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185059
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
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0 + 1]);
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            var_13 = (!(((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1])));
            /* LoopSeq 1 */
            for (long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_8 [i_0 - 1] [i_0 + 1] [i_2]), (var_0)))) ? (((((/* implicit */_Bool) 6372476329916059633ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(signed char)8] [(signed char)8] [i_2 + 1])))))) : (6372476329916059633ULL))) : (((/* implicit */unsigned long long int) ((long long int) (short)25))))))));
                var_15 += ((/* implicit */unsigned short) (~(((/* implicit */int) (short)26505))));
                var_16 = ((/* implicit */signed char) (((~(-7038855010823941637LL))) < (((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) * (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (var_2))))))));
            }
            var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_8 [i_0 + 2] [i_1 - 1] [i_0 - 1]) + (arr_8 [i_1] [i_1 - 1] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_9))))) : (12074267743793491975ULL)));
            arr_11 [i_0] = ((/* implicit */signed char) arr_3 [i_0] [i_1]);
        }
    }
    for (signed char i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        var_18 -= ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_12)) ? (((((/* implicit */int) (unsigned short)44986)) ^ (((/* implicit */int) arr_10 [(unsigned char)4] [i_3] [(unsigned char)4])))) : (((/* implicit */int) (unsigned short)48551))))));
        /* LoopNest 2 */
        for (unsigned int i_4 = 2; i_4 < 10; i_4 += 1) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (short)-9047);
                    var_20 = ((/* implicit */int) min((var_20), ((((~(((/* implicit */int) ((7769665856998608934ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5] [i_3])))))))) * (((/* implicit */int) min((arr_0 [12LL] [12LL]), (arr_0 [2LL] [i_4 + 1]))))))));
                }
            } 
        } 
        var_21 = (unsigned short)34846;
        var_22 = ((/* implicit */long long int) (signed char)10);
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((min((arr_3 [i_3] [i_3]), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_9 [i_3] [i_3] [(unsigned char)0] [i_3]))))) ^ (((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */unsigned long long int) (~(-764658025)))) : (max((var_12), (((/* implicit */unsigned long long int) 764658025)))))))))));
    }
    for (unsigned long long int i_6 = 3; i_6 < 13; i_6 += 3) 
    {
        var_24 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (((-(4294967285U))) | (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)30541)))))))), (((((/* implicit */_Bool) var_6)) ? (((var_6) | (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6]))))) : (((/* implicit */long long int) ((((/* implicit */int) (short)-9036)) * (((/* implicit */int) (_Bool)0)))))))));
        var_25 = ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) (short)-1094)))));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [(unsigned char)0] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (-7998393140624611548LL) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [2] [i_7]))))) != (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)106))) | (4294967290U)))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) <= (8119960165962062655LL)))), (((unsigned long long int) arr_27 [(short)16])))))))));
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (-(((/* implicit */int) min((arr_27 [(short)6]), (arr_27 [(signed char)16])))))))));
        arr_28 [18LL] [i_7] = ((max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)29714)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) var_10))))), (-8119960165962062655LL))) < (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)16985))))));
        arr_29 [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)130)) >> (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)18132))))))))));
        var_28 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_7] [i_7])) * (((/* implicit */int) (signed char)-100))))) * (((var_12) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-24510))))))), (((/* implicit */unsigned long long int) (~(((long long int) 13469222654875981659ULL)))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_9 = 4; i_9 < 21; i_9 += 3) 
        {
            var_29 += ((/* implicit */short) (signed char)90);
            var_30 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (short)16941)), (arr_35 [i_8])));
            var_31 = ((/* implicit */_Bool) (~((((-(((/* implicit */int) arr_33 [i_8])))) % (((((/* implicit */int) (signed char)-86)) % (((/* implicit */int) (unsigned short)19738))))))));
            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */int) (short)25419)) <= (((/* implicit */int) (_Bool)1)))))));
        }
        var_33 = min(((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32663))) != (var_6)))))), (((/* implicit */int) (_Bool)1)));
    }
    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 1) 
    {
        /* LoopSeq 3 */
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            var_34 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_11])) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_33 [i_11]))))), (max((((/* implicit */unsigned long long int) (+(14336U)))), (((unsigned long long int) 1590330103))))));
            var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 14336U)) ? (1157401537) : (((/* implicit */int) (short)32754))));
            var_36 = 411498225178342651ULL;
        }
        for (short i_12 = 0; i_12 < 22; i_12 += 1) 
        {
            var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) (unsigned char)220))));
            /* LoopSeq 1 */
            for (short i_13 = 0; i_13 < 22; i_13 += 1) 
            {
                arr_44 [i_12] [i_12] [i_13] = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_3)))) >> (((arr_37 [i_10] [i_10]) - (8881441825845658659LL)))));
                arr_45 [16LL] |= ((/* implicit */unsigned long long int) (+(-9223372036854775799LL)));
                var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_10] [(signed char)10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)10))) : (arr_39 [(_Bool)1] [(short)12])))))))));
                var_39 = ((/* implicit */unsigned char) (-((-(var_1)))));
                /* LoopNest 2 */
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    for (short i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        {
                            var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)40))))) ? (max((arr_49 [i_14 - 1] [i_10] [(signed char)7] [7LL] [i_10]), (arr_49 [i_14 - 1] [i_14] [i_14] [i_13] [i_13]))) : (((((/* implicit */_Bool) -6)) ? (arr_49 [i_14 - 1] [(_Bool)1] [i_14 - 1] [i_14] [i_14]) : (arr_49 [i_14 - 1] [20LL] [i_14] [i_14] [i_14])))));
                            var_41 += ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_34 [i_12] [i_13] [i_14 - 1])), ((-(((/* implicit */int) ((short) arr_39 [i_10] [i_15])))))));
                        }
                    } 
                } 
            }
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_42 = ((/* implicit */unsigned long long int) ((unsigned short) (-(((/* implicit */int) (_Bool)1)))));
            arr_52 [i_10] [11] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)124))) == (6004833279736571370LL)));
            /* LoopNest 2 */
            for (int i_17 = 0; i_17 < 22; i_17 += 4) 
            {
                for (long long int i_18 = 1; i_18 < 21; i_18 += 4) 
                {
                    {
                        var_43 = ((/* implicit */_Bool) (unsigned short)28476);
                        arr_57 [i_10] [i_18 + 1] [i_18] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_51 [i_18])))) ? (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) (signed char)62)) >= (((/* implicit */int) arr_46 [i_10] [(signed char)18] [i_10] [9LL] [i_10]))))), ((~(((/* implicit */int) var_10))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_17] [i_18])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_55 [6] [i_10] [i_16] [6] [i_18]))))) ? ((~(-9223372036854775806LL))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        }
        var_44 = ((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */signed char) ((var_5) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [(unsigned char)16])))))), (arr_53 [i_10] [i_10]))))));
        var_45 |= ((/* implicit */signed char) max((((unsigned long long int) arr_37 [i_10] [i_10])), (((/* implicit */unsigned long long int) min((9223372036854775806LL), (((/* implicit */long long int) (signed char)91)))))));
    }
    var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_8), (((/* implicit */unsigned char) var_9))))) >> (((((7810894365618666556ULL) ^ (((/* implicit */unsigned long long int) var_6)))) - (14379773877498866309ULL)))))) ? (((/* implicit */long long int) 0)) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)211))))), (var_1)))));
}
