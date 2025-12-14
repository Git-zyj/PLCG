/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114928
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
    var_10 = ((/* implicit */unsigned long long int) (unsigned char)4);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1 - 2] [(unsigned char)13] [(_Bool)1] = ((/* implicit */unsigned char) min((((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)4)) && (((/* implicit */_Bool) var_7))))), (max(((short)-12861), (((/* implicit */short) arr_2 [i_0]))))));
                    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)243))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2]))))) : (((/* implicit */int) arr_6 [i_0] [i_0]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_3 [i_3] [(unsigned char)4] [i_3]), (arr_15 [i_3] [i_3] [i_3]))))));
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 17; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 15; i_7 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) (~((+((~(((/* implicit */int) arr_6 [i_3] [0U]))))))));
                                arr_23 [i_3] [7U] [i_5] [i_6] [i_7] [i_3] [i_5] = ((/* implicit */unsigned int) arr_21 [i_4] [i_5] [i_7]);
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)27)) << (((3671608253U) - (3671608251U)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)4))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)192)), (623359043U)))))))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-27)) ? (((/* implicit */int) arr_2 [i_3])) : (((/* implicit */int) arr_3 [i_3] [i_4] [i_3]))))) & (((var_5) ? (var_3) : (((/* implicit */unsigned long long int) -6283630853039053924LL))))))));
                /* LoopNest 2 */
                for (signed char i_8 = 3; i_8 < 15; i_8 += 2) 
                {
                    for (int i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), (((((/* implicit */int) (unsigned short)54010)) << (((/* implicit */int) arr_17 [i_9]))))))) ? (((/* implicit */int) (unsigned char)7)) : (min((((/* implicit */int) (unsigned char)13)), ((-(((/* implicit */int) (_Bool)0)))))))))));
                            var_16 = ((/* implicit */short) (_Bool)1);
                            arr_30 [i_9] [i_4] [i_9] = ((/* implicit */unsigned long long int) var_2);
                        }
                    } 
                } 
            }
        } 
    } 
}
