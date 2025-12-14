/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169788
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
    var_11 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (((var_0) / (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) (!(arr_0 [i_2])));
                    var_13 = ((/* implicit */short) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)41402)));
                    var_14 = ((/* implicit */short) min((((/* implicit */long long int) ((unsigned short) arr_0 [i_0]))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 + 3] [i_0 + 3])) ? (((/* implicit */long long int) var_2)) : (var_0)))));
                    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0]))))))));
                    var_16 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)93))) * (arr_4 [i_0] [i_1] [i_1] [(_Bool)1]))))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0 - 2])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_3 = 2; i_3 < 10; i_3 += 3) 
    {
        var_17 = ((((/* implicit */long long int) ((((/* implicit */int) (short)21941)) % (((/* implicit */int) (unsigned char)13))))) ^ (((long long int) (short)11283)));
        /* LoopSeq 2 */
        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            arr_12 [i_4] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((0LL), (var_0))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_9)))))))) ? (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)38146))))), (((((/* implicit */_Bool) -1)) ? (arr_4 [i_3] [i_3 + 2] [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11283)))));
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (max(((+(((/* implicit */int) var_10)))), (((/* implicit */int) (unsigned short)16384)))) : (((((/* implicit */int) (short)-11297)) % (((/* implicit */int) (unsigned short)61849))))));
        }
        /* vectorizable */
        for (unsigned short i_5 = 2; i_5 < 12; i_5 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_6 [i_5 + 1] [i_3 + 1])) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (8646911284551352320LL)))));
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    {
                        arr_21 [i_5] [i_3] [i_5 + 1] [i_5] = ((/* implicit */long long int) var_9);
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_7] [i_3 + 2]))) : (arr_14 [i_3] [i_3] [i_3]))))))));
                        var_21 = ((/* implicit */long long int) (short)11297);
                        arr_22 [i_7] [i_7] [i_5] [i_5] [i_5] [i_3] = ((/* implicit */int) (short)11283);
                        var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 18446744073709551613ULL)) ? (arr_14 [i_5] [i_6] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11283))))) | (((/* implicit */unsigned int) arr_10 [i_5 + 1]))));
                    }
                } 
            } 
        }
        var_23 ^= ((/* implicit */unsigned short) var_3);
        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) -1047651650128131809LL)) && (((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3]))));
    }
    for (int i_8 = 0; i_8 < 17; i_8 += 1) 
    {
        arr_26 [i_8] = ((/* implicit */unsigned char) ((unsigned long long int) 13));
        var_25 = ((/* implicit */int) min((((/* implicit */long long int) (~(((/* implicit */int) var_6))))), (max((min((((/* implicit */long long int) -17)), (arr_25 [i_8]))), (((/* implicit */long long int) ((-6) != (592601781))))))));
        var_26 = ((int) ((((/* implicit */int) arr_24 [i_8])) - (((/* implicit */int) arr_24 [i_8]))));
    }
    var_27 = ((/* implicit */unsigned int) var_3);
    var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)37768)))))));
}
