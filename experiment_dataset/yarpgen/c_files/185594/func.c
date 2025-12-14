/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185594
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7105)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)210))) : (-7345293743736079669LL)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) var_1))));
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) (short)5984)) ? (arr_4 [i_2] [(unsigned char)1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3] [i_4]))))) == (((/* implicit */unsigned long long int) -178136827)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((var_4) - (((/* implicit */int) arr_5 [i_1] [i_1] [2ULL])))))))) : (((((/* implicit */int) var_3)) % (((/* implicit */int) arr_5 [i_2 + 2] [i_2 + 2] [i_4]))))));
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5984)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (short)5984)) ? (arr_4 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (arr_4 [(unsigned short)8] [(unsigned short)8] [(unsigned short)8]) : (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_5 [i_2] [i_3] [i_2])), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_7 [i_2] [i_2])))))))));
                                arr_13 [i_0] [i_0] [i_2] [i_1] [i_2 - 1] [(unsigned char)8] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) (short)-5984))))) ? (((/* implicit */unsigned long long int) 507800650U)) : (arr_4 [i_0] [i_1] [i_2])));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    for (signed char i_6 = 0; i_6 < 14; i_6 += 4) 
                    {
                        {
                            var_14 = (+(((var_0) << ((((((~(((/* implicit */int) arr_2 [i_0])))) + (105))) - (18))))));
                            var_15 = ((/* implicit */signed char) arr_6 [i_5]);
                            var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_0 [(unsigned char)12] [i_5]), (var_9)))) ? (((/* implicit */int) ((_Bool) arr_4 [i_0] [i_5] [i_5]))) : (((((/* implicit */_Bool) arr_2 [i_6])) ? (var_2) : (((/* implicit */int) var_9))))))), (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_1] [i_5] [i_6])) ? ((+(var_8))) : (((/* implicit */unsigned int) ((-178136817) - (arr_18 [i_0] [i_1] [i_5] [i_6]))))))));
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((arr_16 [i_0] [i_5] [i_5]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_5] [i_6]))))) ? ((+(67108800))) : (((/* implicit */int) ((_Bool) (short)-5989)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)-20412)), ((unsigned short)16694)));
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)65526)) : (var_0))))));
}
