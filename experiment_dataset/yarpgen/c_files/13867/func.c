/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13867
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
    for (int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_9 [i_1] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_1]))) ? ((+(((/* implicit */int) (unsigned short)50352)))) : (((/* implicit */int) var_6)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                arr_15 [i_1] [i_1] [i_2 + 2] [i_3] [i_2] = ((/* implicit */unsigned char) ((unsigned int) max((((/* implicit */unsigned short) ((-437442205) == (((/* implicit */int) var_6))))), (((unsigned short) var_11)))));
                                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_0 [i_3])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 4; i_8 < 8; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            {
                                arr_29 [i_7] [(unsigned short)9] [i_7] [i_8 - 2] [i_9] = ((/* implicit */short) var_7);
                                arr_30 [i_5] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_7] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)25897))));
                                var_16 += ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */int) (short)15190)) : (((/* implicit */int) (unsigned short)31)))))))));
                                arr_31 [(unsigned short)7] [i_8 - 1] [i_7] [i_7] [i_7] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [i_8 - 1] [i_8 + 2] [i_8 - 2])) || (((/* implicit */_Bool) -1))));
                            }
                        } 
                    } 
                    arr_32 [i_5] [i_5] [i_6] [i_7] = ((/* implicit */int) ((unsigned long long int) (+(((/* implicit */int) var_6)))));
                }
            } 
        } 
    } 
    var_17 |= ((/* implicit */_Bool) ((((/* implicit */int) var_11)) << (((((/* implicit */int) (short)21907)) - (21891)))));
}
