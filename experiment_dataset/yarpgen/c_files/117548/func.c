/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117548
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
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 17; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_18 *= ((/* implicit */unsigned char) arr_9 [6U]);
                                var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((4145665268U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [(_Bool)1] [i_0] [i_3] [i_4])))))) ? (((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */long long int) ((/* implicit */int) (short)21828))) : (arr_4 [i_0 - 1] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((-26277529) <= (((/* implicit */int) (short)-21829)))))))) - (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 335581172)) || ((_Bool)1)))))))));
                                var_20 = ((/* implicit */long long int) (short)-21847);
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1] = ((/* implicit */signed char) arr_4 [i_1] [(unsigned short)18] [(unsigned short)18]);
                arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) 9007199254740991LL);
                /* LoopNest 2 */
                for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    for (int i_6 = 2; i_6 < 17; i_6 += 1) 
                    {
                        {
                            arr_22 [i_0] [i_0] [i_1] [i_1] [i_5] [i_6] = ((/* implicit */unsigned long long int) var_5);
                            var_21 = ((/* implicit */unsigned short) ((int) ((arr_12 [i_0 + 1] [i_0] [i_0] [i_0] [(_Bool)1]) ? (((/* implicit */int) arr_12 [i_0 + 2] [18] [i_0] [i_0] [i_0 + 2])) : (((/* implicit */int) arr_12 [i_0 + 2] [(signed char)18] [i_0] [(short)6] [(unsigned char)4])))));
                            var_22 = ((/* implicit */unsigned long long int) ((_Bool) ((signed char) max((((/* implicit */long long int) var_13)), (8313333045455121768LL)))));
                            arr_23 [(short)9] [(unsigned short)3] [i_5] [i_0] [i_6 + 2] = ((/* implicit */unsigned int) (+(((((/* implicit */int) ((arr_16 [i_6] [i_5] [i_1] [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_6])))))) / (((/* implicit */int) min((arr_18 [(signed char)12]), (((/* implicit */unsigned short) (short)21845)))))))));
                            arr_24 [(short)0] &= ((unsigned short) min((((/* implicit */long long int) (unsigned char)255)), (min((((/* implicit */long long int) (short)1717)), (arr_9 [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((unsigned short) ((unsigned long long int) ((unsigned short) 440821719)))))));
}
