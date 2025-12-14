/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118218
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118218 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118218
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
    var_11 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) ((unsigned int) var_10))))) ? ((~(((unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_12 ^= ((/* implicit */unsigned char) max((min((max((arr_5 [i_0] [i_4] [i_4] [i_3]), (16383))), (((/* implicit */int) (!(((/* implicit */_Bool) 16367))))))), (min((((/* implicit */int) min((var_4), (((/* implicit */unsigned char) (_Bool)1))))), ((+(-16402)))))));
                                arr_12 [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_11 [i_0] [i_2] [i_0])), (3932160)));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
                {
                    for (unsigned char i_6 = 3; i_6 < 21; i_6 += 3) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (+(min((((/* implicit */int) arr_16 [(signed char)6] [i_1] [i_1] [i_5] [i_7])), ((-(((/* implicit */int) (unsigned short)65532)))))))))));
                                var_14 *= ((/* implicit */unsigned int) var_6);
                                var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_6] [i_0] [i_6 + 2] [i_6 - 2] [i_0] [i_6 - 3])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_1)))) ? (var_3) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))))))));
                                var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) var_6))) > ((+(((((/* implicit */int) arr_20 [i_5] [(unsigned short)0] [i_5] [i_5] [i_5] [i_5])) << (((arr_5 [i_7] [i_7] [i_7] [21U]) + (1297504228)))))))));
                                arr_23 [i_0] [i_0] [(unsigned char)14] [i_0] [(unsigned char)14] = ((/* implicit */unsigned short) max((var_5), (arr_5 [i_0] [i_1] [i_5] [i_7])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 19; i_8 += 2) 
    {
        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) max((min((arr_25 [i_8] [i_9]), (((/* implicit */unsigned long long int) 657209455)))), (((/* implicit */unsigned long long int) (((~(var_3))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((arr_3 [i_8] [i_9]) != (arr_3 [i_8] [i_9]))))))))));
                var_18 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_6))))))) ? (((/* implicit */int) ((unsigned short) min(((unsigned short)65512), (((/* implicit */unsigned short) var_9)))))) : (((/* implicit */int) (!((_Bool)1))))));
                arr_29 [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */int) min((min((((/* implicit */unsigned short) (signed char)-46)), ((unsigned short)35428))), (arr_21 [i_8] [i_9])))) == (((((/* implicit */int) var_2)) | (((/* implicit */int) var_10))))));
                var_19 = (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_17 [i_8] [i_8] [i_9] [i_9])) : (((/* implicit */int) arr_9 [i_8] [i_9] [(signed char)15] [(signed char)15])))));
                arr_30 [i_9] = ((/* implicit */_Bool) (+(min((min((((/* implicit */unsigned int) arr_13 [i_8] [(unsigned char)22] [i_8])), (var_7))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    var_21 = var_2;
}
