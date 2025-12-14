/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140854
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
    var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)255)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)238))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((var_10) <= (((/* implicit */int) var_11)))))))));
    var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */int) ((((/* implicit */_Bool) 14LL)) && (var_14)))), (((((/* implicit */_Bool) var_8)) ? (155508102) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_16))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) var_8)))))) && (min((arr_2 [i_1 - 1] [i_2 - 1]), (var_1)))));
                    var_20 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned char)199)) : (((/* implicit */int) (signed char)127))))) ? (((/* implicit */int) min(((signed char)0), ((signed char)3)))) : (-1849614955))));
                }
            } 
        } 
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_0))));
        /* LoopSeq 3 */
        for (short i_3 = 1; i_3 < 23; i_3 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_3] [i_3] = ((/* implicit */unsigned long long int) (signed char)127);
            var_22 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_3 + 1] [i_3 - 1])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) arr_3 [i_3 - 1] [i_3 - 1] [i_3])))))) : (((var_14) ? (7286160365094843950ULL) : (((/* implicit */unsigned long long int) arr_5 [i_3 - 1] [i_3]))))));
            var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_3 - 1] [i_3] [i_3 - 1])), (var_10)))) ? (((((var_1) || (((/* implicit */_Bool) arr_5 [i_0] [i_3])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -960437386)) ? (var_9) : (((/* implicit */int) (unsigned char)17))))) : (arr_5 [i_3 + 1] [i_3 + 1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_3])) <= (((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */int) ((var_1) && (((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_3]))))))))));
            var_24 ^= arr_2 [i_3 - 1] [i_3 - 1];
        }
        /* vectorizable */
        for (short i_4 = 1; i_4 < 23; i_4 += 1) /* same iter space */
        {
            arr_14 [i_4] [(signed char)11] [(_Bool)1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_4]))) <= (arr_5 [i_0] [i_4]))));
            var_25 = ((/* implicit */unsigned char) ((((arr_2 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))) : (arr_7 [i_0] [i_0] [i_0]))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7286160365094843954ULL)) ? (2147483643) : (((/* implicit */int) arr_2 [i_4] [i_4])))))));
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_4] [i_4 - 1] [i_4 + 1])) ? (((/* implicit */int) (short)24576)) : (((/* implicit */int) var_7))));
        }
        for (short i_5 = 1; i_5 < 23; i_5 += 1) /* same iter space */
        {
            arr_18 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)7] [i_0])) ? (-2147483630) : (((/* implicit */int) (unsigned char)243))))) : (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_5]))) : (-1LL)))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [i_0] [i_5 + 1])) : (((/* implicit */int) arr_13 [i_0] [i_5 - 1])))) : (max((2147483647), (((/* implicit */int) (unsigned char)235)))));
            var_27 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_5 - 1] [i_5 - 1] [i_5 + 1])) && (((((/* implicit */_Bool) arr_13 [i_0] [i_0])) && (((/* implicit */_Bool) (signed char)-7)))))) ? (var_8) : (((/* implicit */int) ((short) 155508118)))));
        }
        /* LoopNest 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 24; i_7 += 1) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_7] [i_8] [i_8] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((signed char) ((long long int) arr_10 [i_8])))), (var_3)));
                        arr_27 [i_7] = ((/* implicit */unsigned char) ((((unsigned long long int) (-2147483647 - 1))) < (arr_7 [i_0] [i_0] [i_0])));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_6] [i_8])) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (max((((/* implicit */unsigned long long int) (signed char)22)), (7286160365094843933ULL)))))));
                        arr_28 [i_6] [i_6] [i_6] [i_7] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_0))) < (((/* implicit */int) var_5))));
                    }
                } 
            } 
        } 
    }
}
