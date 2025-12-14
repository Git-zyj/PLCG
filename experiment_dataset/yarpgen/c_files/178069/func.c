/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178069
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_3 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(short)3] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) (_Bool)0))))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? ((((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) arr_2 [9]))))))) ? (((((/* implicit */_Bool) (unsigned short)480)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) : (((arr_0 [i_0] [i_0]) & (((/* implicit */int) var_12))))));
    }
    var_20 = ((/* implicit */signed char) max((((((/* implicit */int) var_4)) | (var_8))), (((/* implicit */int) ((6355606902351511576ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) 20ULL)))))))))));
    /* LoopNest 2 */
    for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    for (int i_4 = 1; i_4 < 20; i_4 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned char) (signed char)22);
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (var_14)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)32768)) ^ (((/* implicit */int) (unsigned short)7))))) : (((((/* implicit */_Bool) arr_1 [i_2] [i_3])) ? (6355606902351511573ULL) : (12091137171358040039ULL)))))) ? (((((((/* implicit */_Bool) var_12)) ? (15138177887585602150ULL) : (var_17))) * (((((/* implicit */_Bool) (short)19397)) ? (((/* implicit */unsigned long long int) arr_12 [i_1])) : (405331978261437392ULL))))) : (12091137171358040042ULL)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 1; i_5 < 19; i_5 += 3) 
                {
                    for (signed char i_6 = 3; i_6 < 18; i_6 += 4) 
                    {
                        {
                            var_23 -= ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) var_16)))) >= (min((((/* implicit */int) var_10)), (-266026693))))) ? (((((/* implicit */int) (signed char)63)) ^ (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1905002634)))))));
                            var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)-19398))))) ? (arr_17 [i_1] [(signed char)3] [(signed char)3]) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-19397)) * (((/* implicit */int) (unsigned short)0)))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned char) var_3))))) && (((/* implicit */_Bool) 6780529839652134558LL))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (9223372036854775807LL))) != (((/* implicit */long long int) ((/* implicit */int) ((short) var_16)))))))));
                        }
                    } 
                } 
                arr_23 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)160))) : (7885812422618069339LL)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7012))) > (4503599627370495LL)))))));
                arr_24 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_6 [i_1])))) & (arr_11 [i_2 + 1] [8LL] [i_1])))));
                /* LoopSeq 3 */
                for (signed char i_7 = 3; i_7 < 18; i_7 += 1) /* same iter space */
                {
                    arr_27 [i_1] [i_1] = ((/* implicit */long long int) min(((+(12091137171358040039ULL))), ((+(((((/* implicit */unsigned long long int) 0LL)) - (arr_6 [i_7 - 1])))))));
                    arr_28 [i_1] [i_2] [i_7] [i_7 - 2] = ((/* implicit */_Bool) 7133520895038426238LL);
                }
                /* vectorizable */
                for (signed char i_8 = 3; i_8 < 18; i_8 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((long long int) arr_20 [i_1] [i_1] [i_1] [i_8 - 2])))));
                    var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)2515)) > (((/* implicit */int) arr_31 [i_1] [i_1]))));
                    arr_32 [i_1] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_8 - 2] [i_2 + 1] [i_8] [i_1] [i_2])) ? (12091137171358040042ULL) : (((/* implicit */unsigned long long int) var_8))));
                }
                for (long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    var_27 &= ((min((((/* implicit */unsigned long long int) ((arr_8 [i_2]) ? (((/* implicit */int) (short)-4574)) : ((-2147483647 - 1))))), (((var_19) << (((arr_21 [i_1] [i_2] [i_9] [i_1] [i_2]) + (300789754784624084LL))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) var_16)))))));
                    arr_35 [i_1] [i_2] [i_2] [i_9] = ((/* implicit */long long int) var_14);
                    arr_36 [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) 6516634303066206298LL)) ? (1016866085) : (var_8))) : (((/* implicit */int) ((unsigned short) arr_14 [i_1])))))), ((~(((var_19) << (((-979732017900745019LL) + (979732017900745076LL)))))))));
                    var_28 = ((/* implicit */_Bool) (unsigned short)6413);
                }
            }
        } 
    } 
}
