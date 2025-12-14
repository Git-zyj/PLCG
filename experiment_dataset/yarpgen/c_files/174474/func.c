/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 174474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=174474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/174474
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
    var_16 = ((/* implicit */unsigned short) min((var_16), (var_13)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)81))))), (((/* implicit */long long int) (unsigned char)3))))) ? ((+(((/* implicit */int) (signed char)67)))) : (((((/* implicit */int) ((((/* implicit */int) (unsigned short)35255)) < (((/* implicit */int) arr_0 [i_0] [i_0]))))) & (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)65535)))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 4; i_4 < 7; i_4 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_2] [(signed char)3]);
                            arr_13 [i_0] [i_1 - 1] [(unsigned short)0] [(short)7] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_1 [i_0])))));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) (signed char)127))) <= (((/* implicit */int) ((((/* implicit */_Bool) 4510216159722633119ULL)) && (((/* implicit */_Bool) (unsigned char)81))))))) ? (((/* implicit */int) arr_3 [i_0] [i_1] [(signed char)2])) : ((+(((((/* implicit */int) (unsigned short)48308)) << (((((/* implicit */int) (unsigned short)4064)) - (4064)))))))));
                        }
                        for (unsigned int i_5 = 4; i_5 < 7; i_5 += 1) /* same iter space */
                        {
                            var_20 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((arr_8 [i_1] [4ULL] [4ULL] [i_1]), (((/* implicit */unsigned int) var_7)))) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_12)))))))) ? (((/* implicit */int) arr_4 [i_0] [i_3] [(signed char)6])) : (((/* implicit */int) (unsigned short)1))));
                            var_21 |= ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)384)) ? (1073479680ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))))));
                        }
                        var_22 *= ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((unsigned short) var_15))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))));
                    }
                } 
            } 
        } 
        arr_17 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned short)36887)) != (((/* implicit */int) arr_6 [i_0] [7LL])))))));
        var_23 = ((/* implicit */signed char) ((unsigned short) arr_16 [i_0] [i_0] [(signed char)4]));
    }
    for (unsigned short i_6 = 2; i_6 < 22; i_6 += 1) 
    {
        var_24 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36887)) ? (((/* implicit */int) (unsigned short)36895)) : (((/* implicit */int) (unsigned short)8578))))) ? (((/* implicit */int) arr_18 [i_6] [i_6])) : (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_19 [i_6] [i_6 + 1]))))))));
        /* LoopSeq 2 */
        for (unsigned short i_7 = 2; i_7 < 23; i_7 += 1) 
        {
            var_25 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7 + 1]))) * (9490824040436782503ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_20 [i_7 + 2])))))));
            var_26 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)127)) ? (-3945878221757050593LL) : (1LL)))));
            arr_23 [i_7] = ((/* implicit */unsigned short) min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) * (6321572368628978245ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)13816)) / (((/* implicit */int) var_8))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((arr_21 [(unsigned short)3] [20U]), (((/* implicit */unsigned char) arr_19 [i_6 + 3] [i_7 + 1]))))) != (((/* implicit */int) arr_20 [i_6])))))));
        }
        /* vectorizable */
        for (short i_8 = 0; i_8 < 25; i_8 += 1) 
        {
            var_27 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (3701007253789542648LL) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6 - 2])))));
            arr_26 [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (signed char)-2)))) <= (((/* implicit */int) ((((/* implicit */int) arr_18 [i_6] [i_8])) != (((/* implicit */int) (unsigned short)28381)))))));
            arr_27 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [3ULL] [(unsigned short)21])))))) : (8955920033272769113ULL)));
        }
    }
}
