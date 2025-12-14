/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126698
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
    var_20 = ((/* implicit */short) (unsigned short)65532);
    var_21 = ((/* implicit */unsigned char) (((((~(7210072948531002748LL))) * (((/* implicit */long long int) ((/* implicit */int) var_5))))) ^ (((/* implicit */long long int) ((int) min(((unsigned short)23393), (((/* implicit */unsigned short) (short)-24462))))))));
    var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)65535)), (var_12)))) ? (var_11) : (((/* implicit */int) ((unsigned short) 3883119701U))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_12 [i_3] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)61075)) ? (((/* implicit */int) (short)-14306)) : (((/* implicit */int) (short)32753))))) || (((/* implicit */_Bool) 1565081748)))))));
                            /* LoopSeq 3 */
                            for (short i_4 = 1; i_4 < 12; i_4 += 3) 
                            {
                                arr_17 [i_2] [i_1] [i_2] [i_3] [i_3] [(unsigned char)2] = ((/* implicit */int) min((6512684062055403392ULL), (((/* implicit */unsigned long long int) max((756238819661824974LL), (((/* implicit */long long int) (+(1261312976)))))))));
                                var_23 -= ((/* implicit */int) min((((/* implicit */short) arr_13 [i_4 + 1] [i_3] [i_2] [i_1] [i_0])), (((short) (!(((/* implicit */_Bool) 9323340912835197525ULL)))))));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                            {
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_1] &= ((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_3] [i_0] [i_1]);
                                arr_23 [i_2] [i_3] [10U] [(unsigned char)2] [i_2] = ((/* implicit */unsigned int) arr_7 [i_2]);
                                var_24 -= ((/* implicit */short) min(((unsigned short)61105), (((/* implicit */unsigned short) (unsigned char)31))));
                            }
                            /* vectorizable */
                            for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
                            {
                                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (~(arr_21 [i_0] [i_1] [i_2] [i_3] [i_6]))))));
                                arr_26 [i_0] [i_1] &= ((/* implicit */unsigned char) ((unsigned short) arr_25 [i_0] [i_0] [i_0]));
                                var_26 -= ((/* implicit */unsigned short) arr_3 [i_0]);
                            }
                            var_27 -= ((/* implicit */short) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [(short)4] [i_0] [(signed char)1] [(short)4] [i_0]))))) ? (((int) 1575172189U)) : (((/* implicit */int) (!(((/* implicit */_Bool) 15655388838131780294ULL))))))), (((/* implicit */int) arr_5 [i_1]))));
                        }
                    } 
                } 
                arr_27 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) min((arr_15 [i_0] [7ULL] [i_1] [i_1] [7] [i_1]), (arr_15 [i_0] [i_1] [i_1] [i_0] [(unsigned char)12] [(short)12])))) : (((long long int) 1467728602U))));
                var_28 += ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)30644)) : (((/* implicit */int) var_2)))), (((/* implicit */int) var_1))));
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 11; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_29 -= ((/* implicit */short) (+(min((arr_15 [i_8] [i_7 + 3] [i_7] [i_7 + 1] [i_7 - 2] [i_7]), (arr_15 [i_8] [i_7 + 3] [i_7] [i_7 - 1] [i_7 + 4] [i_1])))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
                            {
                                var_30 += ((/* implicit */unsigned short) (-(arr_4 [i_7 + 1] [i_7 + 4] [i_7])));
                                var_31 |= ((/* implicit */unsigned int) var_5);
                            }
                        }
                    } 
                } 
                arr_38 [i_0] [(short)13] = var_4;
            }
        } 
    } 
}
