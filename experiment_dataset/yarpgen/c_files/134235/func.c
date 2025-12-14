/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134235
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
    for (long long int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] [i_2] |= ((/* implicit */short) (signed char)-124);
                    var_16 = ((/* implicit */short) arr_6 [2U] [i_0 + 3] [i_0 - 1] [i_0]);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            var_17 = ((/* implicit */short) ((min((1802330817U), (((/* implicit */unsigned int) (signed char)94)))) / (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) -2072299237))))));
            arr_12 [i_3] [11LL] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_3] [i_3] [i_3 + 1])) || (var_2))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2326399408U)) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_3 + 1] [i_0 + 1] [i_3 + 1])) : (((/* implicit */int) (signed char)-55)))))));
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
            {
                arr_15 [i_0] [i_0 + 3] [i_3] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) max((1475953619605771193LL), (((/* implicit */long long int) 1023531652U)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_0))) / (((((/* implicit */_Bool) (short)32754)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-119))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 2] [i_3] [i_0 + 2] [i_0 + 3])))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                {
                    for (int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (~(((-1329132385) / (((/* implicit */int) (short)-1)))))))));
                            var_19 = ((/* implicit */short) var_14);
                        }
                    } 
                } 
            }
            arr_22 [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_6 [i_3] [i_0 + 2] [i_3 + 1] [i_0 + 2]) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) 1515858534U)) / (16148447369326713317ULL))), (((/* implicit */unsigned long long int) min(((unsigned char)6), ((unsigned char)4)))))))));
            var_20 = ((long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) arr_1 [i_3 + 1] [i_0 + 1]))));
        }
        for (int i_7 = 0; i_7 < 13; i_7 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) 961094864U))));
            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_0 [9LL])) ? (arr_11 [i_7] [i_7] [i_7]) : (arr_20 [i_7] [i_7] [i_7]))), (var_1)))) || (((/* implicit */_Bool) var_12))));
            var_23 = arr_14 [i_0 + 3] [i_7];
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 13; i_8 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 13; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        arr_32 [i_9] [i_8] = ((/* implicit */_Bool) arr_9 [i_8] [(signed char)5]);
                        var_24 = ((/* implicit */int) var_3);
                        var_25 = ((/* implicit */long long int) var_3);
                        var_26 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [i_0 + 3])) / (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_21 [i_0 - 1] [i_8] [i_8] [i_10])))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */signed char) (-(var_3)));
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_8] [i_0 - 1] [(_Bool)1])) || ((!(arr_19 [i_0])))));
            var_29 = ((/* implicit */_Bool) var_11);
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) var_8))));
        }
    }
    var_31 = ((/* implicit */signed char) max((var_31), (var_12)));
    /* LoopNest 3 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (int i_12 = 3; i_12 < 13; i_12 += 4) 
        {
            for (unsigned long long int i_13 = 1; i_13 < 14; i_13 += 3) 
            {
                {
                    arr_43 [i_11] [(_Bool)1] [i_13] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)121)) || (((/* implicit */_Bool) (signed char)-65))));
                    arr_44 [i_11] [i_11] [i_11] [(unsigned char)5] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_11] [i_13 + 1])) || (((/* implicit */_Bool) var_0)))))));
                }
            } 
        } 
    } 
}
