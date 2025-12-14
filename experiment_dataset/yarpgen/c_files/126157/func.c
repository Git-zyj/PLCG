/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126157
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
    var_18 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) -4384730610108160086LL)) && (((/* implicit */_Bool) arr_6 [i_1] [i_0])))))))) ? (((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned long long int) arr_7 [13U]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)82))))) : (arr_4 [i_1 + 1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_2])) ? (((/* implicit */unsigned int) var_3)) : (arr_4 [i_0] [i_0])))) && (((/* implicit */_Bool) (+(((/* implicit */int) (signed char)30)))))))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)46))))) || (((/* implicit */_Bool) arr_6 [i_0] [i_0]))));
                        var_21 = ((/* implicit */int) ((((/* implicit */int) ((((int) var_1)) < (max((((/* implicit */int) (_Bool)1)), (21125832)))))) < (((/* implicit */int) arr_2 [i_0]))));
                    }
                    for (unsigned char i_4 = 1; i_4 < 21; i_4 += 4) 
                    {
                        arr_15 [i_0] [i_1] [(unsigned char)1] [i_4 + 1] = ((/* implicit */unsigned int) ((int) min((((/* implicit */int) ((_Bool) arr_2 [i_0]))), (((((/* implicit */int) var_8)) * (((/* implicit */int) arr_3 [i_1 + 1])))))));
                        /* LoopSeq 1 */
                        for (int i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-42)) > (((((/* implicit */_Bool) ((var_11) << (((((/* implicit */int) (unsigned short)26752)) - (26736)))))) ? ((~(((/* implicit */int) (unsigned short)42945)))) : (((/* implicit */int) arr_13 [i_0] [i_1 - 1] [i_4 + 1] [i_2])))))))));
                            var_23 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_9 [i_0] [i_4 + 2] [i_4 + 2] [i_5]))) < (((int) -964757244))));
                            arr_18 [i_0] [i_0] [i_2 - 1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(-8548568508985546934LL))))));
                            arr_19 [i_5] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_12 [i_0] [i_2] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)40))) : (arr_12 [i_0] [i_1] [i_1 - 1])))));
                            arr_20 [i_0] [i_0] [i_0] [i_4 - 1] = ((/* implicit */long long int) arr_4 [i_1] [i_0]);
                        }
                    }
                    var_24 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 13ULL)))) || (((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) arr_6 [i_0] [i_0]))))))));
                    var_25 = ((/* implicit */unsigned long long int) arr_17 [i_2] [i_2] [i_1] [i_1] [i_0]);
                }
                for (long long int i_6 = 0; i_6 < 23; i_6 += 2) 
                {
                    arr_24 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_1 - 1]))))) ? (((unsigned long long int) (unsigned short)19921)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_6] [i_0])))));
                    var_26 *= ((/* implicit */unsigned long long int) ((var_6) < (((/* implicit */int) min((arr_16 [i_0]), (arr_16 [i_6]))))));
                }
                arr_25 [i_0] [i_0] = ((/* implicit */unsigned char) ((int) ((unsigned short) -2142148764)));
            }
        } 
    } 
}
