/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164977
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 *= ((/* implicit */short) (+(arr_9 [i_0 - 1])));
                            arr_10 [i_0] [i_0] [i_1] [i_2] [(unsigned short)4] = (_Bool)1;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */short) max(((~(((((/* implicit */int) (unsigned char)198)) >> (((((/* implicit */int) (unsigned char)198)) - (171))))))), (((((/* implicit */_Bool) 1227008762)) ? (((/* implicit */int) (signed char)-76)) : (((/* implicit */int) (short)7119))))));
                            var_21 = ((((((/* implicit */_Bool) (signed char)40)) ? ((-(((/* implicit */int) (short)30478)))) : (((/* implicit */int) ((short) var_0))))) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0]))))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + ((+(arr_9 [1U]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)38046)))) ? (((/* implicit */int) arr_6 [(short)1] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_5]))))))))));
                        }
                    } 
                } 
                arr_16 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                /* LoopNest 3 */
                for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    for (long long int i_7 = 3; i_7 < 14; i_7 += 4) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            {
                                arr_24 [i_0] [i_1] [i_7] [i_7] [i_8] [i_8] = ((/* implicit */short) (unsigned short)2174);
                                arr_25 [i_7] = ((/* implicit */unsigned short) arr_8 [i_0] [(unsigned short)5] [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 4) 
    {
        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
        {
            {
                var_23 ^= ((/* implicit */unsigned char) ((signed char) (unsigned short)27115));
                var_24 |= ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)52531))) != (6320751301491359965LL))))));
            }
        } 
    } 
}
