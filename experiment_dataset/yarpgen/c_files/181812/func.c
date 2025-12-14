/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181812
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
    var_14 += ((/* implicit */unsigned short) var_13);
    var_15 = (unsigned char)23;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_4 [i_0] [(unsigned short)12] &= ((/* implicit */signed char) (-(min((((unsigned long long int) var_10)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)0)))))))));
        var_16 = ((signed char) var_12);
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_8 [i_1] &= 9570980561411613452ULL;
            var_17 = ((/* implicit */int) var_6);
        }
        for (unsigned short i_2 = 2; i_2 < 21; i_2 += 4) 
        {
            var_18 -= ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0] [i_0])) >= (((((/* implicit */int) arr_2 [i_2])) % (((/* implicit */int) var_10))))));
            var_19 -= ((/* implicit */unsigned short) ((((/* implicit */int) min((max((((/* implicit */unsigned short) (unsigned char)233)), (arr_1 [i_2]))), (((/* implicit */unsigned short) max((((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_0])), (arr_2 [i_2]))))))) - (829185426)));
        }
        for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_2))));
                arr_16 [(unsigned char)4] [i_0] [i_4] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_3])) || (((/* implicit */_Bool) ((int) arr_6 [i_0])))));
                /* LoopSeq 3 */
                for (signed char i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                {
                    arr_21 [i_0] [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-100)) < (((/* implicit */int) (unsigned short)47382))))), (var_4)));
                    arr_22 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_5 [i_0] [i_3] [i_3]))))), (arr_6 [i_0]))));
                }
                for (signed char i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                {
                    arr_26 [i_0] [i_0] [i_0] [i_6] [i_4] = ((/* implicit */signed char) var_0);
                    var_21 &= ((/* implicit */unsigned short) (((-(((/* implicit */int) (signed char)-1)))) | (((/* implicit */int) ((arr_6 [i_6]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6] [i_0]))))))));
                }
                for (signed char i_7 = 3; i_7 < 20; i_7 += 4) 
                {
                    arr_29 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) ? (min((((/* implicit */int) var_7)), (((int) arr_17 [i_7] [i_0] [i_4] [i_3] [i_0])))) : (((/* implicit */int) (unsigned char)233))));
                    var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((int) arr_18 [20] [(unsigned char)16] [(signed char)10] [i_7 - 2] [(unsigned short)12] [i_7 - 3]))), (min((((/* implicit */unsigned long long int) 829185426)), (3594859627144589477ULL))))))));
                    arr_30 [8ULL] [0ULL] [i_4] [0ULL] &= (unsigned char)0;
                    var_23 = ((/* implicit */unsigned short) min((0ULL), (((/* implicit */unsigned long long int) ((int) min((var_10), (arr_27 [i_4] [i_4] [i_0] [i_7] [i_0] [(unsigned char)0])))))));
                    var_24 = ((/* implicit */int) var_9);
                }
            }
            for (int i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                var_25 &= (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)15284)) ? (((/* implicit */int) (signed char)0)) : (-511948908)))) ? (((/* implicit */int) max((arr_15 [i_3] [i_8]), (var_2)))) : (((((/* implicit */_Bool) -511948908)) ? (0) : (((/* implicit */int) (unsigned short)28114)))))));
                arr_33 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) / (((/* implicit */int) (unsigned char)233))))) || (((((/* implicit */_Bool) arr_19 [i_0] [i_0])) && (((/* implicit */_Bool) arr_19 [i_0] [i_8]))))));
            }
            for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                arr_36 [i_0] [i_0] [i_9] = ((/* implicit */unsigned char) ((unsigned long long int) ((int) min((var_10), ((unsigned short)23409)))));
                var_26 = ((/* implicit */int) var_4);
            }
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + ((+(((/* implicit */int) var_8))))));
        }
    }
    for (unsigned char i_10 = 2; i_10 < 9; i_10 += 4) 
    {
        arr_39 [i_10] = ((/* implicit */int) ((signed char) max((arr_9 [i_10 + 1] [i_10 + 2]), (((/* implicit */unsigned long long int) ((int) (unsigned char)231))))));
        var_28 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)23427)))) * (1607553952655527818ULL)));
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) var_12)) : (var_5)))))))));
        var_30 += (((-(-1870076947))) / (((/* implicit */int) var_9)));
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            arr_42 [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_10] [i_10] [6ULL])) ? (((((/* implicit */_Bool) arr_20 [i_10] [i_11] [i_10] [i_10] [i_10 + 1] [i_10 - 2])) ? (arr_20 [i_11] [i_11] [i_10] [10ULL] [10ULL] [i_10 - 2]) : (arr_20 [i_10] [i_11] [i_11] [i_11] [i_10] [i_10 + 3]))) : (((/* implicit */int) ((unsigned char) (signed char)67)))));
            var_31 = (signed char)90;
        }
    }
}
