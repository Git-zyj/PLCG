/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129834
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) 15391611997797707413ULL)) ? (3055132075911844203ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            arr_6 [i_0] = ((/* implicit */int) arr_1 [i_1]);
            var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 15391611997797707420ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182))) : (3055132075911844203ULL)));
        }
    }
    /* LoopSeq 4 */
    for (unsigned short i_2 = 2; i_2 < 15; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */signed char) (unsigned short)65513);
        arr_11 [i_2] = ((/* implicit */unsigned char) arr_5 [i_2]);
        var_12 = ((unsigned char) ((12ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2 - 2] [i_2 - 1])))));
    }
    for (signed char i_3 = 1; i_3 < 19; i_3 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            for (long long int i_5 = 1; i_5 < 21; i_5 += 1) 
            {
                for (unsigned int i_6 = 1; i_6 < 21; i_6 += 2) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) (-(3055132075911844203ULL)));
                        var_14 = ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */unsigned long long int) arr_14 [i_3 + 4] [i_4] [i_3 + 4])), ((-(3055132075911844203ULL))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (int i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            arr_22 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_16 [i_3] [i_3] [i_3] [i_7]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((arr_18 [i_3 + 4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_3 + 1] [i_3 - 1]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (arr_12 [i_3 + 1]))))));
            /* LoopSeq 3 */
            for (short i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                arr_25 [i_3 + 1] [i_8] [i_7] [i_8] = max(((~(((((/* implicit */_Bool) var_0)) ? (5061988322496956962ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3]))))))), (((/* implicit */unsigned long long int) max((min((arr_18 [i_7]), (((/* implicit */unsigned int) arr_13 [i_3])))), (((/* implicit */unsigned int) var_1))))));
                var_15 = ((/* implicit */_Bool) arr_17 [i_3 - 1] [i_7] [i_8] [i_8]);
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                arr_29 [i_7] [i_9] = ((/* implicit */long long int) arr_12 [i_9]);
                var_16 = ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)33462)) / (((/* implicit */int) var_2))))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)52091)) >= (((/* implicit */int) (unsigned short)47453))));
                arr_32 [i_3] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                var_18 = ((/* implicit */unsigned int) min((((/* implicit */int) ((short) arr_19 [i_3 + 3] [i_3 - 1]))), (((((/* implicit */int) arr_19 [i_3 + 3] [i_3 - 1])) << (((/* implicit */int) arr_19 [i_3 + 3] [i_3 - 1]))))));
            }
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            var_19 = ((/* implicit */short) ((min((((((/* implicit */int) var_8)) % (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)52094)))))) | (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (13265077043190629942ULL)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((3172723399U) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
            arr_36 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) % ((+(13265077043190629938ULL)))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) arr_14 [i_3 + 4] [i_11] [i_3 + 4])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_14 [i_3 + 2] [i_3 + 1] [i_3 + 4]))))));
            var_20 = ((/* implicit */unsigned int) max((((arr_16 [i_3] [i_3 + 3] [i_3 - 1] [i_3]) | (((/* implicit */unsigned long long int) max((arr_18 [i_3 + 2]), (((/* implicit */unsigned int) var_2))))))), (((/* implicit */unsigned long long int) ((arr_21 [i_3 + 3] [i_3 + 3]) || (((/* implicit */_Bool) var_0)))))));
            var_21 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (5181667030518921691ULL)))), (min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_3] [i_11])) << (((1592336170) - (1592336154)))))), (((arr_17 [i_3] [i_3] [i_11] [i_11]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
        }
        for (long long int i_12 = 3; i_12 < 20; i_12 += 3) 
        {
            arr_39 [i_3 - 1] [i_12 + 1] [i_12] = ((/* implicit */_Bool) ((3055132075911844203ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-67)))));
            arr_40 [i_3] [i_12 + 1] [i_12] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_17 [i_3 + 4] [i_3 + 2] [i_12 + 1] [i_12 + 3]))))), (min((arr_17 [i_3 + 4] [i_3 + 2] [i_12 - 1] [i_12 - 2]), (arr_17 [i_3 + 1] [i_3 - 1] [i_12 - 2] [i_12 + 3])))));
        }
    }
    /* vectorizable */
    for (signed char i_13 = 0; i_13 < 15; i_13 += 1) 
    {
        arr_44 [i_13] = ((/* implicit */unsigned long long int) arr_4 [i_13] [i_13]);
        arr_45 [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_13] [i_13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(short)4] [i_13] [i_13] [i_13]))) : (12881773082575742912ULL)));
    }
    for (signed char i_14 = 4; i_14 < 8; i_14 += 2) 
    {
        arr_48 [i_14 - 1] = ((/* implicit */unsigned char) (((((!(((/* implicit */_Bool) arr_41 [i_14 - 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_7), ((_Bool)1))))) : (min((var_4), (((/* implicit */unsigned int) arr_21 [i_14 + 4] [i_14])))))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)31517)))))));
        /* LoopSeq 1 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (3055132075911844203ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_4)) : (5181667030518921673ULL)))))))) % (max((var_4), (((/* implicit */unsigned int) (!(arr_23 [i_14] [i_14] [i_14] [i_15]))))))));
            arr_51 [i_15] = arr_42 [i_14 - 4];
        }
    }
    var_23 = ((/* implicit */unsigned int) var_9);
    var_24 = ((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (var_5)));
    var_25 = ((/* implicit */signed char) var_7);
}
