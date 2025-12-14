/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123935
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
    var_18 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_3)) : (var_14)))) ? (((/* implicit */unsigned long long int) var_2)) : (var_4))) & (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_15))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) 4503599090499584ULL)) ? (arr_6 [i_1 - 1] [i_3] [i_1 - 1] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4173464583U)) <= (10366332798850222268ULL))))))) * (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) (unsigned char)3)))))));
                                var_19 = 8080411274859329348ULL;
                                arr_12 [i_4] [i_1 - 1] [i_2] [6U] = ((/* implicit */signed char) ((((unsigned int) min((((/* implicit */int) arr_0 [i_3])), (1655704496)))) < (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0] [i_3])) ? (((/* implicit */int) var_13)) : (-1422823275))), (((/* implicit */int) (!(((/* implicit */_Bool) 5546694056272720328ULL))))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] [i_2]) : (arr_9 [i_0] [i_1] [i_2] [i_1] [i_2] [i_1 + 1] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(_Bool)0] [i_1 + 1] [i_0] [i_0] [i_0] [i_0])) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [(unsigned short)11] [i_0]) : (arr_8 [i_1] [(signed char)3] [(_Bool)0] [i_1 + 2] [i_1] [i_1]))))));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((unsigned short) min((((arr_8 [i_0] [i_1] [3] [i_0] [i_1] [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (arr_7 [i_1] [i_1] [i_2] [i_1] [i_0])))))));
                }
                /* vectorizable */
                for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    arr_16 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_1))))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)3)) ? (-1475271482038454408LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))));
                    var_21 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17))));
                    var_22 = ((/* implicit */_Bool) ((unsigned char) arr_2 [i_0]));
                }
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) var_1);
                                arr_23 [i_0] [i_1] [i_6] [i_8] [i_8] |= ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (unsigned short)41613))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 ^= ((/* implicit */unsigned int) var_11);
}
