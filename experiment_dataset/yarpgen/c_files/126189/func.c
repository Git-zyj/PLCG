/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126189
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_0 + 2] = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) / (arr_1 [i_0 - 2])))) * (arr_0 [i_0 - 2])))));
                var_20 = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 + 1])))));
            }
        } 
    } 
    var_21 |= ((/* implicit */short) (+(var_15)));
    /* LoopSeq 3 */
    for (int i_2 = 2; i_2 < 11; i_2 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)40)) % (arr_5 [i_2 - 2]))) << (((((/* implicit */_Bool) ((unsigned short) var_12))) ? (max((((/* implicit */long long int) (_Bool)0)), (-1311851805971436957LL))) : (((/* implicit */long long int) (~(-1295574163))))))));
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    {
                        arr_14 [i_2] [i_3] [i_2] [i_5] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                        arr_15 [i_3] [i_5] = ((/* implicit */unsigned char) var_3);
                    }
                } 
            } 
        } 
    }
    for (int i_6 = 2; i_6 < 11; i_6 += 2) /* same iter space */
    {
        arr_18 [i_6] [9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_6] [i_6 - 2]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) var_19))) >= (var_5)))) : ((~(((((/* implicit */int) var_0)) | (((/* implicit */int) var_1))))))));
        arr_19 [i_6] [i_6] = ((/* implicit */short) (+(((arr_9 [i_6] [i_6 + 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
    }
    for (int i_7 = 2; i_7 < 11; i_7 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((arr_17 [i_7 + 2] [i_7 + 2]) ^ ((-(((/* implicit */int) (signed char)-2))))))) + (max((var_6), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-78)) <= (((/* implicit */int) (signed char)92)))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) /* same iter space */
        {
            arr_26 [i_7] [i_7] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_7 + 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(1764455393U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) var_1))))) : (((var_6) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
            arr_27 [i_7] &= ((/* implicit */signed char) (-((+(((/* implicit */int) var_2))))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                for (short i_11 = 0; i_11 < 13; i_11 += 3) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_38 [i_7] [1] [i_10] [i_11] [i_12] = ((/* implicit */unsigned short) var_17);
                            arr_39 [i_7 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_16 [(signed char)10] [(_Bool)1])) < (arr_35 [i_7] [i_9] [(signed char)7] [5U] [(signed char)7]))) ? (((((/* implicit */int) (signed char)92)) % (((/* implicit */int) var_0)))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */int) arr_31 [i_7] [i_7] [i_7])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */int) var_11)) & (((/* implicit */int) arr_33 [i_7] [i_9] [i_7] [i_7])))) : (((/* implicit */int) (signed char)115))))) : (-299237348331496994LL)));
                        }
                    } 
                } 
            } 
            var_24 += ((/* implicit */unsigned char) max((((((arr_11 [i_7 - 1] [i_9] [i_9]) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-299237348331497013LL))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57352))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_7 - 1])) ? (arr_5 [(unsigned char)2]) : (((/* implicit */int) arr_21 [i_7 + 2])))))));
            arr_40 [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) (!(var_2))))));
            arr_41 [i_7 - 2] = max((((/* implicit */unsigned long long int) ((((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) & (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((8873881787149192648ULL) > (((/* implicit */unsigned long long int) 2707946754U)))))) % (12616395122647577480ULL))));
        }
        for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */short) (-(max((var_8), (((/* implicit */unsigned int) 1797969685))))));
            arr_44 [i_7 + 2] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((short) (~(((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)59514)))))));
            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((signed char)124), (arr_43 [i_7 + 2] [i_13])))) ? (max((var_15), (((/* implicit */int) var_7)))) : (((/* implicit */int) var_2))));
            arr_45 [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((1754713741902836174ULL), (((/* implicit */unsigned long long int) 2229855161U))))) ? (((((/* implicit */_Bool) -3753247102768340512LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))) : (((/* implicit */int) min((((/* implicit */short) (signed char)124)), ((short)(-32767 - 1))))))) : (max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_17)) : (1132699282)))))));
        }
        var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-2101))) >= (655351501U))) ? (((((/* implicit */_Bool) (signed char)-92)) ? (1463909135U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)65))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62347)))));
        var_28 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1132699292)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (4294967288U))) <= (((((/* implicit */_Bool) 2530511902U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)98))) : (var_4)))));
        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
    }
}
