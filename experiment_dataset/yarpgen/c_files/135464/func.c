/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135464
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
    var_16 = ((/* implicit */_Bool) (~(7644466213167157431ULL)));
    var_17 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (signed char)127)), (10802277860542394184ULL))) / (((/* implicit */unsigned long long int) 4294967284U))));
    var_18 = ((/* implicit */long long int) var_11);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_0 [i_1 - 3] [i_1 - 1]))))) ? (((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [(_Bool)1]))))) ? (((((/* implicit */int) var_15)) / (((/* implicit */int) (signed char)124)))) : (((/* implicit */int) (short)16399)))) : (((/* implicit */int) (signed char)(-127 - 1)))));
                arr_5 [i_0] [14U] [i_0] = arr_3 [i_0] [i_1];
                /* LoopSeq 4 */
                for (unsigned char i_2 = 1; i_2 < 15; i_2 += 4) 
                {
                    arr_9 [i_0] = ((/* implicit */unsigned int) min(((unsigned short)18822), ((unsigned short)18822)));
                    arr_10 [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) / (4294967276U)))) ? (((arr_3 [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))) : (2807139682U)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 1; i_3 < 14; i_3 += 2) /* same iter space */
                    {
                        arr_14 [0U] [i_1] [(signed char)2] [i_3] &= (~(2ULL));
                        var_20 += ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))) : ((-(var_12)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 1; i_4 < 14; i_4 += 2) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)-31)))) ? (((/* implicit */int) (unsigned char)143)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_2] [i_4])))))));
                        var_22 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)16399))) / (2088473250U)));
                        arr_18 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)18813))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_2] [i_0] [i_2]))) : ((+(7644466213167157432ULL)))));
                        arr_19 [i_0] = ((/* implicit */unsigned short) (unsigned char)0);
                    }
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((_Bool) (signed char)127)))));
                }
                /* vectorizable */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    arr_22 [10U] [i_0 + 1] |= ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 1] [10U]))) / (var_12));
                    arr_23 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 10802277860542394170ULL)) ? (((/* implicit */int) (unsigned short)61671)) : (((/* implicit */int) (unsigned char)254)))) / (((((/* implicit */int) var_5)) / (((/* implicit */int) var_5))))));
                    var_24 = ((/* implicit */long long int) ((((arr_3 [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) / (((unsigned int) -5295139198794218981LL))));
                    var_25 &= ((((/* implicit */_Bool) var_12)) ? (arr_6 [i_5 - 1] [i_0 + 1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8))));
                    arr_24 [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_21 [i_5 - 1] [(_Bool)1] [i_1] [i_0])) + (2147483647))) << (((((/* implicit */int) arr_1 [i_0])) - (50621)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_21 [i_5 - 1] [(_Bool)1] [i_1] [i_0])) + (2147483647))) << (((((((((/* implicit */int) arr_1 [i_0])) - (50621))) + (34384))) - (22))))));
                }
                for (long long int i_6 = 3; i_6 < 13; i_6 += 2) 
                {
                    var_26 *= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [10ULL]))) : (3824218975U)))) / ((-(arr_6 [(unsigned short)10] [i_1] [i_0 + 1])))));
                    var_27 = ((var_12) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_0))) ? ((-(((/* implicit */int) (signed char)114)))) : (((/* implicit */int) (_Bool)0))))));
                }
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_30 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) var_14)) / (((var_11) / (((/* implicit */unsigned long long int) var_12))))));
                    arr_31 [i_0] = ((/* implicit */long long int) 15799211351964485804ULL);
                    var_28 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-5295139198794218981LL)))));
                    arr_32 [i_0 + 1] [i_0] [i_7] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) arr_12 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 + 1]))));
                }
                var_29 = ((/* implicit */unsigned short) (~(max(((~(var_2))), (max((arr_3 [i_0] [7U]), (((/* implicit */unsigned int) var_8))))))));
            }
        } 
    } 
}
