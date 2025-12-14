/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1248
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) ((signed char) min((min((((/* implicit */unsigned long long int) var_11)), (6427111322086688280ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)4)), (-1904641106)))))));
                var_18 = 6082986456190028378ULL;
                var_19 = ((/* implicit */signed char) max((var_8), (((/* implicit */unsigned short) (!(((((/* implicit */long long int) ((/* implicit */int) (short)12474))) < (arr_2 [i_1] [i_1] [8LL]))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 7U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (_Bool)0))) ? (((/* implicit */unsigned int) var_9)) : ((-(1416207641U))))))));
    var_21 -= ((/* implicit */short) var_2);
    /* LoopSeq 3 */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        arr_6 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((min((arr_2 [(short)6] [i_2] [12ULL]), (arr_2 [(_Bool)1] [(_Bool)1] [i_2]))), (((/* implicit */long long int) (-(((/* implicit */int) var_10)))))))) ? ((~(((((/* implicit */int) var_5)) % (((/* implicit */int) var_10)))))) : ((~(((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */int) var_11))))))));
        arr_7 [i_2] = ((/* implicit */long long int) var_8);
    }
    for (int i_3 = 2; i_3 < 10; i_3 += 1) 
    {
        arr_10 [i_3] &= ((/* implicit */unsigned int) var_12);
        /* LoopSeq 2 */
        for (int i_4 = 1; i_4 < 9; i_4 += 1) /* same iter space */
        {
            var_22 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (_Bool)0)), (6984617974999632023ULL)));
            arr_14 [i_3] = ((/* implicit */unsigned int) (((-(max((((/* implicit */int) (short)-1)), ((-2147483647 - 1)))))) << (((int) (!(var_4))))));
        }
        for (int i_5 = 1; i_5 < 9; i_5 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                var_23 = ((/* implicit */short) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_6))));
                arr_20 [i_5] [i_5 + 2] [i_5] = ((/* implicit */unsigned int) var_12);
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                var_24 -= ((/* implicit */unsigned long long int) ((63LL) | (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5] [i_5 + 2] [i_3 + 1])))));
                arr_23 [i_3 + 1] [i_5] = ((/* implicit */short) (-(((var_2) - (((/* implicit */long long int) 4294967295U))))));
            }
            /* LoopNest 3 */
            for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
            {
                for (unsigned int i_9 = 2; i_9 < 9; i_9 += 1) 
                {
                    for (unsigned long long int i_10 = 2; i_10 < 10; i_10 += 2) 
                    {
                        {
                            arr_31 [i_3] [i_5] [i_5] [i_5] = ((/* implicit */int) ((((((((/* implicit */_Bool) 4294967271U)) && (((/* implicit */_Bool) 2147483647)))) ? (((unsigned long long int) var_16)) : (((/* implicit */unsigned long long int) ((1152921504606814208LL) | (((/* implicit */long long int) arr_30 [i_10] [i_9] [i_8] [i_5 + 1] [i_3]))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) arr_19 [i_3] [i_5] [i_8])) == (((/* implicit */int) (short)-6659))))))))));
                            arr_32 [i_5] [3ULL] [i_8] [(short)2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (((var_12) & (arr_3 [i_5] [i_10 - 1])))));
                            arr_33 [i_3] [i_5] [(short)3] [i_8] [i_9] [i_10] [i_9] = ((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_6))) & (max((((/* implicit */unsigned int) arr_27 [i_3] [i_3] [i_9 + 1] [i_3])), (arr_1 [i_9] [i_9])))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
    {
        var_25 = ((/* implicit */int) ((min((((/* implicit */unsigned int) var_15)), ((((_Bool)1) ? (((/* implicit */unsigned int) 2122510096)) : (4294967295U))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 2650490593U)))))));
        var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_13))) && (((/* implicit */_Bool) max((-6), (((/* implicit */int) (signed char)84)))))));
        arr_36 [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_11] [i_11])) >= ((+(3119226086306941571LL)))))) != (((/* implicit */int) arr_5 [i_11]))));
    }
}
