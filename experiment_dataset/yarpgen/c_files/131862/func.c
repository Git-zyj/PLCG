/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131862
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
    var_15 -= ((/* implicit */unsigned short) var_6);
    var_16 = ((/* implicit */int) var_13);
    var_17 = ((/* implicit */unsigned int) min((max((max((var_8), (((/* implicit */unsigned long long int) var_1)))), (var_8))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_9)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 4; i_0 < 12; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) ((unsigned long long int) arr_1 [i_0]));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_1 [i_0]))));
    }
    for (int i_1 = 4; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_0 [i_1 - 4]))));
        var_20 = ((/* implicit */long long int) (-(((((((/* implicit */int) (unsigned short)32277)) < (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned int) min((445094543), (((/* implicit */int) arr_0 [i_1]))))) : (arr_5 [i_1 + 1])))));
    }
    for (int i_2 = 4; i_2 < 12; i_2 += 2) /* same iter space */
    {
        arr_8 [3LL] = ((/* implicit */_Bool) 120773618U);
        var_21 = ((/* implicit */unsigned int) arr_1 [i_2]);
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-51))))) ? (((/* implicit */unsigned long long int) min((arr_4 [i_2 + 1]), (arr_4 [i_2 - 1])))) : (((unsigned long long int) ((int) arr_0 [i_2])))));
    }
    for (int i_3 = 4; i_3 < 12; i_3 += 2) /* same iter space */
    {
        var_23 += ((/* implicit */_Bool) min((((/* implicit */short) ((_Bool) arr_10 [i_3]))), (arr_9 [0U])));
        /* LoopSeq 3 */
        for (unsigned int i_4 = 1; i_4 < 12; i_4 += 1) 
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_10 [10]), (((/* implicit */long long int) arr_0 [i_3]))))) ? ((~(arr_11 [i_3]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */long long int) arr_4 [i_3])) : (arr_10 [i_4 - 1]))))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))) & (arr_10 [i_3]))), (((/* implicit */long long int) arr_4 [i_4 - 1]))))) : (((((/* implicit */_Bool) (~(arr_1 [i_4])))) ? (((((/* implicit */_Bool) arr_15 [i_4])) ? (((/* implicit */unsigned long long int) arr_15 [i_3 - 1])) : (arr_11 [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-25344), (((/* implicit */short) arr_13 [i_3]))))))))));
            /* LoopSeq 1 */
            for (int i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                arr_18 [i_3] [12] [i_4] [i_5] = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_14 [i_3] [i_3 - 3])) + (((/* implicit */int) (_Bool)1))))));
                var_25 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (arr_11 [i_3]) : (((/* implicit */unsigned long long int) arr_1 [(unsigned short)0]))))));
            }
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_17 [i_3 - 4] [i_3] [i_3 - 1])))), (arr_12 [i_3] [(unsigned char)8] [i_3]))))));
            var_27 += ((/* implicit */unsigned int) ((long long int) min((arr_15 [i_3 + 1]), (arr_15 [i_3 - 2]))));
        }
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) /* same iter space */
        {
            var_28 += ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_17 [i_3] [i_3] [4U])))) >= (((/* implicit */int) arr_0 [i_3]))));
            var_29 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 12325143101864661545ULL)) ? (((/* implicit */int) (short)24464)) : ((+(((/* implicit */int) (unsigned short)20855))))))));
            var_30 = ((/* implicit */long long int) min(((~((+(2235188895U))))), (arr_5 [i_6])));
            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) arr_5 [i_3 + 1])), (arr_6 [i_3] [i_6]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_14 [i_3 - 4] [i_3 + 1])), (arr_4 [i_3 + 1])))))))));
            arr_21 [i_3] = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_2 [i_6])), (arr_15 [i_3 + 1])));
        }
        for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (_Bool)1)), (min((arr_16 [3U] [i_7] [i_7] [i_7]), (arr_16 [i_3 - 2] [i_3] [i_3 - 2] [i_3])))));
            /* LoopSeq 1 */
            for (unsigned short i_8 = 1; i_8 < 12; i_8 += 4) 
            {
                arr_28 [i_3] [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) (~((-(arr_11 [i_7])))));
                var_33 = ((/* implicit */unsigned int) min((var_33), (min((((((/* implicit */_Bool) arr_25 [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3 - 3]))) : (min((((/* implicit */unsigned int) (short)5669)), (4174193677U))))), (((/* implicit */unsigned int) (unsigned short)58841))))));
                var_34 = ((/* implicit */unsigned short) ((int) arr_12 [i_3] [i_7] [4U]));
                var_35 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_0 [(_Bool)1]))))));
            }
            var_36 ^= ((/* implicit */unsigned short) (~(-3686751075597454543LL)));
            var_37 ^= ((/* implicit */unsigned char) arr_17 [i_3 - 3] [i_7] [i_3 - 1]);
        }
    }
}
