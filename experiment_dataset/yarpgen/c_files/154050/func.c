/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154050
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
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) var_11);
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_13)) < (((/* implicit */int) arr_1 [i_0])))) ? (((/* implicit */int) arr_1 [i_0 - 4])) : (((((/* implicit */int) (unsigned char)131)) % (((/* implicit */int) (unsigned short)37520))))))) ? (max((2891892697349671589LL), (9066270520303139119LL))) : (((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)1094))))))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */unsigned long long int) ((long long int) (unsigned short)64417))) % (max((arr_9 [i_0 - 4]), (arr_9 [i_0 - 3])))))));
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((long long int) arr_10 [i_0 - 3] [i_0 - 2]))) < (((((/* implicit */_Bool) arr_10 [i_0 - 4] [i_0 - 1])) ? (arr_10 [i_0 - 4] [i_0 + 1]) : (arr_10 [i_0 - 2] [i_0 - 2])))));
                    var_20 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) < (-342846181)));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + ((~(((/* implicit */int) (short)23498))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_15)))) ? (((/* implicit */int) (!((_Bool)1)))) : (min((1500855895), (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */int) (signed char)-10)) + (((/* implicit */int) (signed char)-104)))) : (((/* implicit */int) arr_13 [i_4] [i_0] [i_2] [i_2 - 1] [i_0] [i_0]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_18 [i_0] [i_0 - 1] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((((/* implicit */int) arr_16 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0] [i_0])) + (2147483647))) >> (((arr_9 [i_0]) - (2333433216632562646ULL)))))), ((-(arr_2 [i_0 - 1])))))) + (((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) / (((/* implicit */int) (_Bool)1))))) / (min((arr_9 [i_0 - 1]), (((/* implicit */unsigned long long int) var_13))))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_5 = 1; i_5 < 20; i_5 += 4) 
    {
        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            {
                var_22 += ((/* implicit */unsigned int) min((((/* implicit */int) ((min((var_12), (arr_12 [i_6] [i_6] [i_6] [i_6]))) < (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)125))) + (711089873U))))))), (((((/* implicit */_Bool) -342846181)) ? (((/* implicit */int) (unsigned short)1099)) : ((-(((/* implicit */int) arr_20 [i_6] [i_5]))))))));
                var_23 &= ((/* implicit */unsigned char) ((((/* implicit */int) (!((_Bool)1)))) & (((/* implicit */int) ((arr_2 [i_5 + 1]) > (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5] [i_6] [i_5 - 1]))))))));
                var_24 *= ((/* implicit */unsigned short) ((((8795019280384LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5 - 1]))))) + (((/* implicit */long long int) ((arr_4 [i_5 - 1]) ? (((/* implicit */int) arr_4 [i_5 + 1])) : (((/* implicit */int) arr_4 [i_5 + 2])))))));
                var_25 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_5] [i_5 + 2] [i_5]))))) < (max((15274734694617738212ULL), (arr_12 [i_6] [i_5 + 2] [i_5] [i_5 - 1])))));
                /* LoopNest 3 */
                for (short i_7 = 1; i_7 < 19; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 19; i_8 += 4) 
                    {
                        for (signed char i_9 = 1; i_9 < 20; i_9 += 2) 
                        {
                            {
                                arr_32 [i_9 + 2] [i_8] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_5] [i_5 - 1] [i_5])) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_7 [i_5] [i_5 + 2] [i_5 - 1])) ? (((/* implicit */int) arr_7 [i_5] [i_5 - 1] [i_5 + 2])) : (((/* implicit */int) arr_7 [i_5 - 1] [i_5 + 2] [i_5 + 2])))) : (((/* implicit */int) max((arr_7 [i_5 + 1] [i_5 + 1] [i_5]), (((/* implicit */short) (_Bool)1))))));
                                arr_33 [i_5] [i_6] [i_7 - 1] [i_7] [i_8] [(_Bool)1] = ((/* implicit */long long int) arr_19 [i_5 + 1]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 = ((/* implicit */int) var_6);
}
