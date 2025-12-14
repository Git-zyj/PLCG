/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183438
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
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || ((((!(((/* implicit */_Bool) var_5)))) && (((/* implicit */_Bool) ((unsigned long long int) -1859838403274273393LL)))))));
    var_14 = ((/* implicit */short) 1859838403274273400LL);
    var_15 &= (unsigned short)0;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] = min((((((/* implicit */_Bool) arr_7 [9ULL] [i_1] [i_1] [i_1] [(signed char)9] [i_1])) ? (((/* implicit */int) ((unsigned char) var_2))) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)145)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_0])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0] [(unsigned char)15] [i_0])))))))));
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((short) max((((/* implicit */int) min((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) (unsigned char)1))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_6 [i_0] [7LL] [12U]))))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) min(((unsigned short)7551), (arr_6 [i_0] [i_0] [i_0]))))));
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max(((((_Bool)0) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (short)-323)))), ((~(((/* implicit */int) arr_1 [i_0])))))))));
                }
                arr_13 [i_0] = ((/* implicit */unsigned short) ((unsigned char) max((arr_12 [i_0] [i_0] [i_0] [i_0]), (arr_12 [(unsigned short)19] [i_1] [i_1] [i_1]))));
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) 2147483647);
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 22; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */int) min((min((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])), (((((/* implicit */long long int) 2147483647)) / (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)96)), ((unsigned short)43165))))));
                            var_20 = max((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)231)) < (arr_4 [i_0] [i_0])))), ((((_Bool)1) ? (arr_12 [i_0] [i_0] [(unsigned short)8] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61285))))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))))) : (3370672708486637772ULL))));
                            var_21 = ((/* implicit */long long int) 2147483647);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 -= ((/* implicit */unsigned short) ((short) ((unsigned long long int) (signed char)-8)));
}
