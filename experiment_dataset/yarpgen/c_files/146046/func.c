/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146046
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned char) min((max((((2095618698) & (1752562653))), (arr_1 [i_0] [15U]))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned char i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                for (short i_3 = 2; i_3 < 18; i_3 += 3) 
                {
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        {
                            arr_13 [i_2] [(_Bool)1] = ((/* implicit */unsigned char) var_1);
                            var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) (+(min((67104768), (((/* implicit */int) (unsigned char)123)))))))));
                        }
                    } 
                } 
            } 
            arr_14 [(short)6] = ((/* implicit */unsigned char) (!((_Bool)0)));
            var_12 = min((max((((/* implicit */long long int) var_9)), (min((arr_10 [(short)7] [i_1] [i_1] [i_1] [(_Bool)0]), (((/* implicit */long long int) var_4)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (short)11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)24576))) : (0U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (arr_2 [i_0]) : (((/* implicit */int) var_4)))))))));
        }
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 19; i_6 += 1) 
            {
                {
                    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (((-2147483647 - 1)) % (((/* implicit */int) (signed char)-126))))) ? (max((0ULL), (((/* implicit */unsigned long long int) 8LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_21 [i_0] [(_Bool)1] [9] [i_5] = ((/* implicit */unsigned int) ((unsigned char) (~(2017612633061982208ULL))));
                        arr_22 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) (+(((unsigned int) 750466063U))));
                        var_14 = ((/* implicit */long long int) ((2017612633061982226ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                        arr_23 [(unsigned char)18] [2] [(short)2] [8LL] [i_5] [2ULL] |= ((/* implicit */int) var_6);
                        var_15 = ((/* implicit */unsigned long long int) var_9);
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_26 [i_5] [i_5] [i_0] [i_0] [i_6] = var_9;
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 2; i_9 < 18; i_9 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((long long int) var_8)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)0))))) : (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)145)), (-2243760215423623792LL)))), (15ULL)))));
                            var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_0)), (min((var_5), (((/* implicit */unsigned long long int) arr_3 [9U] [i_5] [i_9 - 2]))))));
                            var_18 = ((/* implicit */_Bool) min((2487645061087314055ULL), (((/* implicit */unsigned long long int) -48836940))));
                        }
                    }
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned long long int) min((((-6987192931053913570LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-2579))))), (((/* implicit */long long int) -396091442))));
}
