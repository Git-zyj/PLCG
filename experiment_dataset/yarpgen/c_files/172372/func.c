/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172372
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) min(((unsigned char)12), (((/* implicit */unsigned char) (_Bool)0))))))));
                    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (~(var_4))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */signed char) var_9);
    var_13 = var_2;
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 4; i_3 < 10; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_5 = 1; i_5 < 10; i_5 += 3) 
                {
                    var_14 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) && (((/* implicit */_Bool) ((unsigned char) arr_11 [i_3 + 1] [i_3 - 2]))));
                    var_15 = ((((/* implicit */int) (unsigned short)8948)) > (((((/* implicit */int) (unsigned short)8948)) * (((/* implicit */int) (unsigned char)35)))));
                }
                for (unsigned long long int i_6 = 2; i_6 < 7; i_6 += 4) /* same iter space */
                {
                    arr_22 [i_4] [(signed char)10] [(short)8] = ((/* implicit */unsigned int) ((((_Bool) (!(((/* implicit */_Bool) (unsigned char)255))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)96)) && (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) var_8))));
                    arr_23 [(unsigned short)3] [i_4] [i_6] [i_6 + 1] = ((/* implicit */unsigned char) var_7);
                    var_16 = ((/* implicit */short) var_6);
                }
                for (unsigned long long int i_7 = 2; i_7 < 7; i_7 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                arr_30 [i_3] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) arr_11 [i_4] [i_4]);
                                var_17 ^= ((/* implicit */signed char) ((min((arr_10 [i_3 - 3]), (((/* implicit */unsigned long long int) var_8)))) % (((/* implicit */unsigned long long int) ((unsigned int) (signed char)88)))));
                            }
                        } 
                    } 
                    arr_31 [i_4] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) var_6))))) ? (arr_21 [i_3 - 2] [i_3 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (unsigned char)255))))) || (((/* implicit */_Bool) (unsigned char)22)))))));
                    var_18 = ((/* implicit */unsigned short) var_4);
                }
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) min((max(((short)4379), (((/* implicit */short) (signed char)-24)))), (((/* implicit */short) max(((unsigned char)169), ((unsigned char)96)))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */int) (unsigned char)22)) % (((/* implicit */int) (short)-14230))))))));
}
