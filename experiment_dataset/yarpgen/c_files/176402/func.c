/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176402
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_14 [i_2] [i_1 - 1] [i_2] &= ((/* implicit */short) var_12);
                                var_17 = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_0] [i_1] [i_2])), (arr_5 [i_0] [i_2] [i_4])));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0] [i_0] [i_1 - 1] [i_0] [i_0])) ? (min((8929760403231390959ULL), (14795206374454665122ULL))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_4 [i_0] [(unsigned char)9])), (arr_3 [i_0] [i_1])))), (((arr_9 [i_0] [i_0] [i_1] [i_1] [(unsigned short)4]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1]))))))))))));
                var_19 ^= var_3;
            }
        } 
    } 
    var_20 = var_15;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
        {
            for (unsigned short i_7 = 1; i_7 < 10; i_7 += 3) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min((((/* implicit */int) var_1)), (max((max((((/* implicit */int) (unsigned short)65525)), (-3095315))), (max((511), (((/* implicit */int) var_9)))))))))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        for (signed char i_9 = 1; i_9 < 9; i_9 += 3) 
                        {
                            {
                                arr_26 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = min((((((/* implicit */_Bool) (-(var_12)))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_5] [i_8] [i_5] [i_8] [i_9] [7U] [i_8]))))))), ((!(((/* implicit */_Bool) arr_7 [i_9] [i_9] [i_9 - 1] [i_9 - 1] [i_9])))));
                                arr_27 [i_5] [i_5] [i_7 - 1] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) min((-211822087), (((/* implicit */int) (unsigned short)7))))), (min((arr_18 [i_5] [i_5] [(signed char)3]), (arr_5 [i_5] [i_5] [i_5]))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (+(((/* implicit */int) (((~(((/* implicit */int) arr_3 [i_6] [i_6])))) == ((-(((/* implicit */int) var_6))))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 4) 
                        {
                            {
                                arr_35 [i_6] [i_10] [i_6] [i_7] [i_6] [i_6] = ((/* implicit */int) arr_22 [i_10] [i_6] [i_10] [i_10] [i_5]);
                                arr_36 [i_5] [i_5] [i_6] = min((((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [8ULL] [i_6])), (var_1)))), ((~(arr_31 [i_5]))));
                                arr_37 [i_6] [i_10] [i_7 + 1] [i_6] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_7 [i_5] [i_6] [i_6] [i_6] [i_11])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) ((max((var_4), (var_12))) + (min((((/* implicit */unsigned long long int) var_3)), (min((var_12), (((/* implicit */unsigned long long int) var_11))))))));
}
