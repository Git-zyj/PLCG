/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129953
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
    var_16 -= ((/* implicit */signed char) var_3);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (((/* implicit */int) arr_1 [i_0] [i_0]))))))))) * (((arr_0 [i_0]) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_0]))))))));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_0 [i_0])), (arr_1 [i_0] [i_0])))), (max((((/* implicit */unsigned int) var_3)), (0U))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        arr_7 [i_1] = max((min((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1]))), (max((arr_6 [i_1] [i_1]), (arr_6 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (long long int i_3 = 2; i_3 < 23; i_3 += 2) 
            {
                {
                    arr_12 [i_1] [i_2] = ((((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_7)), (arr_8 [i_1] [i_2] [i_1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_3 - 1] [i_2] [i_2])))))))) > (max(((-(var_10))), (((/* implicit */unsigned long long int) arr_4 [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            {
                                var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)9399)) ? (((/* implicit */long long int) 350788228U)) : ((-9223372036854775807LL - 1LL))));
                                arr_17 [i_2] [i_5] [i_2] [i_5] &= ((/* implicit */long long int) var_10);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_18 [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_9 [i_1])) : (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])))));
        /* LoopNest 3 */
        for (unsigned char i_6 = 1; i_6 < 22; i_6 += 1) 
        {
            for (short i_7 = 2; i_7 < 20; i_7 += 1) 
            {
                for (short i_8 = 1; i_8 < 23; i_8 += 3) 
                {
                    {
                        var_19 = ((/* implicit */long long int) (((-(((((/* implicit */_Bool) arr_15 [i_7] [i_7] [i_7])) ? (((/* implicit */long long int) arr_20 [i_1])) : (arr_8 [i_1] [i_6] [i_7]))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_15 [i_1] [i_1] [i_1])), (var_4)))) > ((-(((/* implicit */int) arr_24 [i_1] [i_6] [i_7 - 2]))))))))));
                        var_20 ^= ((/* implicit */unsigned int) var_10);
                        var_21 = ((/* implicit */unsigned long long int) arr_19 [i_8 + 1] [i_6 + 2]);
                    }
                } 
            } 
        } 
        var_22 |= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)50620)) <= (((/* implicit */int) (short)(-32767 - 1)))))) > (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    var_23 = ((/* implicit */unsigned char) var_12);
}
