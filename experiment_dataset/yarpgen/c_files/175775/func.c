/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175775
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) % (((/* implicit */int) (short)11288))));
    var_17 -= ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (signed char)-24)))) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) var_13))))));
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((-9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_19 = min((32256U), (((/* implicit */unsigned int) (unsigned short)59605)));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_20 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (_Bool)0)), (min((((/* implicit */unsigned long long int) (+(arr_2 [i_3])))), ((((_Bool)1) ? (6609238228660224914ULL) : (((/* implicit */unsigned long long int) 696858705))))))));
                                arr_13 [i_3] [i_3 + 2] [i_3] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (((long long int) ((((/* implicit */_Bool) arr_11 [(_Bool)1] [i_1] [i_1 + 2] [i_0] [(signed char)4] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (-239218507))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_5 = 1; i_5 < 21; i_5 += 4) 
                {
                    arr_17 [i_5] [i_1] [i_0 + 2] = ((/* implicit */unsigned char) ((-9223372036854775807LL) | (((/* implicit */long long int) arr_0 [i_5 + 3]))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                arr_24 [i_0 - 1] [(short)20] [i_0] [i_0 + 1] [i_7] = ((/* implicit */short) (_Bool)1);
                                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)-118)) != (((/* implicit */int) arr_9 [i_5] [i_1] [i_5] [i_6]))))))))));
                                arr_25 [i_7] [i_7] [i_5] [i_7 + 1] = ((140737488355327LL) | (((/* implicit */long long int) arr_3 [(signed char)14] [i_1 + 2])));
                            }
                        } 
                    } 
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    arr_29 [i_0 + 1] [i_0 + 1] [i_0 + 1] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)14))));
                    arr_30 [i_8] [11U] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)46716)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) ((((/* implicit */int) (unsigned short)65513)) >= (((/* implicit */int) (short)-13582)))))))) ? (min((min((var_5), (((/* implicit */long long int) arr_10 [i_0 + 1] [i_0 + 1] [i_8] [i_8] [i_0 + 2])))), (min((((/* implicit */long long int) arr_15 [i_8] [i_8] [(signed char)6] [i_0])), (var_7))))) : (((/* implicit */long long int) min((32256U), (((/* implicit */unsigned int) -696858706)))))));
                    arr_31 [i_0] [i_0] [(unsigned char)3] [i_0] = -696858706;
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 3; i_9 < 23; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 1; i_10 < 22; i_10 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) 696858706)), (arr_18 [i_10] [i_9] [i_1] [i_0])))) ? (min((7569860618277871254ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)255)))))))))))));
                                arr_38 [i_10] [i_1] [i_10] [i_9 + 1] [i_1] [i_0] = ((/* implicit */signed char) 7569860618277871251ULL);
                                var_23 = ((((/* implicit */_Bool) (signed char)-75)) ? (6609238228660224914ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18820))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) ((long long int) 696858679));
}
