/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110758
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
    var_14 = var_8;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (1498526319)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0]))))))))) ? (arr_0 [i_0] [i_1]) : (((/* implicit */unsigned int) (+((+(((/* implicit */int) (_Bool)1)))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 1) /* same iter space */
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */signed char) ((int) arr_7 [i_0] [i_1] [i_2]));
                    var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((unsigned long long int) arr_8 [i_1])))));
                }
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (1099511625728ULL) : (((/* implicit */unsigned long long int) -141427800))))) ? (((/* implicit */int) (signed char)124)) : (((var_13) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (signed char)2)))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))));
                    var_18 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((1099511625728ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_0] [i_3])) : (((/* implicit */int) arr_1 [i_0]))))))))));
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)46)) <= (((/* implicit */int) arr_8 [i_1])))))))))));
                }
                for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_1] [i_4] [i_4] = ((/* implicit */unsigned short) arr_4 [i_0]);
                    var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_11 [i_1]) : (arr_11 [i_0])))));
                    arr_15 [i_0] [i_1] [i_4] = (unsigned short)4032;
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 1; i_6 < 8; i_6 += 1) 
                        {
                            {
                                arr_22 [i_4] [i_5] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)75)))) || (((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_2 [i_1] [i_6 + 1]))) % (((/* implicit */int) arr_4 [i_6 + 1])))))));
                                arr_23 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) max((arr_18 [i_5] [i_5] [i_5] [i_6 - 1] [i_6] [i_6 + 1] [i_6 + 1]), (((/* implicit */unsigned long long int) ((var_1) > (2829101796634820233LL)))))))));
                                var_21 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    for (unsigned int i_8 = 2; i_8 < 9; i_8 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_1))))) * (((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0] [i_1])))))));
                            var_23 = ((/* implicit */unsigned char) arr_25 [i_0] [i_1] [i_7] [i_8 - 2]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 0; i_9 < 22; i_9 += 4) 
    {
        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            {
                var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) arr_30 [i_9] [i_10] [i_10])))));
                var_25 = ((/* implicit */unsigned int) arr_30 [i_9] [i_9] [i_9]);
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) var_12);
    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) -540510779)))))))));
}
