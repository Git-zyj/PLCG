/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135154
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_1] &= max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) (short)2214)) ? ((~(arr_4 [i_1] [i_0] [i_1]))) : (((/* implicit */int) (short)-2201)))));
                var_20 += ((((/* implicit */_Bool) -1386297889823150656LL)) && ((!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) min((var_21), (var_0)));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            {
                arr_11 [i_2] [i_3] [i_2] = ((/* implicit */_Bool) ((arr_7 [i_2]) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-2198)) : ((+(arr_10 [i_3] [i_3] [i_3])))))));
                var_22 *= ((/* implicit */_Bool) arr_8 [i_2]);
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_14);
    /* LoopSeq 2 */
    for (unsigned char i_4 = 2; i_4 < 19; i_4 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))), (min((((arr_7 [i_4]) / (var_17))), (((/* implicit */int) max((((/* implicit */short) var_18)), ((short)-29819)))))))))));
        var_25 = ((/* implicit */short) (-((~(((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_4 - 1] [i_4]))) : (11345408461456160525ULL)))))));
        arr_16 [0] = ((/* implicit */int) arr_8 [i_4 - 2]);
    }
    for (unsigned char i_5 = 2; i_5 < 19; i_5 += 1) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (short)-2195))) ^ (((/* implicit */int) ((var_10) < (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_5 + 1]))))))));
        var_27 = ((((/* implicit */_Bool) -7969338688493164516LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((((/* implicit */long long int) ((/* implicit */int) max((var_18), ((_Bool)1))))) / (((((/* implicit */_Bool) 11345408461456160525ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5 - 2]))) : ((-9223372036854775807LL - 1LL)))))));
        /* LoopSeq 3 */
        for (unsigned int i_6 = 1; i_6 < 18; i_6 += 1) /* same iter space */
        {
            var_28 -= ((/* implicit */unsigned char) (_Bool)0);
            /* LoopSeq 2 */
            for (int i_7 = 0; i_7 < 20; i_7 += 2) /* same iter space */
            {
                var_29 ^= ((/* implicit */unsigned short) 11ULL);
                arr_25 [i_5 + 1] [15ULL] [i_6] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7] [i_6 + 1] [i_5 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)1)))))));
                arr_26 [i_5 - 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) max((var_7), (((/* implicit */unsigned char) arr_15 [i_5 + 1])))))));
            }
            for (int i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
            {
                arr_30 [i_6] [i_5] = ((/* implicit */short) (_Bool)1);
                /* LoopNest 2 */
                for (short i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    for (signed char i_10 = 1; i_10 < 18; i_10 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) -7969338688493164498LL)) ? (((/* implicit */long long int) 1508936429U)) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (arr_29 [i_9] [i_8] [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-7969338688493164516LL)))));
                            arr_37 [(signed char)10] [i_9] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((var_6) / (((/* implicit */int) arr_31 [i_9] [9U] [i_10 + 1] [(unsigned short)17] [i_10] [i_10]))))), (max((((/* implicit */unsigned long long int) arr_34 [i_5 - 1] [i_5] [i_6 - 1] [i_10 + 1])), (7101335612253391090ULL)))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */unsigned char) 7969338688493164516LL);
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((~(741431680)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_8]))) : (3292345177U)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-3136))) : (((((/* implicit */_Bool) 8239717663828957543LL)) ? (4040804508681276593LL) : (((/* implicit */long long int) var_17)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [(unsigned short)7])))));
                            arr_42 [i_5 + 1] [(unsigned char)5] [i_8] [i_11] [7] [i_5] [(unsigned char)5] = ((/* implicit */long long int) min((var_0), (((/* implicit */int) ((unsigned char) (signed char)-90)))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */short) (~(arr_20 [i_5 - 2] [i_5 + 1] [i_6 - 1])));
            }
        }
        for (unsigned int i_13 = 1; i_13 < 18; i_13 += 1) /* same iter space */
        {
            arr_47 [i_13] [i_13 + 2] = ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
            var_34 += ((/* implicit */short) ((unsigned long long int) min((((/* implicit */long long int) arr_21 [i_5 - 1] [i_13 + 1] [i_13 + 2])), (((((/* implicit */_Bool) 4294967270U)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (3979988527763008165LL))))));
        }
        /* vectorizable */
        for (unsigned int i_14 = 1; i_14 < 18; i_14 += 1) /* same iter space */
        {
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_14 - 1] [i_14 - 1] [i_14] [i_14 - 1])) - (((/* implicit */int) (_Bool)1))));
            arr_50 [i_14] = ((/* implicit */unsigned long long int) var_2);
            var_36 *= ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_14 + 1] [i_5 + 1]))));
            var_37 = ((/* implicit */_Bool) min((var_37), (var_18)));
        }
        var_38 &= ((/* implicit */short) arr_12 [i_5]);
    }
}
