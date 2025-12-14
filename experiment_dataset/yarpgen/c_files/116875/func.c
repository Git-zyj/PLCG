/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116875
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
    var_18 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-7)), (var_2)))) ? (((/* implicit */int) ((signed char) (signed char)-7))) : (((((/* implicit */int) (signed char)6)) * (((/* implicit */int) var_11))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_1 [i_0])))) & (((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_1 [i_0])) - (36238)))))));
        var_20 = ((/* implicit */unsigned int) (signed char)7);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) arr_3 [i_0] [(signed char)4]);
            var_22 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1] [i_0]))));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)7)) ? (((((/* implicit */_Bool) (short)22213)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7))) : (162330628U))) : (4132636676U)));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)0)) >> (((arr_4 [i_0]) - (2984305247U))))))));
            arr_7 [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) (unsigned char)212))));
        }
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
        {
            var_25 = (-(max((arr_4 [i_0]), (arr_5 [i_3] [(short)14] [i_0]))));
            var_26 = ((/* implicit */short) (signed char)11);
            /* LoopSeq 3 */
            for (unsigned short i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                var_27 = ((/* implicit */unsigned short) ((((unsigned int) max(((unsigned short)16949), (arr_2 [i_0])))) == (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_8 [i_0] [i_3])))))));
                arr_12 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) arr_2 [i_0])))), ((!(((/* implicit */_Bool) arr_2 [i_4]))))));
                var_28 |= max((((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_4]))) == (arr_0 [i_0] [i_3]))))))), (1677894406U));
                arr_13 [i_4] [i_3] [i_3] [15U] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((unsigned short) (unsigned short)25301))), (max((((((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))) : (1522708257U))), (((/* implicit */unsigned int) ((signed char) (_Bool)0)))))));
            }
            for (unsigned short i_5 = 2; i_5 < 23; i_5 += 1) 
            {
                arr_17 [i_0] [i_0] [12ULL] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 4685440263512284713ULL)) || (((/* implicit */_Bool) 162330628U)))), ((((!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_5])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (2362632430105183208ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40452))))))))));
                var_29 = ((/* implicit */short) (~(max(((((_Bool)1) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (signed char)-12)))), ((+(((/* implicit */int) arr_15 [i_0] [i_3] [i_3] [i_3]))))))));
                var_30 = ((/* implicit */short) arr_1 [i_0]);
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    var_31 = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) max(((short)-30140), (arr_11 [i_0] [i_0])))))), (((/* implicit */int) (unsigned short)48863))));
                    arr_22 [i_0] [(short)17] [i_7] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (short)-8591)) ? (2496470344782119768ULL) : (4250014047995121256ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_15 [i_0] [i_0] [i_7] [i_7])), ((short)-12835))))))) ? (max((((/* implicit */unsigned long long int) arr_5 [i_3] [i_3] [18U])), (arr_10 [i_0] [i_0] [i_7] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20411)))));
                    arr_23 [i_7] [i_0] = ((/* implicit */unsigned char) arr_21 [i_0] [i_3] [i_3] [i_6] [i_7]);
                    arr_24 [i_7] [i_6] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15950273728927431847ULL)) && (((((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_0])) >= (((/* implicit */int) (_Bool)1))))));
                }
                arr_25 [i_6] [i_6] [i_3] [i_0] = ((/* implicit */short) (~(arr_0 [i_0] [i_0])));
            }
            var_32 = ((/* implicit */unsigned char) (short)14798);
        }
    }
    var_33 = ((/* implicit */unsigned long long int) ((unsigned short) var_3));
}
