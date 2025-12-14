/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17009
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
    var_12 = ((((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) var_9)) : (((16155458832306948310ULL) * (16155458832306948310ULL))))) * (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_4)) : ((-(17503788906571452648ULL))))));
    var_13 = ((/* implicit */long long int) ((signed char) (-(-1638599601))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((min((var_3), (((/* implicit */long long int) var_9)))) + ((~(var_11))))))));
                var_16 = max((max((arr_2 [i_1] [i_0] [i_0]), (((/* implicit */unsigned int) arr_0 [i_0] [i_1])))), (((/* implicit */unsigned int) ((var_11) > (((/* implicit */long long int) var_4))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 2; i_2 < 19; i_2 += 3) 
    {
        for (int i_3 = 3; i_3 < 18; i_3 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    var_17 |= ((/* implicit */signed char) ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            {
                                var_18 = (-(((18057137231891693123ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))));
                                arr_17 [i_2] [i_2] = ((/* implicit */unsigned short) var_11);
                            }
                        } 
                    } 
                    arr_18 [i_4] [i_2] [i_2] [i_2] = var_5;
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 20; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_2] [i_3] [i_3] [i_4] [i_7] [i_8])))))));
                                arr_25 [i_2] [i_3] [i_3] [i_4] [i_4] [i_7] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (arr_8 [i_2 - 1] [i_2] [i_2]) : (arr_8 [i_2 + 2] [i_2] [i_2 + 3])));
                            }
                        } 
                    } 
                }
                arr_26 [i_2] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_3 - 3])))) | (((/* implicit */int) arr_15 [i_2] [i_3] [i_3]))))), (((((/* implicit */_Bool) max((arr_21 [i_2] [i_2] [i_2] [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_8 [i_3] [i_3] [i_2 + 1]))))) ? (((/* implicit */long long int) arr_4 [i_3] [i_3 - 3])) : ((+(var_11)))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))));
                    arr_29 [i_2] [i_2] [i_9] = ((/* implicit */unsigned short) ((((var_0) < (var_3))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_5)))))));
                    var_21 -= ((/* implicit */long long int) ((signed char) (~(((/* implicit */int) var_7)))));
                }
                /* vectorizable */
                for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) /* same iter space */
                {
                    arr_32 [i_2] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_2 - 2] [i_2] [i_2 + 1] [i_2] [i_2 + 1]))));
                    var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                }
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_3), (-3218212868761365826LL)))))))) | (((((/* implicit */_Bool) min((var_0), (var_0)))) ? (((389606841817858493ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_3]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (var_9)))))))))));
            }
        } 
    } 
}
