/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118349
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
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)17723)) ? (((/* implicit */int) (_Bool)1)) : (0)))) : (((((/* implicit */_Bool) (signed char)-114)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))) && (((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned short) ((((var_6) + (2147483647))) << (((((((/* implicit */_Bool) -1)) ? (arr_8 [i_0 - 2] [i_1 - 1] [i_1 - 1]) : (arr_2 [i_1 - 1] [i_1 - 1]))) - (2083375725U)))));
                            var_14 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_1 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))));
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0 + 1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    for (unsigned char i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */short) var_4);
                            var_17 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5 + 4] [i_4] [i_0 + 1]))) : (min((arr_0 [14LL]), (((/* implicit */long long int) (signed char)-89)))))), (((/* implicit */long long int) max((((/* implicit */int) (!((_Bool)1)))), (-653426510))))));
                            var_18 = ((/* implicit */unsigned long long int) 4);
                        }
                    } 
                } 
                arr_15 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((-4) < (((((/* implicit */int) ((((/* implicit */int) arr_9 [i_1])) < (((/* implicit */int) (_Bool)1))))) * (arr_3 [i_1])))));
                var_19 += ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) arr_6 [i_1 - 1] [i_0] [i_1])))));
                /* LoopNest 3 */
                for (unsigned short i_6 = 1; i_6 < 17; i_6 += 3) 
                {
                    for (signed char i_7 = 2; i_7 < 17; i_7 += 4) 
                    {
                        for (signed char i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            {
                                arr_23 [i_0] [i_1] [12LL] [i_7] [i_1] = max((max((((/* implicit */int) max((arr_1 [i_1] [i_8]), ((short)-26359)))), (((((/* implicit */_Bool) arr_14 [(signed char)14] [i_1] [(unsigned char)1] [(signed char)14])) ? (((/* implicit */int) (short)-32751)) : (((/* implicit */int) (short)-15599)))))), ((-(((/* implicit */int) (_Bool)0)))));
                                var_20 = ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned short)0)))) - ((+(((arr_10 [i_0 - 2] [i_0 - 2] [i_6]) - (((/* implicit */int) (_Bool)0))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
