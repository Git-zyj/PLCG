/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152266
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_10 = ((/* implicit */unsigned int) var_7);
            /* LoopSeq 2 */
            for (short i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
            {
                var_11 = ((/* implicit */unsigned short) var_0);
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) arr_7 [(short)7] [i_1] [(short)7] [(short)7]))) % (var_5))))));
            }
            for (short i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
            {
                var_13 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)31744))))) >> (((((var_5) ^ (((/* implicit */int) var_4)))) - (963524644)))));
                arr_11 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -979095952)) <= (856390759544547446ULL))))) * (max((((unsigned int) var_1)), (((/* implicit */unsigned int) (unsigned char)0))))));
            }
            arr_12 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 17590353314165004169ULL)) && (((/* implicit */_Bool) 70368609959936ULL))));
        }
        var_14 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 2] [i_0 + 1] [i_0 - 3] [i_0]))) : (((2748347142U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)197))))))) > (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) | (((/* implicit */int) (unsigned short)0)))))));
        /* LoopSeq 1 */
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            var_15 = ((/* implicit */unsigned char) (((~(arr_4 [i_0] [i_0]))) >> (((unsigned int) var_6))));
            var_16 |= ((/* implicit */_Bool) 18446673705099591680ULL);
        }
    }
    for (long long int i_5 = 2; i_5 < 19; i_5 += 2) 
    {
        arr_19 [i_5] = ((/* implicit */signed char) (((~(((/* implicit */int) (unsigned char)192)))) - (((/* implicit */int) arr_18 [i_5 - 2]))));
        var_17 = ((/* implicit */signed char) var_6);
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 2; i_6 < 18; i_6 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_7 = 0; i_7 < 22; i_7 += 2) 
            {
                var_18 = ((/* implicit */unsigned short) min((((/* implicit */int) var_7)), (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1)))) >> (((/* implicit */int) var_1))))));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_25 [i_5] [i_5] [i_5]))))) < (((unsigned int) (_Bool)1)))))))));
            }
            /* vectorizable */
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                arr_28 [i_6] = ((/* implicit */unsigned long long int) var_4);
                arr_29 [i_5] [i_5] [i_8] [i_6] = ((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned int) var_0)) : (arr_10 [i_5] [i_5 + 1] [i_8] [i_6 + 1])));
            }
            for (signed char i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                var_20 = ((/* implicit */_Bool) 17244376875059818248ULL);
                arr_32 [i_5 + 3] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) var_4);
            }
            for (unsigned char i_10 = 3; i_10 < 20; i_10 += 1) 
            {
                arr_35 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_6 [i_6] [i_6 - 2] [i_10 - 1] [i_5 + 3])))))));
                arr_36 [i_6] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)193))) * (2297333605U)));
                arr_37 [i_6] [i_6] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) var_7)) * (((/* implicit */int) var_1)))));
            }
            /* LoopSeq 2 */
            for (unsigned char i_11 = 3; i_11 < 21; i_11 += 2) 
            {
                var_21 = ((/* implicit */unsigned char) var_3);
                arr_41 [i_6] [i_6] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_30 [i_5] [i_6]))));
                arr_42 [i_6] = ((/* implicit */unsigned int) max((min((((/* implicit */short) (_Bool)1)), ((short)-4321))), (((/* implicit */short) arr_9 [i_5 + 1] [i_6 + 2]))));
                var_22 *= ((/* implicit */_Bool) ((((((/* implicit */int) ((signed char) var_4))) + (2147483647))) << (((arr_5 [i_6] [i_11]) - (1575986503)))));
                arr_43 [i_6] = ((unsigned long long int) var_5);
            }
            for (unsigned long long int i_12 = 0; i_12 < 22; i_12 += 1) 
            {
                var_23 = ((/* implicit */short) max((((((/* implicit */int) var_4)) * (((/* implicit */int) (unsigned char)197)))), (((var_0) / (((/* implicit */int) (unsigned char)85))))));
                arr_47 [(unsigned char)12] [i_6] [i_6] [i_5] = ((/* implicit */long long int) var_2);
            }
        }
        var_24 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))), (arr_24 [i_5] [i_5] [18LL] [i_5])));
    }
    for (short i_13 = 0; i_13 < 17; i_13 += 2) 
    {
        var_25 |= ((/* implicit */_Bool) ((unsigned long long int) var_9));
        arr_50 [i_13] = ((/* implicit */short) var_1);
        arr_51 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_8)))) ^ ((-(arr_30 [i_13] [i_13])))));
    }
    for (long long int i_14 = 0; i_14 < 14; i_14 += 1) 
    {
        arr_54 [i_14] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_14] [i_14] [i_14] [5ULL])) ? (((/* implicit */int) var_8)) : (max((((((((/* implicit */int) (signed char)-63)) + (2147483647))) << (((((/* implicit */int) var_2)) - (1))))), (((/* implicit */int) var_7))))));
        arr_55 [i_14] = ((/* implicit */unsigned short) var_6);
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_14])) && (var_2)))) * (((((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) var_1)))) * (((/* implicit */int) var_1))))));
        var_27 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) var_0)))))) / (9214364837600034816LL)));
    }
    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_8))));
    var_29 = ((/* implicit */short) var_3);
    var_30 = ((/* implicit */unsigned short) var_2);
    var_31 ^= ((/* implicit */unsigned long long int) ((var_0) >= (((/* implicit */int) ((_Bool) var_1)))));
}
