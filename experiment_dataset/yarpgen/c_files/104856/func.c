/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104856
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) (unsigned short)4096))))));
        var_14 = ((/* implicit */unsigned char) ((_Bool) ((unsigned long long int) (unsigned short)4098)));
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) (unsigned short)61440)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61435)))))))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        arr_4 [i_1] [i_1] = ((((/* implicit */_Bool) min((((int) arr_3 [i_1])), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned short)61459))))))) ? (((/* implicit */int) ((short) ((unsigned char) (unsigned short)61440)))) : (((/* implicit */int) min((min((arr_3 [i_1]), (((/* implicit */unsigned short) var_0)))), (min((((/* implicit */unsigned short) var_8)), ((unsigned short)4097)))))));
        var_16 ^= ((/* implicit */long long int) ((unsigned long long int) min((((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_2 [8U]) : (arr_2 [i_1]))), (((long long int) (unsigned short)61459)))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (unsigned short)61441)) : (((/* implicit */int) (unsigned short)4095))))), (min((arr_2 [i_1]), (((/* implicit */long long int) var_1))))))) ? (((((/* implicit */_Bool) ((long long int) arr_2 [i_1]))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_10)), ((unsigned short)61455)))) : (((/* implicit */int) min((arr_3 [(short)19]), (arr_3 [i_1])))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned short)61436))))))));
    }
    for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        var_17 = ((/* implicit */short) ((unsigned int) ((unsigned long long int) min((((/* implicit */unsigned int) var_0)), (var_9)))));
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                arr_23 [i_6] [i_5] [i_3] [i_4] [i_3] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61420)) ? (arr_22 [10U] [i_3] [i_4] [i_5] [(unsigned short)1]) : (arr_20 [(short)9] [i_6])))) ? (((/* implicit */int) min(((unsigned short)61441), ((unsigned short)61459)))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)61462))))))) ? (min((min((var_5), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)61438)) : (((/* implicit */int) (unsigned short)4095))))))) : (((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_11))))) : (min((((/* implicit */long long int) arr_15 [i_2] [i_2])), (arr_2 [i_2])))))));
                                arr_24 [i_3] [i_5] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)4074))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3)))) : (((unsigned long long int) arr_7 [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min(((unsigned short)4080), ((unsigned short)61436)))))) : (min((((((/* implicit */_Bool) (unsigned short)61436)) ? (((/* implicit */unsigned long long int) arr_20 [i_2] [i_3])) : (var_7))), (((/* implicit */unsigned long long int) ((_Bool) var_1))))));
                                arr_25 [i_2] [i_2] [i_3] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */short) min((((/* implicit */unsigned int) min((((/* implicit */int) min(((unsigned short)61455), (arr_6 [i_3] [i_5])))), (((((/* implicit */_Bool) (unsigned short)4074)) ? (((/* implicit */int) (unsigned short)61413)) : (((/* implicit */int) var_4))))))), (((((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) var_6))))) ? (((unsigned int) arr_15 [2U] [(short)12])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_4])) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) arr_18 [i_6] [i_5] [i_4] [i_3] [(short)10])))))))));
                            }
                        } 
                    } 
                    arr_26 [(unsigned short)11] [i_3] [i_3] [(unsigned char)12] = ((/* implicit */unsigned int) ((short) min((((/* implicit */int) ((short) (unsigned short)61439))), (((((/* implicit */_Bool) (unsigned short)4094)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_18 [i_2] [2LL] [(short)6] [(_Bool)1] [i_2])))))));
                    var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)61440)) ? (((/* implicit */int) (unsigned short)4080)) : (((/* implicit */int) (unsigned short)4095)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) min((arr_11 [i_2] [i_3] [i_4]), (((/* implicit */unsigned int) var_0))))))) : (((((_Bool) (unsigned short)61425)) ? (((long long int) arr_11 [i_2] [i_3] [i_4])) : (((/* implicit */long long int) ((unsigned int) (unsigned short)61441)))))));
                }
            } 
        } 
        arr_27 [4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_17 [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) ? (min((((unsigned long long int) arr_9 [i_2])), (((/* implicit */unsigned long long int) ((int) arr_9 [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((var_5), (((/* implicit */long long int) (unsigned short)4080)))))))));
    }
    var_19 -= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)4073)) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) (unsigned short)4095)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61480))) : (var_7))))));
    var_20 = ((((/* implicit */_Bool) min((((long long int) var_4)), (((/* implicit */long long int) min(((unsigned short)4100), ((unsigned short)4095))))))) ? (min((min((var_7), (((/* implicit */unsigned long long int) var_5)))), (((unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((((/* implicit */unsigned short) var_4)), ((unsigned short)61433)))))));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 12; i_7 += 4) 
    {
        for (unsigned long long int i_8 = 4; i_8 < 10; i_8 += 3) 
        {
            {
                arr_33 [i_7] [2] [i_7] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)61435))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_7)))) : (((((/* implicit */_Bool) (unsigned short)4103)) ? (var_5) : (arr_17 [i_7] [i_8] [(short)11] [i_8]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_8])), ((unsigned short)4103))))) : (min((var_9), (((/* implicit */unsigned int) var_8)))))))));
                /* LoopNest 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */int) min((((unsigned long long int) (unsigned short)61446)), (((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_12)))), (((((/* implicit */_Bool) (unsigned short)61432)) ? (((/* implicit */int) arr_19 [i_7] [i_7] [i_7] [9] [(_Bool)0])) : (((/* implicit */int) (unsigned short)4109)))))))));
                            var_22 = ((/* implicit */unsigned char) ((_Bool) min((((long long int) arr_15 [i_8] [i_10])), (((/* implicit */long long int) ((short) (unsigned short)4075))))));
                            var_23 ^= ((/* implicit */int) min((((/* implicit */unsigned int) min((((/* implicit */unsigned short) ((_Bool) (unsigned short)4073))), (min(((unsigned short)4103), ((unsigned short)4103)))))), (((((/* implicit */_Bool) ((unsigned int) var_12))) ? (((((/* implicit */_Bool) (unsigned short)61427)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4101))) : (arr_10 [i_7]))) : (((/* implicit */unsigned int) ((int) (unsigned short)4093)))))));
                            var_24 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_7]))) : (arr_35 [i_7] [0ULL] [(_Bool)1] [i_7])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)4109), ((unsigned short)61464))))) : (((unsigned long long int) var_9)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_11 = 3; i_11 < 9; i_11 += 4) 
                {
                    for (short i_12 = 0; i_12 < 12; i_12 += 4) 
                    {
                        {
                            var_25 ^= min((((/* implicit */unsigned int) min((((short) arr_28 [i_11] [i_12])), (((short) var_5))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [11ULL] [i_11 + 3])) ? (arr_31 [i_12] [i_12] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4093)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)4103), (((/* implicit */unsigned short) var_10)))))) : (min((arr_39 [i_7] [i_7]), (((/* implicit */unsigned int) (unsigned short)61435)))))));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)4101)) ? (((/* implicit */int) (unsigned short)61435)) : (((/* implicit */int) (unsigned short)61408))))), (min((((/* implicit */unsigned int) (unsigned short)4110)), (arr_39 [(unsigned short)5] [i_11])))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((unsigned char) var_0))), (min(((unsigned short)61407), ((unsigned short)4090)))))) : (((/* implicit */int) ((_Bool) ((long long int) (unsigned short)61425))))));
                        }
                    } 
                } 
                arr_46 [i_7] [i_7] [i_7] |= ((/* implicit */long long int) min((((((/* implicit */_Bool) ((int) (unsigned short)4129))) ? (((arr_9 [i_8]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) min(((unsigned short)4115), (((/* implicit */unsigned short) var_10))))))), (((/* implicit */int) ((_Bool) min(((unsigned short)4115), ((unsigned short)61427)))))));
            }
        } 
    } 
}
