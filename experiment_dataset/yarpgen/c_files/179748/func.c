/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179748
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
    var_16 ^= ((/* implicit */unsigned long long int) ((signed char) min((max((582851401), (-1))), (((/* implicit */int) var_5)))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */signed char) max((7202269693123836824ULL), (7202269693123836824ULL)));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (var_2))), (-387727360)))) ? (((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */unsigned long long int) ((var_4) + (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0])))))) : (max((11244474380585714769ULL), (((/* implicit */unsigned long long int) (unsigned char)225)))))) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_2]))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
                    {
                        arr_12 [12LL] [i_3] [i_0] [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_6 [i_2] [i_0 + 2])) : (((7202269693123836824ULL) % (((/* implicit */unsigned long long int) 1052193918)))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1708753308)) && (((/* implicit */_Bool) arr_5 [i_0]))))))));
                        var_19 = ((387727360) % (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)241)) && (((/* implicit */_Bool) (unsigned char)185)))))));
                    }
                    for (short i_4 = 0; i_4 < 15; i_4 += 1) /* same iter space */
                    {
                        var_20 &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [8LL]))) : (var_8))), (((/* implicit */long long int) arr_5 [(short)12]))));
                        arr_15 [i_0] = var_12;
                    }
                    for (short i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_0] [i_5] [i_5] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9))))) || (((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_3)))))), (((arr_14 [i_0] [i_0] [i_0] [i_5]) && (((/* implicit */_Bool) ((signed char) var_11)))))));
                        arr_20 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((var_12) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))), (min((((/* implicit */long long int) var_1)), (452019529215573357LL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [9LL] [i_1] [9LL] [3] [i_2] [9LL]))))) + (((var_2) | (arr_6 [i_5] [i_5])))))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) == (var_8))))) : (var_12)))));
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) max((var_13), (arr_2 [i_0 + 2] [i_0] [i_1 - 1]))))));
                        arr_21 [i_0] [i_1] [i_0] [i_0] = arr_5 [i_0];
                    }
                    var_22 = ((/* implicit */int) 15409977486322543058ULL);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */long long int) var_1)) <= (var_10)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (var_2)))))), (((var_15) ^ ((((_Bool)1) ? (2029358200985971646ULL) : (((/* implicit */unsigned long long int) 5LL))))))));
}
