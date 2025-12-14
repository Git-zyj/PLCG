/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181927
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
    var_13 = ((/* implicit */unsigned short) var_5);
    var_14 = ((/* implicit */unsigned char) (~(min((-2LL), (((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)12240))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_6 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max(((unsigned short)3313), (((/* implicit */unsigned short) (_Bool)1))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) (unsigned short)12237))))))) != (((/* implicit */unsigned long long int) ((var_8) ? (arr_4 [i_1]) : (642296389364217504LL))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_12 [i_1] = ((/* implicit */unsigned int) 9223372036854775788LL);
                                var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_12) << (((((/* implicit */int) arr_2 [i_0 - 1] [i_0])) - (201)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)12240)))))) : (min((arr_8 [i_4] [i_3]), (((/* implicit */unsigned int) (unsigned short)53296)))))) / (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned char) var_4);
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_7 [2] [2]))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_5 = 3; i_5 < 11; i_5 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
        {
            for (unsigned char i_7 = 1; i_7 < 12; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    {
                        var_18 = ((/* implicit */_Bool) arr_19 [i_6]);
                        var_19 *= ((/* implicit */short) (unsigned short)29352);
                    }
                } 
            } 
        } 
        arr_24 [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)32746)) ? (((/* implicit */int) arr_16 [i_5 - 3] [(unsigned short)4])) : (((/* implicit */int) var_10)))) % (((/* implicit */int) arr_16 [i_5 + 2] [4U]))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_23 [i_5 - 3] [i_5 + 1]))))))))));
    }
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (max((((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)18409)) ? (6904245005200956630LL) : (((/* implicit */long long int) 1418194639))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)21))) - (15037845781027602320ULL))))), (((/* implicit */unsigned long long int) ((1661969369U) < (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))));
}
