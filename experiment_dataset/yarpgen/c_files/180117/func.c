/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180117
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_0)) != (var_2))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)0)))))));
    var_16 = ((/* implicit */unsigned char) ((unsigned int) var_0));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) min((arr_1 [2LL]), (arr_0 [i_0])))), ((unsigned short)0)))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)214)), (arr_2 [i_0])))) : ((+(((/* implicit */int) var_10)))))))));
        var_18 = ((/* implicit */unsigned short) arr_1 [1U]);
        arr_3 [i_0] [12LL] = ((/* implicit */int) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_0 [i_0])))))) ? (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_7)))) == (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (unsigned char)52)))))))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [2ULL])) == (((/* implicit */int) arr_0 [i_0])))))));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) / (((((/* implicit */long long int) ((int) var_6))) % (min((15LL), (((/* implicit */long long int) arr_2 [(unsigned char)5]))))))));
            /* LoopSeq 1 */
            for (long long int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                arr_10 [i_0] [(signed char)0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2 + 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65505)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_1])) : (((/* implicit */int) var_5)))))));
                arr_11 [(unsigned short)8] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_5 [i_0] [i_1] [i_0])) <= (((/* implicit */int) arr_0 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_12)), (var_8)))), (4294967295U)))));
            }
            arr_12 [12LL] &= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_3))))) >= (((((/* implicit */_Bool) 6785277437590377950LL)) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) var_13))))))) & (((/* implicit */int) var_3))));
        }
        for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_4 = 1; i_4 < 10; i_4 += 3) 
            {
                var_19 &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (short)32745)) ? (arr_9 [i_0] [i_0] [(unsigned char)1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_3] [(unsigned short)8] [(unsigned short)8])) || (((/* implicit */_Bool) (unsigned short)65535)))))));
            }
            arr_19 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [10ULL]))))));
        }
        /* vectorizable */
        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    for (short i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        {
                            arr_32 [i_5] [i_0] = (~(((unsigned int) 6082368014919807536LL)));
                            arr_33 [i_0] [i_5] [i_6] [i_6] [i_0] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)7)) * (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) == (((/* implicit */int) (unsigned char)151)))))));
                            arr_34 [9LL] [9LL] [i_6] [i_7] [i_0] = ((/* implicit */signed char) arr_1 [(signed char)0]);
                        }
                    } 
                } 
            } 
            arr_35 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
        }
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (short)-11842)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-90))) : (6785277437590377950LL)))));
        var_22 = ((/* implicit */signed char) min((((unsigned int) ((unsigned short) (unsigned char)253))), (((((/* implicit */_Bool) arr_17 [i_9] [i_9] [i_9] [i_9])) ? (4294967265U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_9] [i_9])))))));
    }
    var_23 -= ((/* implicit */signed char) 6ULL);
}
