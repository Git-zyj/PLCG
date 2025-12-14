/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166531
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
    for (int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((2147483647) % (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_2] [i_0] [i_3]))))) % (((((/* implicit */_Bool) ((5608699362287963427ULL) | (((/* implicit */unsigned long long int) 1013916909U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-8236))) : (3281050383U)))));
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (~((~(arr_2 [i_0] [i_1]))))))));
                            arr_12 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) 2120103642U);
                            arr_13 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (((+(3281050368U))) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-64)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1013916909U) - (((/* implicit */unsigned int) -1914849402))))) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) (signed char)63))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (1690340601) : (((/* implicit */int) (signed char)63))))) - (((((/* implicit */unsigned long long int) arr_2 [i_0] [i_3])) - (18446744073709551604ULL)))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-56)) ? (9876586613783005617ULL) : (((/* implicit */unsigned long long int) 2991116945U))))) ? (7123873562606495381LL) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))) * (3281050392U))))));
                arr_14 [i_1] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) 1013916903U)) ? (17ULL) : (((/* implicit */unsigned long long int) -3407375309641988849LL)))) * (((/* implicit */unsigned long long int) 1013916927U))));
                var_16 = ((/* implicit */long long int) (unsigned char)133);
                var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_1 [i_0])) - ((+(1690340601)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        for (short i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)123)) ^ (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) * (22ULL))) : (((/* implicit */unsigned long long int) (-(arr_16 [(signed char)8] [i_5]))))));
                var_19 = ((/* implicit */unsigned short) arr_15 [i_4]);
            }
        } 
    } 
}
