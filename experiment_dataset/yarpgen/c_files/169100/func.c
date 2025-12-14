/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169100
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */short) (((~((-(((/* implicit */int) (_Bool)1)))))) << (((((/* implicit */int) (short)15344)) - (15319)))));
                            var_15 += ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)30)), ((unsigned char)116)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -5857611208890173628LL)))))));
                            arr_10 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) (short)25002)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)58643)))))), ((+(((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 2]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_4 = 1; i_4 < 10; i_4 += 4) 
                {
                    for (unsigned char i_5 = 3; i_5 < 12; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 11; i_6 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned char)116)), (7846574821297575709LL)));
                                var_17 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (unsigned short)57344))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_5 - 1]))) : (min((var_1), (arr_2 [i_4]))))) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                arr_20 [i_4] [i_1] [i_5] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-15344))))) ? ((+(((/* implicit */int) (unsigned short)34117)))) : (((int) ((((/* implicit */_Bool) 11690723980894228558ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (549755813887LL))))));
                            }
                        } 
                    } 
                } 
                arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 - 2]))) | (arr_6 [i_1 - 1] [i_1 - 2] [i_1])))), (var_5)));
                arr_22 [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_1] [i_0] [i_1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1 + 1])) : (arr_7 [i_1 - 2]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) (unsigned short)6892)), (((((/* implicit */_Bool) 3921497607U)) ? (-8867981713628497583LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57344))))))), (((((((/* implicit */long long int) var_12)) ^ (3992346980317188897LL))) | (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))));
    var_19 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)255))))) ? (549755813903LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)110)) ^ (((/* implicit */int) (unsigned short)8191))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) (unsigned short)34117))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)33283), (((/* implicit */unsigned short) (short)-13)))))) : (((((/* implicit */_Bool) 8579100864690585295ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))))));
}
