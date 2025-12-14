/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168072
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
    var_11 = var_10;
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            var_12 = ((/* implicit */unsigned int) (unsigned char)0);
            var_13 = ((/* implicit */signed char) max((((/* implicit */int) ((short) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (unsigned short)21271)) - (21243))))))), ((+(67108863)))));
            arr_8 [18] [(signed char)9] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))) ? (((/* implicit */int) ((arr_0 [i_1 - 3] [i_0]) < (((/* implicit */int) (short)32761))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)143)))))));
            /* LoopSeq 1 */
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 1) 
            {
                var_14 = ((/* implicit */unsigned char) ((_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) var_2))) | (5971711589268638968LL))))));
                var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_4 [i_2 + 1] [i_1 - 3])))) & (((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_1 - 3])) ? (arr_4 [i_2 - 1] [i_1 - 3]) : (arr_4 [i_2 - 2] [i_1 + 1])))));
            }
        }
        /* LoopNest 2 */
        for (unsigned short i_3 = 2; i_3 < 23; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        arr_18 [22LL] [(_Bool)1] [(short)6] [21U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((4715921910494731243ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [(_Bool)1] [(signed char)0])) ? (615417577310861566LL) : (((/* implicit */long long int) arr_17 [(unsigned short)4] [(_Bool)1] [(signed char)19])))))))) ? (min((((/* implicit */unsigned long long int) ((-67108863) < (((/* implicit */int) (unsigned short)12386))))), (arr_11 [i_3 - 1] [i_3 + 1]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)32714), ((unsigned short)0))))) & (((16401484634784134536ULL) & (12554074240547017480ULL)))))));
                        arr_19 [(_Bool)1] [19LL] [16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 12554074240547017497ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)32763)), ((unsigned short)58150))))) : (4294967295U))))));
                    }
                    arr_20 [21U] [(unsigned short)7] [16U] [11ULL] = ((/* implicit */int) (short)-32762);
                    var_16 = ((/* implicit */short) min((((((/* implicit */_Bool) 67108862)) ? (((/* implicit */unsigned int) 67108862)) : (arr_17 [i_3 + 1] [12U] [i_3 + 1]))), (arr_17 [i_3 - 2] [3U] [i_3 - 2])));
                }
            } 
        } 
        var_17 = min((((/* implicit */unsigned long long int) max((arr_14 [0] [i_0] [(_Bool)1]), (((/* implicit */unsigned char) (_Bool)1))))), (max((((/* implicit */unsigned long long int) -2797541470508707577LL)), (arr_11 [i_0] [i_0]))));
    }
    var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)15255)) % (((/* implicit */int) (unsigned short)12409))))), (((((/* implicit */_Bool) (short)32640)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_7)) < (var_3)))))))));
    /* LoopNest 3 */
    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
    {
        for (short i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            for (long long int i_8 = 3; i_8 < 11; i_8 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        var_19 |= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [12LL] [21U] [(_Bool)1]))) & (-8923018923967105417LL)))) ? (((/* implicit */unsigned long long int) arr_15 [i_6] [(_Bool)1] [i_6] [22U])) : (((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */unsigned long long int) 288230376151711743LL)) : (arr_2 [(short)3] [18ULL])))))));
                        var_20 ^= ((/* implicit */unsigned short) max((((((/* implicit */long long int) ((/* implicit */int) arr_29 [8U] [i_8 - 3] [i_8 - 2] [9LL]))) & (((((/* implicit */_Bool) (short)-32759)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) arr_4 [(_Bool)1] [20])))))), (((((/* implicit */_Bool) arr_29 [(unsigned short)6] [i_8 - 3] [9LL] [8U])) ? (((/* implicit */long long int) ((((/* implicit */int) var_10)) - (((/* implicit */int) (short)-32761))))) : (min((-9223372036854775796LL), (((/* implicit */long long int) arr_0 [17ULL] [1LL]))))))));
                        var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((max((arr_3 [16U]), (((/* implicit */long long int) arr_9 [20ULL] [(signed char)23])))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3330276333U)) || ((_Bool)1)))))))));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3061958015291401637ULL)) ? (((/* implicit */int) min((arr_26 [(unsigned short)5] [8]), ((unsigned short)43219)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-23849)))))))) || (((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) arr_13 [i_8 - 2] [i_8 - 1] [i_8 - 2])))))))));
                        var_23 = ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) -5064644398448186303LL)) ? (var_8) : (((/* implicit */long long int) arr_10 [(unsigned short)5] [(_Bool)1])))) & (((/* implicit */long long int) ((((((/* implicit */int) var_10)) + (2147483647))) >> (((-1727206748502739200LL) + (1727206748502739211LL)))))))), (((/* implicit */long long int) (-((((_Bool)0) ? (((/* implicit */int) (unsigned short)15919)) : (arr_10 [(short)22] [2]))))))));
                    }
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) var_2))) % (((/* implicit */int) ((2886330535U) < (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)11689))))))))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)248)))), (var_6)))));
}
