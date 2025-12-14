/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121695
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_14 *= ((/* implicit */unsigned int) var_1);
                var_15 *= ((var_11) ? (((((/* implicit */_Bool) (signed char)-73)) ? (1080863910568919040ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)6]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 4; i_2 < 12; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            {
                var_16 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 16; i_4 += 4) 
                {
                    arr_14 [i_2] [(signed char)1] [(signed char)1] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) var_4))))));
                    var_17 = ((/* implicit */long long int) (-(((((/* implicit */int) (_Bool)1)) | ((~(((/* implicit */int) var_8))))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    arr_19 [i_3] = ((/* implicit */unsigned int) 1080863910568919040ULL);
                    arr_20 [i_2] [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) ((int) arr_13 [i_2 - 2]));
                }
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) min((((/* implicit */long long int) min((((((/* implicit */int) var_2)) % (((/* implicit */int) var_2)))), (((/* implicit */int) arr_28 [i_8] [i_2] [i_7] [i_6] [i_3] [i_2] [i_2]))))), (min((max((-1047562620011768705LL), (((/* implicit */long long int) arr_5 [i_6])))), (((/* implicit */long long int) (short)24249)))))))));
                                var_19 -= ((/* implicit */unsigned short) max((((unsigned int) ((((/* implicit */_Bool) (short)-24249)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24246))) : (2740605403322899374ULL)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (961304512U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)12)))))) ? ((~(-272718494))) : (((((/* implicit */_Bool) -1047562620011768705LL)) ? (((/* implicit */int) arr_3 [i_8] [i_8])) : (((/* implicit */int) arr_13 [i_2])))))))));
                            }
                        } 
                    } 
                    var_20 |= ((/* implicit */unsigned char) (short)24240);
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_9 = 1; i_9 < 13; i_9 += 4) 
    {
        for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
        {
            for (unsigned char i_11 = 1; i_11 < 16; i_11 += 4) 
            {
                {
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) arr_1 [(signed char)8] [i_10]))))))))));
                    arr_38 [i_9] [i_10] [(unsigned short)7] [i_9] = ((unsigned short) ((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_33 [i_11 - 1])));
                }
            } 
        } 
    } 
}
