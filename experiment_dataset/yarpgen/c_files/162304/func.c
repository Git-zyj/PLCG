/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162304
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
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_1]), (((/* implicit */short) (unsigned char)0))))) ? (((((/* implicit */_Bool) 6941253797894758243ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (arr_4 [i_0]))) : (((/* implicit */int) ((unsigned short) arr_3 [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)199)) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_2 [i_0]), ((unsigned short)40107))))) : (0LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                arr_5 [(short)2] [(_Bool)1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [(_Bool)1]))))) < (((/* implicit */int) (unsigned char)67))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */_Bool) min((max((arr_8 [i_0] [i_0] [i_2] [i_3]), (((/* implicit */long long int) (signed char)-120)))), (((/* implicit */long long int) ((arr_3 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [10U]))))))));
                            arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) (~(max((((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) (short)-3860)) : (((/* implicit */int) (short)3859)))), (((((/* implicit */int) arr_7 [(unsigned char)10] [i_1] [i_1])) >> (((2147483647ULL) - (2147483628ULL)))))))));
                            arr_13 [i_0] [8ULL] [i_2] [i_3] = ((/* implicit */unsigned char) arr_6 [(short)4]);
                            arr_14 [12ULL] [i_2] [i_2] = ((/* implicit */long long int) arr_11 [i_3] [i_2]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) max((var_13), (var_7)));
    var_14 = ((/* implicit */long long int) var_6);
}
