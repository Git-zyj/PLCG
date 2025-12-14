/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176282
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
    var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4))))), (var_10)));
    var_15 = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)7231)), (1851207035)));
    var_16 = ((/* implicit */short) 4284473179066262311LL);
    var_17 = (_Bool)0;
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 1514601399U)) ? (((/* implicit */int) ((short) (unsigned short)58310))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))), (max((var_2), (((/* implicit */long long int) (unsigned short)24961))))));
        var_19 = ((/* implicit */unsigned short) (-(685628926)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((((/* implicit */_Bool) (short)-25495)) ? (var_1) : (((/* implicit */int) (short)16117)))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            arr_10 [(short)0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) var_8))));
            var_21 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)58070)) : (((/* implicit */int) (short)4980)))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                for (signed char i_4 = 3; i_4 < 20; i_4 += 3) 
                {
                    {
                        var_22 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (short)25495))) : (arr_5 [i_4 - 3] [i_4 - 2])));
                        arr_15 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_12 [i_4] [i_2] [i_2]);
                    }
                } 
            } 
        }
        var_23 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) min((arr_6 [(signed char)3] [(signed char)3]), (arr_14 [i_1] [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_11), (((/* implicit */short) (signed char)73)))))) : (max((((/* implicit */long long int) var_6)), (var_2)))))));
        var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)28)))) & (((/* implicit */int) arr_1 [i_1]))))) ? (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)26629)), (var_2)))), (min((((/* implicit */unsigned long long int) var_13)), (13106776616045059979ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_10), ((unsigned short)57471)))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (unsigned short)65514)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-3945)))))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
    {
        var_25 ^= ((/* implicit */unsigned int) ((((min((arr_5 [i_5] [i_5]), (((/* implicit */long long int) (unsigned char)23)))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_14 [i_5] [i_5])) : (((/* implicit */int) (_Bool)1))))))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)26649))))))));
        arr_20 [i_5] = (short)-11;
        arr_21 [i_5] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */unsigned int) arr_12 [i_5] [i_5] [i_5])) : (max((((/* implicit */unsigned int) (_Bool)1)), (3U))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_1 [i_5])))))));
        var_26 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(13106776616045059971ULL)))) ? (((((/* implicit */_Bool) (signed char)12)) ? (var_4) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) arr_12 [i_5] [i_5] [i_5])))), (((/* implicit */unsigned long long int) min((arr_19 [i_5]), (((/* implicit */signed char) (_Bool)1)))))));
    }
    /* vectorizable */
    for (signed char i_6 = 1; i_6 < 18; i_6 += 3) 
    {
        arr_25 [i_6] [10ULL] &= ((/* implicit */short) ((((/* implicit */int) var_0)) >> (((arr_16 [i_6 + 2]) + (4055022147000219794LL)))));
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_6])) ^ (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)2047)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)23734))))) : (arr_3 [i_6 + 1])));
        var_28 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-16)))))));
        arr_26 [i_6] = arr_11 [i_6] [i_6] [i_6 + 2];
    }
}
