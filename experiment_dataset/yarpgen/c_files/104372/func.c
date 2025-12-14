/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104372
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
    var_20 = ((/* implicit */int) var_19);
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max((((/* implicit */signed char) var_1)), ((signed char)-114))))));
    var_22 = ((/* implicit */signed char) max((((var_15) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_18)))))), (((/* implicit */unsigned long long int) var_19))));
    var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9121764257580959328ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1040187392U)));
        var_25 = ((/* implicit */long long int) max((var_9), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((max((arr_0 [i_0]), (((/* implicit */long long int) var_18)))), (((/* implicit */long long int) (~(((/* implicit */int) (short)-23134)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (max((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
            {
                arr_10 [i_0] = (+(((9324979816128592287ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_1]))))));
                var_27 *= ((/* implicit */short) (((!(arr_3 [i_1]))) ? (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_2])) : (var_13)));
            }
            for (short i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
            {
                arr_13 [i_0] [i_1] [(signed char)8] [(short)2] = ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_3] [i_0])) : (((((/* implicit */int) (signed char)65)) >> (((((/* implicit */int) var_2)) - (27))))));
                arr_14 [(unsigned char)9] [(short)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)12472)) ? (9324979816128592307ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                var_28 = ((/* implicit */int) ((long long int) arr_7 [i_3] [i_3] [i_3]));
            }
            var_29 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) var_18)) ? (9324979816128592307ULL) : (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_1]))))));
        }
    }
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9324979816128592287ULL)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_4]))))) : (max(((~(9121764257580959328ULL))), (((/* implicit */unsigned long long int) max((arr_15 [i_4]), (((/* implicit */unsigned char) var_3)))))))));
        var_31 = ((/* implicit */signed char) arr_17 [i_4] [i_4]);
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            for (unsigned int i_6 = 1; i_6 < 20; i_6 += 4) 
            {
                for (int i_7 = 1; i_7 < 21; i_7 += 3) 
                {
                    {
                        var_32 *= ((/* implicit */_Bool) (((~(((((/* implicit */_Bool) (short)-23134)) ? (((/* implicit */long long int) arr_16 [i_7] [i_4])) : (6750995121435995566LL))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_7] [i_6] [i_4])) ? (((/* implicit */int) (!(arr_17 [i_4] [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_5] [(_Bool)1]))))))))));
                        var_33 -= ((/* implicit */unsigned long long int) (!((!((!(((/* implicit */_Bool) arr_18 [i_4] [i_5] [(unsigned short)11]))))))));
                    }
                } 
            } 
        } 
        arr_25 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_24 [i_4] [(unsigned char)7]) ? (((/* implicit */int) arr_24 [i_4] [i_4])) : (((/* implicit */int) arr_24 [i_4] [i_4]))))) ? (((/* implicit */int) ((short) (short)27776))) : (((/* implicit */int) arr_24 [i_4] [i_4]))));
        var_34 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(arr_23 [i_4] [i_4] [i_4] [i_4])))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) 9324979816128592306ULL)) ? (9121764257580959326ULL) : (((/* implicit */unsigned long long int) 880573392))))) ? (arr_20 [i_4] [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
    }
}
