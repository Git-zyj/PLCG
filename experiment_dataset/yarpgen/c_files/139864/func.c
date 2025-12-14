/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139864
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
    var_11 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) -639220005)) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) var_6))))) : (var_7))), (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3))))) > (9000853256709280378LL))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))))));
        var_13 = ((/* implicit */signed char) ((((_Bool) ((arr_1 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)186)))))) || (((/* implicit */_Bool) ((signed char) var_5)))));
        /* LoopSeq 3 */
        for (long long int i_1 = 3; i_1 < 17; i_1 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */signed char) (+(-1102799324)));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                var_15 -= ((/* implicit */unsigned char) ((unsigned short) (unsigned short)63622));
                var_16 += ((/* implicit */_Bool) var_6);
            }
            /* vectorizable */
            for (unsigned long long int i_3 = 4; i_3 < 15; i_3 += 1) 
            {
                var_17 = (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (2147483647)))));
                /* LoopNest 2 */
                for (long long int i_4 = 1; i_4 < 16; i_4 += 1) 
                {
                    for (signed char i_5 = 1; i_5 < 17; i_5 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_4])))) >> (((((long long int) var_9)) + (32369LL)))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (2147483647))) << ((((((((-2147483647 - 1)) - (-2147483636))) + (20))) - (8)))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))));
                        }
                    } 
                } 
                arr_18 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) arr_9 [i_0])))));
            }
            for (int i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                var_20 = ((/* implicit */int) ((long long int) ((var_8) ? (((((/* implicit */_Bool) arr_8 [i_1 - 3] [i_1] [i_0 - 3] [3ULL])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (_Bool)1)))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)(-127 - 1))), ((-(var_10)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((signed char) (_Bool)0)))))) : (((((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))) % (((-2424776723390965383LL) - (((/* implicit */long long int) var_10)))))))))));
            }
            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_5 [(signed char)12] [i_1])) > (((/* implicit */int) arr_5 [6ULL] [i_1 + 1])))) ? ((~(((/* implicit */int) (unsigned char)97)))) : (((/* implicit */int) max((arr_5 [8LL] [8LL]), (arr_5 [(unsigned char)0] [i_0])))))))));
            arr_21 [i_0] [i_1] = ((int) ((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_1 - 2] [i_0 - 2] [i_0] [i_0]))) - (arr_11 [i_0] [i_0] [i_1] [i_0] [i_0 - 2] [i_1])));
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_4 [i_0] [i_0 - 1])), ((-9223372036854775807LL - 1LL))))) ? ((~(((/* implicit */int) arr_7 [i_1 - 3] [(unsigned short)14] [i_0])))) : (((((/* implicit */int) var_8)) % (((/* implicit */int) (_Bool)1))))));
        }
        for (long long int i_7 = 3; i_7 < 17; i_7 += 3) /* same iter space */
        {
            var_24 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_8 [i_7 - 1] [i_7 + 1] [i_7 - 3] [i_7 + 1]))))));
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 3) 
                {
                    {
                        var_25 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_25 [i_0 - 3] [i_0])) / (((/* implicit */int) arr_25 [i_0 - 3] [i_0])))) * (((/* implicit */int) ((-1396568080) == (((/* implicit */int) (_Bool)1)))))));
                        var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) arr_14 [i_8] [i_9] [9ULL] [i_8] [9ULL] [9ULL] [9ULL]))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (unsigned char)0))));
            var_28 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((unsigned int) var_8)), (((/* implicit */unsigned int) arr_10 [i_0 - 3] [i_0 - 1]))))) / (((max((((/* implicit */unsigned long long int) (unsigned char)249)), (arr_26 [i_7] [(signed char)4] [i_7]))) & (((/* implicit */unsigned long long int) arr_11 [i_0 - 2] [i_7] [i_7] [14ULL] [(_Bool)0] [i_7]))))));
        }
        /* vectorizable */
        for (long long int i_10 = 3; i_10 < 17; i_10 += 3) /* same iter space */
        {
            arr_33 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_7) / (((/* implicit */long long int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 9223372036854775794LL)))) : (((((/* implicit */_Bool) arr_20 [12] [i_10])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
            var_29 = ((/* implicit */_Bool) ((int) arr_11 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0] [i_10 - 1] [i_10 - 1]));
        }
    }
    for (unsigned long long int i_11 = 0; i_11 < 18; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 18; i_12 += 3) 
        {
            for (int i_13 = 1; i_13 < 14; i_13 += 2) 
            {
                {
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) ((arr_19 [i_11] [i_12] [i_13] [i_12]) < (((/* implicit */long long int) ((/* implicit */int) max((arr_13 [i_11] [i_12] [i_12] [(unsigned char)11]), (var_9))))))))));
                    arr_44 [i_11] [(signed char)16] [i_12] = ((/* implicit */_Bool) arr_13 [i_13] [i_11] [i_13] [i_13 + 2]);
                }
            } 
        } 
        arr_45 [i_11] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) (-(arr_29 [i_11] [i_11] [i_11] [i_11] [i_11])))))))) != (((long long int) arr_27 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])));
        /* LoopSeq 1 */
        for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 1) 
        {
            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) max((((long long int) (_Bool)1)), (((/* implicit */long long int) ((((/* implicit */int) (signed char)121)) ^ (810203693)))))))));
            var_32 = ((/* implicit */signed char) arr_17 [i_11] [i_11] [(short)12] [i_11] [i_11] [16LL] [i_11]);
            var_33 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_5))) ? (((((/* implicit */_Bool) arr_20 [i_11] [i_11])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_27 [i_11] [i_11] [(_Bool)1] [i_11] [i_11] [i_11])))) : ((~(((/* implicit */int) arr_27 [i_11] [i_11] [i_11] [i_11] [i_14] [i_14]))))));
        }
        var_34 = (((-(((/* implicit */int) ((short) var_3))))) % (((/* implicit */int) ((unsigned char) -3LL))));
    }
    var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)48120)) : (963044990)))) ? (((int) (+(1ULL)))) : (((/* implicit */int) var_3)))))));
}
