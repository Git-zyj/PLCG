/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128481
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
    var_16 &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_12)), ((+(var_13)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) arr_0 [i_0]);
                    var_17 = ((/* implicit */unsigned short) 7786048068016929676ULL);
                    var_18 -= 4294967276U;
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_5 [i_0] [i_0]), (((/* implicit */int) arr_4 [i_0]))))) ? (arr_0 [i_0]) : (max((arr_0 [i_0]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967282U)))))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) arr_7 [(unsigned char)1] [i_0] [i_0] [i_0]);
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (short i_4 = 1; i_4 < 8; i_4 += 1) 
            {
                for (signed char i_5 = 2; i_5 < 9; i_5 += 1) 
                {
                    {
                        var_20 = ((/* implicit */signed char) min((min((min((((/* implicit */unsigned int) (_Bool)0)), (4294967259U))), (((/* implicit */unsigned int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */unsigned int) max(((+(((/* implicit */int) (unsigned short)5)))), (((((/* implicit */int) arr_11 [i_0])) ^ (((/* implicit */int) arr_11 [i_0])))))))));
                        arr_17 [(signed char)7] [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) > (1152921504606846975LL))), ((!(((/* implicit */_Bool) -1759567363))))));
                        var_21 += ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_14 [i_3])), (arr_0 [i_3])))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)240))) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)33251), (((/* implicit */unsigned short) (signed char)45)))))))), (((/* implicit */unsigned long long int) ((unsigned int) max((arr_16 [(unsigned char)1] [i_3] [(signed char)2] [i_3]), (arr_12 [i_3])))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)2), (((/* implicit */unsigned short) (signed char)39))))) - (((/* implicit */int) arr_19 [i_6]))));
        arr_23 [i_6] = ((/* implicit */short) arr_11 [2ULL]);
        var_22 = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) arr_3 [i_6] [i_6] [i_6])), (((((/* implicit */_Bool) 20U)) ? (9293253849598597236ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))), (((/* implicit */unsigned long long int) var_10))));
    }
}
