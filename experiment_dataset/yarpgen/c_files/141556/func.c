/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141556
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_2 [(unsigned char)13] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (((((/* implicit */_Bool) -4028061307156363565LL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 875740759)))))) >> (((((/* implicit */int) (unsigned char)233)) - (186)))));
        var_16 -= ((/* implicit */unsigned char) ((((max((-875740781), (((/* implicit */int) (short)25315)))) ^ (((/* implicit */int) ((unsigned char) (_Bool)1))))) & (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    for (unsigned short i_1 = 4; i_1 < 11; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) (+(((13780199138545632867ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 - 4] [i_1 - 4])))))));
        var_18 += ((/* implicit */long long int) var_4);
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_19 += ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_6 [i_1 - 4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_1 - 4] [i_1 - 4]))))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_10)), (1155955227U)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_1]))))) : (((((/* implicit */unsigned long long int) arr_7 [i_2] [i_1])) ^ (var_7)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) 17851221790459249302ULL)))))))) : ((~(arr_3 [i_2 - 1])))));
                        arr_14 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) ((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-16231))))))) ? ((~(((unsigned long long int) arr_7 [i_1] [(short)10])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned char)67), ((unsigned char)248))))))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */_Bool) min((var_21), ((!(((/* implicit */_Bool) ((((var_2) + (2147483647))) >> (((((/* implicit */int) arr_11 [i_1 - 4] [i_1] [i_1 + 1])) + (21640))))))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) 
    {
        var_22 = ((/* implicit */unsigned long long int) (!(var_1)));
        var_23 = ((/* implicit */long long int) (+(var_9)));
    }
    for (unsigned long long int i_6 = 1; i_6 < 20; i_6 += 3) 
    {
        arr_20 [i_6] = ((((/* implicit */long long int) (((+(((/* implicit */int) (short)21848)))) ^ (-875740781)))) * (min((((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_6])) & (((/* implicit */int) (_Bool)1))))), (((arr_19 [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)59959))) : (var_12))))));
        var_24 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_6 - 1]))))) ? (((arr_19 [i_6 + 1]) ? (((/* implicit */int) (unsigned short)7386)) : (((/* implicit */int) arr_18 [i_6])))) : ((~(((/* implicit */int) (unsigned short)7386)))));
        /* LoopSeq 1 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_25 [i_7] = ((/* implicit */short) arr_21 [i_6 + 2] [i_7]);
            arr_26 [i_7] = ((/* implicit */unsigned short) ((4358976615586750027ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21388)))));
        }
    }
    var_25 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), ((short)20795)))), (((var_13) ^ (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */int) var_0)))))))));
    var_26 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551595ULL)) ? (((/* implicit */int) (unsigned char)47)) : (875740743)))) * (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_12)) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21848))))));
}
