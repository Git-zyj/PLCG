/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165208
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned int) max((var_10), (var_9)));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1]))))), ((-(arr_5 [i_0] [i_1] [i_0])))));
            }
        } 
    } 
    var_11 *= ((/* implicit */unsigned int) var_1);
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 11; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                arr_23 [(unsigned char)10] [i_5] [i_4] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)145)), (arr_7 [i_2])))) ? (var_7) : (max((((/* implicit */unsigned long long int) (short)8400)), (32767ULL)))));
                                var_12 = ((/* implicit */short) min((var_4), (arr_14 [i_2])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_7 = 1; i_7 < 7; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        {
                            arr_30 [i_2] [i_3] [i_7] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) * ((-(var_7)))));
                            var_13 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (signed char)-42)))))))) : (max((min((32767ULL), (((/* implicit */unsigned long long int) (unsigned char)158)))), (((/* implicit */unsigned long long int) var_6))))));
                            var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)8400))));
                            arr_31 [i_8] [i_2] [i_7] [(signed char)0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2])) ? (var_0) : (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_8] [i_7 - 1] [i_3] [i_2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_2 [i_2] [(unsigned char)1] [i_8])) : (((/* implicit */int) arr_20 [i_8] [i_7] [9] [i_3] [9] [i_2]))))))))));
                            var_15 = ((/* implicit */unsigned int) 18446744073709518862ULL);
                        }
                    } 
                } 
            }
        } 
    } 
}
