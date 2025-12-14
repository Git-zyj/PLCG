/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131122
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
    for (long long int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((signed char) var_19))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8))))) ^ (17ULL)))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        {
                            arr_8 [(unsigned char)17] [i_1] [i_1] [6] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)1)))))))));
                            var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 14534890721694155894ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (910520626U))) << ((((~(((((/* implicit */_Bool) (unsigned short)38179)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [0LL]))) : (arr_7 [i_2] [i_2] [7ULL] [7ULL] [15ULL]))))) + (61202LL)))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_4 = 1; i_4 < 19; i_4 += 1) 
                {
                    var_22 *= ((/* implicit */unsigned int) var_9);
                    var_23 = ((/* implicit */long long int) (+(3384446662U)));
                }
                for (signed char i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                {
                    var_24 = ((/* implicit */_Bool) max((var_24), ((_Bool)1)));
                    var_25 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) (short)19011)))));
                }
                for (signed char i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                {
                    arr_15 [10U] [10U] = ((/* implicit */long long int) (~(var_11)));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        arr_19 [i_0] [(unsigned char)4] [(unsigned char)4] = ((/* implicit */signed char) ((877379269) * (((/* implicit */int) (_Bool)0))));
                        arr_20 [i_1] [i_1] [i_6] = (-(((/* implicit */int) arr_14 [i_0] [i_1] [i_7] [i_7])));
                    }
                    arr_21 [i_0] [13] [16U] [i_6] = ((/* implicit */short) ((long long int) (unsigned char)249));
                    var_26 = ((/* implicit */int) max((var_26), ((~(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))))));
                }
                for (signed char i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 1) 
                    {
                        for (int i_10 = 1; i_10 < 20; i_10 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (((!((_Bool)1))) || (((/* implicit */_Bool) (-(var_19)))))))) * ((((~(9U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1)))))))))));
                                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((signed char) (_Bool)1)))));
                            }
                        } 
                    } 
                    arr_28 [i_0] [i_1] [i_8] = ((/* implicit */unsigned char) min((((/* implicit */int) var_8)), ((-(((/* implicit */int) ((var_19) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)40))))))))));
                }
                arr_29 [(unsigned char)9] [(unsigned char)9] &= ((/* implicit */signed char) var_16);
                var_29 = ((/* implicit */int) (-((-(910520653U)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_11 = 0; i_11 < 22; i_11 += 3) 
    {
        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 4) 
        {
            {
                var_30 = ((/* implicit */unsigned long long int) max((var_30), (var_9)));
                var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)90)))))));
                arr_34 [i_11] [i_12] = ((/* implicit */long long int) 13U);
                arr_35 [(unsigned short)3] [(unsigned short)3] = ((/* implicit */unsigned short) ((unsigned char) ((((((long long int) arr_5 [i_11] [i_11] [i_12] [i_12])) + (9223372036854775807LL))) << (((((((var_4) + (2147483647))) >> (((var_13) + (6282386371907748111LL))))) - (669))))));
                arr_36 [i_11] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [(unsigned short)2] [(unsigned char)1]))) <= (arr_4 [i_11] [i_12] [i_12] [i_12]))) ? (((/* implicit */int) var_3)) : (-1626971368)));
            }
        } 
    } 
    var_32 = ((/* implicit */signed char) var_13);
}
