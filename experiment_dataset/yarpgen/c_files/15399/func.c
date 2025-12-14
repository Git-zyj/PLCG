/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15399
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
    var_12 = var_3;
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)46315)) >> (((((/* implicit */int) var_6)) - (62416)))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) arr_5 [i_0] [i_1 + 3]);
                                arr_15 [19LL] [i_1] [i_4] [i_2] [(unsigned char)5] [i_3] [21LL] = ((/* implicit */int) var_2);
                                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((unsigned short) ((unsigned char) ((((/* implicit */_Bool) 2552252022U)) || (((/* implicit */_Bool) 2049642713U)))))))));
                                arr_16 [i_4] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) 428029531))) * (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (short)7066))))) < (3206849455U))))));
                            }
                        } 
                    } 
                } 
                var_15 += ((/* implicit */unsigned int) (signed char)100);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_4))));
    /* LoopSeq 1 */
    for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((var_3) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (min((arr_17 [14] [16U]), (((/* implicit */unsigned long long int) arr_18 [i_5])))) : (((/* implicit */unsigned long long int) min((arr_18 [i_5]), (((/* implicit */long long int) (unsigned short)65522))))))) * (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (var_0)))) ? (((/* implicit */unsigned long long int) (+(-1314996590)))) : (((arr_17 [i_5] [i_5]) * (((/* implicit */unsigned long long int) arr_18 [(unsigned char)0]))))))));
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [(unsigned char)22])) ? (arr_17 [i_5] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7081)))))) ? (arr_17 [i_5] [11LL]) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)0)), (2552252022U)))))) + (((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)191)), (-1314996605)))) : (var_4)))));
        var_19 += ((/* implicit */unsigned char) ((short) var_7));
    }
}
