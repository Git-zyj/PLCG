/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169072
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
    var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)9210)) : (((/* implicit */int) (signed char)106))));
    var_11 = ((/* implicit */unsigned short) ((signed char) var_8));
    var_12 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_5))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))) ? ((+(((/* implicit */int) (signed char)87)))) : (((/* implicit */int) (signed char)-107)))), (((((((/* implicit */int) (signed char)-86)) + (2147483647))) >> (((272341926U) - (272341913U)))))));
                            arr_11 [i_1] [i_0] [i_1] [14LL] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((arr_8 [i_0] [i_0] [i_1] [i_2] [i_2]) - (arr_8 [i_1] [i_0] [i_1] [i_1] [i_1])))) ? ((-(((/* implicit */int) arr_3 [i_0] [i_1] [i_0])))) : (((/* implicit */int) ((signed char) (signed char)110)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_4 = 4; i_4 < 20; i_4 += 1) 
                {
                    for (unsigned char i_5 = 3; i_5 < 19; i_5 += 1) 
                    {
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_8 [(unsigned short)18] [i_0] [i_4] [i_1] [i_4 + 1]);
                            arr_18 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65535))))) ? ((+(((/* implicit */int) (unsigned short)27)))) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) arr_14 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65520)) ? (arr_2 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (((4695456204616764210LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10)))))))));
                            var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((unsigned char) max((((((/* implicit */_Bool) -7952764200434940235LL)) ? (arr_6 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [16LL]))))), (((/* implicit */long long int) ((arr_5 [i_0] [i_0]) ? (((/* implicit */int) arr_1 [(_Bool)1] [i_1])) : (((/* implicit */int) arr_1 [(unsigned short)4] [(unsigned short)4])))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967273U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))))) % (var_7))) : ((+((((_Bool)1) ? (((/* implicit */long long int) 4294967273U)) : (7952764200434940234LL)))))));
}
