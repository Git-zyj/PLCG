/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185781
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((7565932594662194175ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                var_17 = ((/* implicit */unsigned char) arr_0 [i_0]);
                var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 5686338097378885664LL))));
                var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5686338097378885664LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16384))) : (192U))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 8; i_6 += 1) 
                        {
                            {
                                var_20 *= arr_8 [i_5 - 1];
                                arr_17 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) var_1);
                                var_21 = ((/* implicit */short) ((arr_13 [i_4 - 1] [i_5 - 1] [i_4 - 1] [i_5 - 1] [i_6 - 1]) ? ((-(781678413))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_3] [i_4] [i_2] [i_6 + 3])))))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_2] [i_3] [i_2] [i_4 - 1] [i_2])) << (((((/* implicit */int) (unsigned short)49155)) - (49148)))));
                            }
                        } 
                    } 
                    var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 4959949371630198913LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16384))) : (13807051306238787729ULL)));
                    var_24 = (-(((/* implicit */int) arr_14 [i_2] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1])));
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        var_25 += arr_14 [(_Bool)1] [(_Bool)1] [i_4 - 1] [i_4 - 1] [i_4 - 1];
                        var_26 = ((var_10) < (arr_18 [i_3] [i_2] [i_2] [i_7]));
                    }
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned char) ((arr_20 [i_4] [i_4] [i_2] [i_2]) >= (((unsigned int) var_12))));
                        var_28 -= ((/* implicit */signed char) arr_11 [i_4 - 1] [(unsigned short)10] [(unsigned short)10] [i_3]);
                        var_29 = ((/* implicit */short) var_10);
                    }
                    var_30 = ((/* implicit */unsigned short) arr_16 [i_2] [i_2] [i_4] [i_4 - 1] [i_2] [i_3]);
                }
            } 
        } 
        arr_23 [i_2] = ((/* implicit */unsigned int) ((arr_10 [i_2] [i_2] [i_2] [i_2]) >= (((/* implicit */unsigned long long int) arr_20 [i_2] [i_2] [i_2] [i_2]))));
    }
    /* vectorizable */
    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
    {
        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (+(arr_26 [i_9]))))));
        var_32 = ((/* implicit */unsigned char) arr_27 [3]);
        var_33 = (~(arr_26 [i_9]));
        arr_28 [15U] = ((/* implicit */short) var_12);
    }
    var_34 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_7)))) / (((/* implicit */int) var_5))))) ^ (((((/* implicit */_Bool) (unsigned short)65535)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 2147483647))))));
    var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) (signed char)-101)) ? (var_13) : (var_3))) : (min((var_10), (((/* implicit */unsigned int) (_Bool)1)))))))));
}
