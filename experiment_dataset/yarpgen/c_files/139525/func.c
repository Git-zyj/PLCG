/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139525
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) min((((long long int) ((-1125809635) == (((/* implicit */int) var_14))))), (((/* implicit */long long int) ((_Bool) (unsigned short)39220)))));
                    arr_9 [i_2] [i_2] [i_0 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) var_12)), ((~(((/* implicit */int) var_14))))))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_2]))) : (var_3))))) : (min((((((/* implicit */_Bool) 11397822703982403247ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)62))) : (arr_3 [i_1]))), (((/* implicit */unsigned long long int) min(((signed char)-82), ((signed char)-35))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 1; i_3 < 16; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 2; i_5 < 16; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [8ULL] [i_4]))))) ? (((/* implicit */unsigned long long int) arr_4 [i_3 + 1] [i_3 + 1])) : (arr_1 [i_3 + 1])))));
                            arr_21 [i_3] [i_5] [i_4] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */short) var_5)), (var_11)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        {
                            arr_30 [i_3] [(short)16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_3 - 1] [i_3])))))));
                            var_17 = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_3]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    for (short i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(6363527338384131250ULL)))) ? (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_36 [i_3 + 1] [i_3 + 1] [i_4] [i_9] [i_10])))) ? (((/* implicit */int) arr_28 [i_3] [i_3] [i_4] [i_10])) : (((/* implicit */int) arr_23 [i_3 - 1] [i_3 + 1] [i_3] [i_3 + 1]))))) : ((+((+(-6044976969005812063LL)))))));
                            arr_38 [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) (~((+(-280852926)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 3) 
                {
                    for (unsigned char i_12 = 0; i_12 < 17; i_12 += 1) 
                    {
                        {
                            arr_45 [i_3] = ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5886395759839248396LL)) ? (((/* implicit */int) (unsigned short)4599)) : (((/* implicit */int) arr_23 [i_3] [i_4] [i_11] [i_12]))))) ? (((/* implicit */unsigned long long int) -844812480)) : (((var_1) - (((/* implicit */unsigned long long int) var_10))))));
                            var_19 = ((min((((/* implicit */unsigned long long int) arr_26 [i_11] [i_3] [12ULL] [i_11] [i_11])), (((((/* implicit */_Bool) 562949953421311ULL)) ? (4261626054063106526ULL) : (1790686366847647572ULL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((((/* implicit */int) (short)-6)), (arr_15 [i_3] [i_4] [i_11] [i_12])))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) arr_25 [i_3]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_13 = 0; i_13 < 23; i_13 += 4) 
    {
        for (signed char i_14 = 0; i_14 < 23; i_14 += 4) 
        {
            for (signed char i_15 = 0; i_15 < 23; i_15 += 4) 
            {
                {
                    arr_52 [i_13] [i_14] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) -1850709830)) || (((/* implicit */_Bool) (unsigned short)60937))));
                    /* LoopNest 2 */
                    for (unsigned char i_16 = 0; i_16 < 23; i_16 += 4) 
                    {
                        for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 1) 
                        {
                            {
                                var_21 = min((((((((/* implicit */int) arr_8 [i_14] [i_15])) + (((/* implicit */int) var_8)))) * (max((-280852926), (((/* implicit */int) var_4)))))), (((/* implicit */int) max((arr_49 [i_14] [i_13]), (arr_49 [i_13] [i_13])))));
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (((-(((/* implicit */int) (unsigned short)60937)))) | ((-(var_7)))))) ? ((-(4045223513553864587LL))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (arr_4 [20ULL] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 4) 
    {
        for (int i_19 = 0; i_19 < 23; i_19 += 3) 
        {
            for (unsigned char i_20 = 0; i_20 < 23; i_20 += 1) 
            {
                {
                    var_23 = ((/* implicit */short) arr_6 [i_20] [i_19]);
                    /* LoopNest 2 */
                    for (unsigned short i_21 = 3; i_21 < 20; i_21 += 3) 
                    {
                        for (unsigned int i_22 = 2; i_22 < 21; i_22 += 3) 
                        {
                            {
                                arr_70 [i_20] [i_19] [i_20] [i_21] [i_20] = ((/* implicit */_Bool) (signed char)127);
                                var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)25123))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_23 = 0; i_23 < 24; i_23 += 4) 
    {
        for (unsigned int i_24 = 0; i_24 < 24; i_24 += 4) 
        {
            for (short i_25 = 0; i_25 < 24; i_25 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_26 = 0; i_26 < 24; i_26 += 1) 
                    {
                        for (unsigned long long int i_27 = 0; i_27 < 24; i_27 += 2) 
                        {
                            {
                                var_25 = ((((unsigned int) arr_74 [i_26])) / (((unsigned int) ((((/* implicit */_Bool) var_6)) ? (arr_1 [i_23]) : (var_1)))));
                                arr_86 [i_23] [i_23] [i_23] [i_23] [i_25] = ((/* implicit */signed char) var_0);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_28 = 0; i_28 < 24; i_28 += 1) 
                    {
                        for (int i_29 = 0; i_29 < 24; i_29 += 1) 
                        {
                            {
                                arr_91 [i_29] [2U] [i_29] [i_25] [i_29] = ((/* implicit */unsigned int) arr_75 [i_23]);
                                var_26 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_81 [i_25] [i_25]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) var_7)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_81 [i_23] [i_23])))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) arr_73 [i_23])))) != (max((((/* implicit */int) arr_87 [i_23] [i_23] [i_25] [i_28] [i_29])), (arr_76 [i_23] [i_24])))))))));
                                var_27 = ((/* implicit */signed char) arr_75 [i_23]);
                                arr_92 [i_23] [i_23] [i_23] [i_23] [i_25] [i_23] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)13942)), (((((/* implicit */_Bool) arr_5 [i_23] [i_29])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_87 [(signed char)21] [i_24] [i_25] [i_28] [(_Bool)1])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
