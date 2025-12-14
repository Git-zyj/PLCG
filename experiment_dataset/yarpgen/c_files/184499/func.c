/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184499
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 3; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_15 |= ((((/* implicit */int) ((unsigned char) arr_10 [i_2 - 1] [i_4 - 2] [i_0] [i_4] [i_4 - 2]))) / (((/* implicit */int) arr_5 [i_1] [i_3] [i_3] [i_3])));
                                arr_13 [i_1] [i_2] [i_3] = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)71))));
                                arr_14 [(short)0] [i_1] [i_2 + 2] [i_3] [i_3] |= ((/* implicit */unsigned char) var_5);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    for (signed char i_6 = 1; i_6 < 24; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned int) max((((int) (-(((/* implicit */int) (signed char)67))))), (((((/* implicit */_Bool) min((306698613U), (306698613U)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [(unsigned char)9] [i_6] [(unsigned char)9] [(unsigned char)9] [(unsigned char)9]))) == (2304561314U)))) : ((+(((/* implicit */int) var_13))))))));
                                arr_26 [i_7] [i_1] [i_5] [i_1] [i_0] = ((/* implicit */unsigned int) arr_24 [i_6 + 1] [i_6] [i_6 - 1] [i_1] [i_6] [i_7]);
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_9)), (arr_2 [i_0] [i_1] [i_1])))))) ? (((((/* implicit */_Bool) (unsigned short)16203)) ? (((/* implicit */int) (unsigned short)21107)) : (((/* implicit */int) (unsigned char)184)))) : (max((-1169476208), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))))));
            }
        } 
    } 
    var_18 *= ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (short i_8 = 0; i_8 < 18; i_8 += 1) 
    {
        for (int i_9 = 0; i_9 < 18; i_9 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 2; i_11 < 15; i_11 += 3) 
                    {
                        for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 2) 
                        {
                            {
                                arr_40 [i_8] [i_8] [i_10] [i_11] [(signed char)0] = ((/* implicit */unsigned long long int) ((short) (-(((/* implicit */int) (unsigned short)15683)))));
                                var_19 &= ((/* implicit */unsigned char) max((((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_10)))), (((/* implicit */int) ((var_5) <= (((/* implicit */int) arr_20 [i_8] [i_11 + 3] [i_10] [i_11])))))));
                                var_20 = ((/* implicit */unsigned short) ((short) (-(3988268683U))));
                                var_21 *= var_1;
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 18; i_13 += 2) 
                {
                    for (short i_14 = 3; i_14 < 15; i_14 += 3) 
                    {
                        {
                            arr_46 [i_8] [i_8] [i_9] [i_13] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_8] [i_9] [i_13])) ? (((((/* implicit */int) arr_6 [(unsigned short)22] [i_9] [i_9])) & (((/* implicit */int) arr_6 [i_8] [i_9] [i_9])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_8] [i_9] [i_13])) && (((/* implicit */_Bool) arr_6 [i_9] [i_13] [i_13])))))));
                            arr_47 [i_9] [(unsigned short)10] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_43 [i_14 + 2]), (((/* implicit */unsigned int) var_7))))) ? (((/* implicit */int) arr_6 [i_13] [i_9] [i_13])) : (max((arr_25 [i_8] [i_8] [i_14 - 3] [i_14 + 3]), (((/* implicit */int) arr_35 [i_13] [i_13] [i_14 - 3] [i_14 + 3] [i_14 + 1]))))));
                            var_22 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_10 [i_8] [(unsigned char)10] [i_13] [i_14 - 3] [i_14 + 2])) ? (((/* implicit */int) arr_36 [i_8] [i_9] [i_13] [(unsigned char)16])) : (((/* implicit */int) arr_10 [i_8] [i_9] [i_13] [i_14] [i_14 - 1])))), (((/* implicit */int) var_3))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_15 = 0; i_15 < 18; i_15 += 3) 
                {
                    for (unsigned short i_16 = 2; i_16 < 16; i_16 += 1) 
                    {
                        for (short i_17 = 0; i_17 < 18; i_17 += 3) 
                        {
                            {
                                arr_54 [i_8] [i_17] [i_15] [i_16] [i_15] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_37 [i_8] [i_16 - 2] [i_16 - 1] [i_16 - 2] [i_8] [i_16 - 2]), (arr_37 [i_9] [i_16 - 2] [i_16 - 1] [i_16 + 2] [(unsigned char)7] [i_16]))))));
                                var_23 *= ((/* implicit */unsigned char) min((((/* implicit */int) min((arr_15 [i_8] [i_16 - 1] [i_15] [i_16 - 1]), (arr_15 [i_8] [i_16 + 1] [i_15] [i_17])))), (((((/* implicit */int) arr_52 [i_9] [i_9] [i_15] [i_15] [i_16 - 2] [i_16] [i_17])) ^ (((/* implicit */int) ((((/* implicit */int) arr_41 [i_9] [i_15] [i_16] [i_17])) < (var_5))))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) max((((/* implicit */unsigned short) max((arr_51 [i_8] [i_9] [i_9] [i_9]), (((/* implicit */short) var_13))))), (max(((unsigned short)57719), (((/* implicit */unsigned short) arr_51 [i_8] [i_8] [i_9] [i_9])))))))));
            }
        } 
    } 
    var_25 += ((/* implicit */unsigned char) max((-199923976), (((/* implicit */int) ((short) 2147483647)))));
}
