/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158019
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
    var_11 &= ((/* implicit */unsigned int) var_1);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((2716117034343649961ULL), (((/* implicit */unsigned long long int) arr_1 [i_0 - 3]))))) ? (((/* implicit */int) (short)10966)) : (((int) (signed char)-1))));
        var_12 = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)-1)) > (((/* implicit */int) (!(((/* implicit */_Bool) -8969820323774458554LL))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 2]))))) : (((/* implicit */int) (!(((((/* implicit */int) arr_0 [i_0])) < (((/* implicit */int) var_1)))))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (short i_3 = 1; i_3 < 22; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */long long int) ((signed char) (signed char)100));
                        var_14 = ((/* implicit */signed char) ((max((arr_9 [15ULL] [i_1] [i_1] [24U]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -4112205945916649236LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 4] [i_0 - 1])) || (((/* implicit */_Bool) arr_10 [i_3] [i_3 - 1] [i_0 - 2] [i_0 - 3]))))))));
                        var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) min(((-(((/* implicit */int) (unsigned short)23881)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_0 - 1])) || (((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 + 1]))))))))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            {
                var_16 ^= var_4;
                arr_19 [i_4] [i_4] [i_4] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        for (short i_7 = 2; i_7 < 13; i_7 += 4) 
        {
            {
                var_17 ^= ((/* implicit */short) min((max((((/* implicit */unsigned int) (signed char)(-127 - 1))), (1891747648U))), (((/* implicit */unsigned int) arr_0 [i_6]))));
                /* LoopSeq 1 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_18 = ((/* implicit */unsigned int) max((-8969820323774458554LL), (((/* implicit */long long int) max(((unsigned short)23881), (((/* implicit */unsigned short) arr_4 [i_7 + 1])))))));
                    arr_26 [i_6] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (+(arr_22 [i_6] [i_7] [i_8])))) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_10 [i_6] [i_7] [i_8] [i_8])) != (arr_9 [i_6] [i_6] [i_8] [i_6]))))))) : (((((/* implicit */_Bool) arr_21 [i_7 + 1] [i_7])) ? (arr_21 [i_7 + 2] [i_7]) : (arr_21 [i_7 - 2] [i_6])))));
                    var_19 *= ((/* implicit */short) ((2964869809718813670ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10966)))));
                    var_20 += ((/* implicit */int) var_1);
                }
                arr_27 [i_7] = ((/* implicit */long long int) (_Bool)1);
                var_21 ^= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) == (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-10763))) != (arr_22 [i_6] [(signed char)3] [(short)14]))))) % (arr_20 [i_6])))));
                var_22 = ((/* implicit */unsigned char) arr_25 [i_6] [i_7] [5ULL] [i_7 + 2]);
            }
        } 
    } 
}
