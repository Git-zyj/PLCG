/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124236
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
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    var_11 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_1]);
                    var_12 = ((((/* implicit */int) ((((/* implicit */_Bool) 312962357)) && (((/* implicit */_Bool) -312962349))))) ^ (((/* implicit */int) var_7)));
                }
                arr_10 [i_0] [i_0] = ((/* implicit */short) ((arr_9 [i_2] [i_0] [i_0]) * (arr_9 [i_0] [i_0] [i_0])));
            }
            var_13 += ((/* implicit */unsigned short) ((((/* implicit */int) (!(var_1)))) << (((((/* implicit */int) (unsigned char)255)) - (224)))));
            arr_11 [i_0] [i_1] = ((/* implicit */unsigned char) var_8);
        }
        for (signed char i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (unsigned short i_5 = 1; i_5 < 21; i_5 += 2) 
            {
                var_14 += ((/* implicit */unsigned int) ((((((var_3) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))) + (((/* implicit */int) arr_3 [i_4])))) / (min((-312962349), (312962365)))));
                var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_8)), (max((var_5), (((/* implicit */unsigned long long int) arr_4 [i_5 - 1] [i_0] [i_5]))))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) -312962357);
                arr_19 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(var_8)))), (arr_7 [i_0] [i_4])));
                arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)56470)) != (((/* implicit */int) (unsigned char)2))));
            }
            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
            {
                var_16 = ((/* implicit */unsigned int) 1990832733191053986ULL);
                arr_23 [i_0] [i_7] = ((/* implicit */unsigned short) ((unsigned long long int) arr_7 [i_0] [i_4]));
            }
            for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */int) (unsigned char)2);
                arr_28 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_27 [i_0]) >= (((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0]))))) / (((312962334) % (-312962349)))));
                var_18 = (-(max((1024U), (((/* implicit */unsigned int) arr_12 [i_0] [i_0])))));
                var_19 = ((/* implicit */_Bool) var_7);
                var_20 = ((/* implicit */int) (unsigned short)56764);
            }
            var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (arr_25 [i_0] [i_0] [i_4] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_4] [i_4]))))) - (((arr_25 [i_0] [i_4] [i_0] [i_0]) & (((/* implicit */unsigned long long int) -1415834194))))));
            arr_29 [i_0] [i_0] = ((/* implicit */signed char) -312962334);
            var_22 = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)127)) : (162081286))), (((/* implicit */int) min((var_3), (var_1))))));
        }
        var_23 = ((/* implicit */_Bool) ((min((var_4), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)2)) ? (162081286) : (-826390821))) > (((/* implicit */int) var_1))))))));
        var_24 = (+(((10226111213301753230ULL) * (((/* implicit */unsigned long long int) 493848771U)))));
    }
    var_25 = ((/* implicit */unsigned char) ((((var_9) << (((((/* implicit */int) ((unsigned char) var_6))) - (71))))) > (((/* implicit */unsigned int) (+(((/* implicit */int) var_3)))))));
    var_26 = ((/* implicit */unsigned char) var_9);
    var_27 = ((/* implicit */signed char) max((min(((+(((/* implicit */int) (unsigned char)0)))), (((/* implicit */int) var_10)))), (((((/* implicit */int) (unsigned char)24)) | (((((/* implicit */int) var_7)) + (((/* implicit */int) (unsigned char)192))))))));
}
