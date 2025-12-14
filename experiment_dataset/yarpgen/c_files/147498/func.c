/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 147498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=147498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/147498
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
    var_18 = ((/* implicit */unsigned short) ((signed char) 0U));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_19 *= ((((/* implicit */int) arr_11 [(short)5] [i_1 - 1] [(short)5] [i_4])) * (((/* implicit */int) min(((!(((/* implicit */_Bool) var_3)))), (var_5)))));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((11U) == (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))))))))));
                                arr_14 [i_4] [11LL] [i_3] [i_0] [i_1 - 1] [i_1 - 1] [(signed char)3] = ((/* implicit */short) max((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)244)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)244)) == (((/* implicit */int) (signed char)79)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(max(((-(((/* implicit */int) (unsigned char)48)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_9 [i_0] [12ULL] [10ULL] [i_6])) : (((/* implicit */int) arr_3 [(unsigned char)15])))))))))));
                            arr_23 [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_16))));
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
                        }
                    } 
                } 
                var_22 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_7 [(short)0])))) || (((arr_22 [i_1 - 1] [i_1 - 1]) != (arr_22 [i_1 - 1] [i_1 - 1])))));
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_1 - 1] [i_1 - 1] [i_0] [i_0] [i_0]))))) ? ((-(((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 1])))) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1] [i_0])) < (((/* implicit */int) min((arr_17 [i_1 - 1]), (((/* implicit */short) arr_15 [i_1]))))))))));
                arr_25 [(unsigned short)0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (max((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) < (arr_10 [i_0] [(unsigned char)12] [(unsigned char)12] [i_0] [i_0])))), (15U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_17 [i_1 - 1]), (((/* implicit */short) (unsigned char)127))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 1) 
    {
        for (short i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_35 [17U] [i_8] [(signed char)3] = ((/* implicit */short) 4294967287U);
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)5)) ? ((((_Bool)1) ? (16239480419335114665ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126)))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_10 = 0; i_10 < 14; i_10 += 1) 
    {
        for (int i_11 = 0; i_11 < 14; i_11 += 1) 
        {
            {
                arr_42 [i_11] = ((/* implicit */unsigned long long int) var_11);
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_10])) ? (3195831253U) : (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_10] [i_11] [i_11] [i_10] [12] [i_10])))))) : ((+((+(-8644466646386159458LL))))))))));
                var_26 *= ((/* implicit */signed char) ((max((((/* implicit */unsigned int) arr_40 [10U] [10U])), (min((arr_37 [i_10]), (((/* implicit */unsigned int) (_Bool)0)))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_30 [(_Bool)1])), (arr_29 [i_10]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_40 [(signed char)10] [(signed char)10])) < (((/* implicit */int) var_9))))))))))));
            }
        } 
    } 
}
