/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15424
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
    var_10 += ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) & (11434485484189216214ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_2 [i_0])))))), (((/* implicit */unsigned long long int) var_7))));
                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) (~(((/* implicit */int) ((short) -1632007915))))))));
                var_12 = ((/* implicit */unsigned char) ((unsigned short) 7012258589520335390ULL));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                {
                    var_13 = ((/* implicit */signed char) ((((int) arr_10 [i_2] [i_2] [i_2])) ^ ((+(((/* implicit */int) var_9))))));
                    var_14 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_12 [i_2])) ? (arr_12 [i_2]) : (arr_12 [i_2])))));
                    var_15 += ((/* implicit */unsigned int) var_8);
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */int) (short)-27212);
                                arr_18 [i_5] [i_3] [i_3] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((short)-2112), (((/* implicit */short) (signed char)-120))))) ? (((/* implicit */unsigned long long int) (~(1552687296)))) : (((((/* implicit */_Bool) (short)-27203)) ? (arr_12 [i_4]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_4])) | (((/* implicit */int) (short)2121)))))))));
                                var_17 ^= ((/* implicit */unsigned int) ((unsigned short) (signed char)-127));
                                var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (((arr_11 [i_6]) ? (arr_9 [(short)13]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) % (((long long int) arr_16 [i_2] [i_4] [i_2] [i_5] [i_2]))));
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_2] [i_2] = ((unsigned int) ((_Bool) arr_9 [i_3]));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        for (unsigned int i_8 = 1; i_8 < 18; i_8 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        for (long long int i_11 = 3; i_11 < 18; i_11 += 2) 
                        {
                            {
                                arr_31 [i_7] [i_9] [i_9] [i_9] [i_10] [i_7] [i_11 + 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_5))));
                                arr_32 [i_7] [i_7] [i_7] [i_7] [i_9] = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_26 [i_9] [i_11 - 3])) && (((/* implicit */_Bool) (short)2113)))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */int) (signed char)120);
            }
        } 
    } 
}
