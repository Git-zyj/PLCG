/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183365
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */signed char) max((((unsigned long long int) arr_4 [i_1] [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0] [i_1])) | (((/* implicit */int) arr_4 [i_0] [i_1])))))));
                var_15 = ((/* implicit */unsigned char) arr_3 [i_0]);
                var_16 = ((/* implicit */unsigned short) arr_2 [(unsigned short)4]);
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned long long int) ((min((((1882361700819513720ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9050))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)65530))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_2])))));
                    arr_8 [(unsigned short)6] [(unsigned short)7] = ((/* implicit */_Bool) ((unsigned short) min((((/* implicit */int) ((unsigned short) arr_5 [(unsigned short)2] [i_0] [i_1] [(unsigned char)12]))), (min((arr_5 [i_0] [i_1] [i_0] [i_1]), (((/* implicit */int) arr_4 [i_0] [i_1])))))));
                }
                for (signed char i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */_Bool) ((unsigned int) arr_4 [(unsigned char)6] [i_1]));
                    arr_13 [i_0] [i_1] [(signed char)7] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_11 [i_0] [i_1] [9ULL]), (((/* implicit */int) arr_6 [i_0] [i_1] [i_3] [i_3]))))) ? (((/* implicit */int) ((unsigned short) arr_11 [i_3] [i_1] [i_0]))) : (max((((/* implicit */int) (unsigned char)255)), (-1533175160)))));
                }
            }
        } 
    } 
    var_19 = var_6;
    var_20 = (!(((((/* implicit */int) ((unsigned char) var_13))) <= (((/* implicit */int) ((unsigned short) var_5))))));
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        for (unsigned long long int i_5 = 3; i_5 < 7; i_5 += 4) 
        {
            {
                var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((arr_6 [i_4] [i_4] [i_4] [i_4]) ? (((/* implicit */int) arr_7 [i_4] [i_5])) : (((/* implicit */int) arr_9 [i_4] [i_5 + 2] [i_5])))), (((arr_1 [i_5]) ? (((/* implicit */int) arr_7 [i_4] [i_5])) : (((/* implicit */int) arr_9 [i_4] [i_5] [i_5]))))))) ? (((((/* implicit */_Bool) ((short) arr_15 [i_4]))) ? (max((arr_2 [i_5]), (((/* implicit */unsigned long long int) arr_0 [i_4] [i_5])))) : (((/* implicit */unsigned long long int) arr_12 [(unsigned short)8] [(short)10] [i_4] [i_5 + 3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_4] [i_4] [i_5] [i_5])))));
                var_22 = ((/* implicit */_Bool) min((((unsigned long long int) ((short) arr_10 [i_4]))), (((unsigned long long int) ((signed char) arr_6 [i_5] [i_5] [(short)8] [i_4])))));
            }
        } 
    } 
}
