/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123362
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
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) (~((~(((((/* implicit */int) (short)-2)) | (((/* implicit */int) (unsigned char)32))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_20 = ((signed char) (((((_Bool)0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)2)))) - (((((/* implicit */_Bool) var_16)) ? (0) : (((/* implicit */int) (short)-19269))))));
                                arr_19 [i_1] [(signed char)8] &= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) (+(var_10)))) / (var_18))) << (((((/* implicit */int) (short)-14)) + (72)))));
                            }
                        } 
                    } 
                } 
                var_21 ^= ((/* implicit */long long int) ((signed char) ((((((/* implicit */_Bool) -3)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)227)))) << (((((arr_9 [i_0] [i_1]) + (1349624598))) - (17))))));
                /* LoopNest 3 */
                for (unsigned short i_5 = 4; i_5 < 14; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        for (short i_7 = 1; i_7 < 14; i_7 += 2) 
                        {
                            {
                                var_22 = ((var_15) << (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_18 [i_7] [i_1] [1] [(signed char)15] [(unsigned char)1]), (var_6))))))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((~(0)))))) ? ((~(var_13))) : (max((max((var_19), (((/* implicit */long long int) arr_6 [i_6] [i_1])))), (((/* implicit */long long int) ((unsigned short) 2)))))));
                                arr_26 [(short)8] [i_1] [i_0] [i_6] [(_Bool)1] [(signed char)2] [(unsigned char)10] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((9223372036854775776LL) << (((1129279937U) - (1129279937U))))))))) << (((/* implicit */int) (short)3))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    for (short i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [7] [i_0]);
                            var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)32256)))) - (((((/* implicit */int) var_1)) + (((/* implicit */int) var_0))))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-78))) : (((((var_19) << (((3165687358U) - (3165687358U))))) << (((arr_15 [i_0] [i_0] [i_8] [i_0] [i_9]) - (2987473958U)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) var_5))));
    var_27 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ ((~(3165687358U))))), (var_9)));
    var_28 = ((/* implicit */unsigned long long int) var_2);
    var_29 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)65)) / (((/* implicit */int) var_16))));
}
