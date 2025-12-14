/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145172
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
    var_13 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))), (var_4))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) max((var_1), (((/* implicit */unsigned int) var_2)))))))));
    var_14 = ((long long int) max((((/* implicit */unsigned long long int) var_9)), (var_3)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) (unsigned short)36569))))) % (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (arr_2 [i_0])))));
        var_16 = ((/* implicit */short) ((unsigned long long int) ((unsigned char) 12105683595522251378ULL)));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 12; i_2 += 2) 
        {
            for (unsigned short i_3 = 3; i_3 < 10; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            {
                                arr_17 [i_5] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) 4294967275U);
                                var_17 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-23), (((/* implicit */int) var_10))))) ? (((/* implicit */int) arr_15 [1ULL] [i_2 + 1] [5] [i_2])) : ((+(((/* implicit */int) arr_1 [i_4] [i_2 + 1]))))))), (max(((-(var_5))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [i_1] [i_1])))))))));
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned char)121), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 12105683595522251379ULL)) ? (arr_16 [i_1] [i_2 - 1] [i_3] [i_3] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) : (3547372915291482111ULL))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */signed char) ((_Bool) var_10));
                            arr_23 [i_1] [i_1] = 20U;
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_20 ^= ((6341060478187300208ULL) >> (((8490030875335116566LL) - (8490030875335116508LL))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_1] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((unsigned long long int) (signed char)119))));
                            arr_27 [0] [0] [0] [i_1] [0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) var_10))) >= (((/* implicit */int) var_2))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_29 [i_1] [i_2] [i_3] [(unsigned short)10] [8U]))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6341060478187300237ULL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (var_6) : (((((/* implicit */_Bool) arr_12 [(_Bool)1] [i_1] [i_1] [(_Bool)1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))));
                        }
                        var_24 = arr_22 [i_1] [i_2] [i_3 + 1] [i_1] [i_6 - 1];
                        arr_30 [i_1] [i_3 - 3] [i_2] [i_1] = ((/* implicit */unsigned int) var_8);
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_16 [i_6] [i_6] [i_6 + 1] [i_1] [i_1])) <= (arr_2 [i_2 - 1])));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 3) /* same iter space */
                    {
                        var_26 |= ((/* implicit */unsigned long long int) ((unsigned short) arr_12 [i_2 + 1] [(short)6] [6] [i_10]));
                        arr_33 [(short)3] [10] [10U] [i_1] [(short)3] [(short)3] = ((/* implicit */unsigned short) 3572498577698200622ULL);
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_10] [i_3] [i_2] [i_2] [i_1])) ? (4294967290U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) > (arr_22 [i_2 - 1] [i_2 - 1] [i_3 - 2] [i_10 - 1] [i_10 - 1]))))));
                    }
                    var_28 = ((/* implicit */short) max((min(((~(var_4))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_19 [i_1] [i_2] [i_2] [i_1]))))))), (((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1])))))))));
                    arr_34 [i_3 + 3] [i_1] [i_1] [i_1] = ((/* implicit */short) (-(3572498577698200622ULL)));
                }
            } 
        } 
        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)51))) % ((~(((((/* implicit */_Bool) (unsigned char)134)) ? (0ULL) : (6341060478187300221ULL))))))))));
        arr_35 [i_1] [(unsigned char)0] &= arr_20 [i_1] [i_1] [i_1] [(_Bool)0] [i_1];
    }
    var_30 ^= ((/* implicit */unsigned long long int) var_2);
}
