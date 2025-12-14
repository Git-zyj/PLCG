/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118187
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
    var_18 -= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned char) min((var_12), (((/* implicit */int) (unsigned short)50330)))))), (max((((/* implicit */long long int) max(((unsigned char)255), (var_0)))), (var_6)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    arr_9 [i_0] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 233607901828983694LL)) ? (-233607901828983696LL) : (((/* implicit */long long int) 2300947795U)))))));
                    var_19 = ((/* implicit */unsigned short) ((unsigned char) var_14));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned long long int) 251658240U)) <= ((~(arr_8 [i_0] [i_0]))));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [(unsigned short)10] [i_4 - 1] = ((/* implicit */long long int) var_16);
                                arr_18 [i_0] = var_6;
                            }
                        } 
                    } 
                }
                for (short i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (-(var_14)));
                                var_21 = ((/* implicit */unsigned short) (~(min((((((/* implicit */int) arr_13 [i_0] [(signed char)0] [3ULL] [i_7])) | (((/* implicit */int) arr_4 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [(short)3] [i_0])))))))));
                            }
                        } 
                    } 
                    var_22 = ((unsigned short) (-(((/* implicit */int) (unsigned char)104))));
                    var_23 += ((/* implicit */unsigned int) arr_3 [(signed char)0]);
                    arr_27 [i_0] [i_0] = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_10))))), (min((1517315159U), (((/* implicit */unsigned int) arr_12 [i_0] [i_0] [3U] [(unsigned char)5]))))))));
                }
                var_24 = ((/* implicit */int) 5648534402040654154ULL);
                var_25 = (-(((/* implicit */int) (_Bool)1)));
            }
        } 
    } 
}
