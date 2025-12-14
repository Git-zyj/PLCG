/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121266
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
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [1] [4] [(signed char)1] = arr_3 [i_0];
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (+(((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)4] [i_1] [i_2])) || (((/* implicit */_Bool) (unsigned short)0))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((unsigned char) ((int) arr_9 [i_0] [i_0] [(unsigned char)4] [i_0] [10] [i_4]))))));
                                var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)16)) : (((/* implicit */int) (unsigned short)16))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 4; i_6 < 10; i_6 += 1) 
                        {
                            {
                                arr_19 [i_0] [i_1] [11] [i_5] [i_6 - 3] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)102))));
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) (+((+(var_6))))))));
                                var_18 = ((/* implicit */int) ((unsigned int) (+(var_13))));
                                arr_20 [i_0] [i_1] [i_2] [i_2] [i_5] [i_6] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65523)))))));
                                arr_21 [i_2] [i_1] [i_5] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)29)) || (((/* implicit */_Bool) arr_10 [i_0] [(signed char)0] [i_5] [i_6])))))));
                            }
                        } 
                    } 
                    arr_22 [i_0] [i_1] [(signed char)2] [(unsigned short)9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_0] [4U] [i_0] [8U] [i_0])) || (((/* implicit */_Bool) arr_16 [i_0] [6] [i_2] [(unsigned short)10] [i_0]))));
                }
                for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    arr_26 [i_0] [11] [(signed char)4] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1017983008))));
                    arr_27 [i_0] [i_1] [i_7] = ((/* implicit */signed char) max((max((((/* implicit */int) (unsigned short)65535)), (((((-1017983021) + (2147483647))) << (((((/* implicit */int) (unsigned char)29)) - (29))))))), (min(((+(-259047208))), (((/* implicit */int) var_9))))));
                }
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
                {
                    arr_30 [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) arr_7 [(signed char)2] [i_1] [i_1] [i_8])))));
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) (unsigned char)35))));
                    arr_31 [i_8] [i_1] [i_0] = ((/* implicit */unsigned int) arr_14 [i_0] [7U] [i_1] [i_8] [i_8]);
                }
                var_20 = ((/* implicit */unsigned int) var_14);
                arr_32 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_0] [(unsigned short)6] [(unsigned char)8] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12))))) % (max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_0] [i_1])), (18446744073709551615ULL)))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)-7))));
}
