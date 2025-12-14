/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131211
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
    var_20 = ((/* implicit */unsigned long long int) var_10);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (int i_3 = 4; i_3 < 19; i_3 += 2) 
                {
                    {
                        arr_9 [i_1] [(short)18] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (~(-9223372036854775803LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -1402638103))))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)128)), ((short)-24074)))))));
                        var_21 |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_8)))), (((/* implicit */int) (_Bool)1))))) ? ((+(-248380767))) : (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (3352367738689222836ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))))));
                        arr_10 [15ULL] [15ULL] [0U] [i_3] [i_0] [i_2] = max((((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)9235)))))), (((int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_19)) : (2147483628)))));
                        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((8226974052400994232LL) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1])))))), (max((min((12385576667739413002ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (min((14704763184958182314ULL), (((/* implicit */unsigned long long int) var_14)))))))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */short) max((((/* implicit */unsigned int) ((min((var_10), (((/* implicit */int) var_18)))) << (((((((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_13))) + (1365454779380374191LL))) - (16LL)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (255U) : (4261412864U)))) ? (max((((/* implicit */unsigned int) arr_8 [(unsigned char)20] [i_0] [i_0 - 1] [i_0])), (812241725U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-16739)))))));
        var_24 = ((/* implicit */_Bool) max((((/* implicit */short) ((unsigned char) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_14)))))), (max((((/* implicit */short) (_Bool)1)), (arr_8 [i_0 + 3] [i_0] [i_0] [i_0 + 3])))));
        var_25 = ((/* implicit */unsigned char) ((int) (_Bool)1));
    }
    var_26 = ((/* implicit */int) ((long long int) var_2));
    /* LoopSeq 3 */
    for (short i_4 = 0; i_4 < 13; i_4 += 3) 
    {
        arr_15 [i_4] = ((/* implicit */_Bool) max((((/* implicit */short) ((_Bool) var_9))), (max((arr_4 [i_4] [i_4]), (arr_4 [i_4] [i_4])))));
        /* LoopNest 3 */
        for (int i_5 = 4; i_5 < 12; i_5 += 1) 
        {
            for (unsigned char i_6 = 3; i_6 < 12; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    {
                        arr_23 [i_5] = ((/* implicit */unsigned char) max((((max((((/* implicit */unsigned int) (short)(-32767 - 1))), (arr_12 [12ULL] [7U]))) << (((((var_9) ? (((/* implicit */int) (_Bool)1)) : (524287))) - (524285))))), (((/* implicit */unsigned int) var_0))));
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((short) (~(-8040164174593899610LL)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_8] [i_8]))) : (((unsigned long long int) (short)25588))));
        var_29 = ((/* implicit */unsigned long long int) (-(arr_25 [i_8])));
        arr_26 [i_8] = ((/* implicit */short) (_Bool)1);
        var_30 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)62)) + (((/* implicit */int) (unsigned char)211))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        var_31 = min((((((((/* implicit */_Bool) (short)4080)) ? (4294967294U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)0))))) / (((/* implicit */unsigned int) (-(((/* implicit */int) (short)25588))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)248)) / ((+(((/* implicit */int) var_11))))))));
        /* LoopNest 2 */
        for (short i_10 = 1; i_10 < 23; i_10 += 2) 
        {
            for (int i_11 = 0; i_11 < 25; i_11 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 0; i_13 < 25; i_13 += 1) 
                        {
                            {
                                arr_44 [i_13] [i_13] [i_10] [i_13] [i_12] = ((/* implicit */int) max((((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */short) (unsigned char)226)), (arr_31 [i_9] [i_9]))))))), (max((((/* implicit */long long int) (~(((/* implicit */int) (short)12214))))), (((((/* implicit */_Bool) var_4)) ? (4611677222334365696LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-104)))))))));
                                var_32 *= ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_12 - 1] [(unsigned char)0] [i_11] [i_12 - 1] [i_12 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [5ULL] [i_10] [(_Bool)1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)193)) || ((_Bool)1))))))), (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [18ULL] [i_9])) && (((/* implicit */_Bool) var_10))))), (arr_33 [i_10 - 1] [i_10 + 1] [i_10 - 1])))));
                                var_33 = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (unsigned char)241)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8040164174593899623LL)) ? (524287U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)224)))))) : (arr_35 [i_10] [i_12 - 1] [i_12 - 1])))) ? (((((/* implicit */_Bool) (short)-144)) ? (624521876U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned int) var_15)));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_14 = 2; i_14 < 23; i_14 += 1) 
                    {
                        var_34 = ((/* implicit */long long int) ((short) max(((short)4083), (((/* implicit */short) (unsigned char)224)))));
                        var_35 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_14 - 1] [i_10] [i_11] [i_14 - 1] [i_9])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [(short)24]))) : (max((((unsigned long long int) (short)-17070)), (((/* implicit */unsigned long long int) arr_43 [24] [i_10] [i_10] [(short)8] [i_10] [i_11]))))));
                    }
                    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((arr_27 [i_10 + 2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (short)26389)), (var_1))))));
                }
            } 
        } 
        arr_48 [i_9] = max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)96))) * (min((((/* implicit */unsigned long long int) arr_37 [20] [10] [i_9])), (1996732560788053615ULL))))), (((/* implicit */unsigned long long int) ((int) 3302619344827570836LL))));
        arr_49 [(unsigned char)1] = ((((/* implicit */_Bool) max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (short)-4082))))))) : (((((/* implicit */_Bool) ((unsigned short) (_Bool)1))) ? (((/* implicit */unsigned long long int) ((624521876U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : ((~(18446744073441116160ULL))))));
    }
}
