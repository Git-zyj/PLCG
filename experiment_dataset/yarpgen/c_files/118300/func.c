/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118300
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (arr_0 [i_0 - 3]) : (arr_0 [i_0 + 3])));
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 2])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_11))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])) ? (arr_1 [i_0] [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 11; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_6))))));
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1])) ? (arr_3 [i_1 - 2] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
    }
    /* LoopSeq 2 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 - 1])) ? (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (2147483647) : (((/* implicit */int) (unsigned short)10028)))))) : (((((/* implicit */_Bool) arr_8 [i_2 - 1])) ? (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) arr_6 [i_2] [i_2])))) : (((((/* implicit */int) var_1)) + (((/* implicit */int) var_8))))))));
        var_18 = ((/* implicit */unsigned int) max((((var_12) >> (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_0))));
        arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_7 [i_2]), (((/* implicit */unsigned long long int) var_3))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65523))))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-98))))) : (((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-78)))))))));
    }
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_20 [i_3] [i_5] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((-(var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_3])) ? (arr_8 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5]))))))))) ? (arr_0 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 314931650359520317ULL)) ? (((/* implicit */int) var_2)) : (2147483647))))))));
                        var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 1213448366U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_3)) + (2147483647))) >> (((((/* implicit */int) var_5)) - (14273)))))))))) : (0ULL)));
                        arr_21 [i_3] [i_3] [i_3] [i_3] = arr_1 [i_3] [i_3];
                        arr_22 [i_3] [i_4] [i_5] [i_3] = ((/* implicit */_Bool) 3028616584U);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            arr_25 [i_3] = ((/* implicit */_Bool) (signed char)-25);
            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) + (((((/* implicit */_Bool) arr_23 [i_3] [i_3] [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_3]))))));
            /* LoopSeq 2 */
            for (unsigned int i_8 = 3; i_8 < 9; i_8 += 2) 
            {
                arr_30 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_3]))) : (827521469U)))))));
                arr_31 [10U] [i_7] &= ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_3]))))) ? (6648802459393708066ULL) : (3ULL))), (((/* implicit */unsigned long long int) (_Bool)1))));
            }
            /* vectorizable */
            for (unsigned int i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)71)) ? ((~(1LL))) : (((/* implicit */long long int) 1290158586U))));
                var_22 &= ((/* implicit */int) ((arr_24 [i_9]) ? (-6862734892331326868LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))));
            }
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_38 [i_3] [(unsigned short)4] &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (arr_15 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-47))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_8 [i_3])))))))) : (638174510U)));
            arr_39 [i_3] [i_10] = ((/* implicit */int) ((min((3501503879U), (((/* implicit */unsigned int) (_Bool)1)))) / (((/* implicit */unsigned int) ((/* implicit */int) max((arr_23 [i_3] [i_10] [i_3]), (arr_23 [i_3] [(_Bool)1] [i_10])))))));
            var_23 ^= ((/* implicit */signed char) 6ULL);
        }
        arr_40 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_33 [i_3] [i_3] [i_3] [i_3])) ? (min(((-(-223585241))), (((/* implicit */int) (!(arr_29 [i_3] [i_3] [i_3])))))) : (((max((var_12), (((/* implicit */int) arr_13 [i_3])))) & ((-(((/* implicit */int) arr_6 [i_3] [i_3]))))))));
    }
    var_24 = ((/* implicit */unsigned long long int) var_5);
}
