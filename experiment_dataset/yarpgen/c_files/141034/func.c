/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141034
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [12] [i_0])) ? (((/* implicit */int) var_11)) : ((+(((/* implicit */int) max((var_15), ((unsigned short)0))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
        var_17 = ((/* implicit */signed char) ((((arr_2 [i_0] [(unsigned char)6]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */_Bool) (short)-3744)) ? (arr_1 [i_0]) : (((/* implicit */int) arr_0 [(unsigned char)8] [i_0]))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_1 [7ULL]) - (arr_1 [i_0])))) ? (((((/* implicit */_Bool) var_7)) ? (((int) var_0)) : (((/* implicit */int) ((unsigned char) arr_1 [(signed char)15]))))) : (((int) var_12))));
    }
    for (unsigned int i_1 = 2; i_1 < 20; i_1 += 2) 
    {
        var_19 = ((/* implicit */short) var_10);
        /* LoopSeq 4 */
        for (short i_2 = 1; i_2 < 21; i_2 += 2) 
        {
            var_20 = ((/* implicit */unsigned short) arr_6 [i_1 - 1]);
            arr_9 [i_1 + 2] [i_2] = max((((5086821439834998896ULL) >> (((((unsigned int) (signed char)(-127 - 1))) - (4294967167U))))), (((/* implicit */unsigned long long int) var_15)));
            var_21 = ((/* implicit */unsigned char) (((_Bool)0) ? (4741778741258510983ULL) : (0ULL)));
        }
        for (int i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned char) 13704965332451040633ULL);
            var_23 &= ((/* implicit */unsigned char) (_Bool)0);
            /* LoopSeq 1 */
            for (unsigned char i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                var_24 = ((/* implicit */short) max((max((var_15), (((/* implicit */unsigned short) ((signed char) (short)0))))), ((unsigned short)37337)));
                var_25 = ((/* implicit */int) 9004393857200373516LL);
            }
        }
        for (int i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
        {
            arr_18 [i_1] [i_5] = ((/* implicit */short) arr_6 [i_1]);
            var_26 = ((/* implicit */short) min((2225648895377858716ULL), (((/* implicit */unsigned long long int) 871454688))));
        }
        for (int i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    {
                        var_27 = min((((int) var_9)), (((/* implicit */int) ((((/* implicit */_Bool) 471983664)) && (((/* implicit */_Bool) (-(((/* implicit */int) (short)28065)))))))));
                        arr_27 [i_1] [i_1] [i_7] [i_7] = ((/* implicit */unsigned long long int) var_1);
                    }
                } 
            } 
            var_28 = ((/* implicit */int) ((((/* implicit */int) ((arr_24 [i_1 + 2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) != (((/* implicit */int) ((unsigned char) arr_24 [i_1 + 2])))));
        }
    }
    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) 
    {
        var_29 = ((/* implicit */unsigned char) arr_20 [i_9]);
        arr_30 [i_9] [i_9] = ((/* implicit */unsigned char) ((signed char) ((unsigned short) arr_2 [(_Bool)1] [i_9])));
    }
    var_30 = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) var_12))))));
}
