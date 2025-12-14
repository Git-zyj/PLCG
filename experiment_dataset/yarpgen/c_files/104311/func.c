/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104311
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_14 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 229376U)) ? (((long long int) -1LL)) : (min((((/* implicit */long long int) var_5)), (-2377092250419843793LL)))))));
                var_15 *= ((/* implicit */signed char) var_11);
                arr_6 [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (!((!(((/* implicit */_Bool) 1077654428U))))))), (max((((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) : (arr_1 [i_0] [i_0]))), (((/* implicit */long long int) (short)-4))))));
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) max((1758304917), (((/* implicit */int) (short)13880))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_16 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) 0U)), (((((((/* implicit */_Bool) -172957774)) ? (7303441623273573980ULL) : (((/* implicit */unsigned long long int) -451594992)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
        arr_11 [i_2] [i_2] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (short)3021)), (1783363106U))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) ((arr_3 [i_2]) == (((/* implicit */unsigned long long int) 1770904955U))))) + (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-2)), ((unsigned char)242)))))))));
    }
    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    {
                        var_17 ^= ((/* implicit */int) min((((((/* implicit */_Bool) arr_13 [i_6])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_3]))))) : (((var_10) ? (((/* implicit */unsigned long long int) var_0)) : (13764798000961846990ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)12913))) <= (0U))))));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((((/* implicit */_Bool) max((((/* implicit */short) arr_19 [i_6] [i_4] [i_4] [i_3])), (arr_12 [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) ((((/* implicit */unsigned long long int) 2942183944U)) == (var_13)))), (min((arr_12 [i_3]), (arr_16 [i_3]))))))) : (min((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))), (max((4294967283U), (((/* implicit */unsigned int) var_7))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 17; i_8 += 2) 
            {
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    {
                        arr_28 [i_9 - 1] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) min((arr_16 [i_7]), (((/* implicit */short) arr_17 [i_3] [i_7] [i_8]))))))) / (max((max((var_0), (((/* implicit */int) arr_13 [(unsigned char)11])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_3] [i_3] [i_3])))))))));
                        var_19 = ((/* implicit */signed char) arr_15 [i_3] [i_7] [i_8]);
                    }
                } 
            } 
        } 
        var_20 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_27 [i_3] [i_3] [i_3] [i_3])) * (((unsigned long long int) (_Bool)0)))))));
    }
}
