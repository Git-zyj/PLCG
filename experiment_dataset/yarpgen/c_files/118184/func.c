/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118184
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                var_16 += ((/* implicit */signed char) ((min((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [(unsigned char)6] [(unsigned char)6])) && (((/* implicit */_Bool) (signed char)-39))))), (1528681615))) | (((/* implicit */int) ((unsigned short) min((arr_4 [i_3] [i_2] [i_3]), (((/* implicit */unsigned long long int) var_12))))))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (var_15)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [(unsigned char)10])))))))))) & (var_6)));
                                var_18 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) min((var_5), (((/* implicit */long long int) var_12))))) ^ (min((var_8), (arr_4 [i_0] [(_Bool)1] [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)38))))) ^ (min((var_9), (var_4))))))));
                                arr_12 [i_0] [i_2] [i_2] [5U] [i_4] [i_4] [1ULL] = ((/* implicit */short) var_10);
                                arr_13 [9ULL] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned long long int) min((2946184558128147039LL), (((/* implicit */long long int) (_Bool)1))))) <= (min((((/* implicit */unsigned long long int) var_13)), (8217488416271240991ULL))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 1; i_5 < 12; i_5 += 3) 
                {
                    for (unsigned short i_6 = 2; i_6 < 10; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) arr_16 [i_0] [(unsigned short)12] [(unsigned char)5] [i_6]);
                            var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned char) (unsigned short)6135))), (var_15)));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_4)) > (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)39)) >= (((/* implicit */int) arr_7 [i_0] [i_0] [i_5 + 1] [(unsigned short)7])))))) ^ (min((((/* implicit */unsigned long long int) (signed char)-1)), (var_11)))))));
                            /* LoopSeq 1 */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_7] [i_7] [i_7])) - (((/* implicit */int) ((arr_1 [i_5 - 1] [i_6 + 2]) >= (arr_1 [i_5 + 1] [i_6 + 2]))))));
                                var_23 = ((/* implicit */signed char) ((max((((/* implicit */int) ((_Bool) arr_14 [(signed char)0] [i_0]))), (((((/* implicit */int) arr_5 [(_Bool)1])) << (((var_0) - (3280649736U))))))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1] [(unsigned char)0]))) != (((((/* implicit */_Bool) arr_2 [i_1] [i_5] [i_1])) ? (arr_4 [i_5] [i_6] [i_1]) : (var_8))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = var_12;
    var_25 = ((/* implicit */_Bool) (signed char)-19);
}
