/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12491
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
    var_12 = ((/* implicit */_Bool) ((unsigned char) max((((/* implicit */short) ((_Bool) var_9))), (((short) var_4)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
            arr_6 [i_0] = ((/* implicit */unsigned int) ((var_4) * (((/* implicit */int) arr_1 [i_0]))));
        }
        for (short i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            arr_9 [(unsigned char)8] [(unsigned char)8] |= ((/* implicit */short) ((signed char) var_2));
            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) 2950920709996366430LL))));
        }
        arr_10 [i_0] = ((/* implicit */unsigned long long int) ((int) var_9));
    }
    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        var_14 ^= ((/* implicit */short) ((unsigned char) 6584096927579075269LL));
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            var_15 += ((/* implicit */_Bool) min((((((/* implicit */int) arr_2 [i_3] [i_4])) | (((/* implicit */int) arr_2 [i_4] [i_4])))), (max((((((/* implicit */_Bool) var_3)) ? (2147483647) : (((/* implicit */int) var_0)))), (((/* implicit */int) arr_1 [i_4]))))));
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (+(min((arr_7 [i_3] [i_3] [i_3]), (((/* implicit */long long int) var_5)))))))));
            arr_16 [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(arr_15 [i_4] [i_3])))) / (((((/* implicit */_Bool) var_0)) ? (2051797143) : (((/* implicit */int) arr_15 [i_3] [i_4]))))));
        }
        for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
        {
            /* LoopSeq 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_7 = 2; i_7 < 11; i_7 += 4) 
                {
                    arr_25 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_7 + 1] [i_6] [(_Bool)1] [(_Bool)1])) ? (((arr_8 [i_6]) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6]))) : (-6584096927579075257LL))) : (arr_7 [i_5] [i_6] [i_7 + 1])))), (((unsigned long long int) max((((/* implicit */long long int) arr_24 [i_3] [i_3] [i_3])), (6584096927579075263LL))))));
                    arr_26 [i_6] [i_7] = ((unsigned char) ((((/* implicit */_Bool) (signed char)8)) ? (arr_19 [i_7 + 1] [i_6] [i_6] [i_7 + 1]) : (arr_19 [i_7 + 1] [i_6] [i_6] [i_7 + 1])));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((((((/* implicit */_Bool) arr_21 [i_3] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_22 [i_7] [i_5] [i_5] [(signed char)8] [i_7 - 2] [i_7])) : (((/* implicit */int) arr_22 [i_7] [i_7] [i_6] [i_7] [i_7 - 2] [i_7])))), (((/* implicit */int) ((_Bool) arr_22 [i_7] [i_7] [i_3] [i_7] [i_7 - 2] [i_3]))))))));
                    arr_27 [i_3] [i_3] [i_3] [i_6] [i_6] = ((/* implicit */unsigned int) arr_17 [i_7] [i_6] [i_5]);
                }
                arr_28 [i_3] [i_6] [i_6] = ((/* implicit */_Bool) arr_12 [i_3] [i_6]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    arr_31 [i_8] [i_6] [i_6] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_8] [i_5] [i_3])) ? (arr_0 [i_5] [i_3]) : (arr_7 [i_6] [i_5] [i_6])));
                    arr_32 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_8] [i_6])) ? (2950920709996366430LL) : (arr_0 [i_3] [12ULL])));
                    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2565841985U)) ? (arr_24 [i_3] [i_3] [i_3]) : (arr_24 [i_8] [i_6] [i_5])));
                }
                var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
            }
            /* vectorizable */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_37 [i_5] &= ((/* implicit */unsigned char) ((arr_15 [i_3] [i_5]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)59))));
                arr_38 [i_3] [i_5] [i_3] = ((/* implicit */unsigned short) (-(((arr_2 [i_3] [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_3] [i_5] [i_9] [i_9]))) : (-6584096927579075267LL)))));
            }
            for (unsigned int i_10 = 1; i_10 < 10; i_10 += 4) 
            {
                arr_42 [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_20 [i_10])))))) ? (min((((/* implicit */unsigned int) min(((short)32749), (((/* implicit */short) arr_8 [i_10]))))), (arr_14 [i_10 + 2] [i_10 + 2] [i_10 + 2]))) : (((/* implicit */unsigned int) max((((/* implicit */int) (short)-32749)), ((+(((/* implicit */int) (unsigned char)249)))))))));
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)195))) ? (((/* implicit */int) max((var_2), (((/* implicit */unsigned short) arr_35 [i_3] [i_5] [i_10] [5]))))) : (((/* implicit */int) ((max((var_9), (((/* implicit */unsigned int) arr_18 [i_3] [i_10])))) != (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_0))))))))))));
                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((-2051797171) ^ (((/* implicit */int) var_0)))), (((/* implicit */int) arr_35 [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10 + 1]))))), (((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (-6584096927579075290LL))) ^ (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_5] [i_5]))))))))))));
                var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_30 [i_5] [i_10] [i_10 - 1] [i_10 + 1] [i_3] [i_5])) : (((/* implicit */int) arr_30 [i_5] [i_10] [i_10 - 1] [i_10 + 1] [i_10 - 1] [i_5]))))) ? (min((((/* implicit */int) ((short) arr_18 [(_Bool)1] [i_5]))), (arr_13 [i_10] [i_10 + 1]))) : (-326849491)));
            }
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((unsigned long long int) min((var_3), (((/* implicit */int) arr_22 [i_5] [i_3] [i_3] [i_3] [i_5] [i_5])))))));
        }
        arr_43 [i_3] = ((/* implicit */unsigned char) var_10);
        var_24 += ((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_3] [i_3]))) >= (max((((/* implicit */unsigned int) (_Bool)1)), (arr_14 [i_3] [i_3] [i_3]))))) ? (((/* implicit */int) ((_Bool) ((_Bool) var_6)))) : (((((/* implicit */_Bool) (+(((/* implicit */int) (short)-29851))))) ? (((/* implicit */int) ((_Bool) (short)2336))) : (min((-2147483647), (((/* implicit */int) arr_20 [(unsigned char)8])))))));
    }
}
