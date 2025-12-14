/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152087
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
    var_16 = ((/* implicit */_Bool) var_15);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 &= ((/* implicit */unsigned int) ((unsigned short) ((unsigned short) var_11)));
        arr_2 [17LL] = ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) arr_0 [i_0])))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            var_18 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) var_10)))) % (((/* implicit */int) ((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)17] [i_1 - 1]))))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_10 [i_2] [i_1] [i_1] [i_0] = var_4;
                arr_11 [i_0] [i_0] [(unsigned short)20] [8U] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) && (arr_0 [i_2]))) || (((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_5 [i_1 + 1]))))));
            }
            var_19 = ((/* implicit */unsigned char) ((short) (_Bool)1));
        }
        for (unsigned int i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3 + 1] [i_3])))))));
            /* LoopSeq 1 */
            for (short i_4 = 2; i_4 < 23; i_4 += 3) 
            {
                var_21 = ((/* implicit */unsigned int) ((unsigned long long int) arr_9 [i_3 + 3] [8ULL] [i_4 + 1]));
                var_22 = ((/* implicit */unsigned int) var_0);
                var_23 = ((/* implicit */signed char) (-(((unsigned long long int) arr_9 [i_3 + 1] [i_4 - 1] [i_4 + 1]))));
            }
        }
        /* LoopSeq 1 */
        for (unsigned char i_5 = 4; i_5 < 23; i_5 += 4) 
        {
            var_24 *= ((/* implicit */short) var_1);
            arr_18 [(_Bool)1] [(_Bool)1] = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_6)))));
        }
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
    {
        var_25 = ((unsigned long long int) ((((/* implicit */int) arr_1 [i_6 - 1] [i_6])) | (((/* implicit */int) arr_1 [i_6 - 1] [(unsigned short)14]))));
        /* LoopSeq 1 */
        for (unsigned short i_7 = 2; i_7 < 16; i_7 += 2) 
        {
            arr_25 [i_7] = ((/* implicit */unsigned int) var_1);
            /* LoopSeq 1 */
            for (short i_8 = 1; i_8 < 18; i_8 += 2) 
            {
                var_26 = ((/* implicit */unsigned short) arr_26 [0ULL] [i_7] [i_8]);
                /* LoopSeq 2 */
                for (unsigned int i_9 = 2; i_9 < 17; i_9 += 1) 
                {
                    var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) var_5)))));
                    var_28 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */int) (unsigned short)8191)) : (((/* implicit */int) (unsigned short)57344))))));
                    arr_33 [7U] [i_8] &= ((/* implicit */unsigned int) ((((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_9))))));
                }
                for (int i_10 = 3; i_10 < 17; i_10 += 3) 
                {
                    arr_36 [i_6] [i_6] [i_6] [i_7 + 3] [i_8] [i_10 - 3] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_21 [i_7]))) && (((/* implicit */_Bool) var_10))))) << ((((~(((/* implicit */int) ((signed char) var_15))))) - (81)))));
                    var_29 = ((/* implicit */_Bool) arr_29 [i_6 - 1] [i_7] [i_7] [i_10]);
                }
            }
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) var_10))));
        }
        /* LoopSeq 2 */
        for (int i_11 = 1; i_11 < 18; i_11 += 1) 
        {
            arr_40 [i_11] [i_6 - 1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_10))) && (((((/* implicit */int) arr_22 [i_11 + 1])) != (((/* implicit */int) arr_22 [i_11 + 1]))))));
            var_31 = ((/* implicit */unsigned short) ((((((unsigned int) var_10)) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_3)))))) << (((((((/* implicit */long long int) ((/* implicit */int) var_1))) % (arr_7 [i_6 - 1] [i_11] [i_11] [i_11 - 1]))) - (92LL)))));
            var_32 = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        }
        for (short i_12 = 4; i_12 < 17; i_12 += 2) 
        {
            var_33 &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) << (((/* implicit */int) ((((/* implicit */long long int) arr_5 [i_6 - 1])) <= (var_15)))))) * (((/* implicit */int) arr_23 [(signed char)10] [(signed char)10]))));
            var_34 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_13)))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6 - 1]))) ^ (var_3)))));
            arr_45 [i_12] = ((/* implicit */long long int) ((short) ((unsigned char) var_3)));
        }
    }
    for (long long int i_13 = 1; i_13 < 8; i_13 += 3) 
    {
        var_35 = ((/* implicit */signed char) ((arr_41 [i_13 + 2] [i_13 + 1] [i_13]) ? (((unsigned long long int) arr_41 [i_13 - 1] [i_13 + 1] [i_13])) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_41 [i_13 + 2] [i_13 + 2] [i_13 + 1])))))));
        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) var_2))));
        var_37 = ((((unsigned long long int) ((var_6) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) != (((/* implicit */unsigned long long int) arr_7 [i_13 + 1] [i_13 + 2] [i_13 - 1] [i_13 - 1])));
        var_38 ^= ((/* implicit */unsigned long long int) ((arr_15 [i_13] [i_13]) == (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_6))))))))));
        arr_48 [i_13] [i_13] = ((/* implicit */unsigned short) var_0);
    }
    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) % (((/* implicit */int) var_9))));
}
