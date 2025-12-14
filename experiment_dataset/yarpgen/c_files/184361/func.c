/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184361
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
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) min((0ULL), (((/* implicit */unsigned long long int) (unsigned char)29)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) arr_6 [i_0 - 3] [i_0 - 3] [(unsigned char)3] [i_0 - 3]))));
                    var_15 = ((/* implicit */unsigned short) arr_5 [i_2] [i_2] [10U]);
                    var_16 ^= ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned char)3] [i_1] [i_2 - 1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) max((arr_4 [i_1]), (((/* implicit */unsigned char) arr_6 [i_0 + 1] [(short)20] [(_Bool)1] [i_0 + 1]))))))));
                    var_17 = ((/* implicit */signed char) max((max(((unsigned short)65535), (((/* implicit */unsigned short) (short)17786)))), (((/* implicit */unsigned short) arr_0 [i_0 - 3]))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) var_9);
    var_19 += ((/* implicit */unsigned short) min((((unsigned int) ((_Bool) var_4))), (((/* implicit */unsigned int) var_10))));
    /* LoopNest 3 */
    for (unsigned int i_3 = 3; i_3 < 17; i_3 += 2) 
    {
        for (unsigned char i_4 = 4; i_4 < 17; i_4 += 4) 
        {
            for (long long int i_5 = 3; i_5 < 17; i_5 += 3) 
            {
                {
                    var_20 |= ((/* implicit */long long int) max((((/* implicit */unsigned int) arr_9 [11ULL])), (((unsigned int) 0))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 3; i_6 < 16; i_6 += 2) 
                    {
                        for (signed char i_7 = 4; i_7 < 18; i_7 += 2) 
                        {
                            {
                                arr_22 [7U] [i_6] [i_5] [i_6] [i_3 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [11ULL] [i_4 + 2] [i_5 - 3] [i_6] [i_7 - 3])) ? (-2) : (((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */int) arr_13 [i_4 - 3] [i_3])) : (-1)))))) ? (((long long int) 1012376248U)) : (((/* implicit */long long int) ((unsigned int) min((arr_12 [i_3]), (((/* implicit */unsigned int) (unsigned short)54170))))))));
                                arr_23 [i_3 + 1] [i_6] [(unsigned char)17] [i_3] [i_7 + 1] [i_7 + 1] = ((/* implicit */unsigned char) -154126590618876613LL);
                                var_21 = ((/* implicit */unsigned int) ((short) ((signed char) ((unsigned char) -373832873037742467LL))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) max((var_22), (arr_7 [i_4])));
                }
            } 
        } 
    } 
}
