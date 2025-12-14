/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126877
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((min((((/* implicit */long long int) (short)-3878)), (arr_1 [i_2] [i_4]))) / (min((((/* implicit */long long int) (signed char)-1)), (arr_1 [i_0] [i_4]))))))));
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */short) (signed char)(-127 - 1));
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] [i_3] = ((/* implicit */signed char) (unsigned char)192);
                                arr_14 [i_0] [i_0] [i_4] [i_3] [i_4] |= ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)27437))))) ^ (((unsigned long long int) (unsigned char)175)))), (((/* implicit */unsigned long long int) var_1))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)87)), ((((+(((/* implicit */int) arr_15 [i_0] [i_1] [i_5] [i_6])))) << (((min((((/* implicit */long long int) (unsigned char)76)), (var_5))) - (71LL)))))));
                            arr_20 [i_0] [i_0] [(short)9] [i_0] = (short)5379;
                            var_21 -= ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-11935))) ^ (arr_18 [i_5] [i_2] [i_0]))));
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) max(((+(arr_3 [7LL]))), (((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_1]) / (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0]))))))))) ? (arr_7 [i_1] [i_1]) : (min((arr_16 [i_0] [(signed char)3] [i_0] [(signed char)3] [i_0]), (((/* implicit */int) (signed char)-118)))))))));
                        }
                        arr_21 [i_0] [i_0] [i_1 - 3] [4ULL] [i_0] [i_5] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) (unsigned short)27458)), (12293337016845770241ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27458))) == (var_2)))))))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (-(min((arr_7 [i_1 - 2] [i_1 - 2]), (arr_7 [15] [i_1 - 2]))))))));
                    }
                }
                arr_22 [i_1] = ((/* implicit */signed char) (short)-14603);
                var_24 *= ((/* implicit */unsigned char) max((((long long int) (short)-13431)), (((/* implicit */long long int) ((short) arr_15 [i_1] [i_1] [(unsigned char)10] [i_0])))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) ((unsigned char) var_5));
    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (signed char)-64))));
}
