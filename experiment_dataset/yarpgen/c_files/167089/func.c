/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167089
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) max((arr_4 [(unsigned short)17] [i_2 - 1] [(signed char)11]), (min((((/* implicit */short) var_11)), (arr_4 [9] [i_2 + 2] [(_Bool)1])))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_13 [(unsigned short)7] [10U] [i_3] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_10 [6LL] [5] [i_3] [(signed char)5] [2LL])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) arr_11 [(short)2] [(short)13] [5LL] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (3237594836U))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_12)))))));
                                var_18 += ((/* implicit */long long int) (-(((((/* implicit */int) min((arr_4 [10ULL] [5LL] [(unsigned char)6]), (((/* implicit */short) arr_5 [(unsigned short)16] [(unsigned char)12]))))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))));
                                var_19 = ((/* implicit */long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [17ULL])) && (((/* implicit */_Bool) arr_10 [5LL] [(short)6] [i_3] [(signed char)2] [(short)11])))) && (((/* implicit */_Bool) var_16)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            {
                arr_18 [(unsigned char)7] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_10 [(short)17] [14LL] [i_6] [i_6] [9LL])))) ? (((((/* implicit */_Bool) arr_5 [6] [i_5])) ? (arr_10 [i_5] [(unsigned char)17] [i_6] [3U] [(unsigned short)2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_13)) ? (arr_10 [(unsigned short)17] [(signed char)0] [i_6] [(short)13] [2LL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                /* LoopNest 2 */
                for (long long int i_7 = 2; i_7 < 14; i_7 += 4) 
                {
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (arr_23 [(short)3] [(unsigned char)11] [6U] [i_6] [i_7 + 1] [(signed char)2]) : (arr_23 [(short)5] [13ULL] [(short)1] [i_6] [i_7 + 1] [(unsigned short)6]))) == (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))), (((((/* implicit */_Bool) 15402770557795536347ULL)) ? (((/* implicit */unsigned long long int) 5137729656738051133LL)) : (15402770557795536360ULL)))))));
                            arr_24 [i_6] = ((/* implicit */short) var_4);
                            var_21 = ((/* implicit */long long int) min((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */unsigned long long int) 9115318245102600966LL)) : (3043973515914015269ULL)))) || (((/* implicit */_Bool) 0ULL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 1) 
    {
        for (long long int i_10 = 0; i_10 < 24; i_10 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_11 = 3; i_11 < 23; i_11 += 3) 
                {
                    for (long long int i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        {
                            var_22 -= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((((long long int) arr_28 [6ULL] [19ULL] [(_Bool)1])), (((/* implicit */long long int) ((((/* implicit */int) arr_31 [(unsigned short)23])) - (var_8))))))), ((~(min((2147483647ULL), (((/* implicit */unsigned long long int) var_11))))))));
                            var_23 = ((/* implicit */long long int) ((min((((var_0) ^ (((/* implicit */unsigned long long int) arr_27 [18] [(unsigned char)10])))), (((/* implicit */unsigned long long int) var_13)))) <= (max((((/* implicit */unsigned long long int) -4781704138829126499LL)), (15402770557795536347ULL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 24; i_13 += 3) 
                {
                    for (unsigned short i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        {
                            var_24 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [(short)7] [18LL])) ? (12LL) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */int) arr_30 [(short)7])) : (((/* implicit */int) ((unsigned short) var_5))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (((((/* implicit */_Bool) arr_36 [(unsigned short)16] [10ULL] [12ULL] [(unsigned short)1])) ? (((/* implicit */int) arr_30 [(unsigned short)19])) : (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)20090), (((/* implicit */unsigned short) (unsigned char)246)))))) : (12ULL)));
                            var_26 = ((/* implicit */unsigned short) (((-(min((arr_25 [(unsigned char)17] [(unsigned short)6]), (((/* implicit */long long int) arr_31 [(short)18])))))) ^ (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_13)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
