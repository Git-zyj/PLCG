/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152238
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
    var_17 = ((/* implicit */unsigned long long int) var_13);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)24882)) ? (((/* implicit */int) (short)-20905)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((((/* implicit */int) var_7)) % (((/* implicit */int) arr_2 [i_0 + 2])))) : (((/* implicit */int) arr_2 [i_0 - 1]))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-24883))))) ? (arr_1 [i_0 + 2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-35)) ? (((/* implicit */int) (_Bool)0)) : (2023107814))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        arr_11 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)0))));
                        var_18 = ((/* implicit */unsigned long long int) ((arr_6 [(unsigned char)15] [i_1] [(unsigned char)15]) >> (((((/* implicit */int) var_1)) - (28038)))));
                        var_19 = ((/* implicit */short) ((((/* implicit */int) ((signed char) (short)20870))) % (((/* implicit */int) ((var_10) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3] [i_1] [i_1] [i_1] [23LL]))))))));
                        /* LoopSeq 4 */
                        for (int i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((arr_1 [i_0 - 1]) - (((/* implicit */long long int) ((/* implicit */int) (short)20869))))))));
                            var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0])) < (((/* implicit */int) (signed char)65))));
                            var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)1023))));
                            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (unsigned short)35518))));
                        }
                        for (int i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                        {
                            arr_18 [i_0] [i_1] [i_2] [(unsigned short)7] [i_1] [i_5] = ((/* implicit */long long int) arr_14 [i_3]);
                            var_24 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                        }
                        for (long long int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            var_25 = arr_2 [i_1];
                            var_26 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0 + 3])) + (2147483647))) >> (((((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_2] [i_3])) - (18469)))));
                            var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9041201720690230617ULL))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-66)))))));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [2ULL] [i_0 + 3] [i_2] [i_1])) - (((/* implicit */int) arr_2 [(unsigned short)2]))));
                        }
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30018))) == (7833133785422482056ULL))) ? ((-(arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((-757308631) == (((/* implicit */int) (signed char)19))))))));
    }
}
