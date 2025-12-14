/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124436
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
    var_14 = ((/* implicit */_Bool) var_10);
    var_15 |= var_4;
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_3 [i_0] [i_0])))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_2 [i_0])))))));
        var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (arr_1 [10ULL] [i_0])));
        var_17 -= ((/* implicit */unsigned short) min((var_2), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((8471227407984440004ULL), (((/* implicit */unsigned long long int) (unsigned char)64))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))))))));
        arr_5 [i_0] = ((/* implicit */_Bool) max((((arr_2 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) : (max((arr_1 [i_0] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_2 [i_0])))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        var_18 *= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16256))) != (144115119356379136ULL))) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_1 [(_Bool)1] [(_Bool)1])))))))));
    }
    for (short i_1 = 1; i_1 < 6; i_1 += 1) 
    {
        arr_8 [i_1] [i_1 - 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_1 + 2])) ? (((/* implicit */unsigned long long int) arr_0 [i_1 + 3])) : (arr_1 [i_1 - 1] [i_1 + 3]))) >= (min((((/* implicit */unsigned long long int) arr_0 [i_1 - 1])), (arr_1 [i_1 + 3] [i_1 + 3])))));
        var_19 -= ((/* implicit */unsigned short) (((!((_Bool)1))) ? ((+(((/* implicit */int) ((((/* implicit */_Bool) (short)-16255)) || (var_11)))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((var_5), (arr_3 [i_1] [(short)2])))) || (var_11))))));
        var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) var_9))))) || (((/* implicit */_Bool) ((unsigned char) arr_2 [i_1]))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) var_6);
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), ((+(((/* implicit */int) (short)1492))))));
            var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_1 [i_2] [i_3 + 3])))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2] [i_3]))) < (arr_0 [i_3 + 2])))), ((+(var_4))))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            var_23 ^= (+(max((var_2), (arr_1 [i_4] [i_4]))));
            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2] [i_2] [i_2]))) * (2989237653U)))) ? (((/* implicit */int) ((short) 13996261089274830940ULL))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)231)) >= (((/* implicit */int) min(((short)-16257), (((/* implicit */short) var_7)))))))))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            var_25 -= (short)22074;
            var_26 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2]))) - (arr_0 [i_2])));
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_6] [16ULL]))))), (((var_13) - (arr_15 [i_6] [i_6])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_28 = ((unsigned long long int) 2798507324U);
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 0; i_10 < 18; i_10 += 1) 
                        {
                            arr_34 [i_6] [i_9] [i_6] [i_6] [i_6] = ((/* implicit */short) arr_33 [i_6] [i_7] [i_8] [i_7]);
                            var_29 |= ((/* implicit */short) arr_0 [i_6]);
                        }
                        var_30 = ((/* implicit */unsigned short) var_5);
                        var_31 *= ((unsigned char) arr_27 [i_9] [i_7] [i_6]);
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned short i_11 = 0; i_11 < 18; i_11 += 2) 
            {
                var_32 = ((/* implicit */_Bool) arr_30 [10U] [i_11] [i_11] [i_7] [i_7] [i_6]);
                arr_39 [i_6] [i_7] [i_11] = ((1ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_27 [4ULL] [i_7] [4ULL]))))));
            }
            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_6] [i_6]) << (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_6] [i_6] [i_6]))) : (arr_21 [i_6])));
            var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_7] [i_7] [(_Bool)1] [i_7] [(unsigned short)8] [i_7] [i_7]))) : (var_6)))) ? (arr_15 [i_7] [i_6]) : (var_6)));
        }
    }
}
