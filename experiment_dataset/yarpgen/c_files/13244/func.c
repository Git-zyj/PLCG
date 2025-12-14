/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13244
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
    var_14 = min((((((_Bool) 2553812988105600009LL)) ? (var_3) : (var_3))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) (short)31849)))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_0] [i_0])))) : (((((/* implicit */_Bool) (short)-22191)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [1] [i_0])))))))));
        arr_2 [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (3670294780U)))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [15ULL] [12]), (((/* implicit */unsigned short) (short)-22191)))))) != (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-22191)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [15ULL]))))) % (min((var_4), (((/* implicit */unsigned long long int) (short)31849))))))));
        arr_3 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (var_2) : (((unsigned int) arr_1 [i_0])))))));
    }
    for (int i_1 = 1; i_1 < 9; i_1 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (unsigned short i_4 = 3; i_4 < 8; i_4 += 2) 
                {
                    for (short i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        {
                            arr_15 [i_4] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)47))));
                            var_17 = ((/* implicit */_Bool) arr_6 [i_1] [i_1] [5ULL]);
                            arr_16 [1U] [i_4] [i_3] [i_3] [i_3] [7] [i_3] = ((/* implicit */unsigned int) arr_6 [3ULL] [i_1 - 1] [i_4 - 2]);
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (((+(arr_13 [i_1] [i_2] [i_2] [5ULL] [(unsigned char)0]))) != (((var_6) ? (1128588610834749857ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))));
            arr_17 [i_1] = ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)118))) - (var_3)));
        }
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) (+(((/* implicit */int) (_Bool)0)))))) >> (min((((/* implicit */unsigned long long int) arr_8 [i_1 + 1] [i_1 + 1])), (var_10))))))));
            var_20 = ((/* implicit */short) (((~(((/* implicit */int) var_8)))) != (min(((+(((/* implicit */int) (short)-1396)))), (((/* implicit */int) max((((/* implicit */short) arr_7 [i_1] [i_6] [i_1])), (arr_19 [i_1] [i_1 + 1] [2U]))))))));
        }
        var_21 = ((/* implicit */_Bool) (+(((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_9)) - (((/* implicit */int) arr_11 [i_1]))))))) ? (max((arr_10 [i_1 - 1] [i_1 + 2] [(unsigned short)9] [i_1 + 2]), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-22191)))))) : (((((var_1) || (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_5)), (arr_27 [i_1 + 2] [i_7] [i_8] [i_9] [i_1])))) : ((+(((/* implicit */int) var_1))))))));
                        arr_29 [i_9] [10ULL] [i_1] [i_1] [i_1] = ((((int) ((((/* implicit */_Bool) 4041865723U)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) & (((/* implicit */int) ((unsigned char) min(((short)-19998), ((short)32767))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((var_0) >> (((3430405652189481009ULL) - (3430405652189480996ULL))))), (((/* implicit */unsigned long long int) ((arr_28 [i_1] [i_1] [i_1] [i_1 - 1]) && (((/* implicit */_Bool) (short)32763))))))))));
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))))));
        arr_32 [i_10] = ((/* implicit */short) (+(arr_6 [i_10] [i_10] [i_10])));
    }
}
