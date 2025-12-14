/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123310
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
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_3 [i_1 - 3])), (((((/* implicit */_Bool) 2048746346)) ? (var_0) : ((-(var_9)))))));
                arr_6 [i_0] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((var_9) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)163)))))), (var_4)));
                var_15 = ((/* implicit */unsigned short) var_8);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2048746339)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))) : (var_2)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)65)) : (((/* implicit */int) arr_1 [i_2]))))) ^ (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_1)))))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((((/* implicit */unsigned int) max((469762048), (((/* implicit */int) (short)31934))))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21331))) : ((~(var_6))))))))));
        arr_9 [i_2] = ((/* implicit */long long int) var_4);
        /* LoopSeq 1 */
        for (signed char i_3 = 2; i_3 < 9; i_3 += 4) 
        {
            var_18 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((var_2) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)39330)) : (((/* implicit */int) (_Bool)1)))))))) : ((-(2097024)))));
            /* LoopSeq 1 */
            for (signed char i_4 = 4; i_4 < 9; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_0)))))) || (((/* implicit */_Bool) var_1))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_13 [i_6] [i_4 + 1] [i_4 + 1])) : (((/* implicit */int) arr_11 [i_2] [i_4 + 1] [i_4 + 1]))))) ? (((/* implicit */unsigned int) ((int) var_8))) : (((unsigned int) var_11)))))));
                            arr_21 [i_2] [i_6] [i_4 - 4] [i_4 - 4] [i_4 - 4] [i_3] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!((_Bool)1)))), (arr_4 [i_6] [i_2]))))));
                        }
                    } 
                } 
                var_21 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)44))) & (var_2)))) ? ((~(((/* implicit */int) var_12)))) : ((~(((/* implicit */int) (signed char)127))))))) ? ((-(((/* implicit */int) var_12)))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))));
                arr_22 [i_2] [i_2] [i_3] [i_3] = ((/* implicit */signed char) 4294967295U);
                /* LoopNest 2 */
                for (unsigned char i_7 = 2; i_7 < 7; i_7 += 4) 
                {
                    for (unsigned int i_8 = 2; i_8 < 9; i_8 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */int) min((min((((/* implicit */long long int) var_11)), (var_5))), (((/* implicit */long long int) (+(((/* implicit */int) arr_27 [i_2] [(unsigned short)9] [i_2])))))));
                            var_23 = ((/* implicit */signed char) var_11);
                        }
                    } 
                } 
                var_24 = var_10;
            }
            /* LoopSeq 3 */
            for (int i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                var_25 -= ((/* implicit */signed char) 8036280701051787347ULL);
                arr_32 [i_2] [i_3] [i_2] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (signed char)81)))));
                var_26 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_9] [i_3 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_9] [i_2] [i_2] [i_2] [i_2] [i_2]))) : (var_5))))))), (((((/* implicit */int) (signed char)-108)) - (((((/* implicit */_Bool) (signed char)86)) ? (((/* implicit */int) arr_19 [i_2] [i_2])) : (((/* implicit */int) (short)-15))))))));
            }
            for (int i_10 = 1; i_10 < 9; i_10 += 2) 
            {
                arr_35 [i_2] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_29 [i_10 - 1] [i_10 - 1] [(signed char)0] [i_3]))));
                arr_36 [i_2] = ((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-3)));
            }
            for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3921740566248703626LL)) ? (((/* implicit */int) (unsigned short)26197)) : (var_3)))) ? (((/* implicit */int) arr_3 [i_11])) : (((((/* implicit */_Bool) arr_3 [i_3 - 2])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) arr_3 [i_2])))));
                arr_39 [i_11] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) arr_23 [i_11] [i_3 - 2] [i_2] [i_11] [i_2] [i_2]);
            }
        }
    }
}
