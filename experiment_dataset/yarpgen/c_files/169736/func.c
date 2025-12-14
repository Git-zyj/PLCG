/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169736
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
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_9))));
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((int) ((((/* implicit */int) (short)-1)) & (((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            arr_7 [i_0] [i_0] |= ((/* implicit */short) max((min(((~(1503296836U))), (((/* implicit */unsigned int) min((((/* implicit */int) arr_3 [i_0])), (2147483647)))))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) >> (((2235228840U) - (2235228825U)))))) ? (arr_6 [i_0 - 4] [i_1 + 1] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 - 3]))))))))));
            var_19 |= (+(((/* implicit */int) ((((((/* implicit */_Bool) (signed char)127)) ? (200638392) : (0))) != (((/* implicit */int) ((unsigned short) arr_4 [i_0])))))));
            var_20 = ((/* implicit */unsigned int) var_3);
        }
        for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            arr_10 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_10) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16054))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) arr_1 [i_0])) != (2235228840U))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) / (4294967295U)))))) || (((/* implicit */_Bool) var_14))));
            arr_11 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 29U)) ? (((/* implicit */unsigned long long int) (~(((40U) >> (((((/* implicit */int) (signed char)34)) - (4)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2]))) ^ ((~(18446744073709551615ULL)))))));
        }
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_0 [i_0]))));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
            {
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (arr_13 [i_0 - 1])))) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) arr_0 [i_0])) * (((((/* implicit */int) arr_17 [i_0] [i_3] [i_3])) | (((/* implicit */int) var_11)))))))))));
                var_23 |= ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (-1507753331)))) == (((((/* implicit */_Bool) 4294967295U)) ? (-1884049275) : (((/* implicit */int) (signed char)35)))))) ? (((/* implicit */int) ((_Bool) arr_0 [i_3]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_4])) || (((/* implicit */_Bool) arr_0 [i_0 + 1])))))));
            }
            for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
            {
                arr_21 [i_5] [i_3] |= ((/* implicit */unsigned int) arr_4 [i_0 - 3]);
                arr_22 [i_0] [(unsigned short)6] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_0] [(unsigned short)13] [i_0 - 2] [i_0 - 2])) ? (((/* implicit */int) max((arr_17 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) arr_2 [i_0 + 1]))))) : (((/* implicit */int) var_0))));
                /* LoopSeq 1 */
                for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    var_24 |= ((/* implicit */_Bool) min((((((/* implicit */int) var_14)) + ((((_Bool)1) ? (((/* implicit */int) arr_20 [i_0] [i_3] [i_3])) : (((/* implicit */int) var_6)))))), (((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_3] [12U] [i_6])) ? (((/* implicit */int) arr_16 [i_0] [(signed char)3] [i_5] [i_6])) : (((/* implicit */int) var_14)))) != ((~(((/* implicit */int) arr_2 [i_5])))))))));
                    var_25 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_9 [i_0 + 1])) ? (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) arr_2 [i_3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1507753331))))))));
                    var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) arr_16 [i_0] [i_3] [i_5] [i_5])))));
                    arr_25 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_23 [i_0 - 4])) ? (((/* implicit */int) arr_8 [i_6] [i_5])) : (arr_23 [i_0 + 1]))), (((/* implicit */int) ((signed char) var_8)))));
                }
                var_27 |= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_0] [i_3] [i_5])) != (((/* implicit */int) arr_20 [i_0] [i_3] [i_3]))))), (var_13))) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_0 - 3])) * (((/* implicit */int) arr_13 [i_0])))))));
                var_28 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)34143)) | (((/* implicit */int) (short)-27793))));
            }
        }
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 18; i_7 += 3) /* same iter space */
        {
            arr_29 [i_0] [i_7] [i_0 - 4] |= ((/* implicit */unsigned int) (_Bool)1);
            var_29 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (signed char)-101)) != (1507753330)))) < (((/* implicit */int) arr_24 [i_0 - 2] [i_0 - 3]))));
        }
        arr_30 [i_0] = ((/* implicit */short) arr_13 [i_0]);
    }
    var_30 |= ((/* implicit */unsigned short) (_Bool)1);
    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) var_4))));
}
