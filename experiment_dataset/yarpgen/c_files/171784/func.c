/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171784
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
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 2; i_2 < 22; i_2 += 1) 
                {
                    var_11 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [(signed char)9] [i_1 - 1] [i_1]))) - (arr_5 [i_0] [i_1 - 1] [i_2])))))) ? (((/* implicit */int) min((arr_2 [i_1]), (arr_2 [i_1])))) : (((/* implicit */int) var_1))));
                    arr_9 [i_1] = ((/* implicit */short) (+((-(((/* implicit */int) ((((/* implicit */int) var_4)) == (-1832179428))))))));
                    var_12 = ((_Bool) ((((/* implicit */int) arr_6 [i_2 + 2] [i_1 - 2] [i_1 - 2])) != (((/* implicit */int) arr_6 [i_2 - 2] [i_1 - 1] [i_1 + 1]))));
                }
                /* LoopNest 2 */
                for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (signed char i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
                            {
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 1355249063U)) : (var_10)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned char) var_4)))));
                                var_14 = ((/* implicit */unsigned char) var_4);
                            }
                            for (signed char i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
                            {
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_5), (var_3)))) ? (min((arr_20 [i_1] [i_1] [i_1] [i_1 - 3]), (arr_20 [i_1] [(unsigned char)21] [i_1] [i_1 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_7 [i_4 - 1] [i_4 - 1] [i_1])) < (var_2)))))));
                                arr_21 [i_0] [i_1] [i_1] [i_4] [i_6] [i_6] [i_4] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_1] [i_1] [i_6])))))))), (var_2)));
                                arr_22 [i_6] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (-1607951095)))) <= ((+(3136010940U))))) ? (((/* implicit */unsigned long long int) ((max((var_5), (((/* implicit */long long int) (unsigned short)52144)))) << (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_5)))))) : (((unsigned long long int) (+(var_8))))));
                            }
                            var_16 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_1 - 3] [i_1] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_5)))), ((~(var_0))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
                            var_17 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_1 - 3] [i_4 - 1] [i_4 - 1] [i_3] [i_1]))) & (min((((/* implicit */unsigned long long int) 228030216)), (1540638214795674878ULL)))))));
                            arr_23 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */signed char) var_1)), (arr_1 [i_0] [i_1])))) << (((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_0] [i_4] [i_0])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)110))))) < (((/* implicit */long long int) ((1430090073U) / (((/* implicit */unsigned int) 1832179448))))))))));
                            arr_24 [21LL] [i_1] [i_4 - 1] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) 2382092554U))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_14 [i_3])) : (((/* implicit */int) arr_14 [i_3]))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) != (var_2))))))) ? ((+(((((/* implicit */_Bool) (unsigned short)52136)) ? (((/* implicit */int) arr_4 [i_0] [11U] [i_1])) : (((/* implicit */int) (unsigned short)52136)))))) : (((/* implicit */int) (unsigned char)3))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    for (short i_8 = 2; i_8 < 23; i_8 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */int) (unsigned char)218);
                            var_20 = ((/* implicit */unsigned long long int) ((((var_7) % (((/* implicit */long long int) ((/* implicit */int) (short)-30837))))) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))));
                        }
                    } 
                } 
                var_21 = min((((((/* implicit */_Bool) (~(var_7)))) ? (((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))), (((max((((/* implicit */unsigned long long int) arr_2 [i_1])), (var_10))) + (max((((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_1])), (var_10))))));
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_4);
}
