/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100185
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_18 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)182)), (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (2019696470U))))))));
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((((~(((/* implicit */int) arr_1 [i_0 - 1])))) + (2147483647))) << (((7U) - (7U)))))) < (arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */signed char) min(((~(((/* implicit */int) var_8)))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212))) : (arr_0 [i_0 - 1])))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) 2699945401U))))), ((~(((((/* implicit */int) (unsigned char)203)) / (((/* implicit */int) (short)14204))))))));
            /* LoopSeq 2 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                var_19 = ((/* implicit */_Bool) arr_5 [i_0 - 1]);
                /* LoopNest 2 */
                for (unsigned short i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3 + 2] [i_3 + 2] [i_4] [i_4] [i_2])))))) * (min((arr_11 [i_3 + 2] [i_3 - 1] [i_4] [i_4] [i_2]), (arr_11 [i_3 + 2] [i_3] [i_4] [i_4] [i_2])))));
                            arr_14 [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0 - 1] [i_1] [i_0 - 1] [i_3 - 1] [i_0 - 1] [i_0 - 1] [i_4]))) % (min((((((/* implicit */_Bool) (short)-23802)) ? (3651513524U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)129))))), (((/* implicit */unsigned int) (unsigned short)65535))))));
                            arr_15 [i_2] = (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) (unsigned char)212)))) + (((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1] [i_2]))))));
                        }
                    } 
                } 
                arr_16 [i_2] = ((/* implicit */unsigned char) arr_11 [i_0 - 2] [i_0] [i_0 - 2] [i_1] [i_2]);
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    for (short i_6 = 2; i_6 < 10; i_6 += 3) 
                    {
                        {
                            arr_24 [i_2] [i_0] [i_1] [i_2] [i_5] [i_5] [i_6] = arr_23 [i_0] [i_0] [i_2];
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_20 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_6 - 1] [i_6 - 2])) / (((unsigned long long int) (unsigned char)21))))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)26208)) << (((((((/* implicit */int) (short)-335)) + (352))) - (13))))))));
                            arr_25 [i_0 + 1] [i_1] [i_2] [i_1] [i_6] [i_2] [i_0 - 1] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)53)) : (((((/* implicit */int) (unsigned char)51)) + (((/* implicit */int) (short)-27682)))))));
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)129)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182))) : (arr_10 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (((0ULL) ^ (((/* implicit */unsigned long long int) 1935791049U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_0 + 1] [i_0 + 1] [i_0] [i_0] [i_0])) - (((/* implicit */int) (unsigned char)255)))))))) || (((/* implicit */_Bool) min(((~(2120944786U))), (((/* implicit */unsigned int) min(((unsigned short)15937), (((/* implicit */unsigned short) (short)4285)))))))))))));
                            var_23 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) ? (((/* implicit */long long int) (((((_Bool)1) || (((/* implicit */_Bool) arr_13 [i_6] [i_6] [i_5])))) ? (((((((/* implicit */int) arr_8 [i_0 - 2] [i_0] [i_0] [i_0])) + (2147483647))) << (((arr_19 [i_0]) - (18064158354526400234ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) (signed char)110)))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)10))))), (((((/* implicit */long long int) ((/* implicit */int) var_6))) / (-3571938711619099127LL)))))));
                        }
                    } 
                } 
            }
            for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
            {
                arr_28 [i_0] [i_0] [i_0] [i_7] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (239369919562615545LL)))) ? (((((/* implicit */_Bool) arr_10 [i_7] [i_1] [i_7] [i_0] [i_0 + 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_7] [i_7]))) : (arr_19 [i_0 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_7] [i_0])))))));
                var_24 = ((/* implicit */unsigned int) (((~(-239369919562615545LL))) > (((/* implicit */long long int) arr_18 [i_1] [i_1] [i_1]))));
            }
            var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)1))));
        }
        arr_29 [i_0 - 1] |= ((unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0])), (var_14)))) + (arr_27 [i_0] [i_0] [i_0 - 1] [i_0 + 1])));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 3) 
    {
        var_26 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_8] [i_8] [i_8] [i_8]))) % (arr_10 [i_8] [i_8] [i_8] [(_Bool)0] [i_8] [i_8])));
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((arr_27 [i_8] [i_8] [i_8] [i_8]) + (((((/* implicit */_Bool) arr_20 [i_8] [i_8] [i_8] [i_8] [i_8])) ? (arr_27 [i_8] [i_8] [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_8] [i_8] [i_8]))))))))));
    }
}
