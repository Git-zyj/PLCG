/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173058
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) (short)-30999)) ^ (((((/* implicit */_Bool) (short)10601)) ? (((/* implicit */int) (unsigned char)250)) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) (!(((_Bool) (short)-10601)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    var_13 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_1 + 1] [i_1])) >= (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (var_5))))));
                    var_14 += ((/* implicit */long long int) ((arr_3 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) (short)30999)))));
                }
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    for (signed char i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_1] [i_1 - 2] [9] [i_4] = var_6;
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (-((-(((/* implicit */int) (short)-30999))))))) : (((long long int) max((arr_5 [i_1]), (((/* implicit */unsigned short) (_Bool)1))))))))));
                            var_16 = ((/* implicit */long long int) (~(((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)30999))) ^ (arr_11 [i_0] [i_1] [i_3] [i_0] [i_1] [i_4])))))));
                        }
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (arr_8 [i_0]) : (arr_8 [i_0])))) ? (((((/* implicit */_Bool) (short)30999)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-11578))) : (arr_8 [i_0]))) : ((-(arr_8 [i_0])))));
                var_17 ^= ((unsigned char) ((long long int) (-(((/* implicit */int) (_Bool)0)))));
            }
        } 
    } 
    var_18 = (((-((+(((/* implicit */int) var_5)))))) - (((/* implicit */int) ((unsigned short) var_7))));
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 16; i_5 += 4) 
    {
        for (unsigned char i_6 = 2; i_6 < 16; i_6 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) arr_20 [i_6] [i_6])))))) ? (((((/* implicit */int) (short)10579)) * (((/* implicit */int) arr_19 [i_5 + 1] [i_6] [1ULL])))) : (((/* implicit */int) (short)10601))));
                arr_22 [i_6] = ((/* implicit */signed char) var_7);
                arr_23 [i_5 - 2] [i_6] = ((/* implicit */unsigned short) 4958190017654122601LL);
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)10579))) : (var_8)))))))));
            }
        } 
    } 
    var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)19262)) || (((/* implicit */_Bool) 1416069317U)))))))) ? (var_2) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1416069320U)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))) + (((/* implicit */int) (short)-10579)))))));
}
