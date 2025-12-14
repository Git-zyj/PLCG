/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171331
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
    var_17 = ((/* implicit */unsigned char) min((var_9), (((/* implicit */short) (_Bool)1))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) (_Bool)1))));
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) (unsigned short)27833)) : (((/* implicit */int) ((var_4) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1])))))))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-93)) ? (((/* implicit */int) (unsigned char)116)) : (((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */short) arr_1 [i_0])))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 24; i_2 += 4) 
                {
                    arr_10 [i_0] [i_2] [i_0] = arr_3 [i_0] [6LL];
                    var_19 = (!(((/* implicit */_Bool) (+(((/* implicit */int) max((var_9), (((/* implicit */short) (_Bool)1)))))))));
                    arr_11 [i_2] = arr_4 [i_2 + 1] [i_2 + 1] [i_1];
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_11)), (((unsigned long long int) min((var_0), (((/* implicit */unsigned short) (signed char)-93)))))));
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (short)13751)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1)))))) ? (var_8) : (((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0]))))) / (arr_13 [i_0] [i_0] [i_1] [i_1] [i_3] [i_2])))));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_2] [i_2] = ((/* implicit */long long int) ((signed char) max((max((arr_15 [i_0] [i_0] [(signed char)20] [i_0] [i_0] [i_2] [i_2]), (((/* implicit */unsigned long long int) var_14)))), (((/* implicit */unsigned long long int) min(((unsigned short)7419), (((/* implicit */unsigned short) (unsigned char)255))))))));
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) max((((((/* implicit */int) ((((/* implicit */_Bool) 2757858291U)) && (((/* implicit */_Bool) var_16))))) <= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))), ((!(((/* implicit */_Bool) ((var_8) ^ (((/* implicit */unsigned long long int) var_16)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        arr_19 [i_5] [i_5] = min((max((((((/* implicit */_Bool) 0ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10266))))), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_7)) | (((/* implicit */int) arr_1 [i_5]))))))));
        var_23 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (min((1596125691U), (((/* implicit */unsigned int) (unsigned char)255)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7001))))));
        arr_20 [i_5] = arr_18 [i_5] [(_Bool)1];
        /* LoopNest 3 */
        for (signed char i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                for (unsigned int i_8 = 3; i_8 < 13; i_8 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 1; i_9 < 10; i_9 += 1) 
                        {
                            arr_30 [i_9] [i_8] [i_7] [i_9] [i_9] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) min((((/* implicit */unsigned char) arr_22 [i_6])), ((unsigned char)116)))))));
                            var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-6))));
                        }
                        var_25 = ((/* implicit */unsigned int) (short)-7001);
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65509)))))));
    }
}
