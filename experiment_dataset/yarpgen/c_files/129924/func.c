/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129924
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
    var_17 = ((/* implicit */signed char) 18446744073709551615ULL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (short i_4 = 3; i_4 < 18; i_4 += 4) 
                            {
                                var_18 = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_3 [i_0] [i_4]) ? (((/* implicit */int) var_13)) : (var_2))))))), ((-(((/* implicit */int) (short)31))))));
                                var_19 = ((/* implicit */unsigned char) max((((((/* implicit */int) (short)31)) == (((/* implicit */int) ((((/* implicit */unsigned long long int) -268435456)) <= (18446744073709551615ULL)))))), ((!(((/* implicit */_Bool) var_0))))));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
                            {
                                var_20 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned char)63), ((unsigned char)233)))) ? (((/* implicit */int) (short)-5385)) : (((/* implicit */int) var_4))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [14LL] [(unsigned char)5] [i_1] [i_1] [(_Bool)1] [(signed char)18])) ? (337921038U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))), (((((/* implicit */_Bool) 268435455)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))) : (8483609926167152994LL)))))));
                                arr_14 [i_0 + 3] [i_3] [(_Bool)1] [i_3] [i_3] [i_2] [(signed char)8] = ((/* implicit */int) (+(8725724278030336ULL)));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (-(((/* implicit */int) min(((short)0), (((/* implicit */short) (!(((/* implicit */_Bool) var_2)))))))))))));
                            }
                            for (signed char i_6 = 1; i_6 < 18; i_6 += 3) /* same iter space */
                            {
                                arr_18 [i_2] [i_1] [3LL] [i_3] [i_6] [i_6] = ((/* implicit */signed char) (~(min((((/* implicit */int) (short)29115)), ((((_Bool)1) ? (((/* implicit */int) (short)-29660)) : (((/* implicit */int) (short)-23800))))))));
                                var_22 *= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_12 [i_6] [i_6 - 1] [i_6] [(signed char)15] [i_6 + 2])), (min((((/* implicit */unsigned long long int) 3957046251U)), (var_1)))));
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 2147483647)), (2500072420U)))), (var_1))), (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-831)), (((((/* implicit */_Bool) arr_9 [i_0 - 2] [16] [i_0 + 3] [i_3])) ? (((/* implicit */int) var_10)) : (-1520527908)))))))))));
                            }
                            for (signed char i_7 = 1; i_7 < 18; i_7 += 3) /* same iter space */
                            {
                                var_24 = ((/* implicit */unsigned char) (signed char)97);
                                var_25 |= ((/* implicit */unsigned char) ((((((4503599627370495ULL) - (((/* implicit */unsigned long long int) 337921024U)))) - (max((((/* implicit */unsigned long long int) (short)-26023)), (var_1))))) * (((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)178))) * (3957046257U))), (((/* implicit */unsigned int) (signed char)-23)))))));
                            }
                            var_26 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((268435456) | (((/* implicit */int) var_15)))), (((/* implicit */int) min((var_5), (var_4))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 268435438)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (short)-31))))) ? (min((12055552130675139054ULL), (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1])))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((unsigned char) -1363244139))) >= (((((/* implicit */_Bool) 1437477623)) ? (((/* implicit */int) (short)29660)) : (((/* implicit */int) var_6)))))) ? (min((((/* implicit */unsigned long long int) min((var_14), ((short)31462)))), (((((/* implicit */unsigned long long int) 4294967040LL)) & (8725724278030336ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((((_Bool)1) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))))));
                arr_21 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (short)-831);
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_8 = 0; i_8 < 25; i_8 += 4) 
    {
        var_28 = ((/* implicit */unsigned short) (_Bool)1);
        arr_24 [i_8] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_23 [i_8]);
        arr_25 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_23 [i_8])) | (((/* implicit */int) arr_22 [i_8] [(unsigned char)24]))));
        var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)255))));
    }
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            {
                var_30 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (unsigned char)44)) % (((/* implicit */int) (unsigned short)31706)))));
                var_31 -= ((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)79)), ((short)-32757)));
                /* LoopSeq 1 */
                for (short i_11 = 1; i_11 < 14; i_11 += 1) 
                {
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) 3957046258U))));
                    var_33 = ((/* implicit */unsigned long long int) (-(((((((/* implicit */_Bool) arr_12 [i_11 + 1] [i_11 + 1] [i_11] [i_11] [i_11])) || (var_4))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_16)))))) : (max((3957046261U), (((/* implicit */unsigned int) (signed char)34))))))));
                    arr_35 [i_11 - 1] [11] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_15), (((/* implicit */unsigned short) var_6)))))))) ? (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (3008725684U))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) : (min((((((/* implicit */long long int) ((/* implicit */int) (signed char)94))) | (var_7))), (((/* implicit */long long int) (unsigned char)255))))));
                }
            }
        } 
    } 
    var_34 += ((/* implicit */_Bool) (short)-28390);
}
