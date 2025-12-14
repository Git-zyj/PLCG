/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158490
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned int) 58750801)) * (4294967289U)))));
                                var_21 = ((/* implicit */unsigned int) (~(min((((((/* implicit */int) (signed char)-109)) ^ (((/* implicit */int) var_14)))), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 1; i_5 < 15; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        {
                            arr_18 [i_5] [i_1] [i_5] [i_1] = ((/* implicit */int) min((arr_15 [i_0] [i_5 - 1] [i_5] [i_5 - 1]), (min((arr_15 [i_1] [i_5 + 3] [i_1] [i_5 + 4]), (arr_15 [i_0] [i_5 + 3] [i_5] [i_5 + 4])))));
                            var_22 -= ((/* implicit */unsigned short) 58750802);
                            var_23 -= ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) -528675970)), (min((((/* implicit */long long int) var_10)), (arr_4 [i_0] [i_5] [i_6])))))));
                            arr_19 [i_6] [i_6] [i_6] [i_6] [i_6] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)94))) > (var_12)));
                            /* LoopSeq 1 */
                            for (unsigned char i_7 = 1; i_7 < 17; i_7 += 1) 
                            {
                                var_24 = ((/* implicit */unsigned short) ((((unsigned int) min((((/* implicit */unsigned char) (signed char)-57)), (arr_1 [i_1] [i_7 - 1])))) < (((/* implicit */unsigned int) 346502174))));
                                var_25 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-66)) ? (-346502174) : (((/* implicit */int) arr_15 [i_5 + 1] [i_5 + 3] [i_5 + 3] [i_5 + 1]))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)-98))) / (-8375612274592750746LL)))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 16; i_8 += 4) 
    {
        for (short i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            {
                var_26 = ((/* implicit */unsigned char) ((min((6U), (((/* implicit */unsigned int) arr_13 [i_8] [i_8] [i_9] [i_8] [i_9] [i_9])))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_8] [i_8] [i_9] [i_9])))));
                var_27 = ((((/* implicit */int) (unsigned char)67)) * (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_8] [i_8] [i_9])) || (((/* implicit */_Bool) 1130749951))))));
            }
        } 
    } 
}
