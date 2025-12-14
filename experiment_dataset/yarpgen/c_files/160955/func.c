/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160955
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
    var_17 = min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-19377)) : (((/* implicit */int) ((1073741823U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)90)))))))), (((/* implicit */int) (unsigned short)58685)));
    var_18 = ((/* implicit */unsigned short) var_10);
    var_19 = ((/* implicit */unsigned char) ((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 22; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        {
                            arr_15 [i_4] [2LL] [i_2] [i_1] [i_0] |= arr_10 [i_3] [i_0] [i_0];
                            arr_16 [i_0] = ((/* implicit */long long int) ((_Bool) ((int) arr_12 [(unsigned short)20] [i_2 - 1] [i_2 - 1] [i_2] [i_2 + 1])));
                            arr_17 [i_0] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (7071538352016265419ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14038)))));
                            arr_18 [i_2] [i_4] = ((/* implicit */unsigned int) (+(((max((((/* implicit */long long int) var_9)), (-3941416659938320827LL))) * (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_4])))))));
                            arr_19 [i_0] [i_1] [i_2] [8LL] [8LL] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) arr_13 [i_1] [i_1] [i_1] [i_1] [13LL])))))) & (13004657919815119308ULL)));
                        }
                    } 
                } 
            } 
            arr_20 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [9U])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_11 [i_0]))))) : (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (short)-24714)))) : (var_8)));
            arr_21 [i_0] [i_1] = ((/* implicit */unsigned int) arr_10 [i_0] [(_Bool)1] [(signed char)4]);
        }
        arr_22 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)14039)) >> (((((/* implicit */int) (unsigned short)65535)) - (65524)))))) <= (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0]))) : (arr_1 [i_0] [i_0])))));
        arr_23 [(short)9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) (short)-14032))))));
        arr_24 [i_0] = var_1;
    }
    for (long long int i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
    {
        arr_28 [3LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_5] [1ULL])) ? (((/* implicit */int) (short)-17719)) : (((/* implicit */int) (unsigned short)39843))))), (arr_26 [i_5] [i_5])))) ? ((-(((/* implicit */int) (unsigned short)1)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(short)3]))) : (1726267120U)))) ? (((/* implicit */int) arr_2 [i_5])) : (((/* implicit */int) arr_3 [i_5] [i_5]))))));
        arr_29 [i_5] [i_5] = ((/* implicit */unsigned int) ((max((arr_5 [i_5]), (arr_5 [i_5]))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (arr_6 [(signed char)4] [i_5] [i_5])));
    }
    var_20 &= ((/* implicit */unsigned long long int) var_12);
}
