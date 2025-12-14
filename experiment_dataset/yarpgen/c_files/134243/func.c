/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134243
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
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((1925441336) / (((/* implicit */int) arr_2 [i_0] [i_1 + 2]))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        {
                            arr_13 [i_0] [i_1] [(unsigned char)6] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) (unsigned char)180)) ? (min((((/* implicit */long long int) (unsigned short)65535)), (arr_5 [i_0] [i_2] [i_3]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)21)) ? (((/* implicit */unsigned int) var_2)) : (1015808U)))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)9)))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 2147483647)))))) - (arr_12 [i_0] [i_0] [i_0] [i_0] [i_2] [i_3])));
                            arr_15 [i_3] [8ULL] [1ULL] [8ULL] [8U] [8U] = ((/* implicit */_Bool) var_13);
                            arr_16 [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_3] = ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) arr_11 [i_0] [(signed char)4])), (((var_0) % (((/* implicit */unsigned long long int) var_7))))))));
                        }
                    } 
                } 
                arr_17 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1336555855)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)47279))))) ? (((((min((var_4), (((/* implicit */long long int) arr_8 [i_0] [i_1 + 1] [i_0] [i_1 + 2])))) + (9223372036854775807LL))) << (((/* implicit */int) arr_4 [8LL])))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        for (long long int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            {
                arr_22 [i_4] [i_4] [i_4] = ((((/* implicit */int) var_6)) ^ (min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */int) arr_19 [i_5] [(_Bool)1])) : (((/* implicit */int) var_1)))))));
                arr_23 [i_5] [3LL] [(unsigned char)10] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_9 [i_4] [i_5] [i_4]))) : ((-(arr_9 [i_4] [i_4] [(_Bool)1])))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) var_14)), ((~(((/* implicit */int) var_17)))))))));
}
