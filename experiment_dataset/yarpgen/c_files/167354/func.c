/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167354
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167354 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167354
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
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) var_4);
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                arr_8 [i_0] [6LL] [i_0] [i_0] &= (_Bool)1;
                var_10 += ((/* implicit */long long int) var_8);
                var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */int) var_8)) & (min((((var_0) - (((/* implicit */int) (signed char)-63)))), (((/* implicit */int) (unsigned short)65535)))))))));
            }
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                var_12 = ((/* implicit */signed char) (((~(((6635419636338696901ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [(unsigned short)7]))))))) & (((min((11811324437370854715ULL), (((/* implicit */unsigned long long int) var_2)))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32527)) && (((/* implicit */_Bool) 6635419636338696900ULL))))))))));
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (((arr_6 [i_0] [i_0 + 1] [i_0 - 3] [10LL]) & (arr_5 [i_0]))))))));
            }
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                arr_15 [i_4] = ((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 - 2] [i_1]))) & (-7231508119230861507LL))), (((/* implicit */long long int) max((((/* implicit */int) (signed char)-51)), (var_4))))));
                var_14 = ((/* implicit */unsigned long long int) ((var_3) ? (((arr_12 [i_0 - 3] [i_4] [i_4 - 1]) - (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (var_4)))))) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
                var_15 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)52))));
                var_16 -= ((/* implicit */_Bool) 988392362U);
            }
            arr_16 [i_0] [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
        }
        for (int i_5 = 2; i_5 < 12; i_5 += 1) 
        {
            var_17 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)240)), (((11811324437370854695ULL) | (arr_2 [i_0 - 3])))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (short)12490))));
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 15; i_6 += 1) 
            {
                var_18 = ((/* implicit */unsigned char) min((var_18), ((unsigned char)255)));
                var_19 = ((/* implicit */int) ((max((((/* implicit */long long int) var_3)), (arr_20 [i_6] [i_5 - 1]))) * (((((/* implicit */long long int) ((/* implicit */int) (signed char)-36))) / (arr_20 [i_6] [i_5 + 1])))));
                arr_22 [i_6] = ((/* implicit */signed char) (~(((((/* implicit */int) arr_0 [i_0 - 1])) + (((/* implicit */int) arr_21 [i_6] [i_5] [i_0 - 3]))))));
                var_20 = ((/* implicit */unsigned long long int) var_7);
            }
        }
        var_21 = ((/* implicit */short) var_4);
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            arr_25 [4LL] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0 + 1])) & (((/* implicit */int) arr_10 [i_0 - 1]))))) & (((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0 - 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26797)))))));
            arr_26 [i_0] = ((/* implicit */int) ((((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) & (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [6LL] [i_0 - 1] [i_0 - 1])) & (((/* implicit */int) arr_21 [14LL] [i_0 + 1] [i_0 - 2])))))));
        }
        var_22 = ((/* implicit */unsigned short) (((((+(2097151LL))) & (((/* implicit */long long int) ((/* implicit */int) max((var_3), (var_3))))))) & (((/* implicit */long long int) min((max((((/* implicit */unsigned int) var_0)), (4294967293U))), (((/* implicit */unsigned int) var_4)))))));
    }
    var_23 = ((/* implicit */short) ((((/* implicit */int) var_8)) & (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)26816)) : (((/* implicit */int) (unsigned char)65))))))));
}
