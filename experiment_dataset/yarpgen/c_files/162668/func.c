/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162668
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
    var_10 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) arr_2 [i_1 + 1] [(unsigned char)2])) | (var_1))) % (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_0 [i_1 - 1])))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 3) 
                {
                    var_12 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        arr_9 [13LL] [(signed char)5] [i_1] [i_2 - 1] = ((/* implicit */unsigned short) arr_1 [i_0]);
                        var_13 = ((/* implicit */unsigned short) arr_6 [i_0] [i_0] [i_0]);
                    }
                    var_14 *= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0))));
                    var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [(unsigned char)16])) ? (arr_2 [i_1 + 2] [(unsigned char)14]) : (arr_8 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_2 + 2])));
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((long long int) arr_4 [i_1 + 3] [i_1 + 1] [i_1]));
                }
                /* vectorizable */
                for (long long int i_4 = 3; i_4 < 20; i_4 += 3) 
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4485164585718915754ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30))) : (12959541435692609164ULL)));
                    arr_13 [i_0] [i_1] = ((/* implicit */unsigned char) ((var_8) ? (((/* implicit */long long int) arr_7 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_4 + 1])) : (arr_1 [i_1 + 3])));
                }
                for (unsigned short i_5 = 1; i_5 < 17; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 19; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)68)) ? (arr_2 [12] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_1 + 3] [i_1 + 3])))))))));
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) 1247428544526145294LL))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236))) : (((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1] [i_5 - 1] [i_5 - 1])) ? (arr_8 [i_1 + 1] [i_1 + 3] [i_5 - 1] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) (short)-5970);
                                var_20 -= arr_5 [i_1] [i_8] [17U] [i_1];
                                var_21 = ((/* implicit */unsigned long long int) var_6);
                                arr_25 [i_1] [i_1] [18LL] [i_1] [i_9] = ((/* implicit */unsigned short) ((int) max((min(((signed char)31), (((/* implicit */signed char) (_Bool)1)))), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_1)) > (var_9)))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
